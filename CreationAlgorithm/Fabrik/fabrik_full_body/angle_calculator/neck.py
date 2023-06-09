import numpy as np
import math
import Fabrik.fabrik_full_body.angle_calculator.body_part_numbering as bodyNum
import Fabrik.fabrik_full_body.util as util


class Neck:
    def __init__(self, joints,orientations,file):
        self.joints = joints
        self.file = file
        self.orientation = orientations

    def trunk_plane(self):
        m_body_number = bodyNum.BodyPartNumber()
        trunk_joint_numbers = m_body_number.trunk_upper_body()

        # finding a plane of upper body
        u = self.joints[trunk_joint_numbers[1]] - self.joints[trunk_joint_numbers[0]]
        v = self.joints[trunk_joint_numbers[3]] - self.joints[trunk_joint_numbers[0]]

        normal_plane = np.cross(u, v)
        return normal_plane

    def neck_flex_calculator(self):
        m_body_number = bodyNum.BodyPartNumber()
        neck_joint_numbers = m_body_number.neck()
        normal_plane = self.trunk_plane()
        neck_vector = self.joints[neck_joint_numbers[1]] - self.joints[neck_joint_numbers[0]]

        neck_flex = 90 - math.degrees(math.acos(np.dot(neck_vector, normal_plane) / (
                math.sqrt(np.dot(normal_plane, normal_plane)) * math.sqrt(np.dot(neck_vector, neck_vector)))))

        self.file.write("Neck bending \n")
        self.file.write(str(neck_flex))
        self.file.write("\n")

    def neck_side_calculator(self):
        m_body_number = bodyNum.BodyPartNumber()
        neck_joint_numbers = m_body_number.neck()
        trunk_joint_numbers = m_body_number.trunk_upper_body()

        normal_plane = self.trunk_plane()
        neck_vector = self.joints[neck_joint_numbers[1]] - self.joints[neck_joint_numbers[0]]
        project_neck_on_trunk_plane = neck_vector - np.dot(neck_vector, normal_plane) * normal_plane

        spine_vector = self.joints[trunk_joint_numbers[2]] - self.joints[trunk_joint_numbers[0]]

        neck_side_bending = math.degrees(math.acos(np.dot(project_neck_on_trunk_plane, spine_vector) / (
                math.sqrt(np.dot(project_neck_on_trunk_plane, project_neck_on_trunk_plane)) * math.sqrt(
            np.dot(spine_vector, spine_vector)))))

        self.file.write("Neck side bending \n")
        self.file.write(str(neck_side_bending))
        self.file.write("\n")

    def neck_torsion_calculator(self):
        # TODO: I should calculate the rotation
        m_body_number = bodyNum.BodyPartNumber()
        neck_joint_numbers = m_body_number.neck()
        q1 = self.orientation[neck_joint_numbers[1]]
        q2 = self.orientation[neck_joint_numbers[0]]
        # finding the rotor that express rotation between two orientational frame(between outer and inner joint)
        rotor = util.find_rotation_quaternion(q1, q2)
        neck_twist = math.acos(rotor[0]) * 2 * (180 / np.pi)
        self.file.write("Neck twist \n")
        self.file.write(str(0))
        self.file.write(str(neck_twist))
        self.file.write("\n")
        return neck_twist

