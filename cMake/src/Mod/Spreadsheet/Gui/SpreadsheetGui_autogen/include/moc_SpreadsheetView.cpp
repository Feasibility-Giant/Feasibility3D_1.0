/****************************************************************************
** Meta object code from reading C++ file 'SpreadsheetView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Spreadsheet/Gui/SpreadsheetView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpreadsheetView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpreadsheetGui__SheetView_t {
    QByteArrayData data[25];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpreadsheetGui__SheetView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpreadsheetGui__SheetView_t qt_meta_stringdata_SpreadsheetGui__SheetView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SpreadsheetGui::SheetView"
QT_MOC_LITERAL(1, 26, 22), // "editingFinishedWithKey"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 3), // "key"
QT_MOC_LITERAL(4, 54, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(5, 76, 9), // "modifiers"
QT_MOC_LITERAL(6, 86, 19), // "confirmAliasChanged"
QT_MOC_LITERAL(7, 106, 4), // "text"
QT_MOC_LITERAL(8, 111, 12), // "aliasChanged"
QT_MOC_LITERAL(9, 124, 21), // "confirmContentChanged"
QT_MOC_LITERAL(10, 146, 14), // "currentChanged"
QT_MOC_LITERAL(11, 161, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 173, 7), // "current"
QT_MOC_LITERAL(13, 181, 8), // "previous"
QT_MOC_LITERAL(14, 190, 13), // "columnResized"
QT_MOC_LITERAL(15, 204, 3), // "col"
QT_MOC_LITERAL(16, 208, 7), // "oldSize"
QT_MOC_LITERAL(17, 216, 7), // "newSize"
QT_MOC_LITERAL(18, 224, 10), // "rowResized"
QT_MOC_LITERAL(19, 235, 3), // "row"
QT_MOC_LITERAL(20, 239, 20), // "columnResizeFinished"
QT_MOC_LITERAL(21, 260, 17), // "rowResizeFinished"
QT_MOC_LITERAL(22, 278, 12), // "modelUpdated"
QT_MOC_LITERAL(23, 291, 7), // "topLeft"
QT_MOC_LITERAL(24, 299, 11) // "bottomRight"

    },
    "SpreadsheetGui::SheetView\0"
    "editingFinishedWithKey\0\0key\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "confirmAliasChanged\0text\0aliasChanged\0"
    "confirmContentChanged\0currentChanged\0"
    "QModelIndex\0current\0previous\0columnResized\0"
    "col\0oldSize\0newSize\0rowResized\0row\0"
    "columnResizeFinished\0rowResizeFinished\0"
    "modelUpdated\0topLeft\0bottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpreadsheetGui__SheetView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x09 /* Protected */,
       6,    1,   69,    2, 0x09 /* Protected */,
       8,    1,   72,    2, 0x09 /* Protected */,
       9,    1,   75,    2, 0x09 /* Protected */,
      10,    2,   78,    2, 0x09 /* Protected */,
      14,    3,   83,    2, 0x09 /* Protected */,
      18,    3,   90,    2, 0x09 /* Protected */,
      20,    0,   97,    2, 0x09 /* Protected */,
      21,    0,   98,    2, 0x09 /* Protected */,
      22,    2,   99,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   19,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   23,   24,

       0        // eod
};

void SpreadsheetGui::SheetView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SheetView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editingFinishedWithKey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 1: _t->confirmAliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->aliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->confirmContentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->columnResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->rowResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->columnResizeFinished(); break;
        case 8: _t->rowResizeFinished(); break;
        case 9: _t->modelUpdated((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpreadsheetGui::SheetView::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::MDIView::staticMetaObject>(),
    qt_meta_stringdata_SpreadsheetGui__SheetView.data,
    qt_meta_data_SpreadsheetGui__SheetView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpreadsheetGui::SheetView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadsheetGui::SheetView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetGui__SheetView.stringdata0))
        return static_cast<void*>(this);
    return Gui::MDIView::qt_metacast(_clname);
}

int SpreadsheetGui::SheetView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::MDIView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
