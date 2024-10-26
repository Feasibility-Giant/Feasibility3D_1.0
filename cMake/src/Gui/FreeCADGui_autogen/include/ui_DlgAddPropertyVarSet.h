/********************************************************************************
** Form generated from reading UI file 'DlgAddPropertyVarSet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADDPROPERTYVARSET_H
#define UI_DLGADDPROPERTYVARSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

namespace Gui {
namespace Dialog {

class Ui_DlgAddPropertyVarSet
{
public:
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelGroup;
    QLabel *labelType;
    QComboBox *comboBoxType;
    QLabel *labelValue;
    QCheckBox *checkBoxAdd;
    QLabel *labelToolTip;
    QLineEdit *lineEditToolTip;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgAddPropertyVarSet)
    {
        if (Gui__Dialog__DlgAddPropertyVarSet->objectName().isEmpty())
            Gui__Dialog__DlgAddPropertyVarSet->setObjectName(QString::fromUtf8("Gui__Dialog__DlgAddPropertyVarSet"));
        Gui__Dialog__DlgAddPropertyVarSet->resize(418, 223);
        formLayout = new QFormLayout(Gui__Dialog__DlgAddPropertyVarSet);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelName = new QLabel(Gui__Dialog__DlgAddPropertyVarSet);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        lineEditName = new QLineEdit(Gui__Dialog__DlgAddPropertyVarSet);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditName);

        labelGroup = new QLabel(Gui__Dialog__DlgAddPropertyVarSet);
        labelGroup->setObjectName(QString::fromUtf8("labelGroup"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelGroup);

        labelType = new QLabel(Gui__Dialog__DlgAddPropertyVarSet);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelType);

        comboBoxType = new QComboBox(Gui__Dialog__DlgAddPropertyVarSet);
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));
        comboBoxType->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBoxType);

        labelValue = new QLabel(Gui__Dialog__DlgAddPropertyVarSet);
        labelValue->setObjectName(QString::fromUtf8("labelValue"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelValue);

        checkBoxAdd = new QCheckBox(Gui__Dialog__DlgAddPropertyVarSet);
        checkBoxAdd->setObjectName(QString::fromUtf8("checkBoxAdd"));

        formLayout->setWidget(4, QFormLayout::FieldRole, checkBoxAdd);

        labelToolTip = new QLabel(Gui__Dialog__DlgAddPropertyVarSet);
        labelToolTip->setObjectName(QString::fromUtf8("labelToolTip"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelToolTip);

        lineEditToolTip = new QLineEdit(Gui__Dialog__DlgAddPropertyVarSet);
        lineEditToolTip->setObjectName(QString::fromUtf8("lineEditToolTip"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditToolTip);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgAddPropertyVarSet);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(6, QFormLayout::SpanningRole, buttonBox);

        QWidget::setTabOrder(lineEditName, comboBoxType);
        QWidget::setTabOrder(comboBoxType, checkBoxAdd);
        QWidget::setTabOrder(checkBoxAdd, lineEditToolTip);

        retranslateUi(Gui__Dialog__DlgAddPropertyVarSet);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgAddPropertyVarSet, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgAddPropertyVarSet, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgAddPropertyVarSet);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgAddPropertyVarSet)
    {
        Gui__Dialog__DlgAddPropertyVarSet->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgAddPropertyVarSet", "Add property", nullptr));
        labelName->setText(QCoreApplication::translate("Gui::Dialog::DlgAddPropertyVarSet", "Name", nullptr));
        labelGroup->setText(QCoreApplication::translate("Gui::Dialog::DlgAddPropertyVarSet", "Group", nullptr));
        labelType->setText(QCoreApplication::translate("Gui::Dialog::DlgAddPropertyVarSet", "Type", nullptr));
        labelValue->setText(QCoreApplication::translate("Gui::Dialog::DlgAddPropertyVarSet", "Value", nullptr));
        checkBoxAdd->setText(QCoreApplication::translate("Gui::Dialog::DlgAddPropertyVarSet", "Add another", nullptr));
        labelToolTip->setText(QCoreApplication::translate("Gui::Dialog::DlgAddPropertyVarSet", "Tooltip", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgAddPropertyVarSet: public Ui_DlgAddPropertyVarSet {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGADDPROPERTYVARSET_H
