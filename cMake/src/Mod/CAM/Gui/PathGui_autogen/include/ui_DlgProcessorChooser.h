/********************************************************************************
** Form generated from reading UI file 'DlgProcessorChooser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROCESSORCHOOSER_H
#define UI_DLGPROCESSORCHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DlgProcessorChooser
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *argsLabel;
    QLineEdit *argsLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DlgProcessorChooser)
    {
        if (DlgProcessorChooser->objectName().isEmpty())
            DlgProcessorChooser->setObjectName(QString::fromUtf8("DlgProcessorChooser"));
        DlgProcessorChooser->resize(272, 107);
        formLayout = new QFormLayout(DlgProcessorChooser);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(DlgProcessorChooser);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(DlgProcessorChooser);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        argsLabel = new QLabel(DlgProcessorChooser);
        argsLabel->setObjectName(QString::fromUtf8("argsLabel"));
        argsLabel->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, argsLabel);

        argsLineEdit = new QLineEdit(DlgProcessorChooser);
        argsLineEdit->setObjectName(QString::fromUtf8("argsLineEdit"));
        argsLineEdit->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, argsLineEdit);

        buttonBox = new QDialogButtonBox(DlgProcessorChooser);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, buttonBox);


        retranslateUi(DlgProcessorChooser);
        QObject::connect(buttonBox, SIGNAL(accepted()), DlgProcessorChooser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DlgProcessorChooser, SLOT(reject()));

        QMetaObject::connectSlotsByName(DlgProcessorChooser);
    } // setupUi

    void retranslateUi(QDialog *DlgProcessorChooser)
    {
        DlgProcessorChooser->setWindowTitle(QCoreApplication::translate("DlgProcessorChooser", "Choose a processor", nullptr));
        label->setText(QCoreApplication::translate("DlgProcessorChooser", "Processor", nullptr));
        argsLabel->setText(QCoreApplication::translate("DlgProcessorChooser", "Arguments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgProcessorChooser: public Ui_DlgProcessorChooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPROCESSORCHOOSER_H
