/****************************************************************************
** Meta object code from reading C++ file 'ProgressDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/ProgressDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__ProgressDialog_t {
    QByteArrayData data[15];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__ProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__ProgressDialog_t qt_meta_stringdata_Gui__ProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Gui::ProgressDialog"
QT_MOC_LITERAL(1, 20, 8), // "onCancel"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "resetEx"
QT_MOC_LITERAL(4, 38, 10), // "setRangeEx"
QT_MOC_LITERAL(5, 49, 7), // "minimum"
QT_MOC_LITERAL(6, 57, 7), // "maximum"
QT_MOC_LITERAL(7, 65, 10), // "setValueEx"
QT_MOC_LITERAL(8, 76, 5), // "value"
QT_MOC_LITERAL(9, 82, 11), // "aboutToShow"
QT_MOC_LITERAL(10, 94, 11), // "aboutToHide"
QT_MOC_LITERAL(11, 106, 9), // "showEvent"
QT_MOC_LITERAL(12, 116, 11), // "QShowEvent*"
QT_MOC_LITERAL(13, 128, 9), // "hideEvent"
QT_MOC_LITERAL(14, 138, 11) // "QHideEvent*"

    },
    "Gui::ProgressDialog\0onCancel\0\0resetEx\0"
    "setRangeEx\0minimum\0maximum\0setValueEx\0"
    "value\0aboutToShow\0aboutToHide\0showEvent\0"
    "QShowEvent*\0hideEvent\0QHideEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__ProgressDialog[] = {

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
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    2,   56,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

void Gui::ProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCancel(); break;
        case 1: _t->resetEx(); break;
        case 2: _t->setRangeEx((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setValueEx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->aboutToShow(); break;
        case 5: _t->aboutToHide(); break;
        case 6: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 7: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::ProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QProgressDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__ProgressDialog.data,
    qt_meta_data_Gui__ProgressDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::ProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::ProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ProgressDialog.stringdata0))
        return static_cast<void*>(this);
    return QProgressDialog::qt_metacast(_clname);
}

int Gui::ProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
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
