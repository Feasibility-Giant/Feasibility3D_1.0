/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintForce.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTFORCE_H
#define UI_TASKFEMCONSTRAINTFORCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintForce
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *listReferences;
    QHBoxLayout *layoutForce;
    QLabel *labelForce;
    Gui::QuantitySpinBox *spinForce;
    QHBoxLayout *layoutDirection;
    QToolButton *buttonDirection;
    QLineEdit *lineDirection;
    QCheckBox *checkReverse;

    void setupUi(QWidget *TaskFemConstraintForce)
    {
        if (TaskFemConstraintForce->objectName().isEmpty())
            TaskFemConstraintForce->setObjectName(QString::fromUtf8("TaskFemConstraintForce"));
        TaskFemConstraintForce->resize(300, 243);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskFemConstraintForce->sizePolicy().hasHeightForWidth());
        TaskFemConstraintForce->setSizePolicy(sizePolicy);
        TaskFemConstraintForce->setBaseSize(QSize(400, 800));
        verticalLayout = new QVBoxLayout(TaskFemConstraintForce);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info = new QLabel(TaskFemConstraintForce);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAdd = new QToolButton(TaskFemConstraintForce);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy1);
        btnAdd->setCheckable(true);

        horizontalLayout->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintForce);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy1.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy1);
        btnRemove->setCheckable(true);

        horizontalLayout->addWidget(btnRemove);


        verticalLayout->addLayout(horizontalLayout);

        listReferences = new QListWidget(TaskFemConstraintForce);
        listReferences->setObjectName(QString::fromUtf8("listReferences"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listReferences->sizePolicy().hasHeightForWidth());
        listReferences->setSizePolicy(sizePolicy2);
        listReferences->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(listReferences);

        layoutForce = new QHBoxLayout();
        layoutForce->setObjectName(QString::fromUtf8("layoutForce"));
        labelForce = new QLabel(TaskFemConstraintForce);
        labelForce->setObjectName(QString::fromUtf8("labelForce"));

        layoutForce->addWidget(labelForce);

        spinForce = new Gui::QuantitySpinBox(TaskFemConstraintForce);
        spinForce->setObjectName(QString::fromUtf8("spinForce"));
        spinForce->setMinimum(0.000000000000000);
        spinForce->setValue(500.000000000000000);

        layoutForce->addWidget(spinForce);


        verticalLayout->addLayout(layoutForce);

        layoutDirection = new QHBoxLayout();
        layoutDirection->setObjectName(QString::fromUtf8("layoutDirection"));
        buttonDirection = new QToolButton(TaskFemConstraintForce);
        buttonDirection->setObjectName(QString::fromUtf8("buttonDirection"));

        layoutDirection->addWidget(buttonDirection);

        lineDirection = new QLineEdit(TaskFemConstraintForce);
        lineDirection->setObjectName(QString::fromUtf8("lineDirection"));

        layoutDirection->addWidget(lineDirection);


        verticalLayout->addLayout(layoutDirection);

        checkReverse = new QCheckBox(TaskFemConstraintForce);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));

        verticalLayout->addWidget(checkReverse);


        retranslateUi(TaskFemConstraintForce);

        QMetaObject::connectSlotsByName(TaskFemConstraintForce);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintForce)
    {
        TaskFemConstraintForce->setWindowTitle(QCoreApplication::translate("TaskFemConstraintForce", "Prescribed Force", nullptr));
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintForce", "Click Add or Remove and select geometric element(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintForce", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintForce", "Remove", nullptr));
        labelForce->setText(QCoreApplication::translate("TaskFemConstraintForce", "Force", nullptr));
        spinForce->setProperty("unit", QVariant(QCoreApplication::translate("TaskFemConstraintForce", "N", nullptr)));
#if QT_CONFIG(tooltip)
        buttonDirection->setToolTip(QCoreApplication::translate("TaskFemConstraintForce", "Select a planar edge or face, then press this button", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDirection->setText(QCoreApplication::translate("TaskFemConstraintForce", "Direction", nullptr));
#if QT_CONFIG(tooltip)
        lineDirection->setToolTip(QCoreApplication::translate("TaskFemConstraintForce", "The direction of the edge or the direction of the\n"
"normal vector of the face is used as direction", nullptr));
#endif // QT_CONFIG(tooltip)
        checkReverse->setText(QCoreApplication::translate("TaskFemConstraintForce", "Reverse direction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintForce: public Ui_TaskFemConstraintForce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTFORCE_H
