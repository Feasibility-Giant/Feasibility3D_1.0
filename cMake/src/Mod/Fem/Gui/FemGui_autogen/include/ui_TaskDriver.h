/********************************************************************************
** Form generated from reading UI file 'TaskDriver.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDRIVER_H
#define UI_TASKDRIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskDriver
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *DrivercomboBox;
    QTextEdit *textEdit;

    void setupUi(QWidget *TaskDriver)
    {
        if (TaskDriver->objectName().isEmpty())
            TaskDriver->setObjectName(QString::fromUtf8("TaskDriver"));
        TaskDriver->resize(184, 236);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskDriver->sizePolicy().hasHeightForWidth());
        TaskDriver->setSizePolicy(sizePolicy);
        TaskDriver->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskDriver);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        DrivercomboBox = new QComboBox(TaskDriver);
        DrivercomboBox->setObjectName(QString::fromUtf8("DrivercomboBox"));

        verticalLayout->addWidget(DrivercomboBox);

        textEdit = new QTextEdit(TaskDriver);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(TaskDriver);

        QMetaObject::connectSlotsByName(TaskDriver);
    } // setupUi

    void retranslateUi(QWidget *TaskDriver)
    {
        (void)TaskDriver;
    } // retranslateUi

};

namespace Ui {
    class TaskDriver: public Ui_TaskDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDRIVER_H
