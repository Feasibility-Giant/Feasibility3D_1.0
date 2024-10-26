/****************************************************************************
** Meta object code from reading C++ file 'TaskLeaderLine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/TaskLeaderLine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskLeaderLine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__TaskLeaderLine_t {
    QByteArrayData data[16];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskLeaderLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskLeaderLine_t qt_meta_stringdata_TechDrawGui__TaskLeaderLine = {
    {
QT_MOC_LITERAL(0, 0, 27), // "TechDrawGui::TaskLeaderLine"
QT_MOC_LITERAL(1, 28, 16), // "onTrackerClicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "clicked"
QT_MOC_LITERAL(4, 54, 19), // "onCancelEditClicked"
QT_MOC_LITERAL(5, 74, 17), // "onTrackerFinished"
QT_MOC_LITERAL(6, 92, 20), // "std::vector<QPointF>"
QT_MOC_LITERAL(7, 113, 3), // "pts"
QT_MOC_LITERAL(8, 117, 21), // "TechDrawGui::QGIView*"
QT_MOC_LITERAL(9, 139, 8), // "qgParent"
QT_MOC_LITERAL(10, 148, 19), // "onPointEditComplete"
QT_MOC_LITERAL(11, 168, 20), // "onStartSymbolChanged"
QT_MOC_LITERAL(12, 189, 18), // "onEndSymbolChanged"
QT_MOC_LITERAL(13, 208, 14), // "onColorChanged"
QT_MOC_LITERAL(14, 223, 18), // "onLineWidthChanged"
QT_MOC_LITERAL(15, 242, 18) // "onLineStyleChanged"

    },
    "TechDrawGui::TaskLeaderLine\0"
    "onTrackerClicked\0\0clicked\0onCancelEditClicked\0"
    "onTrackerFinished\0std::vector<QPointF>\0"
    "pts\0TechDrawGui::QGIView*\0qgParent\0"
    "onPointEditComplete\0onStartSymbolChanged\0"
    "onEndSymbolChanged\0onColorChanged\0"
    "onLineWidthChanged\0onLineStyleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskLeaderLine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       5,    2,   65,    2, 0x0a /* Public */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,
      14,    0,   74,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TechDrawGui::TaskLeaderLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskLeaderLine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTrackerClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onCancelEditClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onTrackerFinished((*reinterpret_cast< std::vector<QPointF>(*)>(_a[1])),(*reinterpret_cast< TechDrawGui::QGIView*(*)>(_a[2]))); break;
        case 3: _t->onPointEditComplete(); break;
        case 4: _t->onStartSymbolChanged(); break;
        case 5: _t->onEndSymbolChanged(); break;
        case 6: _t->onColorChanged(); break;
        case 7: _t->onLineWidthChanged(); break;
        case 8: _t->onLineStyleChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskLeaderLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskLeaderLine.data,
    qt_meta_data_TechDrawGui__TaskLeaderLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskLeaderLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskLeaderLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskLeaderLine.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskLeaderLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_TechDrawGui__TaskDlgLeaderLine_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskDlgLeaderLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskDlgLeaderLine_t qt_meta_stringdata_TechDrawGui__TaskDlgLeaderLine = {
    {
QT_MOC_LITERAL(0, 0, 30) // "TechDrawGui::TaskDlgLeaderLine"

    },
    "TechDrawGui::TaskDlgLeaderLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskDlgLeaderLine[] = {

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

void TechDrawGui::TaskDlgLeaderLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskDlgLeaderLine::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskDlgLeaderLine.data,
    qt_meta_data_TechDrawGui__TaskDlgLeaderLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskDlgLeaderLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgLeaderLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskDlgLeaderLine.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgLeaderLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
