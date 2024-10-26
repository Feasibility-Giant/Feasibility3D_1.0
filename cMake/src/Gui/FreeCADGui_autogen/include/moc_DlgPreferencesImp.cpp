/****************************************************************************
** Meta object code from reading C++ file 'DlgPreferencesImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/DlgPreferencesImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgPreferencesImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp_t {
    QByteArrayData data[10];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp_t qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Gui::Dialog::DlgPreferencesImp"
QT_MOC_LITERAL(1, 31, 18), // "onButtonBoxClicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 68, 14), // "onPageSelected"
QT_MOC_LITERAL(5, 83, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 95, 5), // "index"
QT_MOC_LITERAL(7, 101, 19), // "onStackWidgetChange"
QT_MOC_LITERAL(8, 121, 15), // "onGroupExpanded"
QT_MOC_LITERAL(9, 137, 16) // "onGroupCollapsed"

    },
    "Gui::Dialog::DlgPreferencesImp\0"
    "onButtonBoxClicked\0\0QAbstractButton*\0"
    "onPageSelected\0QModelIndex\0index\0"
    "onStackWidgetChange\0onGroupExpanded\0"
    "onGroupCollapsed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgPreferencesImp[] = {

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
       1,    1,   39,    2, 0x09 /* Protected */,
       4,    1,   42,    2, 0x09 /* Protected */,
       7,    1,   45,    2, 0x09 /* Protected */,
       8,    1,   48,    2, 0x09 /* Protected */,
       9,    1,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void Gui::Dialog::DlgPreferencesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgPreferencesImp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonBoxClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->onPageSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onStackWidgetChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onGroupExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onGroupCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgPreferencesImp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp.data,
    qt_meta_data_Gui__Dialog__DlgPreferencesImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgPreferencesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgPreferencesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgPreferencesImp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgPreferencesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
