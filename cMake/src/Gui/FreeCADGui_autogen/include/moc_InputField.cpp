/****************************************************************************
** Meta object code from reading C++ file 'InputField.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/InputField.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputField.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__InputField_t {
    QByteArrayData data[21];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__InputField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__InputField_t qt_meta_stringdata_Gui__InputField = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Gui::InputField"
QT_MOC_LITERAL(1, 16, 12), // "valueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "Base::Quantity"
QT_MOC_LITERAL(4, 45, 10), // "parseError"
QT_MOC_LITERAL(5, 56, 9), // "errorText"
QT_MOC_LITERAL(6, 66, 8), // "newInput"
QT_MOC_LITERAL(7, 75, 4), // "text"
QT_MOC_LITERAL(8, 80, 15), // "updateIconLabel"
QT_MOC_LITERAL(9, 96, 8), // "prefPath"
QT_MOC_LITERAL(10, 105, 10), // "singleStep"
QT_MOC_LITERAL(11, 116, 7), // "maximum"
QT_MOC_LITERAL(12, 124, 7), // "minimum"
QT_MOC_LITERAL(13, 132, 8), // "rawValue"
QT_MOC_LITERAL(14, 141, 11), // "historySize"
QT_MOC_LITERAL(15, 153, 4), // "unit"
QT_MOC_LITERAL(16, 158, 9), // "precision"
QT_MOC_LITERAL(17, 168, 6), // "format"
QT_MOC_LITERAL(18, 175, 8), // "quantity"
QT_MOC_LITERAL(19, 184, 14), // "quantityString"
QT_MOC_LITERAL(20, 199, 7) // "rawText"

    },
    "Gui::InputField\0valueChanged\0\0"
    "Base::Quantity\0parseError\0errorText\0"
    "newInput\0text\0updateIconLabel\0prefPath\0"
    "singleStep\0maximum\0minimum\0rawValue\0"
    "historySize\0unit\0precision\0format\0"
    "quantity\0quantityString\0rawText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__InputField[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      12,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       1,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x09 /* Protected */,
       8,    1,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
       9, QMetaType::QByteArray, 0x00095003,
      10, QMetaType::Double, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::Double, 0x00095103,
      13, QMetaType::Double, 0x00495003,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::QString, 0x00095003,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::QString, 0x00095103,
      18, 0x80000000 | 3, 0x0049500b,
      19, QMetaType::QString, 0x00095103,
      20, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
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

void Gui::InputField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputField *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const Base::Quantity(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->parseError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->newInput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateIconLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputField::*)(const Base::Quantity & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputField::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputField::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputField::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InputField::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputField::parseError)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Base::Quantity >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InputField *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->rawValue(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->historySize(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getUnitText(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getFormat(); break;
        case 9: *reinterpret_cast< Base::Quantity*>(_v) = _t->getQuantity(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getQuantityString(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->rawText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InputField *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setHistorySize(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setUnitText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setFormat(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setValue(*reinterpret_cast< Base::Quantity*>(_v)); break;
        case 10: _t->setQuantityString(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setRawText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Gui::InputField::staticMetaObject = { {
    QMetaObject::SuperData::link<ExpressionLineEdit::staticMetaObject>(),
    qt_meta_stringdata_Gui__InputField.data,
    qt_meta_data_Gui__InputField,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::InputField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::InputField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__InputField.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExpressionWidget"))
        return static_cast< ExpressionWidget*>(this);
    return ExpressionLineEdit::qt_metacast(_clname);
}

int Gui::InputField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExpressionLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gui::InputField::valueChanged(const Base::Quantity & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::InputField::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::InputField::parseError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
