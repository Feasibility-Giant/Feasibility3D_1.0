/****************************************************************************
** Meta object code from reading C++ file 'TaskComplexSection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/TaskComplexSection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskComplexSection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__TaskComplexSection_t {
    QByteArrayData data[19];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskComplexSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskComplexSection_t qt_meta_stringdata_TechDrawGui__TaskComplexSection = {
    {
QT_MOC_LITERAL(0, 0, 31), // "TechDrawGui::TaskComplexSection"
QT_MOC_LITERAL(1, 32, 35), // "onSectionObjectsUseSelectionC..."
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 35), // "onProfileObjectsUseSelectionC..."
QT_MOC_LITERAL(4, 105, 11), // "onUpClicked"
QT_MOC_LITERAL(5, 117, 13), // "onDownClicked"
QT_MOC_LITERAL(6, 131, 13), // "onLeftClicked"
QT_MOC_LITERAL(7, 145, 14), // "onRightClicked"
QT_MOC_LITERAL(8, 160, 19), // "onIdentifierChanged"
QT_MOC_LITERAL(9, 180, 14), // "onScaleChanged"
QT_MOC_LITERAL(10, 195, 16), // "scaleTypeChanged"
QT_MOC_LITERAL(11, 212, 5), // "index"
QT_MOC_LITERAL(12, 218, 17), // "liveUpdateClicked"
QT_MOC_LITERAL(13, 236, 16), // "updateNowClicked"
QT_MOC_LITERAL(14, 253, 15), // "slotChangeAngle"
QT_MOC_LITERAL(15, 269, 8), // "newAngle"
QT_MOC_LITERAL(16, 278, 24), // "slotViewDirectionChanged"
QT_MOC_LITERAL(17, 303, 14), // "Base::Vector3d"
QT_MOC_LITERAL(18, 318, 12) // "newDirection"

    },
    "TechDrawGui::TaskComplexSection\0"
    "onSectionObjectsUseSelectionClicked\0"
    "\0onProfileObjectsUseSelectionClicked\0"
    "onUpClicked\0onDownClicked\0onLeftClicked\0"
    "onRightClicked\0onIdentifierChanged\0"
    "onScaleChanged\0scaleTypeChanged\0index\0"
    "liveUpdateClicked\0updateNowClicked\0"
    "slotChangeAngle\0newAngle\0"
    "slotViewDirectionChanged\0Base::Vector3d\0"
    "newDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskComplexSection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x09 /* Protected */,
       3,    0,   80,    2, 0x09 /* Protected */,
       4,    0,   81,    2, 0x09 /* Protected */,
       5,    0,   82,    2, 0x09 /* Protected */,
       6,    0,   83,    2, 0x09 /* Protected */,
       7,    0,   84,    2, 0x09 /* Protected */,
       8,    0,   85,    2, 0x09 /* Protected */,
       9,    0,   86,    2, 0x09 /* Protected */,
      10,    1,   87,    2, 0x09 /* Protected */,
      12,    0,   90,    2, 0x09 /* Protected */,
      13,    0,   91,    2, 0x09 /* Protected */,
      14,    1,   92,    2, 0x09 /* Protected */,
      16,    1,   95,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void TechDrawGui::TaskComplexSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskComplexSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSectionObjectsUseSelectionClicked(); break;
        case 1: _t->onProfileObjectsUseSelectionClicked(); break;
        case 2: _t->onUpClicked(); break;
        case 3: _t->onDownClicked(); break;
        case 4: _t->onLeftClicked(); break;
        case 5: _t->onRightClicked(); break;
        case 6: _t->onIdentifierChanged(); break;
        case 7: _t->onScaleChanged(); break;
        case 8: _t->scaleTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->liveUpdateClicked(); break;
        case 10: _t->updateNowClicked(); break;
        case 11: _t->slotChangeAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->slotViewDirectionChanged((*reinterpret_cast< Base::Vector3d(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskComplexSection::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskComplexSection.data,
    qt_meta_data_TechDrawGui__TaskComplexSection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskComplexSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskComplexSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskComplexSection.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::TaskComplexSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_TechDrawGui__TaskDlgComplexSection_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__TaskDlgComplexSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__TaskDlgComplexSection_t qt_meta_stringdata_TechDrawGui__TaskDlgComplexSection = {
    {
QT_MOC_LITERAL(0, 0, 34) // "TechDrawGui::TaskDlgComplexSe..."

    },
    "TechDrawGui::TaskDlgComplexSection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__TaskDlgComplexSection[] = {

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

void TechDrawGui::TaskDlgComplexSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::TaskDlgComplexSection::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__TaskDlgComplexSection.data,
    qt_meta_data_TechDrawGui__TaskDlgComplexSection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::TaskDlgComplexSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::TaskDlgComplexSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__TaskDlgComplexSection.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int TechDrawGui::TaskDlgComplexSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
