/****************************************************************************
** Meta object code from reading C++ file 'DlgSettingsViewColor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/PreferencePages/DlgSettingsViewColor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettingsViewColor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgSettingsViewColor_t {
    QByteArrayData data[8];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgSettingsViewColor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgSettingsViewColor_t qt_meta_stringdata_Gui__Dialog__DlgSettingsViewColor = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Gui::Dialog::DlgSettingsViewC..."
QT_MOC_LITERAL(1, 34, 29), // "onSwitchGradientColorsPressed"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 26), // "onRadioButtonSimpleToggled"
QT_MOC_LITERAL(4, 92, 3), // "val"
QT_MOC_LITERAL(5, 96, 28), // "onRadioButtonGradientToggled"
QT_MOC_LITERAL(6, 125, 34), // "onRadioButtonRadialGradientTo..."
QT_MOC_LITERAL(7, 160, 22) // "onCheckMidColorToggled"

    },
    "Gui::Dialog::DlgSettingsViewColor\0"
    "onSwitchGradientColorsPressed\0\0"
    "onRadioButtonSimpleToggled\0val\0"
    "onRadioButtonGradientToggled\0"
    "onRadioButtonRadialGradientToggled\0"
    "onCheckMidColorToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgSettingsViewColor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    1,   40,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,
       6,    1,   46,    2, 0x09 /* Protected */,
       7,    1,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void Gui::Dialog::DlgSettingsViewColor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSettingsViewColor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSwitchGradientColorsPressed(); break;
        case 1: _t->onRadioButtonSimpleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onRadioButtonGradientToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onRadioButtonRadialGradientToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onCheckMidColorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgSettingsViewColor::staticMetaObject = { {
    QMetaObject::SuperData::link<PreferencePage::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgSettingsViewColor.data,
    qt_meta_data_Gui__Dialog__DlgSettingsViewColor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgSettingsViewColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgSettingsViewColor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgSettingsViewColor.stringdata0))
        return static_cast<void*>(this);
    return PreferencePage::qt_metacast(_clname);
}

int Gui::Dialog::DlgSettingsViewColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreferencePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
