/****************************************************************************
** Meta object code from reading C++ file 'QGMText.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/QGMText.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGMText.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__QGMText_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__QGMText_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__QGMText_t qt_meta_stringdata_TechDrawGui__QGMText = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TechDrawGui::QGMText"
QT_MOC_LITERAL(1, 21, 8), // "dragging"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "hover"
QT_MOC_LITERAL(4, 37, 5), // "state"
QT_MOC_LITERAL(5, 43, 8), // "selected"
QT_MOC_LITERAL(6, 52, 12) // "dragFinished"

    },
    "TechDrawGui::QGMText\0dragging\0\0hover\0"
    "state\0selected\0dragFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__QGMText[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    1,   38,    2, 0x06 /* Public */,
       6,    0,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void TechDrawGui::QGMText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGMText *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dragging(); break;
        case 1: _t->hover((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->selected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dragFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGMText::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMText::dragging)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGMText::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMText::hover)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGMText::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMText::selected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGMText::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMText::dragFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::QGMText::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCustomText::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__QGMText.data,
    qt_meta_data_TechDrawGui__QGMText,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::QGMText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::QGMText::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__QGMText.stringdata0))
        return static_cast<void*>(this);
    return QGCustomText::qt_metacast(_clname);
}

int TechDrawGui::QGMText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCustomText::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TechDrawGui::QGMText::dragging()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TechDrawGui::QGMText::hover(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TechDrawGui::QGMText::selected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TechDrawGui::QGMText::dragFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
