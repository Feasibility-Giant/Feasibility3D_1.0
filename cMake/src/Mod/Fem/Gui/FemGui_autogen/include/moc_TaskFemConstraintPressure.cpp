/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintPressure.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintPressure.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintPressure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintPressure_t {
    QByteArrayData data[6];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintPressure_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintPressure_t qt_meta_stringdata_FemGui__TaskFemConstraintPressure = {
    {
QT_MOC_LITERAL(0, 0, 33), // "FemGui::TaskFemConstraintPres..."
QT_MOC_LITERAL(1, 34, 18), // "onReferenceDeleted"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 14), // "onCheckReverse"
QT_MOC_LITERAL(4, 69, 14), // "addToSelection"
QT_MOC_LITERAL(5, 84, 19) // "removeFromSelection"

    },
    "FemGui::TaskFemConstraintPressure\0"
    "onReferenceDeleted\0\0onCheckReverse\0"
    "addToSelection\0removeFromSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintPressure[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FemGui::TaskFemConstraintPressure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintPressure *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->onCheckReverse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->addToSelection(); break;
        case 3: _t->removeFromSelection(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintPressure::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintOnBoundary::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintPressure.data,
    qt_meta_data_FemGui__TaskFemConstraintPressure,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintPressure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintPressure::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintPressure.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintOnBoundary::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintPressure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintOnBoundary::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintPressure_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintPressure_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintPressure_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintPressure = {
    {
QT_MOC_LITERAL(0, 0, 36) // "FemGui::TaskDlgFemConstraintP..."

    },
    "FemGui::TaskDlgFemConstraintPressure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintPressure[] = {

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

void FemGui::TaskDlgFemConstraintPressure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintPressure::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintPressure.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintPressure,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintPressure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintPressure::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintPressure.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintPressure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE