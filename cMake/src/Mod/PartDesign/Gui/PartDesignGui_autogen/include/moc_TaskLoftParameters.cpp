/****************************************************************************
** Meta object code from reading C++ file 'TaskLoftParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskLoftParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskLoftParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskLoftParameters_t {
    QByteArrayData data[9];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskLoftParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskLoftParameters_t qt_meta_stringdata_PartDesignGui__TaskLoftParameters = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PartDesignGui::TaskLoftParame..."
QT_MOC_LITERAL(1, 34, 15), // "onProfileButton"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 14), // "onRefButtonAdd"
QT_MOC_LITERAL(4, 66, 17), // "onRefButtonRemove"
QT_MOC_LITERAL(5, 84, 8), // "onClosed"
QT_MOC_LITERAL(6, 93, 7), // "onRuled"
QT_MOC_LITERAL(7, 101, 15), // "onDeleteSection"
QT_MOC_LITERAL(8, 117, 12) // "indexesMoved"

    },
    "PartDesignGui::TaskLoftParameters\0"
    "onProfileButton\0\0onRefButtonAdd\0"
    "onRefButtonRemove\0onClosed\0onRuled\0"
    "onDeleteSection\0indexesMoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskLoftParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PartDesignGui::TaskLoftParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskLoftParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onProfileButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onRefButtonAdd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onRefButtonRemove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onRuled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onDeleteSection(); break;
        case 6: _t->indexesMoved(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskLoftParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskLoftParameters.data,
    qt_meta_data_PartDesignGui__TaskLoftParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskLoftParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskLoftParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskLoftParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskLoftParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskSketchBasedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_PartDesignGui__TaskDlgLoftParameters_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgLoftParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgLoftParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgLoftParameters = {
    {
QT_MOC_LITERAL(0, 0, 36) // "PartDesignGui::TaskDlgLoftPar..."

    },
    "PartDesignGui::TaskDlgLoftParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgLoftParameters[] = {

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

void PartDesignGui::TaskDlgLoftParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgLoftParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgLoftParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgLoftParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgLoftParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgLoftParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgLoftParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgLoftParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgSketchBasedParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE