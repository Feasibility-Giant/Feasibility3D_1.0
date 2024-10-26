/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintGear.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintGear.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintGear.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintGear_t {
    QByteArrayData data[11];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintGear_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintGear_t qt_meta_stringdata_FemGui__TaskFemConstraintGear = {
    {
QT_MOC_LITERAL(0, 0, 29), // "FemGui::TaskFemConstraintGear"
QT_MOC_LITERAL(1, 30, 17), // "onDiameterChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "dia"
QT_MOC_LITERAL(4, 53, 14), // "onForceChanged"
QT_MOC_LITERAL(5, 68, 5), // "force"
QT_MOC_LITERAL(6, 74, 19), // "onForceAngleChanged"
QT_MOC_LITERAL(7, 94, 5), // "angle"
QT_MOC_LITERAL(8, 100, 17), // "onButtonDirection"
QT_MOC_LITERAL(9, 118, 7), // "pressed"
QT_MOC_LITERAL(10, 126, 15) // "onCheckReversed"

    },
    "FemGui::TaskFemConstraintGear\0"
    "onDiameterChanged\0\0dia\0onForceChanged\0"
    "force\0onForceAngleChanged\0angle\0"
    "onButtonDirection\0pressed\0onCheckReversed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintGear[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x28 /* Private | MethodCloned */,
      10,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void FemGui::TaskFemConstraintGear::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintGear *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDiameterChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onForceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onForceAngleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onButtonDirection((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->onButtonDirection(); break;
        case 5: _t->onCheckReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintGear::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraintBearing::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintGear.data,
    qt_meta_data_FemGui__TaskFemConstraintGear,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintGear::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintGear::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintGear.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraintBearing::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintGear::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraintBearing::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintGear_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintGear_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintGear_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintGear = {
    {
QT_MOC_LITERAL(0, 0, 32) // "FemGui::TaskDlgFemConstraintGear"

    },
    "FemGui::TaskDlgFemConstraintGear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintGear[] = {

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

void FemGui::TaskDlgFemConstraintGear::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintGear::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraintBearing::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintGear.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintGear,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintGear::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintGear::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintGear.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraintBearing::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintGear::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraintBearing::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
