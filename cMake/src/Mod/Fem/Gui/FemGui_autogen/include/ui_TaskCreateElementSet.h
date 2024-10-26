/********************************************************************************
** Form generated from reading UI file 'TaskCreateElementSet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCREATEELEMENTSET_H
#define UI_TASKCREATEELEMENTSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskCreateElementSet
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_Poly;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_Restore;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_Rename;
    QLabel *label;

    void setupUi(QWidget *TaskCreateElementSet)
    {
        if (TaskCreateElementSet->objectName().isEmpty())
            TaskCreateElementSet->setObjectName(QString::fromUtf8("TaskCreateElementSet"));
        TaskCreateElementSet->resize(407, 270);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskCreateElementSet->sizePolicy().hasHeightForWidth());
        TaskCreateElementSet->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(TaskCreateElementSet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton_Poly = new QToolButton(TaskCreateElementSet);
        toolButton_Poly->setObjectName(QString::fromUtf8("toolButton_Poly"));

        horizontalLayout_2->addWidget(toolButton_Poly);

        label_3 = new QLabel(TaskCreateElementSet);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton_Restore = new QToolButton(TaskCreateElementSet);
        toolButton_Restore->setObjectName(QString::fromUtf8("toolButton_Restore"));
        toolButton_Restore->setEnabled(true);

        horizontalLayout->addWidget(toolButton_Restore);

        label_2 = new QLabel(TaskCreateElementSet);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toolButton_Rename = new QToolButton(TaskCreateElementSet);
        toolButton_Rename->setObjectName(QString::fromUtf8("toolButton_Rename"));
        toolButton_Rename->setEnabled(true);

        horizontalLayout_3->addWidget(toolButton_Rename);

        label = new QLabel(TaskCreateElementSet);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(TaskCreateElementSet);

        QMetaObject::connectSlotsByName(TaskCreateElementSet);
    } // setupUi

    void retranslateUi(QWidget *TaskCreateElementSet)
    {
        TaskCreateElementSet->setWindowTitle(QCoreApplication::translate("TaskCreateElementSet", "Form", nullptr));
        toolButton_Poly->setText(QCoreApplication::translate("TaskCreateElementSet", "Poly", nullptr));
        label_3->setText(QCoreApplication::translate("TaskCreateElementSet", "Erase Elements by Polygon", nullptr));
        toolButton_Restore->setText(QCoreApplication::translate("TaskCreateElementSet", "Restore", nullptr));
        label_2->setText(QCoreApplication::translate("TaskCreateElementSet", "Delete New Meshes", nullptr));
        toolButton_Rename->setText(QCoreApplication::translate("TaskCreateElementSet", "Copy", nullptr));
        label->setText(QCoreApplication::translate("TaskCreateElementSet", "Copy Result Mesh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskCreateElementSet: public Ui_TaskCreateElementSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKCREATEELEMENTSET_H
