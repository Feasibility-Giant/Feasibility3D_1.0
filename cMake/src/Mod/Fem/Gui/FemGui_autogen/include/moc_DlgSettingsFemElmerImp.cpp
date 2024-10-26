/****************************************************************************
** Meta object code from reading C++ file 'DlgSettingsFemElmerImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/DlgSettingsFemElmerImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSettingsFemElmerImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__DlgSettingsFemElmerImp_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__DlgSettingsFemElmerImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__DlgSettingsFemElmerImp_t qt_meta_stringdata_FemGui__DlgSettingsFemElmerImp = {
    {
QT_MOC_LITERAL(0, 0, 30), // "FemGui::DlgSettingsFemElmerImp"
QT_MOC_LITERAL(1, 31, 17), // "onfileNameChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "FileName"
QT_MOC_LITERAL(4, 59, 19), // "onfileNameChangedMT"
QT_MOC_LITERAL(5, 79, 19), // "onCoresValueChanged"
QT_MOC_LITERAL(6, 99, 5) // "cores"

    },
    "FemGui::DlgSettingsFemElmerImp\0"
    "onfileNameChanged\0\0FileName\0"
    "onfileNameChangedMT\0onCoresValueChanged\0"
    "cores"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__DlgSettingsFemElmerImp[] = {

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
       4,    1,   32,    2, 0x09 /* Protected */,
       5,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void FemGui::DlgSettingsFemElmerImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSettingsFemElmerImp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onfileNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onfileNameChangedMT((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onCoresValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::DlgSettingsFemElmerImp::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::Dialog::PreferencePage::staticMetaObject>(),
    qt_meta_stringdata_FemGui__DlgSettingsFemElmerImp.data,
    qt_meta_data_FemGui__DlgSettingsFemElmerImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::DlgSettingsFemElmerImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::DlgSettingsFemElmerImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__DlgSettingsFemElmerImp.stringdata0))
        return static_cast<void*>(this);
    return Gui::Dialog::PreferencePage::qt_metacast(_clname);
}

int FemGui::DlgSettingsFemElmerImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::Dialog::PreferencePage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
