/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintBearing.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTBEARING_H
#define UI_TASKFEMCONSTRAINTBEARING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintBearing
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *buttonReference;
    QListWidget *listReferences;
    QHBoxLayout *layoutDiameter_3;
    QLabel *labelDiameter;
    QDoubleSpinBox *spinDiameter;
    QHBoxLayout *layoutDiameter_6;
    QLabel *labelOtherDiameter;
    QDoubleSpinBox *spinOtherDiameter;
    QHBoxLayout *layoutDiameter_7;
    QLabel *labelCenterDistance;
    QDoubleSpinBox *spinCenterDistance;
    QHBoxLayout *layoutDiameter_4;
    QLabel *labelForce;
    QDoubleSpinBox *spinForce;
    QHBoxLayout *layoutDiameter_8;
    QLabel *labelTensionForce;
    QDoubleSpinBox *spinTensionForce;
    QCheckBox *checkIsDriven;
    QHBoxLayout *layoutDiameter_5;
    QLabel *labelForceAngle;
    QDoubleSpinBox *spinForceAngle;
    QHBoxLayout *layoutLocation_2;
    QPushButton *buttonDirection;
    QLineEdit *lineDirection;
    QCheckBox *checkReversed;
    QCheckBox *checkAxial;
    QHBoxLayout *layoutLocation;
    QPushButton *buttonLocation;
    QLineEdit *lineLocation;
    QHBoxLayout *layoutDistance;
    QLabel *labelDistance;
    QDoubleSpinBox *spinDistance;

    void setupUi(QWidget *TaskFemConstraintBearing)
    {
        if (TaskFemConstraintBearing->objectName().isEmpty())
            TaskFemConstraintBearing->setObjectName(QString::fromUtf8("TaskFemConstraintBearing"));
        TaskFemConstraintBearing->resize(300, 447);
        TaskFemConstraintBearing->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintBearing);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonReference = new QPushButton(TaskFemConstraintBearing);
        buttonReference->setObjectName(QString::fromUtf8("buttonReference"));

        verticalLayout->addWidget(buttonReference);

        listReferences = new QListWidget(TaskFemConstraintBearing);
        listReferences->setObjectName(QString::fromUtf8("listReferences"));

        verticalLayout->addWidget(listReferences);

        layoutDiameter_3 = new QHBoxLayout();
        layoutDiameter_3->setObjectName(QString::fromUtf8("layoutDiameter_3"));
        labelDiameter = new QLabel(TaskFemConstraintBearing);
        labelDiameter->setObjectName(QString::fromUtf8("labelDiameter"));
        labelDiameter->setEnabled(true);

        layoutDiameter_3->addWidget(labelDiameter);

        spinDiameter = new QDoubleSpinBox(TaskFemConstraintBearing);
        spinDiameter->setObjectName(QString::fromUtf8("spinDiameter"));
        spinDiameter->setMaximum(100.000000000000000);
        spinDiameter->setValue(100.000000000000000);

        layoutDiameter_3->addWidget(spinDiameter);


        verticalLayout->addLayout(layoutDiameter_3);

        layoutDiameter_6 = new QHBoxLayout();
        layoutDiameter_6->setObjectName(QString::fromUtf8("layoutDiameter_6"));
        labelOtherDiameter = new QLabel(TaskFemConstraintBearing);
        labelOtherDiameter->setObjectName(QString::fromUtf8("labelOtherDiameter"));
        labelOtherDiameter->setEnabled(true);

        layoutDiameter_6->addWidget(labelOtherDiameter);

        spinOtherDiameter = new QDoubleSpinBox(TaskFemConstraintBearing);
        spinOtherDiameter->setObjectName(QString::fromUtf8("spinOtherDiameter"));
        spinOtherDiameter->setMaximum(100.000000000000000);
        spinOtherDiameter->setValue(100.000000000000000);

        layoutDiameter_6->addWidget(spinOtherDiameter);


        verticalLayout->addLayout(layoutDiameter_6);

        layoutDiameter_7 = new QHBoxLayout();
        layoutDiameter_7->setObjectName(QString::fromUtf8("layoutDiameter_7"));
        labelCenterDistance = new QLabel(TaskFemConstraintBearing);
        labelCenterDistance->setObjectName(QString::fromUtf8("labelCenterDistance"));

        layoutDiameter_7->addWidget(labelCenterDistance);

        spinCenterDistance = new QDoubleSpinBox(TaskFemConstraintBearing);
        spinCenterDistance->setObjectName(QString::fromUtf8("spinCenterDistance"));
        spinCenterDistance->setMaximum(1000.000000000000000);
        spinCenterDistance->setValue(1000.000000000000000);

        layoutDiameter_7->addWidget(spinCenterDistance);


        verticalLayout->addLayout(layoutDiameter_7);

        layoutDiameter_4 = new QHBoxLayout();
        layoutDiameter_4->setObjectName(QString::fromUtf8("layoutDiameter_4"));
        labelForce = new QLabel(TaskFemConstraintBearing);
        labelForce->setObjectName(QString::fromUtf8("labelForce"));

        layoutDiameter_4->addWidget(labelForce);

        spinForce = new QDoubleSpinBox(TaskFemConstraintBearing);
        spinForce->setObjectName(QString::fromUtf8("spinForce"));
        spinForce->setMaximum(1000.000000000000000);
        spinForce->setValue(1000.000000000000000);

        layoutDiameter_4->addWidget(spinForce);


        verticalLayout->addLayout(layoutDiameter_4);

        layoutDiameter_8 = new QHBoxLayout();
        layoutDiameter_8->setObjectName(QString::fromUtf8("layoutDiameter_8"));
        labelTensionForce = new QLabel(TaskFemConstraintBearing);
        labelTensionForce->setObjectName(QString::fromUtf8("labelTensionForce"));

        layoutDiameter_8->addWidget(labelTensionForce);

        spinTensionForce = new QDoubleSpinBox(TaskFemConstraintBearing);
        spinTensionForce->setObjectName(QString::fromUtf8("spinTensionForce"));
        spinTensionForce->setMaximum(1000.000000000000000);
        spinTensionForce->setValue(1000.000000000000000);

        layoutDiameter_8->addWidget(spinTensionForce);


        verticalLayout->addLayout(layoutDiameter_8);

        checkIsDriven = new QCheckBox(TaskFemConstraintBearing);
        checkIsDriven->setObjectName(QString::fromUtf8("checkIsDriven"));

        verticalLayout->addWidget(checkIsDriven);

        layoutDiameter_5 = new QHBoxLayout();
        layoutDiameter_5->setObjectName(QString::fromUtf8("layoutDiameter_5"));
        labelForceAngle = new QLabel(TaskFemConstraintBearing);
        labelForceAngle->setObjectName(QString::fromUtf8("labelForceAngle"));

        layoutDiameter_5->addWidget(labelForceAngle);

        spinForceAngle = new QDoubleSpinBox(TaskFemConstraintBearing);
        spinForceAngle->setObjectName(QString::fromUtf8("spinForceAngle"));
        spinForceAngle->setDecimals(1);
        spinForceAngle->setMinimum(-360.000000000000000);
        spinForceAngle->setMaximum(360.000000000000000);
        spinForceAngle->setValue(0.000000000000000);

        layoutDiameter_5->addWidget(spinForceAngle);


        verticalLayout->addLayout(layoutDiameter_5);

        layoutLocation_2 = new QHBoxLayout();
        layoutLocation_2->setObjectName(QString::fromUtf8("layoutLocation_2"));
        buttonDirection = new QPushButton(TaskFemConstraintBearing);
        buttonDirection->setObjectName(QString::fromUtf8("buttonDirection"));

        layoutLocation_2->addWidget(buttonDirection);

        lineDirection = new QLineEdit(TaskFemConstraintBearing);
        lineDirection->setObjectName(QString::fromUtf8("lineDirection"));

        layoutLocation_2->addWidget(lineDirection);


        verticalLayout->addLayout(layoutLocation_2);

        checkReversed = new QCheckBox(TaskFemConstraintBearing);
        checkReversed->setObjectName(QString::fromUtf8("checkReversed"));

        verticalLayout->addWidget(checkReversed);

        checkAxial = new QCheckBox(TaskFemConstraintBearing);
        checkAxial->setObjectName(QString::fromUtf8("checkAxial"));

        verticalLayout->addWidget(checkAxial);

        layoutLocation = new QHBoxLayout();
        layoutLocation->setObjectName(QString::fromUtf8("layoutLocation"));
        buttonLocation = new QPushButton(TaskFemConstraintBearing);
        buttonLocation->setObjectName(QString::fromUtf8("buttonLocation"));

        layoutLocation->addWidget(buttonLocation);

        lineLocation = new QLineEdit(TaskFemConstraintBearing);
        lineLocation->setObjectName(QString::fromUtf8("lineLocation"));

        layoutLocation->addWidget(lineLocation);


        verticalLayout->addLayout(layoutLocation);

        layoutDistance = new QHBoxLayout();
        layoutDistance->setObjectName(QString::fromUtf8("layoutDistance"));
        labelDistance = new QLabel(TaskFemConstraintBearing);
        labelDistance->setObjectName(QString::fromUtf8("labelDistance"));

        layoutDistance->addWidget(labelDistance);

        spinDistance = new QDoubleSpinBox(TaskFemConstraintBearing);
        spinDistance->setObjectName(QString::fromUtf8("spinDistance"));
        spinDistance->setMinimum(-99999.000000000000000);
        spinDistance->setMaximum(99999.000000000000000);
        spinDistance->setValue(0.000000000000000);

        layoutDistance->addWidget(spinDistance);


        verticalLayout->addLayout(layoutDistance);


        retranslateUi(TaskFemConstraintBearing);

        QMetaObject::connectSlotsByName(TaskFemConstraintBearing);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintBearing)
    {
        buttonReference->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Add reference", nullptr));
        labelDiameter->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Gear diameter", nullptr));
        labelOtherDiameter->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Other pulley diameter", nullptr));
        labelCenterDistance->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Center distance", nullptr));
        labelForce->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Force", nullptr));
        labelTensionForce->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Belt tension force", nullptr));
        checkIsDriven->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Driven pulley", nullptr));
        labelForceAngle->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Force location [deg]", nullptr));
        buttonDirection->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Force Direction", nullptr));
        checkReversed->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Reversed direction", nullptr));
        checkAxial->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Axial free", nullptr));
        buttonLocation->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Location", nullptr));
        labelDistance->setText(QCoreApplication::translate("TaskFemConstraintBearing", "Distance", nullptr));
        (void)TaskFemConstraintBearing;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintBearing: public Ui_TaskFemConstraintBearing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTBEARING_H
