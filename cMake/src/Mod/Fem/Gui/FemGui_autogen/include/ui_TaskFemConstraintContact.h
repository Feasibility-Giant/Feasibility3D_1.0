/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintContact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTCONTACT_H
#define UI_TASKFEMCONSTRAINTCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/SpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintContact
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info_2;
    QHBoxLayout *hLayout1_2;
    QToolButton *btnAddMaster;
    QToolButton *btnRemoveMaster;
    QListWidget *lw_referencesMaster;
    QLabel *lbl_info;
    QHBoxLayout *hLayout1_3;
    QToolButton *btnAddSlave;
    QToolButton *btnRemoveSlave;
    QListWidget *lw_referencesSlave;
    QGroupBox *gpbParameter;
    QFormLayout *fltParameters;
    QLabel *lblSlope;
    Gui::QuantitySpinBox *spbSlope;
    QLabel *lblAdjust;
    Gui::QuantitySpinBox *spbAdjust;
    QCheckBox *ckbFriction;
    QLabel *lblFrictionCoeff;
    Gui::DoubleSpinBox *spbFrictionCoeff;
    QLabel *lblStickSlope;
    Gui::QuantitySpinBox *spbStickSlope;

    void setupUi(QWidget *TaskFemConstraintContact)
    {
        if (TaskFemConstraintContact->objectName().isEmpty())
            TaskFemConstraintContact->setObjectName(QString::fromUtf8("TaskFemConstraintContact"));
        TaskFemConstraintContact->resize(300, 234);
        TaskFemConstraintContact->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintContact);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info_2 = new QLabel(TaskFemConstraintContact);
        lbl_info_2->setObjectName(QString::fromUtf8("lbl_info_2"));

        verticalLayout->addWidget(lbl_info_2);

        hLayout1_2 = new QHBoxLayout();
        hLayout1_2->setObjectName(QString::fromUtf8("hLayout1_2"));
        btnAddMaster = new QToolButton(TaskFemConstraintContact);
        btnAddMaster->setObjectName(QString::fromUtf8("btnAddMaster"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAddMaster->sizePolicy().hasHeightForWidth());
        btnAddMaster->setSizePolicy(sizePolicy);
        btnAddMaster->setCheckable(true);

        hLayout1_2->addWidget(btnAddMaster);

        btnRemoveMaster = new QToolButton(TaskFemConstraintContact);
        btnRemoveMaster->setObjectName(QString::fromUtf8("btnRemoveMaster"));
        sizePolicy.setHeightForWidth(btnRemoveMaster->sizePolicy().hasHeightForWidth());
        btnRemoveMaster->setSizePolicy(sizePolicy);
        btnRemoveMaster->setCheckable(true);

        hLayout1_2->addWidget(btnRemoveMaster);


        verticalLayout->addLayout(hLayout1_2);

        lw_referencesMaster = new QListWidget(TaskFemConstraintContact);
        lw_referencesMaster->setObjectName(QString::fromUtf8("lw_referencesMaster"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lw_referencesMaster->sizePolicy().hasHeightForWidth());
        lw_referencesMaster->setSizePolicy(sizePolicy1);
        lw_referencesMaster->setMaximumSize(QSize(16777215, 31));

        verticalLayout->addWidget(lw_referencesMaster);

        lbl_info = new QLabel(TaskFemConstraintContact);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        hLayout1_3 = new QHBoxLayout();
        hLayout1_3->setObjectName(QString::fromUtf8("hLayout1_3"));
        btnAddSlave = new QToolButton(TaskFemConstraintContact);
        btnAddSlave->setObjectName(QString::fromUtf8("btnAddSlave"));
        sizePolicy.setHeightForWidth(btnAddSlave->sizePolicy().hasHeightForWidth());
        btnAddSlave->setSizePolicy(sizePolicy);
        btnAddSlave->setCheckable(true);

        hLayout1_3->addWidget(btnAddSlave);

        btnRemoveSlave = new QToolButton(TaskFemConstraintContact);
        btnRemoveSlave->setObjectName(QString::fromUtf8("btnRemoveSlave"));
        sizePolicy.setHeightForWidth(btnRemoveSlave->sizePolicy().hasHeightForWidth());
        btnRemoveSlave->setSizePolicy(sizePolicy);
        btnRemoveSlave->setCheckable(true);

        hLayout1_3->addWidget(btnRemoveSlave);


        verticalLayout->addLayout(hLayout1_3);

        lw_referencesSlave = new QListWidget(TaskFemConstraintContact);
        lw_referencesSlave->setObjectName(QString::fromUtf8("lw_referencesSlave"));
        lw_referencesSlave->setEnabled(true);
        sizePolicy1.setHeightForWidth(lw_referencesSlave->sizePolicy().hasHeightForWidth());
        lw_referencesSlave->setSizePolicy(sizePolicy1);
        lw_referencesSlave->setMaximumSize(QSize(16777215, 31));

        verticalLayout->addWidget(lw_referencesSlave);

        gpbParameter = new QGroupBox(TaskFemConstraintContact);
        gpbParameter->setObjectName(QString::fromUtf8("gpbParameter"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gpbParameter->sizePolicy().hasHeightForWidth());
        gpbParameter->setSizePolicy(sizePolicy2);
        fltParameters = new QFormLayout(gpbParameter);
        fltParameters->setObjectName(QString::fromUtf8("fltParameters"));
        lblSlope = new QLabel(gpbParameter);
        lblSlope->setObjectName(QString::fromUtf8("lblSlope"));

        fltParameters->setWidget(0, QFormLayout::LabelRole, lblSlope);

        spbSlope = new Gui::QuantitySpinBox(gpbParameter);
        spbSlope->setObjectName(QString::fromUtf8("spbSlope"));
        spbSlope->setSingleStep(1.000000000000000);
        spbSlope->setMaximum(1000000000.000000000000000);
        spbSlope->setProperty("unit", QVariant(QString::fromUtf8("GPa/m")));
        spbSlope->setProperty("value", QVariant(100.000000000000000));

        fltParameters->setWidget(0, QFormLayout::FieldRole, spbSlope);

        lblAdjust = new QLabel(gpbParameter);
        lblAdjust->setObjectName(QString::fromUtf8("lblAdjust"));

        fltParameters->setWidget(1, QFormLayout::LabelRole, lblAdjust);

        spbAdjust = new Gui::QuantitySpinBox(gpbParameter);
        spbAdjust->setObjectName(QString::fromUtf8("spbAdjust"));
        spbAdjust->setMinimum(0.000000000000000);
        spbAdjust->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spbAdjust->setProperty("value", QVariant(0.000000000000000));
        spbAdjust->setSingleStep(0.100000000000000);

        fltParameters->setWidget(1, QFormLayout::FieldRole, spbAdjust);

        ckbFriction = new QCheckBox(gpbParameter);
        ckbFriction->setObjectName(QString::fromUtf8("ckbFriction"));

        fltParameters->setWidget(2, QFormLayout::LabelRole, ckbFriction);

        lblFrictionCoeff = new QLabel(gpbParameter);
        lblFrictionCoeff->setObjectName(QString::fromUtf8("lblFrictionCoeff"));

        fltParameters->setWidget(3, QFormLayout::LabelRole, lblFrictionCoeff);

        spbFrictionCoeff = new Gui::DoubleSpinBox(gpbParameter);
        spbFrictionCoeff->setObjectName(QString::fromUtf8("spbFrictionCoeff"));
        spbFrictionCoeff->setDecimals(2);
        spbFrictionCoeff->setMinimum(0.000000000000000);
        spbFrictionCoeff->setValue(0.000000000000000);
        spbFrictionCoeff->setSingleStep(0.100000000000000);

        fltParameters->setWidget(3, QFormLayout::FieldRole, spbFrictionCoeff);

        lblStickSlope = new QLabel(gpbParameter);
        lblStickSlope->setObjectName(QString::fromUtf8("lblStickSlope"));

        fltParameters->setWidget(4, QFormLayout::LabelRole, lblStickSlope);

        spbStickSlope = new Gui::QuantitySpinBox(gpbParameter);
        spbStickSlope->setObjectName(QString::fromUtf8("spbStickSlope"));
        spbStickSlope->setSingleStep(1.000000000000000);
        spbStickSlope->setMaximum(1000000000.000000000000000);
        spbStickSlope->setProperty("unit", QVariant(QString::fromUtf8("GPa/m")));
        spbStickSlope->setProperty("value", QVariant(1.000000000000000));

        fltParameters->setWidget(4, QFormLayout::FieldRole, spbStickSlope);


        verticalLayout->addWidget(gpbParameter);

        lbl_info_2->raise();
        lbl_info->raise();
        lw_referencesSlave->raise();
        lw_referencesMaster->raise();

        retranslateUi(TaskFemConstraintContact);

        QMetaObject::connectSlotsByName(TaskFemConstraintContact);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintContact)
    {
        lbl_info_2->setText(QCoreApplication::translate("TaskFemConstraintContact", "Select master face, click Add or Remove", nullptr));
        btnAddMaster->setText(QCoreApplication::translate("TaskFemConstraintContact", "Add", nullptr));
        btnRemoveMaster->setText(QCoreApplication::translate("TaskFemConstraintContact", "Remove", nullptr));
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintContact", "Select slave face, click Add or Remove", nullptr));
        btnAddSlave->setText(QCoreApplication::translate("TaskFemConstraintContact", "Add", nullptr));
        btnRemoveSlave->setText(QCoreApplication::translate("TaskFemConstraintContact", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        gpbParameter->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpbParameter->setTitle(QCoreApplication::translate("TaskFemConstraintContact", "Parameters", nullptr));
        lblSlope->setText(QCoreApplication::translate("TaskFemConstraintContact", "Contact Stiffness", nullptr));
        lblAdjust->setText(QCoreApplication::translate("TaskFemConstraintContact", "Clearance Adjustment", nullptr));
        ckbFriction->setText(QCoreApplication::translate("TaskFemConstraintContact", "Enable Friction", nullptr));
        lblFrictionCoeff->setText(QCoreApplication::translate("TaskFemConstraintContact", "Friction Coefficient", nullptr));
        lblStickSlope->setText(QCoreApplication::translate("TaskFemConstraintContact", "Stick Slope", nullptr));
        (void)TaskFemConstraintContact;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintContact: public Ui_TaskFemConstraintContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTCONTACT_H
