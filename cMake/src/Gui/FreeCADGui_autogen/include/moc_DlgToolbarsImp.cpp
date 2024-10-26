/****************************************************************************
** Meta object code from reading C++ file 'DlgToolbarsImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/DlgToolbarsImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgToolbarsImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars_t {
    QByteArrayData data[5];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars_t qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Gui::Dialog::DlgCustomToolbars"
QT_MOC_LITERAL(1, 31, 16), // "onAddMacroAction"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 19), // "onRemoveMacroAction"
QT_MOC_LITERAL(4, 69, 19) // "onModifyMacroAction"

    },
    "Gui::Dialog::DlgCustomToolbars\0"
    "onAddMacroAction\0\0onRemoveMacroAction\0"
    "onModifyMacroAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgCustomToolbars[] = {

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
       1,    1,   29,    2, 0x09 /* Protected */,
       3,    1,   32,    2, 0x09 /* Protected */,
       4,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,

       0        // eod
};

void Gui::Dialog::DlgCustomToolbars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgCustomToolbars *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAddMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->onRemoveMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->onModifyMacroAction((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgCustomToolbars::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomizeActionPage::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars.data,
    qt_meta_data_Gui__Dialog__DlgCustomToolbars,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgCustomToolbars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolbars::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomToolbars.stringdata0))
        return static_cast<void*>(this);
    return CustomizeActionPage::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolbars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomizeActionPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp_t qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp = {
    {
QT_MOC_LITERAL(0, 0, 33) // "Gui::Dialog::DlgCustomToolbar..."

    },
    "Gui::Dialog::DlgCustomToolbarsImp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgCustomToolbarsImp[] = {

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

void Gui::Dialog::DlgCustomToolbarsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgCustomToolbarsImp::staticMetaObject = { {
    QMetaObject::SuperData::link<DlgCustomToolbars::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp.data,
    qt_meta_data_Gui__Dialog__DlgCustomToolbarsImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgCustomToolbarsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolbarsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomToolbarsImp.stringdata0))
        return static_cast<void*>(this);
    return DlgCustomToolbars::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolbarsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgCustomToolbars::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp_t qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp = {
    {
QT_MOC_LITERAL(0, 0, 36) // "Gui::Dialog::DlgCustomToolBox..."

    },
    "Gui::Dialog::DlgCustomToolBoxbarsImp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgCustomToolBoxbarsImp[] = {

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

void Gui::Dialog::DlgCustomToolBoxbarsImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgCustomToolBoxbarsImp::staticMetaObject = { {
    QMetaObject::SuperData::link<DlgCustomToolbars::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp.data,
    qt_meta_data_Gui__Dialog__DlgCustomToolBoxbarsImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgCustomToolBoxbarsImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCustomToolBoxbarsImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCustomToolBoxbarsImp.stringdata0))
        return static_cast<void*>(this);
    return DlgCustomToolbars::qt_metacast(_clname);
}

int Gui::Dialog::DlgCustomToolBoxbarsImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DlgCustomToolbars::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
