/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__UrlHandler_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__UrlHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__UrlHandler_t qt_meta_stringdata_Gui__UrlHandler = {
    {
QT_MOC_LITERAL(0, 0, 15) // "Gui::UrlHandler"

    },
    "Gui::UrlHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__UrlHandler[] = {

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

void Gui::UrlHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::UrlHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gui__UrlHandler.data,
    qt_meta_data_Gui__UrlHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::UrlHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::UrlHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__UrlHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::UrlHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__MainWindow_t {
    QByteArrayData data[50];
    char stringdata0[698];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__MainWindow_t qt_meta_stringdata_Gui__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Gui::MainWindow"
QT_MOC_LITERAL(1, 16, 9), // "timeEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "windowStateChanged"
QT_MOC_LITERAL(4, 46, 8), // "QWidget*"
QT_MOC_LITERAL(5, 55, 18), // "workbenchActivated"
QT_MOC_LITERAL(6, 74, 16), // "mainWindowClosed"
QT_MOC_LITERAL(7, 91, 19), // "updateEditorActions"
QT_MOC_LITERAL(8, 111, 11), // "setPaneText"
QT_MOC_LITERAL(9, 123, 1), // "i"
QT_MOC_LITERAL(10, 125, 4), // "text"
QT_MOC_LITERAL(11, 130, 13), // "setUserSchema"
QT_MOC_LITERAL(12, 144, 10), // "userSchema"
QT_MOC_LITERAL(13, 155, 4), // "tile"
QT_MOC_LITERAL(14, 160, 7), // "cascade"
QT_MOC_LITERAL(15, 168, 17), // "closeActiveWindow"
QT_MOC_LITERAL(16, 186, 17), // "closeAllDocuments"
QT_MOC_LITERAL(17, 204, 5), // "close"
QT_MOC_LITERAL(18, 210, 11), // "confirmSave"
QT_MOC_LITERAL(19, 222, 11), // "const char*"
QT_MOC_LITERAL(20, 234, 7), // "docName"
QT_MOC_LITERAL(21, 242, 6), // "parent"
QT_MOC_LITERAL(22, 249, 11), // "addCheckBox"
QT_MOC_LITERAL(23, 261, 18), // "activateNextWindow"
QT_MOC_LITERAL(24, 280, 22), // "activatePreviousWindow"
QT_MOC_LITERAL(25, 303, 17), // "activateWorkbench"
QT_MOC_LITERAL(26, 321, 9), // "whatsThis"
QT_MOC_LITERAL(27, 331, 20), // "switchToTopLevelMode"
QT_MOC_LITERAL(28, 352, 18), // "switchToDockedMode"
QT_MOC_LITERAL(29, 371, 20), // "statusMessageChanged"
QT_MOC_LITERAL(30, 392, 11), // "showMessage"
QT_MOC_LITERAL(31, 404, 7), // "message"
QT_MOC_LITERAL(32, 412, 7), // "timeout"
QT_MOC_LITERAL(33, 420, 19), // "setRightSideMessage"
QT_MOC_LITERAL(34, 440, 14), // "setWindowTitle"
QT_MOC_LITERAL(35, 455, 6), // "string"
QT_MOC_LITERAL(36, 462, 20), // "onSetActiveSubWindow"
QT_MOC_LITERAL(37, 483, 6), // "window"
QT_MOC_LITERAL(38, 490, 17), // "onWindowActivated"
QT_MOC_LITERAL(39, 508, 14), // "QMdiSubWindow*"
QT_MOC_LITERAL(40, 523, 17), // "tabCloseRequested"
QT_MOC_LITERAL(41, 541, 5), // "index"
QT_MOC_LITERAL(42, 547, 24), // "onWindowsMenuAboutToShow"
QT_MOC_LITERAL(43, 572, 24), // "onToolBarMenuAboutToShow"
QT_MOC_LITERAL(44, 597, 27), // "onDockWindowMenuAboutToShow"
QT_MOC_LITERAL(45, 625, 14), // "_updateActions"
QT_MOC_LITERAL(46, 640, 14), // "delayedStartup"
QT_MOC_LITERAL(47, 655, 15), // "processMessages"
QT_MOC_LITERAL(48, 671, 14), // "QList<QString>"
QT_MOC_LITERAL(49, 686, 11) // "clearStatus"

    },
    "Gui::MainWindow\0timeEvent\0\0"
    "windowStateChanged\0QWidget*\0"
    "workbenchActivated\0mainWindowClosed\0"
    "updateEditorActions\0setPaneText\0i\0"
    "text\0setUserSchema\0userSchema\0tile\0"
    "cascade\0closeActiveWindow\0closeAllDocuments\0"
    "close\0confirmSave\0const char*\0docName\0"
    "parent\0addCheckBox\0activateNextWindow\0"
    "activatePreviousWindow\0activateWorkbench\0"
    "whatsThis\0switchToTopLevelMode\0"
    "switchToDockedMode\0statusMessageChanged\0"
    "showMessage\0message\0timeout\0"
    "setRightSideMessage\0setWindowTitle\0"
    "string\0onSetActiveSubWindow\0window\0"
    "onWindowActivated\0QMdiSubWindow*\0"
    "tabCloseRequested\0index\0"
    "onWindowsMenuAboutToShow\0"
    "onToolBarMenuAboutToShow\0"
    "onDockWindowMenuAboutToShow\0_updateActions\0"
    "delayedStartup\0processMessages\0"
    "QList<QString>\0clearStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,
       3,    1,  195,    2, 0x06 /* Public */,
       5,    1,  198,    2, 0x06 /* Public */,
       6,    0,  201,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  202,    2, 0x0a /* Public */,
       8,    2,  203,    2, 0x0a /* Public */,
      11,    1,  208,    2, 0x0a /* Public */,
      13,    0,  211,    2, 0x0a /* Public */,
      14,    0,  212,    2, 0x0a /* Public */,
      15,    0,  213,    2, 0x0a /* Public */,
      16,    1,  214,    2, 0x0a /* Public */,
      16,    0,  217,    2, 0x2a /* Public | MethodCloned */,
      18,    3,  218,    2, 0x0a /* Public */,
      18,    2,  225,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  230,    2, 0x2a /* Public | MethodCloned */,
      23,    0,  233,    2, 0x0a /* Public */,
      24,    0,  234,    2, 0x0a /* Public */,
      25,    1,  235,    2, 0x0a /* Public */,
      26,    0,  238,    2, 0x0a /* Public */,
      27,    0,  239,    2, 0x0a /* Public */,
      28,    0,  240,    2, 0x0a /* Public */,
      29,    0,  241,    2, 0x0a /* Public */,
      30,    2,  242,    2, 0x0a /* Public */,
      30,    1,  247,    2, 0x2a /* Public | MethodCloned */,
      33,    1,  250,    2, 0x0a /* Public */,
      34,    1,  253,    2, 0x0a /* Public */,
      36,    1,  256,    2, 0x08 /* Private */,
      38,    1,  259,    2, 0x08 /* Private */,
      40,    1,  262,    2, 0x08 /* Private */,
      42,    0,  265,    2, 0x08 /* Private */,
      43,    0,  266,    2, 0x08 /* Private */,
      44,    0,  267,    2, 0x08 /* Private */,
      45,    0,  268,    2, 0x08 /* Private */,
      46,    0,  269,    2, 0x08 /* Private */,
      47,    1,  270,    2, 0x08 /* Private */,
      49,    0,  273,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   17,
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 19, 0x80000000 | 4, QMetaType::Bool,   20,   21,   22,
    QMetaType::Int, 0x80000000 | 19, 0x80000000 | 4,   20,   21,
    QMetaType::Int, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, 0x80000000 | 4,   37,
    QMetaType::Void, 0x80000000 | 39,    2,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48,    2,
    QMetaType::Void,

       0        // eod
};

void Gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeEvent(); break;
        case 1: _t->windowStateChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->workbenchActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mainWindowClosed(); break;
        case 4: _t->updateEditorActions(); break;
        case 5: _t->setPaneText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->setUserSchema((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->tile(); break;
        case 8: _t->cascade(); break;
        case 9: _t->closeActiveWindow(); break;
        case 10: { bool _r = _t->closeAllDocuments((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->closeAllDocuments();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->confirmSave((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->confirmSave((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->confirmSave((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->activateNextWindow(); break;
        case 16: _t->activatePreviousWindow(); break;
        case 17: _t->activateWorkbench((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->whatsThis(); break;
        case 19: _t->switchToTopLevelMode(); break;
        case 20: _t->switchToDockedMode(); break;
        case 21: _t->statusMessageChanged(); break;
        case 22: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->setRightSideMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->setWindowTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->onSetActiveSubWindow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 27: _t->onWindowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 28: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->onWindowsMenuAboutToShow(); break;
        case 30: _t->onToolBarMenuAboutToShow(); break;
        case 31: _t->onDockWindowMenuAboutToShow(); break;
        case 32: _t->_updateActions(); break;
        case 33: _t->delayedStartup(); break;
        case 34: _t->processMessages((*reinterpret_cast< const QList<QString>(*)>(_a[1]))); break;
        case 35: _t->clearStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 34:
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
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::timeEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::windowStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::workbenchActivated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::mainWindowClosed)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Gui__MainWindow.data,
    qt_meta_data_Gui__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void Gui::MainWindow::timeEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Gui::MainWindow::windowStateChanged(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::MainWindow::workbenchActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gui::MainWindow::mainWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
