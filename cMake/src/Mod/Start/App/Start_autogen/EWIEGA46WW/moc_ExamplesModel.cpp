/****************************************************************************
** Meta object code from reading C++ file 'ExamplesModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Start/App/ExamplesModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExamplesModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Start__ExamplesModel_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Start__ExamplesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Start__ExamplesModel_t qt_meta_stringdata_Start__ExamplesModel = {
    {
QT_MOC_LITERAL(0, 0, 20) // "Start::ExamplesModel"

    },
    "Start::ExamplesModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Start__ExamplesModel[] = {

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

void Start::ExamplesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Start::ExamplesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<DisplayedFilesModel::staticMetaObject>(),
    qt_meta_stringdata_Start__ExamplesModel.data,
    qt_meta_data_Start__ExamplesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Start::ExamplesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Start::ExamplesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Start__ExamplesModel.stringdata0))
        return static_cast<void*>(this);
    return DisplayedFilesModel::qt_metacast(_clname);
}

int Start::ExamplesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DisplayedFilesModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
