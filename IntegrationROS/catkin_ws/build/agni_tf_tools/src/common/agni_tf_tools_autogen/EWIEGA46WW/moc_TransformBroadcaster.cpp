/****************************************************************************
** Meta object code from reading C++ file 'TransformBroadcaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/agni_tf_tools/src/common/TransformBroadcaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransformBroadcaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransformBroadcaster_t {
    QByteArrayData data[19];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransformBroadcaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransformBroadcaster_t qt_meta_stringdata_TransformBroadcaster = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TransformBroadcaster"
QT_MOC_LITERAL(1, 21, 10), // "setEnabled"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "bEnabled"
QT_MOC_LITERAL(4, 42, 11), // "setDisabled"
QT_MOC_LITERAL(5, 54, 9), // "bDisabled"
QT_MOC_LITERAL(6, 64, 14), // "setParentFrame"
QT_MOC_LITERAL(7, 79, 5), // "frame"
QT_MOC_LITERAL(8, 85, 13), // "setChildFrame"
QT_MOC_LITERAL(9, 99, 11), // "setPosition"
QT_MOC_LITERAL(10, 111, 15), // "Eigen::Vector3d"
QT_MOC_LITERAL(11, 127, 1), // "p"
QT_MOC_LITERAL(12, 129, 13), // "setQuaternion"
QT_MOC_LITERAL(13, 143, 18), // "Eigen::Quaterniond"
QT_MOC_LITERAL(14, 162, 1), // "q"
QT_MOC_LITERAL(15, 164, 1), // "x"
QT_MOC_LITERAL(16, 166, 1), // "y"
QT_MOC_LITERAL(17, 168, 1), // "z"
QT_MOC_LITERAL(18, 170, 1) // "w"

    },
    "TransformBroadcaster\0setEnabled\0\0"
    "bEnabled\0setDisabled\0bDisabled\0"
    "setParentFrame\0frame\0setChildFrame\0"
    "setPosition\0Eigen::Vector3d\0p\0"
    "setQuaternion\0Eigen::Quaterniond\0q\0x\0"
    "y\0z\0w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransformBroadcaster[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       1,    0,   67,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   68,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   72,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
       9,    3,   84,    2, 0x0a /* Public */,
      12,    4,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   15,   16,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   15,   16,   17,   18,

       0        // eod
};

void TransformBroadcaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransformBroadcaster *_t = static_cast<TransformBroadcaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setEnabled(); break;
        case 2: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDisabled(); break;
        case 4: _t->setParentFrame((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setChildFrame((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setPosition((*reinterpret_cast< const Eigen::Vector3d(*)>(_a[1]))); break;
        case 7: _t->setQuaternion((*reinterpret_cast< const Eigen::Quaterniond(*)>(_a[1]))); break;
        case 8: _t->setPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: _t->setQuaternion((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject TransformBroadcaster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TransformBroadcaster.data,
      qt_meta_data_TransformBroadcaster,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransformBroadcaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransformBroadcaster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransformBroadcaster.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TransformBroadcaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
