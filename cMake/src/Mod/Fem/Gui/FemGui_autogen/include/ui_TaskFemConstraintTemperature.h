/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintTemperature.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTTEMPERATURE_H
#define UI_TASKFEMCONSTRAINTTEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintTemperature
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;
    QGridLayout *gridLayout;
    QLabel *lbl_constr_type;
    QComboBox *cb_constr_type;
    QLabel *lbl_temperature;
    Gui::QuantitySpinBox *qsb_temperature;
    QLabel *lbl_cflux;
    Gui::QuantitySpinBox *qsb_cflux;

    void setupUi(QWidget *TaskFemConstraintTemperature)
    {
        if (TaskFemConstraintTemperature->objectName().isEmpty())
            TaskFemConstraintTemperature->setObjectName(QString::fromUtf8("TaskFemConstraintTemperature"));
        TaskFemConstraintTemperature->resize(300, 190);
        TaskFemConstraintTemperature->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintTemperature);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info = new QLabel(TaskFemConstraintTemperature);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintTemperature);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintTemperature);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout->addLayout(hLayout1);

        lw_references = new QListWidget(TaskFemConstraintTemperature);
        lw_references->setObjectName(QString::fromUtf8("lw_references"));

        verticalLayout->addWidget(lw_references);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbl_constr_type = new QLabel(TaskFemConstraintTemperature);
        lbl_constr_type->setObjectName(QString::fromUtf8("lbl_constr_type"));

        gridLayout->addWidget(lbl_constr_type, 0, 0, 1, 1);

        cb_constr_type = new QComboBox(TaskFemConstraintTemperature);
        cb_constr_type->setObjectName(QString::fromUtf8("cb_constr_type"));

        gridLayout->addWidget(cb_constr_type, 0, 1, 1, 1);

        lbl_temperature = new QLabel(TaskFemConstraintTemperature);
        lbl_temperature->setObjectName(QString::fromUtf8("lbl_temperature"));

        gridLayout->addWidget(lbl_temperature, 1, 0, 1, 1);

        qsb_temperature = new Gui::QuantitySpinBox(TaskFemConstraintTemperature);
        qsb_temperature->setObjectName(QString::fromUtf8("qsb_temperature"));
        qsb_temperature->setProperty("unit", QVariant(QString::fromUtf8("K")));
        qsb_temperature->setMinimum(0.000000000000000);

        gridLayout->addWidget(qsb_temperature, 1, 1, 1, 1);

        lbl_cflux = new QLabel(TaskFemConstraintTemperature);
        lbl_cflux->setObjectName(QString::fromUtf8("lbl_cflux"));

        gridLayout->addWidget(lbl_cflux, 2, 0, 1, 1);

        qsb_cflux = new Gui::QuantitySpinBox(TaskFemConstraintTemperature);
        qsb_cflux->setObjectName(QString::fromUtf8("qsb_cflux"));
        qsb_cflux->setProperty("unit", QVariant(QString::fromUtf8("mW")));
        qsb_cflux->setMinimum(0.000000000000000);

        gridLayout->addWidget(qsb_cflux, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(TaskFemConstraintTemperature);

        QMetaObject::connectSlotsByName(TaskFemConstraintTemperature);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintTemperature)
    {
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintTemperature", "Click Add or Remove and select geometric element(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintTemperature", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintTemperature", "Remove", nullptr));
        lbl_constr_type->setText(QCoreApplication::translate("TaskFemConstraintTemperature", "Constraint type", nullptr));
        lbl_temperature->setText(QCoreApplication::translate("TaskFemConstraintTemperature", "Temperature", nullptr));
        lbl_cflux->setText(QCoreApplication::translate("TaskFemConstraintTemperature", "Concentrated heat flux", nullptr));
        (void)TaskFemConstraintTemperature;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintTemperature: public Ui_TaskFemConstraintTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTTEMPERATURE_H
