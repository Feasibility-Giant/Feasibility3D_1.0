/****************************************************************************
** Meta object code from reading C++ file 'TaskShapeBinder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskShapeBinder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskShapeBinder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskShapeBinder_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskShapeBinder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskShapeBinder_t qt_meta_stringdata_PartDesignGui__TaskShapeBinder = {
    {
QT_MOC_LITERAL(0, 0, 30) // "PartDesignGui::TaskShapeBinder"

    },
    "PartDesignGui::TaskShapeBinder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskShapeBinder[] = {

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

void PartDesignGui::TaskShapeBinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskShapeBinder::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskShapeBinder.data,
    qt_meta_data_PartDesignGui__TaskShapeBinder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskShapeBinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskShapeBinder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskShapeBinder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int PartDesignGui::TaskShapeBinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartDesignGui__TaskDlgShapeBinder_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgShapeBinder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgShapeBinder_t qt_meta_stringdata_PartDesignGui__TaskDlgShapeBinder = {
    {
QT_MOC_LITERAL(0, 0, 33) // "PartDesignGui::TaskDlgShapeBi..."

    },
    "PartDesignGui::TaskDlgShapeBinder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgShapeBinder[] = {

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

void PartDesignGui::TaskDlgShapeBinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgShapeBinder::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgShapeBinder.data,
    qt_meta_data_PartDesignGui__TaskDlgShapeBinder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgShapeBinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgShapeBinder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgShapeBinder.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgShapeBinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE