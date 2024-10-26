/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintPlaneRotation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintPlaneRotation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintPlaneRotation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintPlaneRotation_t {
    QByteArrayData data[5];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintPlaneRotation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintPlaneRotation_t qt_meta_stringdata_FemGui__TaskFemConstraintPlaneRotation = {
    {
QT_MOC_LITERAL(0, 0, 38), // "FemGui::TaskFemConstraintPlan..."
QT_MOC_LITERAL(1, 39, 18), // "onReferenceDeleted"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 14), // "addToSelection"
QT_MOC_LITERAL(4, 74, 19) // "removeFromSelection"

    },
    "FemGui::TaskFemConstraintPlaneRotation\0"
    "onReferenceDeleted\0\0addToSelection\0"
    "removeFromSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintPlaneRotation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FemGui::TaskFemConstraintPlaneRotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintPlaneRotation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->addToSelection(); break;
        case 2: _t->removeFromSelection(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintPlaneRotation::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintPlaneRotation.data,
    qt_meta_data_FemGui__TaskFemConstraintPlaneRotation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintPlaneRotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintPlaneRotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintPlaneRotation.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintPlaneRotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintPlaneRotation_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintPlaneRotation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintPlaneRotation_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintPlaneRotation = {
    {
QT_MOC_LITERAL(0, 0, 41) // "FemGui::TaskDlgFemConstraintP..."

    },
    "FemGui::TaskDlgFemConstraintPlaneRotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintPlaneRotation[] = {

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

void FemGui::TaskDlgFemConstraintPlaneRotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintPlaneRotation::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintPlaneRotation.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintPlaneRotation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintPlaneRotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintPlaneRotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintPlaneRotation.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintPlaneRotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
