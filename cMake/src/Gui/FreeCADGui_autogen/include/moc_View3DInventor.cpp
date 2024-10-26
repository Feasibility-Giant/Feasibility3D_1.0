/****************************************************************************
** Meta object code from reading C++ file 'View3DInventor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/View3DInventor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'View3DInventor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__GLOverlayWidget_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__GLOverlayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__GLOverlayWidget_t qt_meta_stringdata_Gui__GLOverlayWidget = {
    {
QT_MOC_LITERAL(0, 0, 20) // "Gui::GLOverlayWidget"

    },
    "Gui::GLOverlayWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__GLOverlayWidget[] = {

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

void Gui::GLOverlayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::GLOverlayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Gui__GLOverlayWidget.data,
    qt_meta_data_Gui__GLOverlayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::GLOverlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::GLOverlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__GLOverlayWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::GLOverlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__View3DInventor_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__View3DInventor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__View3DInventor_t qt_meta_stringdata_Gui__View3DInventor = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Gui::View3DInventor"
QT_MOC_LITERAL(1, 20, 17), // "setOverrideCursor"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "restoreOverrideCursor"
QT_MOC_LITERAL(4, 61, 4), // "dump"
QT_MOC_LITERAL(5, 66, 11), // "const char*"
QT_MOC_LITERAL(6, 78, 8), // "filename"
QT_MOC_LITERAL(7, 87, 11), // "onlyVisible"
QT_MOC_LITERAL(8, 99, 13) // "stopAnimating"

    },
    "Gui::View3DInventor\0setOverrideCursor\0"
    "\0restoreOverrideCursor\0dump\0const char*\0"
    "filename\0onlyVisible\0stopAnimating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__View3DInventor[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       3,    0,   42,    2, 0x0a /* Public */,
       4,    2,   43,    2, 0x0a /* Public */,
       4,    1,   48,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QCursor,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void Gui::View3DInventor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View3DInventor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setOverrideCursor((*reinterpret_cast< const QCursor(*)>(_a[1]))); break;
        case 1: _t->restoreOverrideCursor(); break;
        case 2: _t->dump((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->dump((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 4: _t->stopAnimating(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::View3DInventor::staticMetaObject = { {
    QMetaObject::SuperData::link<MDIView::staticMetaObject>(),
    qt_meta_stringdata_Gui__View3DInventor.data,
    qt_meta_data_Gui__View3DInventor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::View3DInventor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::View3DInventor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__View3DInventor.stringdata0))
        return static_cast<void*>(this);
    return MDIView::qt_metacast(_clname);
}

int Gui::View3DInventor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
