/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintFluidBoundary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintFluidBoundary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintFluidBoundary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintFluidBoundary_t {
    QByteArrayData data[13];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintFluidBoundary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintFluidBoundary_t qt_meta_stringdata_FemGui__TaskFemConstraintFluidBoundary = {
    {
QT_MOC_LITERAL(0, 0, 38), // "FemGui::TaskFemConstraintFlui..."
QT_MOC_LITERAL(1, 39, 21), // "onBoundaryTypeChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 16), // "onSubtypeChanged"
QT_MOC_LITERAL(4, 79, 22), // "onBoundaryValueChanged"
QT_MOC_LITERAL(5, 102, 32), // "onTurbulenceSpecificationChanged"
QT_MOC_LITERAL(6, 135, 28), // "onThermalBoundaryTypeChanged"
QT_MOC_LITERAL(7, 164, 18), // "onReferenceDeleted"
QT_MOC_LITERAL(8, 183, 17), // "onButtonDirection"
QT_MOC_LITERAL(9, 201, 7), // "pressed"
QT_MOC_LITERAL(10, 209, 14), // "onCheckReverse"
QT_MOC_LITERAL(11, 224, 14), // "addToSelection"
QT_MOC_LITERAL(12, 239, 19) // "removeFromSelection"

    },
    "FemGui::TaskFemConstraintFluidBoundary\0"
    "onBoundaryTypeChanged\0\0onSubtypeChanged\0"
    "onBoundaryValueChanged\0"
    "onTurbulenceSpecificationChanged\0"
    "onThermalBoundaryTypeChanged\0"
    "onReferenceDeleted\0onButtonDirection\0"
    "pressed\0onCheckReverse\0addToSelection\0"
    "removeFromSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintFluidBoundary[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x28 /* Private | MethodCloned */,
      10,    1,   81,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FemGui::TaskFemConstraintFluidBoundary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintFluidBoundary *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onBoundaryTypeChanged(); break;
        case 1: _t->onSubtypeChanged(); break;
        case 2: _t->onBoundaryValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onTurbulenceSpecificationChanged(); break;
        case 4: _t->onThermalBoundaryTypeChanged(); break;
        case 5: _t->onReferenceDeleted(); break;
        case 6: _t->onButtonDirection((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->onButtonDirection(); break;
        case 8: _t->onCheckReverse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->addToSelection(); break;
        case 10: _t->removeFromSelection(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintFluidBoundary::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintOnBoundary::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintFluidBoundary.data,
    qt_meta_data_FemGui__TaskFemConstraintFluidBoundary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintFluidBoundary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintFluidBoundary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintFluidBoundary.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintOnBoundary::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintFluidBoundary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintOnBoundary::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintFluidBoundary_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintFluidBoundary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintFluidBoundary_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintFluidBoundary = {
    {
QT_MOC_LITERAL(0, 0, 41) // "FemGui::TaskDlgFemConstraintF..."

    },
    "FemGui::TaskDlgFemConstraintFluidBoundary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintFluidBoundary[] = {

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

void FemGui::TaskDlgFemConstraintFluidBoundary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintFluidBoundary::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintFluidBoundary.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintFluidBoundary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintFluidBoundary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintFluidBoundary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintFluidBoundary.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintFluidBoundary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
