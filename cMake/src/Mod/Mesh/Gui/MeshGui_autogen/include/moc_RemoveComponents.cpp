/****************************************************************************
** Meta object code from reading C++ file 'RemoveComponents.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Mesh/Gui/RemoveComponents.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoveComponents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeshGui__RemoveComponents_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshGui__RemoveComponents_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshGui__RemoveComponents_t qt_meta_stringdata_MeshGui__RemoveComponents = {
    {
QT_MOC_LITERAL(0, 0, 25) // "MeshGui::RemoveComponents"

    },
    "MeshGui::RemoveComponents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshGui__RemoveComponents[] = {

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

void MeshGui::RemoveComponents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MeshGui::RemoveComponents::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MeshGui__RemoveComponents.data,
    qt_meta_data_MeshGui__RemoveComponents,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshGui::RemoveComponents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::RemoveComponents::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__RemoveComponents.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MeshGui::RemoveComponents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MeshGui__RemoveComponentsDialog_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshGui__RemoveComponentsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshGui__RemoveComponentsDialog_t qt_meta_stringdata_MeshGui__RemoveComponentsDialog = {
    {
QT_MOC_LITERAL(0, 0, 31), // "MeshGui::RemoveComponentsDialog"
QT_MOC_LITERAL(1, 32, 7), // "clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 58, 3) // "btn"

    },
    "MeshGui::RemoveComponentsDialog\0clicked\0"
    "\0QAbstractButton*\0btn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshGui__RemoveComponentsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MeshGui::RemoveComponentsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoveComponentsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MeshGui::RemoveComponentsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MeshGui__RemoveComponentsDialog.data,
    qt_meta_data_MeshGui__RemoveComponentsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshGui::RemoveComponentsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::RemoveComponentsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__RemoveComponentsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MeshGui::RemoveComponentsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_MeshGui__TaskRemoveComponents_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshGui__TaskRemoveComponents_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshGui__TaskRemoveComponents_t qt_meta_stringdata_MeshGui__TaskRemoveComponents = {
    {
QT_MOC_LITERAL(0, 0, 29) // "MeshGui::TaskRemoveComponents"

    },
    "MeshGui::TaskRemoveComponents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshGui__TaskRemoveComponents[] = {

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

void MeshGui::TaskRemoveComponents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MeshGui::TaskRemoveComponents::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_MeshGui__TaskRemoveComponents.data,
    qt_meta_data_MeshGui__TaskRemoveComponents,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshGui::TaskRemoveComponents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::TaskRemoveComponents::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__TaskRemoveComponents.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int MeshGui::TaskRemoveComponents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
