/****************************************************************************
** Meta object code from reading C++ file 'TaskSectionView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/TaskSectionView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSectionView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__TaskSectionView_t {
    QByteArrayData data[20];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskSectionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskSectionView_t qt_meta_stringdata_TechDrawGui__TaskSectionView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "TechDrawGui::TaskSectionView"
QT_MOC_LITERAL(1, 29, 11), // "onUpClicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "onDownClicked"
QT_MOC_LITERAL(4, 56, 13), // "onLeftClicked"
QT_MOC_LITERAL(5, 70, 14), // "onRightClicked"
QT_MOC_LITERAL(6, 85, 19), // "onIdentifierChanged"
QT_MOC_LITERAL(7, 105, 14), // "onScaleChanged"
QT_MOC_LITERAL(8, 120, 10), // "onXChanged"
QT_MOC_LITERAL(9, 131, 10), // "onYChanged"
QT_MOC_LITERAL(10, 142, 10), // "onZChanged"
QT_MOC_LITERAL(11, 153, 16), // "scaleTypeChanged"
QT_MOC_LITERAL(12, 170, 5), // "index"
QT_MOC_LITERAL(13, 176, 17), // "liveUpdateClicked"
QT_MOC_LITERAL(14, 194, 16), // "updateNowClicked"
QT_MOC_LITERAL(15, 211, 15), // "slotChangeAngle"
QT_MOC_LITERAL(16, 227, 8), // "newAngle"
QT_MOC_LITERAL(17, 236, 24), // "slotViewDirectionChanged"
QT_MOC_LITERAL(18, 261, 14), // "Base::Vector3d"
QT_MOC_LITERAL(19, 276, 12) // "newDirection"

    },
    "TechDrawGui::TaskSectionView\0onUpClicked\0"
    "\0onDownClicked\0onLeftClicked\0"
    "onRightClicked\0onIdentifierChanged\0"
    "onScaleChanged\0onXChanged\0onYChanged\0"
    "onZChanged\0scaleTypeChanged\0index\0"
    "liveUpdateClicked\0updateNowClicked\0"
    "slotChangeAngle\0newAngle\0"
    "slotViewDirectionChanged\0Base::Vector3d\0"
    "newDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskSectionView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x09 /* Protected */,
       3,    0,   85,    2, 0x09 /* Protected */,
       4,    0,   86,    2, 0x09 /* Protected */,
       5,    0,   87,    2, 0x09 /* Protected */,
       6,    0,   88,    2, 0x09 /* Protected */,
       7,    0,   89,    2, 0x09 /* Protected */,
       8,    0,   90,    2, 0x09 /* Protected */,
       9,    0,   91,    2, 0x09 /* Protected */,
      10,    0,   92,    2, 0x09 /* Protected */,
      11,    1,   93,    2, 0x09 /* Protected */,
      13,    0,   96,    2, 0x09 /* Protected */,
      14,    0,   97,    2, 0x09 /* Protected */,
      15,    1,   98,    2, 0x09 /* Protected */,
      17,    1,  101,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void TechDrawGui::TaskSectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskSectionView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpClicked(); break;
        case 1: _t->onDownClicked(); break;
        case 2: _t->onLeftClicked(); break;
        case 3: _t->onRightClicked(); break;
        case 4: _t->onIdentifierChanged(); break;
        case 5: _t->onScaleChanged(); break;
        case 6: _t->onXChanged(); break;
        case 7: _t->onYChanged(); break;
        case 8: _t->onZChanged(); break;
        case 9: _t->scaleTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->liveUpdateClicked(); break;
        case 11: _t->updateNowClicked(); break;
        case 12: _t->slotChangeAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->slotViewDirectionChanged((*reinterpret_cast< Base::Vector3d(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskSectionView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskSectionView.data,
    qt_meta_data_TechDrawGui__TaskSectionView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskSectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskSectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskSectionView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskSectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
struct qt_meta_stringdata_TechDrawGui__TaskDlgSectionView_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskDlgSectionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskDlgSectionView_t qt_meta_stringdata_TechDrawGui__TaskDlgSectionView = {
    {
QT_MOC_LITERAL(0, 0, 31) // "TechDrawGui::TaskDlgSectionView"

    },
    "TechDrawGui::TaskDlgSectionView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskDlgSectionView[] = {

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

void TechDrawGui::TaskDlgSectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskDlgSectionView::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskDlgSectionView.data,
    qt_meta_data_TechDrawGui__TaskDlgSectionView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskDlgSectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgSectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskDlgSectionView.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgSectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
