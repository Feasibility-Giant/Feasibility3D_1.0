/****************************************************************************
** Meta object code from reading C++ file 'ManualAlignment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/ManualAlignment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManualAlignment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__ManualAlignment_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__ManualAlignment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__ManualAlignment_t qt_meta_stringdata_Gui__ManualAlignment = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Gui::ManualAlignment"
QT_MOC_LITERAL(1, 21, 12), // "emitCanceled"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "emitFinished"
QT_MOC_LITERAL(4, 48, 5), // "reset"
QT_MOC_LITERAL(5, 54, 7), // "onAlign"
QT_MOC_LITERAL(6, 62, 25), // "onRemoveLastPointMoveable"
QT_MOC_LITERAL(7, 88, 22), // "onRemoveLastPointFixed"
QT_MOC_LITERAL(8, 111, 7), // "onClear"
QT_MOC_LITERAL(9, 119, 8) // "onCancel"

    },
    "Gui::ManualAlignment\0emitCanceled\0\0"
    "emitFinished\0reset\0onAlign\0"
    "onRemoveLastPointMoveable\0"
    "onRemoveLastPointFixed\0onClear\0onCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__ManualAlignment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x09 /* Protected */,
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    0,   58,    2, 0x09 /* Protected */,
       7,    0,   59,    2, 0x09 /* Protected */,
       8,    0,   60,    2, 0x09 /* Protected */,
       9,    0,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gui::ManualAlignment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManualAlignment *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitCanceled(); break;
        case 1: _t->emitFinished(); break;
        case 2: _t->reset(); break;
        case 3: _t->onAlign(); break;
        case 4: _t->onRemoveLastPointMoveable(); break;
        case 5: _t->onRemoveLastPointFixed(); break;
        case 6: _t->onClear(); break;
        case 7: _t->onCancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ManualAlignment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualAlignment::emitCanceled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ManualAlignment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManualAlignment::emitFinished)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::ManualAlignment::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gui__ManualAlignment.data,
    qt_meta_data_Gui__ManualAlignment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::ManualAlignment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::ManualAlignment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ManualAlignment.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::ManualAlignment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Gui::ManualAlignment::emitCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Gui::ManualAlignment::emitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
