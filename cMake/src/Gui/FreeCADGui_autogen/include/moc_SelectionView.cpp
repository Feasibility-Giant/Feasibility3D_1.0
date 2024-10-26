/****************************************************************************
** Meta object code from reading C++ file 'SelectionView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/SelectionView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectionView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__DockWnd__SelectionView_t {
    QByteArrayData data[19];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__DockWnd__SelectionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__DockWnd__SelectionView_t qt_meta_stringdata_Gui__DockWnd__SelectionView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Gui::DockWnd::SelectionView"
QT_MOC_LITERAL(1, 28, 6), // "search"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "text"
QT_MOC_LITERAL(4, 41, 14), // "validateSearch"
QT_MOC_LITERAL(5, 56, 17), // "onItemContextMenu"
QT_MOC_LITERAL(6, 74, 5), // "point"
QT_MOC_LITERAL(7, 80, 6), // "select"
QT_MOC_LITERAL(8, 87, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 104, 4), // "item"
QT_MOC_LITERAL(10, 109, 8), // "deselect"
QT_MOC_LITERAL(11, 118, 4), // "zoom"
QT_MOC_LITERAL(12, 123, 10), // "treeSelect"
QT_MOC_LITERAL(13, 134, 8), // "toPython"
QT_MOC_LITERAL(14, 143, 5), // "touch"
QT_MOC_LITERAL(15, 149, 8), // "showPart"
QT_MOC_LITERAL(16, 158, 16), // "onEnablePickList"
QT_MOC_LITERAL(17, 175, 12), // "toggleSelect"
QT_MOC_LITERAL(18, 188, 9) // "preselect"

    },
    "Gui::DockWnd::SelectionView\0search\0\0"
    "text\0validateSearch\0onItemContextMenu\0"
    "point\0select\0QListWidgetItem*\0item\0"
    "deselect\0zoom\0treeSelect\0toPython\0"
    "touch\0showPart\0onEnablePickList\0"
    "toggleSelect\0preselect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__DockWnd__SelectionView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    0,   97,    2, 0x0a /* Public */,
       5,    1,   98,    2, 0x0a /* Public */,
       7,    1,  101,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x2a /* Public | MethodCloned */,
      10,    0,  105,    2, 0x0a /* Public */,
      11,    0,  106,    2, 0x0a /* Public */,
      12,    0,  107,    2, 0x0a /* Public */,
      13,    0,  108,    2, 0x0a /* Public */,
      14,    0,  109,    2, 0x0a /* Public */,
      15,    0,  110,    2, 0x0a /* Public */,
      16,    0,  111,    2, 0x0a /* Public */,
      17,    1,  112,    2, 0x0a /* Public */,
      17,    0,  115,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  116,    2, 0x0a /* Public */,
      18,    0,  119,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void Gui::DockWnd::SelectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectionView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->validateSearch(); break;
        case 2: _t->onItemContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->select((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->select(); break;
        case 5: _t->deselect(); break;
        case 6: _t->zoom(); break;
        case 7: _t->treeSelect(); break;
        case 8: _t->toPython(); break;
        case 9: _t->touch(); break;
        case 10: _t->showPart(); break;
        case 11: _t->onEnablePickList(); break;
        case 12: _t->toggleSelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->toggleSelect(); break;
        case 14: _t->preselect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->preselect(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::DockWnd::SelectionView::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::DockWindow::staticMetaObject>(),
    qt_meta_stringdata_Gui__DockWnd__SelectionView.data,
    qt_meta_data_Gui__DockWnd__SelectionView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::DockWnd::SelectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::DockWnd::SelectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWnd__SelectionView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::DockWindow::qt_metacast(_clname);
}

int Gui::DockWnd::SelectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::DockWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
