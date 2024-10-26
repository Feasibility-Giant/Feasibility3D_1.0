/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintInitialTemperature.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTINITIALTEMPERATURE_H
#define UI_TASKFEMCONSTRAINTINITIALTEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintInitialTemperature
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    Gui::QuantitySpinBox *if_temperature;

    void setupUi(QWidget *TaskFemConstraintInitialTemperature)
    {
        if (TaskFemConstraintInitialTemperature->objectName().isEmpty())
            TaskFemConstraintInitialTemperature->setObjectName(QString::fromUtf8("TaskFemConstraintInitialTemperature"));
        TaskFemConstraintInitialTemperature->resize(268, 57);
        verticalLayout = new QVBoxLayout(TaskFemConstraintInitialTemperature);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TaskFemConstraintInitialTemperature);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        if_temperature = new Gui::QuantitySpinBox(TaskFemConstraintInitialTemperature);
        if_temperature->setObjectName(QString::fromUtf8("if_temperature"));
        if_temperature->setProperty("unit", QVariant(QString::fromUtf8("K")));
        if_temperature->setMinimum(0.000000000000000);

        verticalLayout->addWidget(if_temperature);


        retranslateUi(TaskFemConstraintInitialTemperature);

        QMetaObject::connectSlotsByName(TaskFemConstraintInitialTemperature);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintInitialTemperature)
    {
        TaskFemConstraintInitialTemperature->setWindowTitle(QCoreApplication::translate("TaskFemConstraintInitialTemperature", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TaskFemConstraintInitialTemperature", "Insert component's initial temperature:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintInitialTemperature: public Ui_TaskFemConstraintInitialTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTINITIALTEMPERATURE_H
