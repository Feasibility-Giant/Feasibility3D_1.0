/********************************************************************************
** Form generated from reading UI file 'DlgPartImportStep.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARTIMPORTSTEP_H
#define UI_DLGPARTIMPORTSTEP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

namespace PartGui {

class Ui_DlgPartImportStep
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout_2;
    QLineEdit *FileName;
    QPushButton *SearchFile;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PartGui__DlgPartImportStep)
    {
        if (PartGui__DlgPartImportStep->objectName().isEmpty())
            PartGui__DlgPartImportStep->setObjectName(QString::fromUtf8("PartGui__DlgPartImportStep"));
        PartGui__DlgPartImportStep->resize(349, 116);
        gridLayout = new QGridLayout(PartGui__DlgPartImportStep);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox5 = new QGroupBox(PartGui__DlgPartImportStep);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        gridLayout_2 = new QGridLayout(GroupBox5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        FileName = new QLineEdit(GroupBox5);
        FileName->setObjectName(QString::fromUtf8("FileName"));

        gridLayout_2->addWidget(FileName, 0, 0, 1, 1);

        SearchFile = new QPushButton(GroupBox5);
        SearchFile->setObjectName(QString::fromUtf8("SearchFile"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchFile->sizePolicy().hasHeightForWidth());
        SearchFile->setSizePolicy(sizePolicy);
        SearchFile->setMinimumSize(QSize(30, 0));
        SearchFile->setMaximumSize(QSize(30, 32767));
        SearchFile->setText(QString::fromUtf8("..."));

        gridLayout_2->addWidget(SearchFile, 0, 1, 1, 1);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PartGui__DlgPartImportStep);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        QWidget::setTabOrder(FileName, SearchFile);

        retranslateUi(PartGui__DlgPartImportStep);

        QMetaObject::connectSlotsByName(PartGui__DlgPartImportStep);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgPartImportStep)
    {
        PartGui__DlgPartImportStep->setWindowTitle(QCoreApplication::translate("PartGui::DlgPartImportStep", "STEP input file", nullptr));
        GroupBox5->setTitle(QCoreApplication::translate("PartGui::DlgPartImportStep", "File Name", nullptr));
        FileName->setText(QString());
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgPartImportStep: public Ui_DlgPartImportStep {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPARTIMPORTSTEP_H
