/****************************************************************************
** Meta object code from reading C++ file 'EditorView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/EditorView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__EditorView_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__EditorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__EditorView_t qt_meta_stringdata_Gui__EditorView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Gui::EditorView"
QT_MOC_LITERAL(1, 16, 14), // "changeFileName"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "checkTimestamp"
QT_MOC_LITERAL(4, 47, 14), // "contentsChange"
QT_MOC_LITERAL(5, 62, 8), // "position"
QT_MOC_LITERAL(6, 71, 12), // "charsRemoved"
QT_MOC_LITERAL(7, 84, 10), // "charsAdded"
QT_MOC_LITERAL(8, 95, 13), // "undoAvailable"
QT_MOC_LITERAL(9, 109, 13) // "redoAvailable"

    },
    "Gui::EditorView\0changeFileName\0\0"
    "checkTimestamp\0contentsChange\0position\0"
    "charsRemoved\0charsAdded\0undoAvailable\0"
    "redoAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__EditorView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x08 /* Private */,
       4,    3,   43,    2, 0x08 /* Private */,
       8,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Gui::EditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->checkTimestamp(); break;
        case 2: _t->contentsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorView::changeFileName)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::EditorView::staticMetaObject = { {
    QMetaObject::SuperData::link<MDIView::staticMetaObject>(),
    qt_meta_stringdata_Gui__EditorView.data,
    qt_meta_data_Gui__EditorView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::EditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::EditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__EditorView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(this);
    return MDIView::qt_metacast(_clname);
}

int Gui::EditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MDIView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Gui::EditorView::changeFileName(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Gui__PythonEditorView_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__PythonEditorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__PythonEditorView_t qt_meta_stringdata_Gui__PythonEditorView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Gui::PythonEditorView"
QT_MOC_LITERAL(1, 22, 13), // "executeScript"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "startDebug"
QT_MOC_LITERAL(4, 48, 16), // "toggleBreakpoint"
QT_MOC_LITERAL(5, 65, 15), // "showDebugMarker"
QT_MOC_LITERAL(6, 81, 4), // "line"
QT_MOC_LITERAL(7, 86, 15) // "hideDebugMarker"

    },
    "Gui::PythonEditorView\0executeScript\0"
    "\0startDebug\0toggleBreakpoint\0"
    "showDebugMarker\0line\0hideDebugMarker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__PythonEditorView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void Gui::PythonEditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonEditorView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->executeScript(); break;
        case 1: _t->startDebug(); break;
        case 2: _t->toggleBreakpoint(); break;
        case 3: _t->showDebugMarker((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->hideDebugMarker(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::PythonEditorView::staticMetaObject = { {
    QMetaObject::SuperData::link<EditorView::staticMetaObject>(),
    qt_meta_stringdata_Gui__PythonEditorView.data,
    qt_meta_data_Gui__PythonEditorView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::PythonEditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PythonEditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PythonEditorView.stringdata0))
        return static_cast<void*>(this);
    return EditorView::qt_metacast(_clname);
}

int Gui::PythonEditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditorView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_Gui__SearchBar_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__SearchBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__SearchBar_t qt_meta_stringdata_Gui__SearchBar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Gui::SearchBar"
QT_MOC_LITERAL(1, 15, 8), // "activate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "deactivate"
QT_MOC_LITERAL(4, 36, 12), // "findPrevious"
QT_MOC_LITERAL(5, 49, 8), // "findNext"
QT_MOC_LITERAL(6, 58, 11) // "findCurrent"

    },
    "Gui::SearchBar\0activate\0\0deactivate\0"
    "findPrevious\0findNext\0findCurrent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__SearchBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gui::SearchBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activate(); break;
        case 1: _t->deactivate(); break;
        case 2: _t->findPrevious(); break;
        case 3: _t->findNext(); break;
        case 4: _t->findCurrent(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::SearchBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Gui__SearchBar.data,
    qt_meta_data_Gui__SearchBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::SearchBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::SearchBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__SearchBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::SearchBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
