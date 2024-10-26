/********************************************************************************
** Form generated from reading UI file 'TaskPipeParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPIPEPARAMETERS_H
#define UI_TASKPIPEPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartDesignGui {

class Ui_TaskPipeParameters
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupprofile;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *buttonProfileBase;
    QLineEdit *profileBaseEdit;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBoxTransition;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonSpineBase;
    QLineEdit *spineBaseEdit;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *buttonRefAdd;
    QToolButton *buttonRefRemove;
    QListWidget *listWidgetReferences;

    void setupUi(QWidget *PartDesignGui__TaskPipeParameters)
    {
        if (PartDesignGui__TaskPipeParameters->objectName().isEmpty())
            PartDesignGui__TaskPipeParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskPipeParameters"));
        PartDesignGui__TaskPipeParameters->resize(306, 421);
        PartDesignGui__TaskPipeParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(PartDesignGui__TaskPipeParameters);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupprofile = new QGroupBox(PartDesignGui__TaskPipeParameters);
        groupprofile->setObjectName(QString::fromUtf8("groupprofile"));
        vboxLayout = new QVBoxLayout(groupprofile);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonProfileBase = new QToolButton(groupprofile);
        buttonProfileBase->setObjectName(QString::fromUtf8("buttonProfileBase"));
        buttonProfileBase->setCheckable(true);

        hboxLayout->addWidget(buttonProfileBase);

        profileBaseEdit = new QLineEdit(groupprofile);
        profileBaseEdit->setObjectName(QString::fromUtf8("profileBaseEdit"));

        hboxLayout->addWidget(profileBaseEdit);


        vboxLayout->addLayout(hboxLayout);


        verticalLayout_2->addWidget(groupprofile);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_2 = new QLabel(PartDesignGui__TaskPipeParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBoxTransition = new QComboBox(PartDesignGui__TaskPipeParameters);
        comboBoxTransition->addItem(QString());
        comboBoxTransition->addItem(QString());
        comboBoxTransition->addItem(QString());
        comboBoxTransition->setObjectName(QString::fromUtf8("comboBoxTransition"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxTransition->sizePolicy().hasHeightForWidth());
        comboBoxTransition->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxTransition);


        verticalLayout_2->addLayout(formLayout);

        groupBox = new QGroupBox(PartDesignGui__TaskPipeParameters);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonSpineBase = new QToolButton(groupBox);
        buttonSpineBase->setObjectName(QString::fromUtf8("buttonSpineBase"));
        buttonSpineBase->setCheckable(true);

        horizontalLayout->addWidget(buttonSpineBase);

        spineBaseEdit = new QLineEdit(groupBox);
        spineBaseEdit->setObjectName(QString::fromUtf8("spineBaseEdit"));

        horizontalLayout->addWidget(spineBaseEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonRefAdd = new QToolButton(groupBox);
        buttonRefAdd->setObjectName(QString::fromUtf8("buttonRefAdd"));
        buttonRefAdd->setEnabled(true);
        sizePolicy.setHeightForWidth(buttonRefAdd->sizePolicy().hasHeightForWidth());
        buttonRefAdd->setSizePolicy(sizePolicy);
        buttonRefAdd->setCheckable(true);
        buttonRefAdd->setChecked(false);

        horizontalLayout_4->addWidget(buttonRefAdd);

        buttonRefRemove = new QToolButton(groupBox);
        buttonRefRemove->setObjectName(QString::fromUtf8("buttonRefRemove"));
        sizePolicy.setHeightForWidth(buttonRefRemove->sizePolicy().hasHeightForWidth());
        buttonRefRemove->setSizePolicy(sizePolicy);
        buttonRefRemove->setCheckable(true);

        horizontalLayout_4->addWidget(buttonRefRemove);


        verticalLayout->addLayout(horizontalLayout_4);

        listWidgetReferences = new QListWidget(groupBox);
        listWidgetReferences->setObjectName(QString::fromUtf8("listWidgetReferences"));

        verticalLayout->addWidget(listWidgetReferences);


        verticalLayout_2->addWidget(groupBox);

        QWidget::setTabOrder(buttonProfileBase, profileBaseEdit);
        QWidget::setTabOrder(profileBaseEdit, comboBoxTransition);
        QWidget::setTabOrder(comboBoxTransition, buttonSpineBase);
        QWidget::setTabOrder(buttonSpineBase, spineBaseEdit);
        QWidget::setTabOrder(spineBaseEdit, buttonRefAdd);
        QWidget::setTabOrder(buttonRefAdd, buttonRefRemove);
        QWidget::setTabOrder(buttonRefRemove, listWidgetReferences);

        retranslateUi(PartDesignGui__TaskPipeParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskPipeParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskPipeParameters)
    {
        groupprofile->setTitle(QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Profile", nullptr));
        buttonProfileBase->setText(QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Object", nullptr));
        label_2->setText(QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Corner Transition", nullptr));
        comboBoxTransition->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Transformed", nullptr));
        comboBoxTransition->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Right Corner", nullptr));
        comboBoxTransition->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Round Corner", nullptr));

        groupBox->setTitle(QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Path to sweep along", nullptr));
        buttonSpineBase->setText(QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Object", nullptr));
        buttonRefAdd->setText(QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Add Edge", nullptr));
        buttonRefRemove->setText(QCoreApplication::translate("PartDesignGui::TaskPipeParameters", "Remove Edge", nullptr));
        (void)PartDesignGui__TaskPipeParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskPipeParameters: public Ui_TaskPipeParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKPIPEPARAMETERS_H
