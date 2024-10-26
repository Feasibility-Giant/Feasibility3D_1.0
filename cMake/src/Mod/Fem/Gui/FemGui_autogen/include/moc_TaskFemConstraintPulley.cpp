/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintPulley.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintPulley.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintPulley.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintPulley_t {
    QByteArrayData data[8];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintPulley_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintPulley_t qt_meta_stringdata_FemGui__TaskFemConstraintPulley = {
    {
QT_MOC_LITERAL(0, 0, 31), // "FemGui::TaskFemConstraintPulley"
QT_MOC_LITERAL(1, 32, 22), // "onOtherDiameterChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 3), // "dia"
QT_MOC_LITERAL(4, 60, 23), // "onCenterDistanceChanged"
QT_MOC_LITERAL(5, 84, 21), // "onTensionForceChanged"
QT_MOC_LITERAL(6, 106, 5), // "force"
QT_MOC_LITERAL(7, 112, 15) // "onCheckIsDriven"

    },
    "FemGui::TaskFemConstraintPulley\0"
    "onOtherDiameterChanged\0\0dia\0"
    "onCenterDistanceChanged\0onTensionForceChanged\0"
    "force\0onCheckIsDriven"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintPulley[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       7,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void FemGui::TaskFemConstraintPulley::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintPulley *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOtherDiameterChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onCenterDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onTensionForceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onCheckIsDriven((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintPulley::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintGear::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintPulley.data,
    qt_meta_data_FemGui__TaskFemConstraintPulley,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintPulley::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintPulley::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintPulley.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintGear::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintPulley::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintGear::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintPulley_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintPulley_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintPulley_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintPulley = {
    {
QT_MOC_LITERAL(0, 0, 34) // "FemGui::TaskDlgFemConstraintP..."

    },
    "FemGui::TaskDlgFemConstraintPulley"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintPulley[] = {

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

void FemGui::TaskDlgFemConstraintPulley::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintPulley::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraintGear::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintPulley.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintPulley,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintPulley::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintPulley::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintPulley.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraintGear::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintPulley::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraintGear::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
