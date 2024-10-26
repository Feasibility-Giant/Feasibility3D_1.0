/********************************************************************************
** Form generated from reading UI file 'DlgTemplateField.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTEMPLATEFIELD_H
#define UI_DLGTEMPLATEFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

namespace TechDrawGui {

class Ui_dlgTemplateField
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblMsg;
    QLabel *lblName;
    QLabel *label;
    QLineEdit *leInput;
    QCheckBox *cbAutofill;
    QLineEdit *leAutofill;
    QDialogButtonBox *bbButtons;

    void setupUi(QDialog *TechDrawGui__dlgTemplateField)
    {
        if (TechDrawGui__dlgTemplateField->objectName().isEmpty())
            TechDrawGui__dlgTemplateField->setObjectName(QString::fromUtf8("TechDrawGui__dlgTemplateField"));
        TechDrawGui__dlgTemplateField->setWindowModality(Qt::ApplicationModal);
        TechDrawGui__dlgTemplateField->resize(340, 132);
        TechDrawGui__dlgTemplateField->setModal(true);
        verticalLayout = new QVBoxLayout(TechDrawGui__dlgTemplateField);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblMsg = new QLabel(TechDrawGui__dlgTemplateField);
        lblMsg->setObjectName(QString::fromUtf8("lblMsg"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblMsg);

        lblName = new QLabel(TechDrawGui__dlgTemplateField);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblName);

        label = new QLabel(TechDrawGui__dlgTemplateField);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        leInput = new QLineEdit(TechDrawGui__dlgTemplateField);
        leInput->setObjectName(QString::fromUtf8("leInput"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leInput);

        cbAutofill = new QCheckBox(TechDrawGui__dlgTemplateField);
        cbAutofill->setObjectName(QString::fromUtf8("cbAutofill"));

        formLayout->setWidget(2, QFormLayout::LabelRole, cbAutofill);

        leAutofill = new QLineEdit(TechDrawGui__dlgTemplateField);
        leAutofill->setObjectName(QString::fromUtf8("leAutofill"));
        leAutofill->setEnabled(false);
        leAutofill->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, leAutofill);


        verticalLayout->addLayout(formLayout);

        bbButtons = new QDialogButtonBox(TechDrawGui__dlgTemplateField);
        bbButtons->setObjectName(QString::fromUtf8("bbButtons"));
        bbButtons->setOrientation(Qt::Horizontal);
        bbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        bbButtons->setCenterButtons(false);

        verticalLayout->addWidget(bbButtons);


        retranslateUi(TechDrawGui__dlgTemplateField);
        QObject::connect(bbButtons, SIGNAL(accepted()), TechDrawGui__dlgTemplateField, SLOT(accept()));
        QObject::connect(bbButtons, SIGNAL(rejected()), TechDrawGui__dlgTemplateField, SLOT(reject()));

        QMetaObject::connectSlotsByName(TechDrawGui__dlgTemplateField);
    } // setupUi

    void retranslateUi(QDialog *TechDrawGui__dlgTemplateField)
    {
        TechDrawGui__dlgTemplateField->setWindowTitle(QCoreApplication::translate("TechDrawGui::dlgTemplateField", "Change Editable Field", nullptr));
        lblMsg->setText(QCoreApplication::translate("TechDrawGui::dlgTemplateField", "Text Name:", nullptr));
        lblName->setText(QCoreApplication::translate("TechDrawGui::dlgTemplateField", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::dlgTemplateField", "Value:", nullptr));
#if QT_CONFIG(tooltip)
        cbAutofill->setToolTip(QCoreApplication::translate("TechDrawGui::dlgTemplateField", "Check this box to reapply autofill to this field.  ", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAutofill->setText(QCoreApplication::translate("TechDrawGui::dlgTemplateField", "Autofill", nullptr));
#if QT_CONFIG(tooltip)
        leAutofill->setToolTip(QCoreApplication::translate("TechDrawGui::dlgTemplateField", "The autofill replacement value.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class dlgTemplateField: public Ui_dlgTemplateField {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGTEMPLATEFIELD_H
