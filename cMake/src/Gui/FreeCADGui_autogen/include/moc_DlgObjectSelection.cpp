/****************************************************************************
** Meta object code from reading C++ file 'DlgObjectSelection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/DlgObjectSelection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgObjectSelection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__DlgObjectSelection_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__DlgObjectSelection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__DlgObjectSelection_t qt_meta_stringdata_Gui__DlgObjectSelection = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Gui::DlgObjectSelection"
QT_MOC_LITERAL(1, 24, 16), // "onDepItemChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 59, 4), // "item"
QT_MOC_LITERAL(5, 64, 16), // "onObjItemChanged"
QT_MOC_LITERAL(6, 81, 22), // "onItemSelectionChanged"
QT_MOC_LITERAL(7, 104, 16), // "checkItemChanged"
QT_MOC_LITERAL(8, 121, 10), // "onAutoDeps"
QT_MOC_LITERAL(9, 132, 14), // "onItemExpanded"
QT_MOC_LITERAL(10, 147, 24), // "onUseOriginalsBtnClicked"
QT_MOC_LITERAL(11, 172, 10) // "onShowDeps"

    },
    "Gui::DlgObjectSelection\0onDepItemChanged\0"
    "\0QTreeWidgetItem*\0item\0onObjItemChanged\0"
    "onItemSelectionChanged\0checkItemChanged\0"
    "onAutoDeps\0onItemExpanded\0"
    "onUseOriginalsBtnClicked\0onShowDeps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__DlgObjectSelection[] = {

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
       1,    2,   54,    2, 0x08 /* Private */,
       5,    2,   59,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gui::DlgObjectSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgObjectSelection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDepItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onObjItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onItemSelectionChanged(); break;
        case 3: _t->checkItemChanged(); break;
        case 4: _t->onAutoDeps((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->onUseOriginalsBtnClicked(); break;
        case 7: _t->onShowDeps(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::DlgObjectSelection::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__DlgObjectSelection.data,
    qt_meta_data_Gui__DlgObjectSelection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::DlgObjectSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DlgObjectSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DlgObjectSelection.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::DlgObjectSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
