/****************************************************************************
** Meta object code from reading C++ file 'SheetTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Spreadsheet/Gui/SheetTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SheetTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpreadsheetGui__SheetViewHeader_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpreadsheetGui__SheetViewHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpreadsheetGui__SheetViewHeader_t qt_meta_stringdata_SpreadsheetGui__SheetViewHeader = {
    {
QT_MOC_LITERAL(0, 0, 31), // "SpreadsheetGui::SheetViewHeader"
QT_MOC_LITERAL(1, 32, 14), // "resizeFinished"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "SpreadsheetGui::SheetViewHeader\0"
    "resizeFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpreadsheetGui__SheetViewHeader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void SpreadsheetGui::SheetViewHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SheetViewHeader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SheetViewHeader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SheetViewHeader::resizeFinished)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SpreadsheetGui::SheetViewHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QHeaderView::staticMetaObject>(),
    qt_meta_stringdata_SpreadsheetGui__SheetViewHeader.data,
    qt_meta_data_SpreadsheetGui__SheetViewHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpreadsheetGui::SheetViewHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadsheetGui::SheetViewHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetGui__SheetViewHeader.stringdata0))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int SpreadsheetGui::SheetViewHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SpreadsheetGui::SheetViewHeader::resizeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SpreadsheetGui__SheetTableView_t {
    QByteArrayData data[30];
    char stringdata0[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpreadsheetGui__SheetTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpreadsheetGui__SheetTableView_t qt_meta_stringdata_SpreadsheetGui__SheetTableView = {
    {
QT_MOC_LITERAL(0, 0, 30), // "SpreadsheetGui::SheetTableView"
QT_MOC_LITERAL(1, 31, 10), // "mergeCells"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "splitCell"
QT_MOC_LITERAL(4, 53, 15), // "deleteSelection"
QT_MOC_LITERAL(5, 69, 13), // "copySelection"
QT_MOC_LITERAL(6, 83, 12), // "cutSelection"
QT_MOC_LITERAL(7, 96, 14), // "pasteClipboard"
QT_MOC_LITERAL(8, 111, 18), // "finishEditWithMove"
QT_MOC_LITERAL(9, 130, 10), // "keyPressed"
QT_MOC_LITERAL(10, 141, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(11, 163, 9), // "modifiers"
QT_MOC_LITERAL(12, 173, 15), // "handleTabMotion"
QT_MOC_LITERAL(13, 189, 20), // "ModifyBlockSelection"
QT_MOC_LITERAL(14, 210, 9), // "targetRow"
QT_MOC_LITERAL(15, 220, 12), // "targetColumn"
QT_MOC_LITERAL(16, 233, 10), // "commitData"
QT_MOC_LITERAL(17, 244, 8), // "QWidget*"
QT_MOC_LITERAL(18, 253, 6), // "editor"
QT_MOC_LITERAL(19, 260, 14), // "updateCellSpan"
QT_MOC_LITERAL(20, 275, 10), // "insertRows"
QT_MOC_LITERAL(21, 286, 15), // "insertRowsAfter"
QT_MOC_LITERAL(22, 302, 10), // "removeRows"
QT_MOC_LITERAL(23, 313, 13), // "insertColumns"
QT_MOC_LITERAL(24, 327, 18), // "insertColumnsAfter"
QT_MOC_LITERAL(25, 346, 13), // "removeColumns"
QT_MOC_LITERAL(26, 360, 14), // "cellProperties"
QT_MOC_LITERAL(27, 375, 11), // "onRecompute"
QT_MOC_LITERAL(28, 387, 6), // "onBind"
QT_MOC_LITERAL(29, 394, 11) // "onConfSetup"

    },
    "SpreadsheetGui::SheetTableView\0"
    "mergeCells\0\0splitCell\0deleteSelection\0"
    "copySelection\0cutSelection\0pasteClipboard\0"
    "finishEditWithMove\0keyPressed\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "handleTabMotion\0ModifyBlockSelection\0"
    "targetRow\0targetColumn\0commitData\0"
    "QWidget*\0editor\0updateCellSpan\0"
    "insertRows\0insertRowsAfter\0removeRows\0"
    "insertColumns\0insertColumnsAfter\0"
    "removeColumns\0cellProperties\0onRecompute\0"
    "onBind\0onConfSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpreadsheetGui__SheetTableView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x0a /* Public */,
       3,    0,  120,    2, 0x0a /* Public */,
       4,    0,  121,    2, 0x0a /* Public */,
       5,    0,  122,    2, 0x0a /* Public */,
       6,    0,  123,    2, 0x0a /* Public */,
       7,    0,  124,    2, 0x0a /* Public */,
       8,    3,  125,    2, 0x0a /* Public */,
       8,    2,  132,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  137,    2, 0x0a /* Public */,
      16,    1,  142,    2, 0x09 /* Protected */,
      19,    0,  145,    2, 0x09 /* Protected */,
      20,    0,  146,    2, 0x09 /* Protected */,
      21,    0,  147,    2, 0x09 /* Protected */,
      22,    0,  148,    2, 0x09 /* Protected */,
      23,    0,  149,    2, 0x09 /* Protected */,
      24,    0,  150,    2, 0x09 /* Protected */,
      25,    0,  151,    2, 0x09 /* Protected */,
      26,    0,  152,    2, 0x09 /* Protected */,
      27,    0,  153,    2, 0x09 /* Protected */,
      28,    0,  154,    2, 0x09 /* Protected */,
      29,    0,  155,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, QMetaType::Bool,    9,   11,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
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

void SpreadsheetGui::SheetTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SheetTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mergeCells(); break;
        case 1: _t->splitCell(); break;
        case 2: _t->deleteSelection(); break;
        case 3: _t->copySelection(); break;
        case 4: _t->cutSelection(); break;
        case 5: _t->pasteClipboard(); break;
        case 6: _t->finishEditWithMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->finishEditWithMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 8: _t->ModifyBlockSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->commitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 10: _t->updateCellSpan(); break;
        case 11: _t->insertRows(); break;
        case 12: _t->insertRowsAfter(); break;
        case 13: _t->removeRows(); break;
        case 14: _t->insertColumns(); break;
        case 15: _t->insertColumnsAfter(); break;
        case 16: _t->removeColumns(); break;
        case 17: _t->cellProperties(); break;
        case 18: _t->onRecompute(); break;
        case 19: _t->onBind(); break;
        case 20: _t->onConfSetup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpreadsheetGui::SheetTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_SpreadsheetGui__SheetTableView.data,
    qt_meta_data_SpreadsheetGui__SheetTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpreadsheetGui::SheetTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadsheetGui::SheetTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetGui__SheetTableView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int SpreadsheetGui::SheetTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
