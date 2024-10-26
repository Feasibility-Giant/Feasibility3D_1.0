/****************************************************************************
** Meta object code from reading C++ file 'TaskThicknessParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskThicknessParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskThicknessParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskThicknessParameters_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskThicknessParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskThicknessParameters_t qt_meta_stringdata_PartDesignGui__TaskThicknessParameters = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PartDesignGui::TaskThicknessP..."
QT_MOC_LITERAL(1, 39, 14), // "onValueChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "angle"
QT_MOC_LITERAL(4, 61, 13), // "onModeChanged"
QT_MOC_LITERAL(5, 75, 4), // "mode"
QT_MOC_LITERAL(6, 80, 17), // "onJoinTypeChanged"
QT_MOC_LITERAL(7, 98, 4), // "join"
QT_MOC_LITERAL(8, 103, 17), // "onReversedChanged"
QT_MOC_LITERAL(9, 121, 2), // "on"
QT_MOC_LITERAL(10, 124, 21), // "onIntersectionChanged"
QT_MOC_LITERAL(11, 146, 12) // "onRefDeleted"

    },
    "PartDesignGui::TaskThicknessParameters\0"
    "onValueChanged\0\0angle\0onModeChanged\0"
    "mode\0onJoinTypeChanged\0join\0"
    "onReversedChanged\0on\0onIntersectionChanged\0"
    "onRefDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskThicknessParameters[] = {

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
      10,    1,   56,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void PartDesignGui::TaskThicknessParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskThicknessParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onJoinTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onIntersectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onRefDeleted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskThicknessParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDressUpParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskThicknessParameters.data,
    qt_meta_data_PartDesignGui__TaskThicknessParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskThicknessParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskThicknessParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskThicknessParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDressUpParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskThicknessParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDressUpParameters::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PartDesignGui__TaskDlgThicknessParameters_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgThicknessParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgThicknessParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgThicknessParameters = {
    {
QT_MOC_LITERAL(0, 0, 41) // "PartDesignGui::TaskDlgThickne..."

    },
    "PartDesignGui::TaskDlgThicknessParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgThicknessParameters[] = {

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

void PartDesignGui::TaskDlgThicknessParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgThicknessParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgDressUpParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgThicknessParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgThicknessParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgThicknessParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgThicknessParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgThicknessParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgDressUpParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgThicknessParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgDressUpParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
