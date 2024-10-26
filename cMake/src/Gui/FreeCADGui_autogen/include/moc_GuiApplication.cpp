/****************************************************************************
** Meta object code from reading C++ file 'GuiApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/GuiApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__GUIApplication_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__GUIApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__GUIApplication_t qt_meta_stringdata_Gui__GUIApplication = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Gui::GUIApplication"
QT_MOC_LITERAL(1, 20, 10), // "commitData"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QSessionManager&"
QT_MOC_LITERAL(4, 49, 7) // "manager"

    },
    "Gui::GUIApplication\0commitData\0\0"
    "QSessionManager&\0manager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__GUIApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Gui::GUIApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUIApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->commitData((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::GUIApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<GUIApplicationNativeEventAware::staticMetaObject>(),
    qt_meta_stringdata_Gui__GUIApplication.data,
    qt_meta_data_Gui__GUIApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::GUIApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::GUIApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__GUIApplication.stringdata0))
        return static_cast<void*>(this);
    return GUIApplicationNativeEventAware::qt_metacast(_clname);
}

int Gui::GUIApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GUIApplicationNativeEventAware::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Gui__GUISingleApplication_t {
    QByteArrayData data[7];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__GUISingleApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__GUISingleApplication_t qt_meta_stringdata_Gui__GUISingleApplication = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Gui::GUISingleApplication"
QT_MOC_LITERAL(1, 26, 15), // "messageReceived"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "QList<QString>"
QT_MOC_LITERAL(4, 58, 17), // "receiveConnection"
QT_MOC_LITERAL(5, 76, 15), // "processMessages"
QT_MOC_LITERAL(6, 92, 14) // "readFromSocket"

    },
    "Gui::GUISingleApplication\0messageReceived\0"
    "\0QList<QString>\0receiveConnection\0"
    "processMessages\0readFromSocket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__GUISingleApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gui::GUISingleApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUISingleApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QList<QString>(*)>(_a[1]))); break;
        case 1: _t->receiveConnection(); break;
        case 2: _t->processMessages(); break;
        case 3: _t->readFromSocket(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GUISingleApplication::*)(const QList<QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GUISingleApplication::messageReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::GUISingleApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<GUIApplication::staticMetaObject>(),
    qt_meta_stringdata_Gui__GUISingleApplication.data,
    qt_meta_data_Gui__GUISingleApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::GUISingleApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::GUISingleApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__GUISingleApplication.stringdata0))
        return static_cast<void*>(this);
    return GUIApplication::qt_metacast(_clname);
}

int Gui::GUISingleApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GUIApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Gui::GUISingleApplication::messageReceived(const QList<QString> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Gui__WheelEventFilter_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__WheelEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__WheelEventFilter_t qt_meta_stringdata_Gui__WheelEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 21) // "Gui::WheelEventFilter"

    },
    "Gui::WheelEventFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__WheelEventFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Gui::WheelEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::WheelEventFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gui__WheelEventFilter.data,
    qt_meta_data_Gui__WheelEventFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::WheelEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::WheelEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__WheelEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::WheelEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
