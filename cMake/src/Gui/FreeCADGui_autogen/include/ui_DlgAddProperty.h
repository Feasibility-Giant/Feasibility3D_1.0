/********************************************************************************
** Form generated from reading UI file 'DlgAddProperty.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADDPROPERTY_H
#define UI_DLGADDPROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>

namespace Gui {
namespace Dialog {

class Ui_DlgAddProperty
{
public:
    QFormLayout *formLayout;
    QLabel *label_type;
    QComboBox *comboType;
    QLabel *label_group;
    QLineEdit *edtGroup;
    QLabel *label_name;
    QLineEdit *edtName;
    QLabel *label_doc;
    QPlainTextEdit *edtDoc;
    QCheckBox *chkAppend;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgAddProperty)
    {
        if (Gui__Dialog__DlgAddProperty->objectName().isEmpty())
            Gui__Dialog__DlgAddProperty->setObjectName(QString::fromUtf8("Gui__Dialog__DlgAddProperty"));
        Gui__Dialog__DlgAddProperty->resize(418, 258);
        formLayout = new QFormLayout(Gui__Dialog__DlgAddProperty);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_type = new QLabel(Gui__Dialog__DlgAddProperty);
        label_type->setObjectName(QString::fromUtf8("label_type"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_type);

        comboType = new QComboBox(Gui__Dialog__DlgAddProperty);
        comboType->setObjectName(QString::fromUtf8("comboType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboType);

        label_group = new QLabel(Gui__Dialog__DlgAddProperty);
        label_group->setObjectName(QString::fromUtf8("label_group"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_group);

        edtGroup = new QLineEdit(Gui__Dialog__DlgAddProperty);
        edtGroup->setObjectName(QString::fromUtf8("edtGroup"));

        formLayout->setWidget(1, QFormLayout::FieldRole, edtGroup);

        label_name = new QLabel(Gui__Dialog__DlgAddProperty);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_name);

        edtName = new QLineEdit(Gui__Dialog__DlgAddProperty);
        edtName->setObjectName(QString::fromUtf8("edtName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, edtName);

        label_doc = new QLabel(Gui__Dialog__DlgAddProperty);
        label_doc->setObjectName(QString::fromUtf8("label_doc"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_doc);

        edtDoc = new QPlainTextEdit(Gui__Dialog__DlgAddProperty);
        edtDoc->setObjectName(QString::fromUtf8("edtDoc"));

        formLayout->setWidget(3, QFormLayout::FieldRole, edtDoc);

        chkAppend = new QCheckBox(Gui__Dialog__DlgAddProperty);
        chkAppend->setObjectName(QString::fromUtf8("chkAppend"));

        formLayout->setWidget(4, QFormLayout::FieldRole, chkAppend);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgAddProperty);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::SpanningRole, buttonBox);

        QWidget::setTabOrder(comboType, edtGroup);
        QWidget::setTabOrder(edtGroup, edtName);

        retranslateUi(Gui__Dialog__DlgAddProperty);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgAddProperty, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgAddProperty, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgAddProperty);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgAddProperty)
    {
        Gui__Dialog__DlgAddProperty->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Add property", nullptr));
        label_type->setText(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Type", nullptr));
        label_group->setText(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Group", nullptr));
        label_name->setText(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Name", nullptr));
#if QT_CONFIG(tooltip)
        label_doc->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Verbose description of the new property.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_doc->setText(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Documentation", nullptr));
#if QT_CONFIG(tooltip)
        edtDoc->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Verbose description of the new property.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        chkAppend->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Prefix the property name with the group name in the form 'Group_Name' to avoid conflicts with an existing property.\n"
"In this case the prefix will be automatically trimmed when shown in the property editor.\n"
"However, the property is still used in a script with the full name, like 'obj.Group_Name'.\n"
"\n"
"If this is not ticked, then the property must be uniquely named, and it is accessed like 'obj.Name'.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkAppend->setText(QCoreApplication::translate("Gui::Dialog::DlgAddProperty", "Prefix group name", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgAddProperty: public Ui_DlgAddProperty {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGADDPROPERTY_H
