/****************************************************************************
** Meta object code from reading C++ file 'ReportView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/ReportView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReportView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__DockWnd__ReportView_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__DockWnd__ReportView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__DockWnd__ReportView_t qt_meta_stringdata_Gui__DockWnd__ReportView = {
    {
QT_MOC_LITERAL(0, 0, 24) // "Gui::DockWnd::ReportView"

    },
    "Gui::DockWnd::ReportView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__DockWnd__ReportView[] = {

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

void Gui::DockWnd::ReportView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::DockWnd::ReportView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Gui__DockWnd__ReportView.data,
    qt_meta_data_Gui__DockWnd__ReportView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::DockWnd::ReportView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::ReportView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__ReportView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::DockWnd::ReportView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__DockWnd__ReportOutput_t {
    QByteArrayData data[16];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__DockWnd__ReportOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__DockWnd__ReportOutput_t qt_meta_stringdata_Gui__DockWnd__ReportOutput = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Gui::DockWnd::ReportOutput"
QT_MOC_LITERAL(1, 27, 8), // "onSaveAs"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "onToggleError"
QT_MOC_LITERAL(4, 51, 15), // "onToggleWarning"
QT_MOC_LITERAL(5, 67, 18), // "onToggleLogMessage"
QT_MOC_LITERAL(6, 86, 21), // "onToggleNormalMessage"
QT_MOC_LITERAL(7, 108, 16), // "onToggleCritical"
QT_MOC_LITERAL(8, 125, 31), // "onToggleShowReportViewOnWarning"
QT_MOC_LITERAL(9, 157, 29), // "onToggleShowReportViewOnError"
QT_MOC_LITERAL(10, 187, 37), // "onToggleShowReportViewOnNorma..."
QT_MOC_LITERAL(11, 225, 32), // "onToggleShowReportViewOnCritical"
QT_MOC_LITERAL(12, 258, 34), // "onToggleShowReportViewOnLogMe..."
QT_MOC_LITERAL(13, 293, 28), // "onToggleRedirectPythonStdout"
QT_MOC_LITERAL(14, 322, 28), // "onToggleRedirectPythonStderr"
QT_MOC_LITERAL(15, 351, 15) // "onToggleGoToEnd"

    },
    "Gui::DockWnd::ReportOutput\0onSaveAs\0"
    "\0onToggleError\0onToggleWarning\0"
    "onToggleLogMessage\0onToggleNormalMessage\0"
    "onToggleCritical\0onToggleShowReportViewOnWarning\0"
    "onToggleShowReportViewOnError\0"
    "onToggleShowReportViewOnNormalMessage\0"
    "onToggleShowReportViewOnCritical\0"
    "onToggleShowReportViewOnLogMessage\0"
    "onToggleRedirectPythonStdout\0"
    "onToggleRedirectPythonStderr\0"
    "onToggleGoToEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__DockWnd__ReportOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gui::DockWnd::ReportOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReportOutput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSaveAs(); break;
        case 1: _t->onToggleError(); break;
        case 2: _t->onToggleWarning(); break;
        case 3: _t->onToggleLogMessage(); break;
        case 4: _t->onToggleNormalMessage(); break;
        case 5: _t->onToggleCritical(); break;
        case 6: _t->onToggleShowReportViewOnWarning(); break;
        case 7: _t->onToggleShowReportViewOnError(); break;
        case 8: _t->onToggleShowReportViewOnNormalMessage(); break;
        case 9: _t->onToggleShowReportViewOnCritical(); break;
        case 10: _t->onToggleShowReportViewOnLogMessage(); break;
        case 11: _t->onToggleRedirectPythonStdout(); break;
        case 12: _t->onToggleRedirectPythonStderr(); break;
        case 13: _t->onToggleGoToEnd(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::DockWnd::ReportOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_Gui__DockWnd__ReportOutput.data,
    qt_meta_data_Gui__DockWnd__ReportOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::DockWnd::ReportOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::ReportOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__ReportOutput.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WindowParameter"))
        return static_cast< WindowParameter*>(this);
    if (!strcmp(_clname, "Base::ILogger"))
        return static_cast< Base::ILogger*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int Gui::DockWnd::ReportOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
struct qt_meta_stringdata_Gui__DockWnd__ReportOutputObserver_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__DockWnd__ReportOutputObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__DockWnd__ReportOutputObserver_t qt_meta_stringdata_Gui__DockWnd__ReportOutputObserver = {
    {
QT_MOC_LITERAL(0, 0, 34) // "Gui::DockWnd::ReportOutputObs..."

    },
    "Gui::DockWnd::ReportOutputObserver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__DockWnd__ReportOutputObserver[] = {

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

void Gui::DockWnd::ReportOutputObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::DockWnd::ReportOutputObserver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gui__DockWnd__ReportOutputObserver.data,
    qt_meta_data_Gui__DockWnd__ReportOutputObserver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::DockWnd::ReportOutputObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::ReportOutputObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__ReportOutputObserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gui::DockWnd::ReportOutputObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
