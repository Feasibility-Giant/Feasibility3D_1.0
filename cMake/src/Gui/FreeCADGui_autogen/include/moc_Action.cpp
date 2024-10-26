/****************************************************************************
** Meta object code from reading C++ file 'Action.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/Action.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Action.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Action_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Action_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Action_t qt_meta_stringdata_Gui__Action = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Gui::Action"
QT_MOC_LITERAL(1, 12, 11), // "onActivated"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9) // "onToggled"

    },
    "Gui::Action\0onActivated\0\0onToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Action[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Gui::Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Action *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onActivated(); break;
        case 1: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Action::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gui__Action.data,
    qt_meta_data_Gui__Action,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Action::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Action.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_Gui__ActionGroup_t {
    QByteArrayData data[9];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__ActionGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__ActionGroup_t qt_meta_stringdata_Gui__ActionGroup = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Gui::ActionGroup"
QT_MOC_LITERAL(1, 17, 11), // "aboutToHide"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "QMenu*"
QT_MOC_LITERAL(4, 37, 11), // "aboutToShow"
QT_MOC_LITERAL(5, 49, 11), // "onActivated"
QT_MOC_LITERAL(6, 61, 9), // "onToggled"
QT_MOC_LITERAL(7, 71, 8), // "QAction*"
QT_MOC_LITERAL(8, 80, 9) // "onHovered"

    },
    "Gui::ActionGroup\0aboutToHide\0\0QMenu*\0"
    "aboutToShow\0onActivated\0onToggled\0"
    "QAction*\0onHovered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__ActionGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   50,    2, 0x0a /* Public */,
       6,    1,   51,    2, 0x0a /* Public */,
       5,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void Gui::ActionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToHide((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: _t->aboutToShow((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 2: _t->onActivated(); break;
        case 3: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->onHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActionGroup::*)(QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionGroup::aboutToHide)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActionGroup::*)(QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionGroup::aboutToShow)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::ActionGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<Action::staticMetaObject>(),
    qt_meta_stringdata_Gui__ActionGroup.data,
    qt_meta_data_Gui__ActionGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::ActionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::ActionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ActionGroup.stringdata0))
        return static_cast<void*>(this);
    return Action::qt_metacast(_clname);
}

int Gui::ActionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Gui::ActionGroup::aboutToHide(QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::ActionGroup::aboutToShow(QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Gui__WorkbenchGroup_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__WorkbenchGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__WorkbenchGroup_t qt_meta_stringdata_Gui__WorkbenchGroup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Gui::WorkbenchGroup"
QT_MOC_LITERAL(1, 20, 22), // "workbenchListRefreshed"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "QList<QAction*>"
QT_MOC_LITERAL(4, 60, 20) // "onWorkbenchActivated"

    },
    "Gui::WorkbenchGroup\0workbenchListRefreshed\0"
    "\0QList<QAction*>\0onWorkbenchActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__WorkbenchGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Gui::WorkbenchGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorkbenchGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->workbenchListRefreshed((*reinterpret_cast< QList<QAction*>(*)>(_a[1]))); break;
        case 1: _t->onWorkbenchActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QAction*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WorkbenchGroup::*)(QList<QAction*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WorkbenchGroup::workbenchListRefreshed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::WorkbenchGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionGroup::staticMetaObject>(),
    qt_meta_stringdata_Gui__WorkbenchGroup.data,
    qt_meta_data_Gui__WorkbenchGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::WorkbenchGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::WorkbenchGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__WorkbenchGroup.stringdata0))
        return static_cast<void*>(this);
    return ActionGroup::qt_metacast(_clname);
}

int Gui::WorkbenchGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gui::WorkbenchGroup::workbenchListRefreshed(QList<QAction*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Gui__RecentFilesAction_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__RecentFilesAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__RecentFilesAction_t qt_meta_stringdata_Gui__RecentFilesAction = {
    {
QT_MOC_LITERAL(0, 0, 22) // "Gui::RecentFilesAction"

    },
    "Gui::RecentFilesAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__RecentFilesAction[] = {

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

void Gui::RecentFilesAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::RecentFilesAction::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionGroup::staticMetaObject>(),
    qt_meta_stringdata_Gui__RecentFilesAction.data,
    qt_meta_data_Gui__RecentFilesAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::RecentFilesAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::RecentFilesAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__RecentFilesAction.stringdata0))
        return static_cast<void*>(this);
    return ActionGroup::qt_metacast(_clname);
}

int Gui::RecentFilesAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__RecentMacrosAction_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__RecentMacrosAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__RecentMacrosAction_t qt_meta_stringdata_Gui__RecentMacrosAction = {
    {
QT_MOC_LITERAL(0, 0, 23) // "Gui::RecentMacrosAction"

    },
    "Gui::RecentMacrosAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__RecentMacrosAction[] = {

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

void Gui::RecentMacrosAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::RecentMacrosAction::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionGroup::staticMetaObject>(),
    qt_meta_stringdata_Gui__RecentMacrosAction.data,
    qt_meta_data_Gui__RecentMacrosAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::RecentMacrosAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::RecentMacrosAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__RecentMacrosAction.stringdata0))
        return static_cast<void*>(this);
    return ActionGroup::qt_metacast(_clname);
}

int Gui::RecentMacrosAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__UndoAction_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__UndoAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__UndoAction_t qt_meta_stringdata_Gui__UndoAction = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Gui::UndoAction"
QT_MOC_LITERAL(1, 16, 13), // "actionChanged"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "Gui::UndoAction\0actionChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__UndoAction[] = {

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

void Gui::UndoAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UndoAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::UndoAction::staticMetaObject = { {
    QMetaObject::SuperData::link<Action::staticMetaObject>(),
    qt_meta_stringdata_Gui__UndoAction.data,
    qt_meta_data_Gui__UndoAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::UndoAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::UndoAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__UndoAction.stringdata0))
        return static_cast<void*>(this);
    return Action::qt_metacast(_clname);
}

int Gui::UndoAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Gui__RedoAction_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__RedoAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__RedoAction_t qt_meta_stringdata_Gui__RedoAction = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Gui::RedoAction"
QT_MOC_LITERAL(1, 16, 13), // "actionChanged"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "Gui::RedoAction\0actionChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__RedoAction[] = {

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

void Gui::RedoAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RedoAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::RedoAction::staticMetaObject = { {
    QMetaObject::SuperData::link<Action::staticMetaObject>(),
    qt_meta_stringdata_Gui__RedoAction.data,
    qt_meta_data_Gui__RedoAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::RedoAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::RedoAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__RedoAction.stringdata0))
        return static_cast<void*>(this);
    return Action::qt_metacast(_clname);
}

int Gui::RedoAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Gui__DockWidgetAction_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__DockWidgetAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__DockWidgetAction_t qt_meta_stringdata_Gui__DockWidgetAction = {
    {
QT_MOC_LITERAL(0, 0, 21) // "Gui::DockWidgetAction"

    },
    "Gui::DockWidgetAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__DockWidgetAction[] = {

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

void Gui::DockWidgetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::DockWidgetAction::staticMetaObject = { {
    QMetaObject::SuperData::link<Action::staticMetaObject>(),
    qt_meta_stringdata_Gui__DockWidgetAction.data,
    qt_meta_data_Gui__DockWidgetAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::DockWidgetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWidgetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWidgetAction.stringdata0))
        return static_cast<void*>(this);
    return Action::qt_metacast(_clname);
}

int Gui::DockWidgetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__ToolBarAction_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__ToolBarAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__ToolBarAction_t qt_meta_stringdata_Gui__ToolBarAction = {
    {
QT_MOC_LITERAL(0, 0, 18) // "Gui::ToolBarAction"

    },
    "Gui::ToolBarAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__ToolBarAction[] = {

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

void Gui::ToolBarAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::ToolBarAction::staticMetaObject = { {
    QMetaObject::SuperData::link<Action::staticMetaObject>(),
    qt_meta_stringdata_Gui__ToolBarAction.data,
    qt_meta_data_Gui__ToolBarAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::ToolBarAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::ToolBarAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ToolBarAction.stringdata0))
        return static_cast<void*>(this);
    return Action::qt_metacast(_clname);
}

int Gui::ToolBarAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Action::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__WindowAction_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__WindowAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__WindowAction_t qt_meta_stringdata_Gui__WindowAction = {
    {
QT_MOC_LITERAL(0, 0, 17) // "Gui::WindowAction"

    },
    "Gui::WindowAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__WindowAction[] = {

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

void Gui::WindowAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::WindowAction::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionGroup::staticMetaObject>(),
    qt_meta_stringdata_Gui__WindowAction.data,
    qt_meta_data_Gui__WindowAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::WindowAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::WindowAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__WindowAction.stringdata0))
        return static_cast<void*>(this);
    return ActionGroup::qt_metacast(_clname);
}

int Gui::WindowAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionGroup::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
