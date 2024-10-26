/********************************************************************************
** Form generated from reading UI file 'TaskEdge2TracParameter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKEDGE2TRACPARAMETER_H
#define UI_TASKEDGE2TRACPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace RobotGui {

class Ui_TaskEdge2TracParameter
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_ObjectName;
    QPushButton *pushButton_HideShow;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Edges;
    QLabel *label_Cluster;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxSizing;
    QCheckBox *checkBoxOrientation;

    void setupUi(QWidget *TaskEdge2TracParameter)
    {
        if (TaskEdge2TracParameter->objectName().isEmpty())
            TaskEdge2TracParameter->setObjectName(QString::fromUtf8("TaskEdge2TracParameter"));
        TaskEdge2TracParameter->resize(200, 131);
        TaskEdge2TracParameter->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskEdge2TracParameter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_ObjectName = new QLineEdit(TaskEdge2TracParameter);
        lineEdit_ObjectName->setObjectName(QString::fromUtf8("lineEdit_ObjectName"));
        lineEdit_ObjectName->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_ObjectName);

        pushButton_HideShow = new QPushButton(TaskEdge2TracParameter);
        pushButton_HideShow->setObjectName(QString::fromUtf8("pushButton_HideShow"));

        horizontalLayout->addWidget(pushButton_HideShow);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Edges = new QLabel(TaskEdge2TracParameter);
        label_Edges->setObjectName(QString::fromUtf8("label_Edges"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_Edges->setFont(font);

        horizontalLayout_3->addWidget(label_Edges);

        label_Cluster = new QLabel(TaskEdge2TracParameter);
        label_Cluster->setObjectName(QString::fromUtf8("label_Cluster"));
        label_Cluster->setFont(font);

        horizontalLayout_3->addWidget(label_Cluster);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(TaskEdge2TracParameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBoxSizing = new QDoubleSpinBox(TaskEdge2TracParameter);
        doubleSpinBoxSizing->setObjectName(QString::fromUtf8("doubleSpinBoxSizing"));
        doubleSpinBoxSizing->setDecimals(1);
        doubleSpinBoxSizing->setMinimum(0.100000000000000);
        doubleSpinBoxSizing->setMaximum(10000.000000000000000);
        doubleSpinBoxSizing->setSingleStep(0.100000000000000);
        doubleSpinBoxSizing->setValue(0.500000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxSizing);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBoxOrientation = new QCheckBox(TaskEdge2TracParameter);
        checkBoxOrientation->setObjectName(QString::fromUtf8("checkBoxOrientation"));

        verticalLayout->addWidget(checkBoxOrientation);


        retranslateUi(TaskEdge2TracParameter);

        QMetaObject::connectSlotsByName(TaskEdge2TracParameter);
    } // setupUi

    void retranslateUi(QWidget *TaskEdge2TracParameter)
    {
        pushButton_HideShow->setText(QCoreApplication::translate("RobotGui::TaskEdge2TracParameter", "Hide / Show", nullptr));
        label_Edges->setText(QCoreApplication::translate("RobotGui::TaskEdge2TracParameter", "Edges: 0", nullptr));
        label_Cluster->setText(QCoreApplication::translate("RobotGui::TaskEdge2TracParameter", "Cluster: 0", nullptr));
        label_2->setText(QCoreApplication::translate("RobotGui::TaskEdge2TracParameter", "Sizing Value:", nullptr));
        doubleSpinBoxSizing->setSuffix(QString());
        checkBoxOrientation->setText(QCoreApplication::translate("RobotGui::TaskEdge2TracParameter", "Use orientation of edge", nullptr));
        (void)TaskEdge2TracParameter;
    } // retranslateUi

};

} // namespace RobotGui

namespace RobotGui {
namespace Ui {
    class TaskEdge2TracParameter: public Ui_TaskEdge2TracParameter {};
} // namespace Ui
} // namespace RobotGui

#endif // UI_TASKEDGE2TRACPARAMETER_H
