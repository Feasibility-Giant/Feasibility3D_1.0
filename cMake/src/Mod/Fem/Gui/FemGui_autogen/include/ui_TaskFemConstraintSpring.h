/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintSpring.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTSPRING_H
#define UI_TASKFEMCONSTRAINTSPRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintSpring
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    Gui::QuantitySpinBox *if_tan;
    QLabel *label_1;
    Gui::QuantitySpinBox *if_norm;
    QLabel *label;
    QComboBox *ElmerStiffnessCB;

    void setupUi(QWidget *TaskFemConstraintSpring)
    {
        if (TaskFemConstraintSpring->objectName().isEmpty())
            TaskFemConstraintSpring->setObjectName(QString::fromUtf8("TaskFemConstraintSpring"));
        TaskFemConstraintSpring->resize(300, 217);
        TaskFemConstraintSpring->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintSpring);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info = new QLabel(TaskFemConstraintSpring);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintSpring);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintSpring);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout->addLayout(hLayout1);

        lw_references = new QListWidget(TaskFemConstraintSpring);
        lw_references->setObjectName(QString::fromUtf8("lw_references"));
        lw_references->setMaximumSize(QSize(16777215, 215));

        verticalLayout->addWidget(lw_references);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(TaskFemConstraintSpring);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        if_tan = new Gui::QuantitySpinBox(TaskFemConstraintSpring);
        if_tan->setObjectName(QString::fromUtf8("if_tan"));
        if_tan->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(if_tan, 2, 1, 1, 1);

        label_1 = new QLabel(TaskFemConstraintSpring);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout_2->addWidget(label_1, 0, 0, 1, 1);

        if_norm = new Gui::QuantitySpinBox(TaskFemConstraintSpring);
        if_norm->setObjectName(QString::fromUtf8("if_norm"));
        if_norm->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(if_norm, 0, 1, 1, 1);

        label = new QLabel(TaskFemConstraintSpring);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        ElmerStiffnessCB = new QComboBox(TaskFemConstraintSpring);
        ElmerStiffnessCB->setObjectName(QString::fromUtf8("ElmerStiffnessCB"));

        gridLayout_2->addWidget(ElmerStiffnessCB, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(TaskFemConstraintSpring);

        QMetaObject::connectSlotsByName(TaskFemConstraintSpring);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintSpring)
    {
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintSpring", "Click Add or Remove and select face(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintSpring", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintSpring", "Remove", nullptr));
        label_2->setText(QCoreApplication::translate("TaskFemConstraintSpring", "Tangential Stiffness", nullptr));
        label_1->setText(QCoreApplication::translate("TaskFemConstraintSpring", "Normal Stiffness", nullptr));
        label->setText(QCoreApplication::translate("TaskFemConstraintSpring", "Stiffness for Elmer", nullptr));
#if QT_CONFIG(tooltip)
        ElmerStiffnessCB->setToolTip(QCoreApplication::translate("TaskFemConstraintSpring", "What stiffness should be\n"
"used for the Elmer solver", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)TaskFemConstraintSpring;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintSpring: public Ui_TaskFemConstraintSpring {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTSPRING_H
