/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintPlaneRotation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTPLANEROTATION_H
#define UI_TASKFEMCONSTRAINTPLANEROTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintPlaneRotation
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;

    void setupUi(QWidget *TaskFemConstraintPlaneRotation)
    {
        if (TaskFemConstraintPlaneRotation->objectName().isEmpty())
            TaskFemConstraintPlaneRotation->setObjectName(QString::fromUtf8("TaskFemConstraintPlaneRotation"));
        TaskFemConstraintPlaneRotation->resize(300, 137);
        TaskFemConstraintPlaneRotation->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintPlaneRotation);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info = new QLabel(TaskFemConstraintPlaneRotation);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintPlaneRotation);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintPlaneRotation);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout->addLayout(hLayout1);

        lw_references = new QListWidget(TaskFemConstraintPlaneRotation);
        lw_references->setObjectName(QString::fromUtf8("lw_references"));

        verticalLayout->addWidget(lw_references);


        retranslateUi(TaskFemConstraintPlaneRotation);

        QMetaObject::connectSlotsByName(TaskFemConstraintPlaneRotation);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintPlaneRotation)
    {
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintPlaneRotation", "Select a single face, click Add or Remove", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintPlaneRotation", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintPlaneRotation", "Remove", nullptr));
        (void)TaskFemConstraintPlaneRotation;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintPlaneRotation: public Ui_TaskFemConstraintPlaneRotation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTPLANEROTATION_H
