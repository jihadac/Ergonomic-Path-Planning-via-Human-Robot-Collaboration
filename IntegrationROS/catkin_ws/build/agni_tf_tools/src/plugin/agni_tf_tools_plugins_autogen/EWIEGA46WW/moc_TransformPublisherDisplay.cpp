/****************************************************************************
** Meta object code from reading C++ file 'TransformPublisherDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/agni_tf_tools/src/plugin/TransformPublisherDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransformPublisherDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_agni_tf_tools__TransformPublisherDisplay_t {
    QByteArrayData data[12];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_agni_tf_tools__TransformPublisherDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_agni_tf_tools__TransformPublisherDisplay_t qt_meta_stringdata_agni_tf_tools__TransformPublisherDisplay = {
    {
QT_MOC_LITERAL(0, 0, 40), // "agni_tf_tools::TransformPubli..."
QT_MOC_LITERAL(1, 41, 17), // "onRefFrameChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 23), // "onAdaptTransformChanged"
QT_MOC_LITERAL(4, 84, 15), // "onFramesChanged"
QT_MOC_LITERAL(5, 100, 18), // "onTransformChanged"
QT_MOC_LITERAL(6, 119, 16), // "onMarkerFeedback"
QT_MOC_LITERAL(7, 136, 46), // "visualization_msgs::Interacti..."
QT_MOC_LITERAL(8, 183, 8), // "feedback"
QT_MOC_LITERAL(9, 192, 24), // "onBroadcastEnableChanged"
QT_MOC_LITERAL(10, 217, 19), // "onMarkerTypeChanged"
QT_MOC_LITERAL(11, 237, 20) // "onMarkerScaleChanged"

    },
    "agni_tf_tools::TransformPublisherDisplay\0"
    "onRefFrameChanged\0\0onAdaptTransformChanged\0"
    "onFramesChanged\0onTransformChanged\0"
    "onMarkerFeedback\0"
    "visualization_msgs::InteractiveMarkerFeedback&\0"
    "feedback\0onBroadcastEnableChanged\0"
    "onMarkerTypeChanged\0onMarkerScaleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_agni_tf_tools__TransformPublisherDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    0,   55,    2, 0x09 /* Protected */,
       4,    0,   56,    2, 0x09 /* Protected */,
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    1,   58,    2, 0x09 /* Protected */,
       9,    0,   61,    2, 0x09 /* Protected */,
      10,    0,   62,    2, 0x09 /* Protected */,
      11,    0,   63,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void agni_tf_tools::TransformPublisherDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransformPublisherDisplay *_t = static_cast<TransformPublisherDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRefFrameChanged(); break;
        case 1: _t->onAdaptTransformChanged(); break;
        case 2: _t->onFramesChanged(); break;
        case 3: _t->onTransformChanged(); break;
        case 4: _t->onMarkerFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 5: _t->onBroadcastEnableChanged(); break;
        case 6: _t->onMarkerTypeChanged(); break;
        case 7: _t->onMarkerScaleChanged(); break;
        default: ;
        }
    }
}

const QMetaObject agni_tf_tools::TransformPublisherDisplay::staticMetaObject = {
    { &rviz::Display::staticMetaObject, qt_meta_stringdata_agni_tf_tools__TransformPublisherDisplay.data,
      qt_meta_data_agni_tf_tools__TransformPublisherDisplay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *agni_tf_tools::TransformPublisherDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *agni_tf_tools::TransformPublisherDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_agni_tf_tools__TransformPublisherDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz::Display::qt_metacast(_clname);
}

int agni_tf_tools::TransformPublisherDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
