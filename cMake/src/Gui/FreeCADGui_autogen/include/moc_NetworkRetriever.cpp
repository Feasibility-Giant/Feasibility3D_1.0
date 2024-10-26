/****************************************************************************
** Meta object code from reading C++ file 'NetworkRetriever.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/NetworkRetriever.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkRetriever.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__NetworkRetriever_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__NetworkRetriever_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__NetworkRetriever_t qt_meta_stringdata_Gui__NetworkRetriever = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Gui::NetworkRetriever"
QT_MOC_LITERAL(1, 22, 10), // "wgetExited"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "testFailure"
QT_MOC_LITERAL(4, 46, 12), // "wgetFinished"
QT_MOC_LITERAL(5, 59, 20) // "QProcess::ExitStatus"

    },
    "Gui::NetworkRetriever\0wgetExited\0\0"
    "testFailure\0wgetFinished\0QProcess::ExitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__NetworkRetriever[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    2,    2,

       0        // eod
};

void Gui::NetworkRetriever::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkRetriever *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wgetExited(); break;
        case 1: _t->testFailure(); break;
        case 2: _t->wgetFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkRetriever::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkRetriever::wgetExited)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::NetworkRetriever::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gui__NetworkRetriever.data,
    qt_meta_data_Gui__NetworkRetriever,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::NetworkRetriever::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::NetworkRetriever::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__NetworkRetriever.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::NetworkRetriever::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Gui::NetworkRetriever::wgetExited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp_t qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Gui::StdCmdDownloadOnlineHelp"
QT_MOC_LITERAL(1, 30, 12), // "wgetFinished"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "Gui::StdCmdDownloadOnlineHelp\0"
    "wgetFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__StdCmdDownloadOnlineHelp[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Gui::StdCmdDownloadOnlineHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StdCmdDownloadOnlineHelp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wgetFinished(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::StdCmdDownloadOnlineHelp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp.data,
    qt_meta_data_Gui__StdCmdDownloadOnlineHelp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::StdCmdDownloadOnlineHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::StdCmdDownloadOnlineHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__StdCmdDownloadOnlineHelp.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Command"))
        return static_cast< Command*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::StdCmdDownloadOnlineHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
