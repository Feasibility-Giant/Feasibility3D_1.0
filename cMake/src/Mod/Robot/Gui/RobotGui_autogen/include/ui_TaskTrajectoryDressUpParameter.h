/********************************************************************************
** Form generated from reading UI file 'TaskTrajectoryDressUpParameter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKTRAJECTORYDRESSUPPARAMETER_H
#define UI_TASKTRAJECTORYDRESSUPPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace RobotGui {

class Ui_TaskTrajectoryDressUpParameter
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBoxSpeed;
    QCheckBox *checkBoxUseSpeed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxAccel;
    QCheckBox *checkBoxUseAccel;
    QComboBox *comboBoxCont;
    QFrame *line;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditPlacement;
    QToolButton *toolButtonChoosePlacement;
    QComboBox *comboBoxOrientation;

    void setupUi(QWidget *TaskTrajectoryDressUpParameter)
    {
        if (TaskTrajectoryDressUpParameter->objectName().isEmpty())
            TaskTrajectoryDressUpParameter->setObjectName(QString::fromUtf8("TaskTrajectoryDressUpParameter"));
        TaskTrajectoryDressUpParameter->resize(215, 197);
        TaskTrajectoryDressUpParameter->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskTrajectoryDressUpParameter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(TaskTrajectoryDressUpParameter);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TaskTrajectoryDressUpParameter);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        doubleSpinBoxSpeed = new QDoubleSpinBox(TaskTrajectoryDressUpParameter);
        doubleSpinBoxSpeed->setObjectName(QString::fromUtf8("doubleSpinBoxSpeed"));
        doubleSpinBoxSpeed->setSuffix(QString::fromUtf8("m/s"));
        doubleSpinBoxSpeed->setMinimum(0.000000000000000);
        doubleSpinBoxSpeed->setMaximum(10.000000000000000);
        doubleSpinBoxSpeed->setSingleStep(0.100000000000000);
        doubleSpinBoxSpeed->setValue(1.000000000000000);

        horizontalLayout->addWidget(doubleSpinBoxSpeed);

        checkBoxUseSpeed = new QCheckBox(TaskTrajectoryDressUpParameter);
        checkBoxUseSpeed->setObjectName(QString::fromUtf8("checkBoxUseSpeed"));

        horizontalLayout->addWidget(checkBoxUseSpeed);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(TaskTrajectoryDressUpParameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBoxAccel = new QDoubleSpinBox(TaskTrajectoryDressUpParameter);
        doubleSpinBoxAccel->setObjectName(QString::fromUtf8("doubleSpinBoxAccel"));
        doubleSpinBoxAccel->setSuffix(QString::fromUtf8("m/s^2"));
        doubleSpinBoxAccel->setMinimum(0.000000000000000);
        doubleSpinBoxAccel->setMaximum(10.000000000000000);
        doubleSpinBoxAccel->setSingleStep(0.100000000000000);
        doubleSpinBoxAccel->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxAccel);

        checkBoxUseAccel = new QCheckBox(TaskTrajectoryDressUpParameter);
        checkBoxUseAccel->setObjectName(QString::fromUtf8("checkBoxUseAccel"));

        horizontalLayout_2->addWidget(checkBoxUseAccel);


        verticalLayout->addLayout(horizontalLayout_2);

        comboBoxCont = new QComboBox(TaskTrajectoryDressUpParameter);
        comboBoxCont->addItem(QString());
        comboBoxCont->addItem(QString());
        comboBoxCont->addItem(QString());
        comboBoxCont->setObjectName(QString::fromUtf8("comboBoxCont"));

        verticalLayout->addWidget(comboBoxCont);

        line = new QFrame(TaskTrajectoryDressUpParameter);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(TaskTrajectoryDressUpParameter);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditPlacement = new QLineEdit(TaskTrajectoryDressUpParameter);
        lineEditPlacement->setObjectName(QString::fromUtf8("lineEditPlacement"));
        lineEditPlacement->setText(QString::fromUtf8("(0,0,0),(0,0,0)"));
        lineEditPlacement->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditPlacement);

        toolButtonChoosePlacement = new QToolButton(TaskTrajectoryDressUpParameter);
        toolButtonChoosePlacement->setObjectName(QString::fromUtf8("toolButtonChoosePlacement"));
        toolButtonChoosePlacement->setEnabled(false);
        toolButtonChoosePlacement->setText(QString::fromUtf8("..."));

        horizontalLayout_3->addWidget(toolButtonChoosePlacement);


        verticalLayout->addLayout(horizontalLayout_3);

        comboBoxOrientation = new QComboBox(TaskTrajectoryDressUpParameter);
        comboBoxOrientation->addItem(QString());
        comboBoxOrientation->addItem(QString());
        comboBoxOrientation->addItem(QString());
        comboBoxOrientation->addItem(QString());
        comboBoxOrientation->setObjectName(QString::fromUtf8("comboBoxOrientation"));

        verticalLayout->addWidget(comboBoxOrientation);


        retranslateUi(TaskTrajectoryDressUpParameter);

        QMetaObject::connectSlotsByName(TaskTrajectoryDressUpParameter);
    } // setupUi

    void retranslateUi(QWidget *TaskTrajectoryDressUpParameter)
    {
        label_4->setText(QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Speed & Acceleration:", nullptr));
        label->setText(QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Speed:", nullptr));
        checkBoxUseSpeed->setText(QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Use", nullptr));
        label_2->setText(QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Accel:", nullptr));
        checkBoxUseAccel->setText(QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Use", nullptr));
        comboBoxCont->setItemText(0, QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Don't change Cont", nullptr));
        comboBoxCont->setItemText(1, QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Continues", nullptr));
        comboBoxCont->setItemText(2, QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Discontinues", nullptr));

        label_3->setText(QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Position and Orientation:", nullptr));
        comboBoxOrientation->setItemText(0, QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Don't change Position & Orientation", nullptr));
        comboBoxOrientation->setItemText(1, QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Use Orientation", nullptr));
        comboBoxOrientation->setItemText(2, QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Add Position", nullptr));
        comboBoxOrientation->setItemText(3, QCoreApplication::translate("RobotGui::TaskTrajectoryDressUpParameter", "Add Orientation", nullptr));

        (void)TaskTrajectoryDressUpParameter;
    } // retranslateUi

};

} // namespace RobotGui

namespace RobotGui {
namespace Ui {
    class TaskTrajectoryDressUpParameter: public Ui_TaskTrajectoryDressUpParameter {};
} // namespace Ui
} // namespace RobotGui

#endif // UI_TASKTRAJECTORYDRESSUPPARAMETER_H
