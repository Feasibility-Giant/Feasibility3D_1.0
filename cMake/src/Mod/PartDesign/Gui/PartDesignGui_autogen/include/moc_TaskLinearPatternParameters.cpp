/****************************************************************************
** Meta object code from reading C++ file 'TaskLinearPatternParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskLinearPatternParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskLinearPatternParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters_t {
    QByteArrayData data[16];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters_t qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PartDesignGui::TaskLinearPatt..."
QT_MOC_LITERAL(1, 43, 17), // "onUpdateViewTimer"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 18), // "onDirectionChanged"
QT_MOC_LITERAL(4, 81, 3), // "num"
QT_MOC_LITERAL(5, 85, 14), // "onCheckReverse"
QT_MOC_LITERAL(6, 100, 2), // "on"
QT_MOC_LITERAL(7, 103, 13), // "onModeChanged"
QT_MOC_LITERAL(8, 117, 4), // "mode"
QT_MOC_LITERAL(9, 122, 8), // "onLength"
QT_MOC_LITERAL(10, 131, 6), // "length"
QT_MOC_LITERAL(11, 138, 8), // "onOffset"
QT_MOC_LITERAL(12, 147, 6), // "offset"
QT_MOC_LITERAL(13, 154, 13), // "onOccurrences"
QT_MOC_LITERAL(14, 168, 6), // "number"
QT_MOC_LITERAL(15, 175, 12) // "onUpdateView"

    },
    "PartDesignGui::TaskLinearPatternParameters\0"
    "onUpdateViewTimer\0\0onDirectionChanged\0"
    "num\0onCheckReverse\0on\0onModeChanged\0"
    "mode\0onLength\0length\0onOffset\0offset\0"
    "onOccurrences\0number\0onUpdateView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskLinearPatternParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,
      13,    1,   70,    2, 0x08 /* Private */,
      15,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::UInt,   14,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PartDesignGui::TaskLinearPatternParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskLinearPatternParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateViewTimer(); break;
        case 1: _t->onDirectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCheckReverse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->onOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->onOccurrences((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskLinearPatternParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskTransformedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters.data,
    qt_meta_data_PartDesignGui__TaskLinearPatternParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskLinearPatternParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskLinearPatternParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskLinearPatternParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskLinearPatternParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters_t {
    QByteArrayData data[1];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters = {
    {
QT_MOC_LITERAL(0, 0, 45) // "PartDesignGui::TaskDlgLinearP..."

    },
    "PartDesignGui::TaskDlgLinearPatternParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgLinearPatternParameters[] = {

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

void PartDesignGui::TaskDlgLinearPatternParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgLinearPatternParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgTransformedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgLinearPatternParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgLinearPatternParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgLinearPatternParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgLinearPatternParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgLinearPatternParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgTransformedParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
