import numpy as np
import math
import sys
from fabrik_full_body import util as util
import body_part_numbering as bodyNum


class Trunk:
    def __init__(self, joints,orientation,file):
        self.joints = joints
        self.orientation = orientation
        self.file = file

    def trunk_plane(self):
        m_body_number = bodyNum.BodyPartNumber()
        trunk_joint_numbers = m_body_number.trunk_whole_body()

        # finding a plane of upper body

        u = self.joints[trunk_joint_numbers[2]] - self.joints[trunk_joint_numbers[1]]
        v = self.joints[trunk_joint_numbers[2]] - self.joints[trunk_joint_numbers[0]]

        normal_plane = np.cross(u, v)
        return normal_plane

    def trunk_flex_calculator(self):
        normal_plane = self.trunk_plane()
        z_vector = np.array([0, 0, 1])

        trunk_flex = math.degrees(math.acos(np.dot(z_vector, normal_plane) / (
                math.sqrt(np.dot(normal_plane, normal_plane)) * math.sqrt(np.dot(z_vector, z_vector)))))

        self.file.write("Trunk bending \n")
        self.file.write(str(trunk_flex))
        self.file.write("\n")

    def trunk_side_calculator(self):
        m_body_number = bodyNum.BodyPartNumber()
        trunk_joint_numbers = m_body_number.trunk_whole_body()

        normal_plane_xz = np.array([0, 1, 0])
        z_vector = np.array([0, 0, 1])
        spine_vector = self.joints[trunk_joint_numbers[2]] - self.joints[trunk_joint_numbers[3]]

        project_spine_on_xz_plane = spine_vector - np.dot(spine_vector, normal_plane_xz) * normal_plane_xz

        trunk_side_bending = math.degrees(math.acos(np.dot(project_spine_on_xz_plane, z_vector) / (
                math.sqrt(np.dot(project_spine_on_xz_plane, project_spine_on_xz_plane)) * math.sqrt(
            np.dot(z_vector, z_vector)))))

        self.file.write("Trunk side bending \n")
        self.file.write(str(trunk_side_bending))
        self.file.write("\n")

    def trunk_torsion_calculator(self):
        # In here the rotor needed to transfer orientation frame of core joint to neck joint is calculated
        # this considered as twist
        m_body_number = bodyNum.BodyPartNumber()
        trunk_joint_numbers = m_body_number.trunk_whole_body()
        q1 = self.orientation[trunk_joint_numbers[2]]  # neck
        q2 = self.orientation[trunk_joint_numbers[3]]  # core
        # finding the rotor that express rotation between two orientational frame(between outer and inner joint)
        rotor = util.find_rotation_quaternion(q1, q2)
        trunk_twist = math.acos(rotor[0]) * 2 * (180 / np.pi)
        self.file.write("Trunk twist \n")
        self.file.write(str(0))
        self.file.write("\n")
        return trunk_twist
