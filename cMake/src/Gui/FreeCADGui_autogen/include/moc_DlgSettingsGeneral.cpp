/****************************************************************************
** Meta object code from reading C++ file 'DlgSettingsGeneral.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/PreferencePages/DlgSettingsGeneral.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettingsGeneral.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgSettingsGeneral_t {
    QByteArrayData data[14];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgSettingsGeneral_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgSettingsGeneral_t qt_meta_stringdata_Gui__Dialog__DlgSettingsGeneral = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Gui::Dialog::DlgSettingsGeneral"
QT_MOC_LITERAL(1, 32, 27), // "onLoadPreferencePackClicked"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 11), // "std::string"
QT_MOC_LITERAL(4, 73, 8), // "packName"
QT_MOC_LITERAL(5, 82, 26), // "recreatePreferencePackMenu"
QT_MOC_LITERAL(6, 109, 31), // "newPreferencePackDialogAccepted"
QT_MOC_LITERAL(7, 141, 30), // "onManagePreferencePacksClicked"
QT_MOC_LITERAL(8, 172, 21), // "onImportConfigClicked"
QT_MOC_LITERAL(9, 194, 14), // "onThemeChanged"
QT_MOC_LITERAL(10, 209, 5), // "index"
QT_MOC_LITERAL(11, 215, 15), // "onLinkActivated"
QT_MOC_LITERAL(12, 231, 4), // "link"
QT_MOC_LITERAL(13, 236, 24) // "onUnitSystemIndexChanged"

    },
    "Gui::Dialog::DlgSettingsGeneral\0"
    "onLoadPreferencePackClicked\0\0std::string\0"
    "packName\0recreatePreferencePackMenu\0"
    "newPreferencePackDialogAccepted\0"
    "onManagePreferencePacksClicked\0"
    "onImportConfigClicked\0onThemeChanged\0"
    "index\0onLinkActivated\0link\0"
    "onUnitSystemIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgSettingsGeneral[] = {

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
       1,    1,   54,    2, 0x09 /* Protected */,
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    0,   58,    2, 0x09 /* Protected */,
       7,    0,   59,    2, 0x09 /* Protected */,
       8,    0,   60,    2, 0x09 /* Protected */,
       9,    1,   61,    2, 0x09 /* Protected */,
      11,    1,   64,    2, 0x09 /* Protected */,
      13,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void Gui::Dialog::DlgSettingsGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSettingsGeneral *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLoadPreferencePackClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->recreatePreferencePackMenu(); break;
        case 2: _t->newPreferencePackDialogAccepted(); break;
        case 3: _t->onManagePreferencePacksClicked(); break;
        case 4: _t->onImportConfigClicked(); break;
        case 5: _t->onThemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onUnitSystemIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgSettingsGeneral::staticMetaObject = { {
    QMetaObject::SuperData::link<PreferencePage::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgSettingsGeneral.data,
    qt_meta_data_Gui__Dialog__DlgSettingsGeneral,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgSettingsGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgSettingsGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgSettingsGeneral.stringdata0))
        return static_cast<void*>(this);
    return PreferencePage::qt_metacast(_clname);
}

int Gui::Dialog::DlgSettingsGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreferencePage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
