/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintForce.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintForce.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintForce.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintForce_t {
    QByteArrayData data[8];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintForce_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintForce_t qt_meta_stringdata_FemGui__TaskFemConstraintForce = {
    {
QT_MOC_LITERAL(0, 0, 30), // "FemGui::TaskFemConstraintForce"
QT_MOC_LITERAL(1, 31, 18), // "onReferenceDeleted"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 17), // "onButtonDirection"
QT_MOC_LITERAL(4, 69, 7), // "pressed"
QT_MOC_LITERAL(5, 77, 14), // "onCheckReverse"
QT_MOC_LITERAL(6, 92, 14), // "addToSelection"
QT_MOC_LITERAL(7, 107, 19) // "removeFromSelection"

    },
    "FemGui::TaskFemConstraintForce\0"
    "onReferenceDeleted\0\0onButtonDirection\0"
    "pressed\0onCheckReverse\0addToSelection\0"
    "removeFromSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintForce[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       3,    0,   48,    2, 0x28 /* Private | MethodCloned */,
       5,    1,   49,    2, 0x08 /* Private */,
       6,    0,   52,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FemGui::TaskFemConstraintForce::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintForce *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->onButtonDirection((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->onButtonDirection(); break;
        case 3: _t->onCheckReverse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->addToSelection(); break;
        case 5: _t->removeFromSelection(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintForce::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintOnBoundary::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintForce.data,
    qt_meta_data_FemGui__TaskFemConstraintForce,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintForce::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintForce::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintForce.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintOnBoundary::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintForce::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintOnBoundary::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintForce_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintForce_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintForce_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintForce = {
    {
QT_MOC_LITERAL(0, 0, 33) // "FemGui::TaskDlgFemConstraintF..."

    },
    "FemGui::TaskDlgFemConstraintForce"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintForce[] = {

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

void FemGui::TaskDlgFemConstraintForce::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintForce::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintForce.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintForce,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintForce::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintForce::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintForce.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintForce::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
