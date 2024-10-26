/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintPressure.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTPRESSURE_H
#define UI_TASKFEMCONSTRAINTPRESSURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintPressure
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelParameter1;
    Gui::QuantitySpinBox *if_pressure;
    QCheckBox *checkBoxReverse;

    void setupUi(QWidget *TaskFemConstraintPressure)
    {
        if (TaskFemConstraintPressure->objectName().isEmpty())
            TaskFemConstraintPressure->setObjectName(QString::fromUtf8("TaskFemConstraintPressure"));
        TaskFemConstraintPressure->resize(300, 253);
        TaskFemConstraintPressure->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintPressure);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info = new QLabel(TaskFemConstraintPressure);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintPressure);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintPressure);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout->addLayout(hLayout1);

        lw_references = new QListWidget(TaskFemConstraintPressure);
        lw_references->setObjectName(QString::fromUtf8("lw_references"));

        verticalLayout->addWidget(lw_references);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelParameter1 = new QLabel(TaskFemConstraintPressure);
        labelParameter1->setObjectName(QString::fromUtf8("labelParameter1"));

        horizontalLayout_2->addWidget(labelParameter1);

        if_pressure = new Gui::QuantitySpinBox(TaskFemConstraintPressure);
        if_pressure->setObjectName(QString::fromUtf8("if_pressure"));
        if_pressure->setProperty("unit", QVariant(QString::fromUtf8("")));
        if_pressure->setMinimum(0.000000000000000);

        horizontalLayout_2->addWidget(if_pressure);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBoxReverse = new QCheckBox(TaskFemConstraintPressure);
        checkBoxReverse->setObjectName(QString::fromUtf8("checkBoxReverse"));

        verticalLayout->addWidget(checkBoxReverse);


        retranslateUi(TaskFemConstraintPressure);

        QMetaObject::connectSlotsByName(TaskFemConstraintPressure);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintPressure)
    {
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintPressure", "Click Add or Remove and select face(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintPressure", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintPressure", "Remove", nullptr));
        labelParameter1->setText(QCoreApplication::translate("TaskFemConstraintPressure", "Pressure", nullptr));
        checkBoxReverse->setText(QCoreApplication::translate("TaskFemConstraintPressure", "Reverse Direction", nullptr));
        (void)TaskFemConstraintPressure;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintPressure: public Ui_TaskFemConstraintPressure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTPRESSURE_H
