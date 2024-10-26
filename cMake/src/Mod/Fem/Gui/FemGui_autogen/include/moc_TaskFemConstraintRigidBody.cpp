/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintRigidBody.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintRigidBody.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintRigidBody.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintRigidBody_t {
    QByteArrayData data[14];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintRigidBody_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintRigidBody_t qt_meta_stringdata_FemGui__TaskFemConstraintRigidBody = {
    {
QT_MOC_LITERAL(0, 0, 34), // "FemGui::TaskFemConstraintRigi..."
QT_MOC_LITERAL(1, 35, 18), // "onReferenceDeleted"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 14), // "addToSelection"
QT_MOC_LITERAL(4, 70, 19), // "removeFromSelection"
QT_MOC_LITERAL(5, 90, 19), // "onTransModeXChanged"
QT_MOC_LITERAL(6, 110, 19), // "onTransModeYChanged"
QT_MOC_LITERAL(7, 130, 19), // "onTransModeZChanged"
QT_MOC_LITERAL(8, 150, 17), // "onRotModeXChanged"
QT_MOC_LITERAL(9, 168, 17), // "onRotModeYChanged"
QT_MOC_LITERAL(10, 186, 17), // "onRotModeZChanged"
QT_MOC_LITERAL(11, 204, 17), // "onRefNodeXChanged"
QT_MOC_LITERAL(12, 222, 17), // "onRefNodeYChanged"
QT_MOC_LITERAL(13, 240, 17) // "onRefNodeZChanged"

    },
    "FemGui::TaskFemConstraintRigidBody\0"
    "onReferenceDeleted\0\0addToSelection\0"
    "removeFromSelection\0onTransModeXChanged\0"
    "onTransModeYChanged\0onTransModeZChanged\0"
    "onRotModeXChanged\0onRotModeYChanged\0"
    "onRotModeZChanged\0onRefNodeXChanged\0"
    "onRefNodeYChanged\0onRefNodeZChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintRigidBody[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      12,    1,   98,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void FemGui::TaskFemConstraintRigidBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintRigidBody *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->addToSelection(); break;
        case 2: _t->removeFromSelection(); break;
        case 3: _t->onTransModeXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onTransModeYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onTransModeZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onRotModeXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onRotModeYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onRotModeZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onRefNodeXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->onRefNodeYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->onRefNodeZChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintRigidBody::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintOnBoundary::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintRigidBody.data,
    qt_meta_data_FemGui__TaskFemConstraintRigidBody,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintRigidBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintRigidBody::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintRigidBody.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintOnBoundary::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintRigidBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintOnBoundary::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintRigidBody_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintRigidBody_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintRigidBody_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintRigidBody = {
    {
QT_MOC_LITERAL(0, 0, 37) // "FemGui::TaskDlgFemConstraintR..."

    },
    "FemGui::TaskDlgFemConstraintRigidBody"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintRigidBody[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FemGui::TaskDlgFemConstraintRigidBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintRigidBody::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintRigidBody.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintRigidBody,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintRigidBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintRigidBody::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintRigidBody.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintRigidBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
