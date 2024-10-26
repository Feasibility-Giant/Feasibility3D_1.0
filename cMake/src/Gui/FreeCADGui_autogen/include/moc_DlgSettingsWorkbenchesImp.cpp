/****************************************************************************
** Meta object code from reading C++ file 'DlgSettingsWorkbenchesImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/PreferencePages/DlgSettingsWorkbenchesImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettingsWorkbenchesImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgSettingsWorkbenchesImp_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgSettingsWorkbenchesImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgSettingsWorkbenchesImp_t qt_meta_stringdata_Gui__Dialog__DlgSettingsWorkbenchesImp = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Gui::Dialog::DlgSettingsWorkb..."
QT_MOC_LITERAL(1, 39, 9), // "wbToggled"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 6), // "wbName"
QT_MOC_LITERAL(4, 57, 7), // "enabled"
QT_MOC_LITERAL(5, 65, 11), // "wbItemMoved"
QT_MOC_LITERAL(6, 77, 16), // "onStartWbChanged"
QT_MOC_LITERAL(7, 94, 5), // "index"
QT_MOC_LITERAL(8, 100, 16), // "onWbByTabToggled"
QT_MOC_LITERAL(9, 117, 3) // "val"

    },
    "Gui::Dialog::DlgSettingsWorkbenchesImp\0"
    "wbToggled\0\0wbName\0enabled\0wbItemMoved\0"
    "onStartWbChanged\0index\0onWbByTabToggled\0"
    "val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgSettingsWorkbenchesImp[] = {

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
       1,    2,   34,    2, 0x09 /* Protected */,
       5,    0,   39,    2, 0x09 /* Protected */,
       6,    1,   40,    2, 0x09 /* Protected */,
       8,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void Gui::Dialog::DlgSettingsWorkbenchesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSettingsWorkbenchesImp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wbToggled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->wbItemMoved(); break;
        case 2: _t->onStartWbChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onWbByTabToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgSettingsWorkbenchesImp::staticMetaObject = { {
    QMetaObject::SuperData::link<PreferencePage::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgSettingsWorkbenchesImp.data,
    qt_meta_data_Gui__Dialog__DlgSettingsWorkbenchesImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgSettingsWorkbenchesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgSettingsWorkbenchesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgSettingsWorkbenchesImp.stringdata0))
        return static_cast<void*>(this);
    return PreferencePage::qt_metacast(_clname);
}

int Gui::Dialog::DlgSettingsWorkbenchesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreferencePage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
