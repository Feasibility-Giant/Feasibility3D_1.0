/****************************************************************************
** Meta object code from reading C++ file 'DlgCreateNewPreferencePackImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/DlgCreateNewPreferencePackImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgCreateNewPreferencePackImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgCreateNewPreferencePackImp_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgCreateNewPreferencePackImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgCreateNewPreferencePackImp_t qt_meta_stringdata_Gui__Dialog__DlgCreateNewPreferencePackImp = {
    {
QT_MOC_LITERAL(0, 0, 42), // "Gui::Dialog::DlgCreateNewPref..."
QT_MOC_LITERAL(1, 43, 13), // "onItemChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 75, 4), // "item"
QT_MOC_LITERAL(5, 80, 6), // "column"
QT_MOC_LITERAL(6, 87, 20), // "onLineEditTextEdited"
QT_MOC_LITERAL(7, 108, 4), // "text"
QT_MOC_LITERAL(8, 113, 6) // "accept"

    },
    "Gui::Dialog::DlgCreateNewPreferencePackImp\0"
    "onItemChanged\0\0QTreeWidgetItem*\0item\0"
    "column\0onLineEditTextEdited\0text\0"
    "accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgCreateNewPreferencePackImp[] = {

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
       1,    2,   29,    2, 0x09 /* Protected */,
       6,    1,   34,    2, 0x09 /* Protected */,
       8,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void Gui::Dialog::DlgCreateNewPreferencePackImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgCreateNewPreferencePackImp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->accept(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgCreateNewPreferencePackImp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgCreateNewPreferencePackImp.data,
    qt_meta_data_Gui__Dialog__DlgCreateNewPreferencePackImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgCreateNewPreferencePackImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgCreateNewPreferencePackImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgCreateNewPreferencePackImp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgCreateNewPreferencePackImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
