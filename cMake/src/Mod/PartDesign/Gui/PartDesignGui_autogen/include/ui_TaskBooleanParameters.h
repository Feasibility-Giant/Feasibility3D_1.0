/********************************************************************************
** Form generated from reading UI file 'TaskBooleanParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKBOOLEANPARAMETERS_H
#define UI_TASKBOOLEANPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartDesignGui {

class Ui_TaskBooleanParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonBodyAdd;
    QToolButton *buttonBodyRemove;
    QListWidget *listWidgetBodies;
    QComboBox *comboType;

    void setupUi(QWidget *PartDesignGui__TaskBooleanParameters)
    {
        if (PartDesignGui__TaskBooleanParameters->objectName().isEmpty())
            PartDesignGui__TaskBooleanParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskBooleanParameters"));
        PartDesignGui__TaskBooleanParameters->resize(209, 185);
        PartDesignGui__TaskBooleanParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskBooleanParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBodyAdd = new QToolButton(PartDesignGui__TaskBooleanParameters);
        buttonBodyAdd->setObjectName(QString::fromUtf8("buttonBodyAdd"));
        buttonBodyAdd->setCheckable(true);

        horizontalLayout->addWidget(buttonBodyAdd);

        buttonBodyRemove = new QToolButton(PartDesignGui__TaskBooleanParameters);
        buttonBodyRemove->setObjectName(QString::fromUtf8("buttonBodyRemove"));
        buttonBodyRemove->setCheckable(true);

        horizontalLayout->addWidget(buttonBodyRemove);


        verticalLayout->addLayout(horizontalLayout);

        listWidgetBodies = new QListWidget(PartDesignGui__TaskBooleanParameters);
        listWidgetBodies->setObjectName(QString::fromUtf8("listWidgetBodies"));

        verticalLayout->addWidget(listWidgetBodies);

        comboType = new QComboBox(PartDesignGui__TaskBooleanParameters);
        comboType->addItem(QString());
        comboType->addItem(QString());
        comboType->addItem(QString());
        comboType->setObjectName(QString::fromUtf8("comboType"));

        verticalLayout->addWidget(comboType);

        QWidget::setTabOrder(buttonBodyAdd, buttonBodyRemove);
        QWidget::setTabOrder(buttonBodyRemove, listWidgetBodies);
        QWidget::setTabOrder(listWidgetBodies, comboType);

        retranslateUi(PartDesignGui__TaskBooleanParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskBooleanParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskBooleanParameters)
    {
        buttonBodyAdd->setText(QCoreApplication::translate("PartDesignGui::TaskBooleanParameters", "Add body", nullptr));
        buttonBodyRemove->setText(QCoreApplication::translate("PartDesignGui::TaskBooleanParameters", "Remove body", nullptr));
        comboType->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskBooleanParameters", "Fuse", nullptr));
        comboType->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskBooleanParameters", "Cut", nullptr));
        comboType->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskBooleanParameters", "Common", nullptr));

        (void)PartDesignGui__TaskBooleanParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskBooleanParameters: public Ui_TaskBooleanParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKBOOLEANPARAMETERS_H
