/****************************************************************************
** Meta object code from reading C++ file 'actiongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/QSint/actionpanel/actiongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actiongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSint__ActionGroup_t {
    QByteArrayData data[15];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSint__ActionGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSint__ActionGroup_t qt_meta_stringdata_QSint__ActionGroup = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QSint::ActionGroup"
QT_MOC_LITERAL(1, 19, 8), // "showHide"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "setExpandable"
QT_MOC_LITERAL(4, 43, 10), // "expandable"
QT_MOC_LITERAL(5, 54, 9), // "setHeader"
QT_MOC_LITERAL(6, 64, 6), // "enable"
QT_MOC_LITERAL(7, 71, 13), // "setHeaderText"
QT_MOC_LITERAL(8, 85, 5), // "title"
QT_MOC_LITERAL(9, 91, 13), // "setHeaderIcon"
QT_MOC_LITERAL(10, 105, 4), // "icon"
QT_MOC_LITERAL(11, 110, 11), // "processHide"
QT_MOC_LITERAL(12, 122, 11), // "processShow"
QT_MOC_LITERAL(13, 134, 6), // "header"
QT_MOC_LITERAL(14, 141, 10) // "headerText"

    },
    "QSint::ActionGroup\0showHide\0\0setExpandable\0"
    "expandable\0setHeader\0enable\0setHeaderText\0"
    "title\0setHeaderIcon\0icon\0processHide\0"
    "processShow\0header\0headerText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSint__ActionGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       3,    0,   63,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   64,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x09 /* Protected */,
      12,    0,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QPixmap,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::QString, 0x00095103,

       0        // eod
};

void QSint::ActionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showHide(); break;
        case 1: _t->setExpandable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setExpandable(); break;
        case 3: _t->setHeader((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setHeader(); break;
        case 5: _t->setHeaderText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setHeaderIcon((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 7: _t->processHide(); break;
        case 8: _t->processShow(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActionGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isExpandable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasHeader(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->headerText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActionGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpandable(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setHeader(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setHeaderText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QSint::ActionGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QSint__ActionGroup.data,
    qt_meta_data_QSint__ActionGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSint::ActionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSint::ActionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSint__ActionGroup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSint::ActionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
