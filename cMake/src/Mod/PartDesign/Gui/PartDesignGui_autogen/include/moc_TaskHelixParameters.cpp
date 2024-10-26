/****************************************************************************
** Meta object code from reading C++ file 'TaskHelixParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskHelixParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskHelixParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskHelixParameters_t {
    QByteArrayData data[12];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskHelixParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskHelixParameters_t qt_meta_stringdata_PartDesignGui__TaskHelixParameters = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PartDesignGui::TaskHelixParam..."
QT_MOC_LITERAL(1, 35, 14), // "onPitchChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "onHeightChanged"
QT_MOC_LITERAL(4, 67, 14), // "onTurnsChanged"
QT_MOC_LITERAL(5, 82, 14), // "onAngleChanged"
QT_MOC_LITERAL(6, 97, 15), // "onGrowthChanged"
QT_MOC_LITERAL(7, 113, 13), // "onAxisChanged"
QT_MOC_LITERAL(8, 127, 19), // "onLeftHandedChanged"
QT_MOC_LITERAL(9, 147, 17), // "onReversedChanged"
QT_MOC_LITERAL(10, 165, 13), // "onModeChanged"
QT_MOC_LITERAL(11, 179, 16) // "onOutsideChanged"

    },
    "PartDesignGui::TaskHelixParameters\0"
    "onPitchChanged\0\0onHeightChanged\0"
    "onTurnsChanged\0onAngleChanged\0"
    "onGrowthChanged\0onAxisChanged\0"
    "onLeftHandedChanged\0onReversedChanged\0"
    "onModeChanged\0onOutsideChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskHelixParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       3,    1,   67,    2, 0x08 /* Private */,
       4,    1,   70,    2, 0x08 /* Private */,
       5,    1,   73,    2, 0x08 /* Private */,
       6,    1,   76,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       8,    1,   82,    2, 0x08 /* Private */,
       9,    1,   85,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      11,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PartDesignGui::TaskHelixParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskHelixParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPitchChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onHeightChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onTurnsChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onAngleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->onGrowthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->onAxisChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onLeftHandedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onOutsideChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskHelixParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskHelixParameters.data,
    qt_meta_data_PartDesignGui__TaskHelixParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskHelixParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskHelixParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskHelixParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskHelixParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskSketchBasedParameters::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PartDesignGui__TaskDlgHelixParameters_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgHelixParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgHelixParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgHelixParameters = {
    {
QT_MOC_LITERAL(0, 0, 37) // "PartDesignGui::TaskDlgHelixPa..."

    },
    "PartDesignGui::TaskDlgHelixParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgHelixParameters[] = {

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

void PartDesignGui::TaskDlgHelixParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgHelixParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgHelixParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgHelixParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgHelixParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgHelixParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgHelixParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgHelixParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgSketchBasedParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
