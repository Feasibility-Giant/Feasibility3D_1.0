/****************************************************************************
** Meta object code from reading C++ file 'DlgExpressionInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/DlgExpressionInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgExpressionInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgExpressionInput_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgExpressionInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgExpressionInput_t qt_meta_stringdata_Gui__Dialog__DlgExpressionInput = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Gui::Dialog::DlgExpressionInput"
QT_MOC_LITERAL(1, 32, 4), // "show"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "accept"
QT_MOC_LITERAL(4, 45, 11), // "textChanged"
QT_MOC_LITERAL(5, 57, 4), // "text"
QT_MOC_LITERAL(6, 62, 12), // "setDiscarded"
QT_MOC_LITERAL(7, 75, 14), // "onCheckVarSets"
QT_MOC_LITERAL(8, 90, 5), // "state"
QT_MOC_LITERAL(9, 96, 16), // "onVarSetSelected"
QT_MOC_LITERAL(10, 113, 18), // "onTextChangedGroup"
QT_MOC_LITERAL(11, 132, 15) // "namePropChanged"

    },
    "Gui::Dialog::DlgExpressionInput\0show\0"
    "\0accept\0textChanged\0text\0setDiscarded\0"
    "onCheckVarSets\0state\0onVarSetSelected\0"
    "onTextChangedGroup\0namePropChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgExpressionInput[] = {

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
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Gui::Dialog::DlgExpressionInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgExpressionInput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->accept(); break;
        case 2: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setDiscarded(); break;
        case 4: _t->onCheckVarSets((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onVarSetSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onTextChangedGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->namePropChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgExpressionInput::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgExpressionInput.data,
    qt_meta_data_Gui__Dialog__DlgExpressionInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgExpressionInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgExpressionInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgExpressionInput.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgExpressionInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
