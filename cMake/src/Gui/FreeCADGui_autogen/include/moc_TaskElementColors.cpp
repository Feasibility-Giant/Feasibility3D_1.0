/****************************************************************************
** Meta object code from reading C++ file 'TaskElementColors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/TaskElementColors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskElementColors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__ElementColors_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__ElementColors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__ElementColors_t qt_meta_stringdata_Gui__ElementColors = {
    {
QT_MOC_LITERAL(0, 0, 18) // "Gui::ElementColors"

    },
    "Gui::ElementColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__ElementColors[] = {

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

void Gui::ElementColors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::ElementColors::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Gui__ElementColors.data,
    qt_meta_data_Gui__ElementColors,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::ElementColors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::ElementColors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ElementColors.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SelectionObserver"))
        return static_cast< SelectionObserver*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::ElementColors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__TaskElementColors_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__TaskElementColors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__TaskElementColors_t qt_meta_stringdata_Gui__TaskElementColors = {
    {
QT_MOC_LITERAL(0, 0, 22) // "Gui::TaskElementColors"

    },
    "Gui::TaskElementColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__TaskElementColors[] = {

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

void Gui::TaskElementColors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::TaskElementColors::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__TaskElementColors.data,
    qt_meta_data_Gui__TaskElementColors,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::TaskElementColors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskElementColors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TaskElementColors.stringdata0))
        return static_cast<void*>(this);
    return TaskView::TaskDialog::qt_metacast(_clname);
}

int Gui::TaskElementColors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
