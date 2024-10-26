/****************************************************************************
** Meta object code from reading C++ file 'QuantitySpinBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/QuantitySpinBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuantitySpinBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__QuantitySpinBox_t {
    QByteArrayData data[20];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__QuantitySpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__QuantitySpinBox_t qt_meta_stringdata_Gui__QuantitySpinBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Gui::QuantitySpinBox"
QT_MOC_LITERAL(1, 21, 12), // "valueChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "Base::Quantity"
QT_MOC_LITERAL(4, 50, 11), // "textChanged"
QT_MOC_LITERAL(5, 62, 17), // "showFormulaDialog"
QT_MOC_LITERAL(6, 80, 8), // "setValue"
QT_MOC_LITERAL(7, 89, 3), // "val"
QT_MOC_LITERAL(8, 93, 9), // "userInput"
QT_MOC_LITERAL(9, 103, 4), // "text"
QT_MOC_LITERAL(10, 108, 17), // "handlePendingEmit"
QT_MOC_LITERAL(11, 126, 10), // "updateUnit"
QT_MOC_LITERAL(12, 137, 4), // "unit"
QT_MOC_LITERAL(13, 142, 7), // "minimum"
QT_MOC_LITERAL(14, 150, 7), // "maximum"
QT_MOC_LITERAL(15, 158, 10), // "singleStep"
QT_MOC_LITERAL(16, 169, 8), // "rawValue"
QT_MOC_LITERAL(17, 178, 5), // "value"
QT_MOC_LITERAL(18, 184, 7), // "binding"
QT_MOC_LITERAL(19, 192, 10) // "expression"

    },
    "Gui::QuantitySpinBox\0valueChanged\0\0"
    "Base::Quantity\0textChanged\0showFormulaDialog\0"
    "setValue\0val\0userInput\0text\0"
    "handlePendingEmit\0updateUnit\0unit\0"
    "minimum\0maximum\0singleStep\0rawValue\0"
    "value\0binding\0expression"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__QuantitySpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       1,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   71,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       8,    1,   77,    2, 0x09 /* Protected */,
      10,    1,   80,    2, 0x09 /* Protected */,
      10,    0,   83,    2, 0x29 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095003,
      13, QMetaType::Double, 0x00095103,
      14, QMetaType::Double, 0x00095103,
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Double, 0x00495003,
      17, 0x80000000 | 3, 0x0059510b,
      18, QMetaType::QString, 0x00095003,
      19, QMetaType::QString, 0x00095001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void Gui::QuantitySpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuantitySpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const Base::Quantity(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->showFormulaDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< const Base::Quantity(*)>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->userInput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->handlePendingEmit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->handlePendingEmit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QuantitySpinBox::*)(const Base::Quantity & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuantitySpinBox::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QuantitySpinBox::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuantitySpinBox::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QuantitySpinBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuantitySpinBox::textChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QuantitySpinBox::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuantitySpinBox::showFormulaDialog)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QuantitySpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->unitText(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->rawValue(); break;
        case 5: *reinterpret_cast< Base::Quantity*>(_v) = _t->value(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->boundToName(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->expressionText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QuantitySpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUnitText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setValue(*reinterpret_cast< Base::Quantity*>(_v)); break;
        case 6: _t->setBoundToByName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Gui::QuantitySpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSpinBox::staticMetaObject>(),
    qt_meta_stringdata_Gui__QuantitySpinBox.data,
    qt_meta_data_Gui__QuantitySpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::QuantitySpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::QuantitySpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__QuantitySpinBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExpressionSpinBox"))
        return static_cast< ExpressionSpinBox*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int Gui::QuantitySpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gui::QuantitySpinBox::valueChanged(const Base::Quantity & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::QuantitySpinBox::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::QuantitySpinBox::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gui::QuantitySpinBox::showFormulaDialog(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
