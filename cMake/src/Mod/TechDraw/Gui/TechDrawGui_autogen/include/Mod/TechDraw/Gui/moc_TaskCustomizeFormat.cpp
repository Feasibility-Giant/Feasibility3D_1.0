/****************************************************************************
** Meta object code from reading C++ file 'TaskCustomizeFormat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/TaskCustomizeFormat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskCustomizeFormat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__TaskCustomizeFormat_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskCustomizeFormat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskCustomizeFormat_t qt_meta_stringdata_TechDrawGui__TaskCustomizeFormat = {
    {
QT_MOC_LITERAL(0, 0, 32), // "TechDrawGui::TaskCustomizeFormat"
QT_MOC_LITERAL(1, 33, 15), // "onSymbolClicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 15) // "onFormatChanged"

    },
    "TechDrawGui::TaskCustomizeFormat\0"
    "onSymbolClicked\0\0onFormatChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskCustomizeFormat[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TechDrawGui::TaskCustomizeFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskCustomizeFormat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSymbolClicked(); break;
        case 1: _t->onFormatChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskCustomizeFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskCustomizeFormat.data,
    qt_meta_data_TechDrawGui__TaskCustomizeFormat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskCustomizeFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskCustomizeFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskCustomizeFormat.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskCustomizeFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_TechDrawGui__TaskDlgCustomizeFormat_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskDlgCustomizeFormat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskDlgCustomizeFormat_t qt_meta_stringdata_TechDrawGui__TaskDlgCustomizeFormat = {
    {
QT_MOC_LITERAL(0, 0, 35) // "TechDrawGui::TaskDlgCustomize..."

    },
    "TechDrawGui::TaskDlgCustomizeFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskDlgCustomizeFormat[] = {

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

void TechDrawGui::TaskDlgCustomizeFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskDlgCustomizeFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskDlgCustomizeFormat.data,
    qt_meta_data_TechDrawGui__TaskDlgCustomizeFormat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskDlgCustomizeFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgCustomizeFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskDlgCustomizeFormat.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgCustomizeFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
