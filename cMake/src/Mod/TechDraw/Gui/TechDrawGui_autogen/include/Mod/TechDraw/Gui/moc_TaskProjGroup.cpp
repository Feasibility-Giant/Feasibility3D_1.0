/****************************************************************************
** Meta object code from reading C++ file 'TaskProjGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/TaskProjGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskProjGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__TaskProjGroup_t {
    QByteArrayData data[15];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskProjGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskProjGroup_t qt_meta_stringdata_TechDrawGui__TaskProjGroup = {
    {
QT_MOC_LITERAL(0, 0, 26), // "TechDrawGui::TaskProjGroup"
QT_MOC_LITERAL(1, 27, 11), // "viewToggled"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "toggle"
QT_MOC_LITERAL(4, 47, 19), // "rotateButtonClicked"
QT_MOC_LITERAL(5, 67, 22), // "customDirectionClicked"
QT_MOC_LITERAL(6, 90, 21), // "projectionTypeChanged"
QT_MOC_LITERAL(7, 112, 5), // "qText"
QT_MOC_LITERAL(8, 118, 16), // "scaleTypeChanged"
QT_MOC_LITERAL(9, 135, 5), // "index"
QT_MOC_LITERAL(10, 141, 21), // "AutoDistributeClicked"
QT_MOC_LITERAL(11, 163, 7), // "clicked"
QT_MOC_LITERAL(12, 171, 14), // "spacingChanged"
QT_MOC_LITERAL(13, 186, 20), // "scaleManuallyChanged"
QT_MOC_LITERAL(14, 207, 6) // "unused"

    },
    "TechDrawGui::TaskProjGroup\0viewToggled\0"
    "\0toggle\0rotateButtonClicked\0"
    "customDirectionClicked\0projectionTypeChanged\0"
    "qText\0scaleTypeChanged\0index\0"
    "AutoDistributeClicked\0clicked\0"
    "spacingChanged\0scaleManuallyChanged\0"
    "unused"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskProjGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x09 /* Protected */,
       4,    0,   57,    2, 0x09 /* Protected */,
       5,    0,   58,    2, 0x09 /* Protected */,
       6,    1,   59,    2, 0x09 /* Protected */,
       8,    1,   62,    2, 0x09 /* Protected */,
      10,    1,   65,    2, 0x09 /* Protected */,
      12,    0,   68,    2, 0x09 /* Protected */,
      13,    1,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void TechDrawGui::TaskProjGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskProjGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rotateButtonClicked(); break;
        case 2: _t->customDirectionClicked(); break;
        case 3: _t->projectionTypeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->scaleTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->AutoDistributeClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->spacingChanged(); break;
        case 7: _t->scaleManuallyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskProjGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskProjGroup.data,
    qt_meta_data_TechDrawGui__TaskProjGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskProjGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskProjGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskProjGroup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskProjGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_TechDrawGui__TaskDlgProjGroup_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskDlgProjGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskDlgProjGroup_t qt_meta_stringdata_TechDrawGui__TaskDlgProjGroup = {
    {
QT_MOC_LITERAL(0, 0, 29) // "TechDrawGui::TaskDlgProjGroup"

    },
    "TechDrawGui::TaskDlgProjGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskDlgProjGroup[] = {

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

void TechDrawGui::TaskDlgProjGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskDlgProjGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskDlgProjGroup.data,
    qt_meta_data_TechDrawGui__TaskDlgProjGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskDlgProjGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgProjGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskDlgProjGroup.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgProjGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TechDrawGui__DirectionEditDialog_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__DirectionEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__DirectionEditDialog_t qt_meta_stringdata_TechDrawGui__DirectionEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 32) // "TechDrawGui::DirectionEditDialog"

    },
    "TechDrawGui::DirectionEditDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__DirectionEditDialog[] = {

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

void TechDrawGui::DirectionEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::DirectionEditDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__DirectionEditDialog.data,
    qt_meta_data_TechDrawGui__DirectionEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::DirectionEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::DirectionEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__DirectionEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TechDrawGui::DirectionEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
