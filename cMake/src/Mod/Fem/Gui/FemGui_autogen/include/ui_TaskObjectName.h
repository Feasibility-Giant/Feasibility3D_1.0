/********************************************************************************
** Form generated from reading UI file 'TaskObjectName.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKOBJECTNAME_H
#define UI_TASKOBJECTNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskObjectName
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_ObjectName;

    void setupUi(QWidget *TaskObjectName)
    {
        if (TaskObjectName->objectName().isEmpty())
            TaskObjectName->setObjectName(QString::fromUtf8("TaskObjectName"));
        TaskObjectName->resize(200, 40);
        TaskObjectName->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskObjectName);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_ObjectName = new QLineEdit(TaskObjectName);
        lineEdit_ObjectName->setObjectName(QString::fromUtf8("lineEdit_ObjectName"));
        lineEdit_ObjectName->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit_ObjectName);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TaskObjectName);

        QMetaObject::connectSlotsByName(TaskObjectName);
    } // setupUi

    void retranslateUi(QWidget *TaskObjectName)
    {
        (void)TaskObjectName;
    } // retranslateUi

};

namespace Ui {
    class TaskObjectName: public Ui_TaskObjectName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKOBJECTNAME_H
