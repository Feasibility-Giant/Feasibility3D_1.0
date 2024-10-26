/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraint.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINT_H
#define UI_TASKFEMCONSTRAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraint
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *comboType;
    QPushButton *buttonReference;
    QListWidget *listReferences;
    QHBoxLayout *layoutForce;
    QLabel *labelForce;
    QDoubleSpinBox *spinForce;
    QHBoxLayout *layoutDistance_2;
    QLabel *labelDiameter;
    QDoubleSpinBox *spinDiameter;
    QHBoxLayout *layoutDistance_3;
    QLabel *labelOtherDia;
    QDoubleSpinBox *spinOtherDia;
    QHBoxLayout *layoutDistance_4;
    QLabel *labelCenterDistance;
    QDoubleSpinBox *spinCenterDistance;
    QHBoxLayout *layoutDirection;
    QPushButton *buttonDirection;
    QLineEdit *lineDirection;
    QCheckBox *checkReverse;
    QHBoxLayout *layoutLocation;
    QPushButton *buttonLocation;
    QLineEdit *lineLocation;
    QHBoxLayout *layoutDistance;
    QLabel *labelDistance;
    QDoubleSpinBox *spinDistance;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TaskFemConstraint)
    {
        if (TaskFemConstraint->objectName().isEmpty())
            TaskFemConstraint->setObjectName(QString::fromUtf8("TaskFemConstraint"));
        TaskFemConstraint->resize(300, 377);
        TaskFemConstraint->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraint);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboType = new QComboBox(TaskFemConstraint);
        comboType->setObjectName(QString::fromUtf8("comboType"));

        verticalLayout->addWidget(comboType);

        buttonReference = new QPushButton(TaskFemConstraint);
        buttonReference->setObjectName(QString::fromUtf8("buttonReference"));

        verticalLayout->addWidget(buttonReference);

        listReferences = new QListWidget(TaskFemConstraint);
        listReferences->setObjectName(QString::fromUtf8("listReferences"));

        verticalLayout->addWidget(listReferences);

        layoutForce = new QHBoxLayout();
        layoutForce->setObjectName(QString::fromUtf8("layoutForce"));
        labelForce = new QLabel(TaskFemConstraint);
        labelForce->setObjectName(QString::fromUtf8("labelForce"));

        layoutForce->addWidget(labelForce);

        spinForce = new QDoubleSpinBox(TaskFemConstraint);
        spinForce->setObjectName(QString::fromUtf8("spinForce"));
        spinForce->setMinimum(-99999.000000000000000);
        spinForce->setMaximum(99999.000000000000000);
        spinForce->setValue(500.000000000000000);

        layoutForce->addWidget(spinForce);


        verticalLayout->addLayout(layoutForce);

        layoutDistance_2 = new QHBoxLayout();
        layoutDistance_2->setObjectName(QString::fromUtf8("layoutDistance_2"));
        labelDiameter = new QLabel(TaskFemConstraint);
        labelDiameter->setObjectName(QString::fromUtf8("labelDiameter"));

        layoutDistance_2->addWidget(labelDiameter);

        spinDiameter = new QDoubleSpinBox(TaskFemConstraint);
        spinDiameter->setObjectName(QString::fromUtf8("spinDiameter"));
        spinDiameter->setDecimals(3);
        spinDiameter->setMinimum(-99999.000000000000000);
        spinDiameter->setMaximum(99999.000000000000000);
        spinDiameter->setValue(100.000000000000000);

        layoutDistance_2->addWidget(spinDiameter);


        verticalLayout->addLayout(layoutDistance_2);

        layoutDistance_3 = new QHBoxLayout();
        layoutDistance_3->setObjectName(QString::fromUtf8("layoutDistance_3"));
        labelOtherDia = new QLabel(TaskFemConstraint);
        labelOtherDia->setObjectName(QString::fromUtf8("labelOtherDia"));

        layoutDistance_3->addWidget(labelOtherDia);

        spinOtherDia = new QDoubleSpinBox(TaskFemConstraint);
        spinOtherDia->setObjectName(QString::fromUtf8("spinOtherDia"));
        spinOtherDia->setDecimals(3);
        spinOtherDia->setMinimum(-99999.000000000000000);
        spinOtherDia->setMaximum(99999.000000000000000);
        spinOtherDia->setValue(200.000000000000000);

        layoutDistance_3->addWidget(spinOtherDia);


        verticalLayout->addLayout(layoutDistance_3);

        layoutDistance_4 = new QHBoxLayout();
        layoutDistance_4->setObjectName(QString::fromUtf8("layoutDistance_4"));
        labelCenterDistance = new QLabel(TaskFemConstraint);
        labelCenterDistance->setObjectName(QString::fromUtf8("labelCenterDistance"));

        layoutDistance_4->addWidget(labelCenterDistance);

        spinCenterDistance = new QDoubleSpinBox(TaskFemConstraint);
        spinCenterDistance->setObjectName(QString::fromUtf8("spinCenterDistance"));
        spinCenterDistance->setMinimum(-99999.000000000000000);
        spinCenterDistance->setMaximum(99999.000000000000000);
        spinCenterDistance->setValue(500.000000000000000);

        layoutDistance_4->addWidget(spinCenterDistance);


        verticalLayout->addLayout(layoutDistance_4);

        layoutDirection = new QHBoxLayout();
        layoutDirection->setObjectName(QString::fromUtf8("layoutDirection"));
        buttonDirection = new QPushButton(TaskFemConstraint);
        buttonDirection->setObjectName(QString::fromUtf8("buttonDirection"));

        layoutDirection->addWidget(buttonDirection);

        lineDirection = new QLineEdit(TaskFemConstraint);
        lineDirection->setObjectName(QString::fromUtf8("lineDirection"));

        layoutDirection->addWidget(lineDirection);


        verticalLayout->addLayout(layoutDirection);

        checkReverse = new QCheckBox(TaskFemConstraint);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));

        verticalLayout->addWidget(checkReverse);

        layoutLocation = new QHBoxLayout();
        layoutLocation->setObjectName(QString::fromUtf8("layoutLocation"));
        buttonLocation = new QPushButton(TaskFemConstraint);
        buttonLocation->setObjectName(QString::fromUtf8("buttonLocation"));

        layoutLocation->addWidget(buttonLocation);

        lineLocation = new QLineEdit(TaskFemConstraint);
        lineLocation->setObjectName(QString::fromUtf8("lineLocation"));

        layoutLocation->addWidget(lineLocation);


        verticalLayout->addLayout(layoutLocation);

        layoutDistance = new QHBoxLayout();
        layoutDistance->setObjectName(QString::fromUtf8("layoutDistance"));
        labelDistance = new QLabel(TaskFemConstraint);
        labelDistance->setObjectName(QString::fromUtf8("labelDistance"));

        layoutDistance->addWidget(labelDistance);

        spinDistance = new QDoubleSpinBox(TaskFemConstraint);
        spinDistance->setObjectName(QString::fromUtf8("spinDistance"));
        spinDistance->setMinimum(-99999.000000000000000);
        spinDistance->setMaximum(99999.000000000000000);
        spinDistance->setValue(10.000000000000000);

        layoutDistance->addWidget(spinDistance);


        verticalLayout->addLayout(layoutDistance);

        verticalSpacer = new QSpacerItem(17, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TaskFemConstraint);

        QMetaObject::connectSlotsByName(TaskFemConstraint);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraint)
    {
        buttonReference->setText(QCoreApplication::translate("TaskFemConstraint", "Add reference", nullptr));
        labelForce->setText(QCoreApplication::translate("TaskFemConstraint", "Load [N]", nullptr));
        labelDiameter->setText(QCoreApplication::translate("TaskFemConstraint", "Diameter", nullptr));
        labelOtherDia->setText(QCoreApplication::translate("TaskFemConstraint", "Other diameter", nullptr));
        labelCenterDistance->setText(QCoreApplication::translate("TaskFemConstraint", "Center distance", nullptr));
        buttonDirection->setText(QCoreApplication::translate("TaskFemConstraint", "Direction", nullptr));
        checkReverse->setText(QCoreApplication::translate("TaskFemConstraint", "Reverse direction", nullptr));
        buttonLocation->setText(QCoreApplication::translate("TaskFemConstraint", "Location", nullptr));
        labelDistance->setText(QCoreApplication::translate("TaskFemConstraint", "Distance", nullptr));
        (void)TaskFemConstraint;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraint: public Ui_TaskFemConstraint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINT_H
