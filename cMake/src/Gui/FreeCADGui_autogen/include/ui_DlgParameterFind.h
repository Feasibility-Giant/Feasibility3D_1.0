/********************************************************************************
** Form generated from reading UI file 'DlgParameterFind.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARAMETERFIND_H
#define UI_DLGPARAMETERFIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

namespace Gui {
namespace Dialog {

class Ui_DlgParameterFind
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkGroups;
    QCheckBox *checkNames;
    QCheckBox *checkValues;
    QCheckBox *checkMatch;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgParameterFind)
    {
        if (Gui__Dialog__DlgParameterFind->objectName().isEmpty())
            Gui__Dialog__DlgParameterFind->setObjectName(QString::fromUtf8("Gui__Dialog__DlgParameterFind"));
        Gui__Dialog__DlgParameterFind->resize(443, 212);
        gridLayout_3 = new QGridLayout(Gui__Dialog__DlgParameterFind);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(Gui__Dialog__DlgParameterFind);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkGroups = new QCheckBox(groupBox);
        checkGroups->setObjectName(QString::fromUtf8("checkGroups"));
        checkGroups->setChecked(true);

        gridLayout->addWidget(checkGroups, 0, 0, 1, 1);

        checkNames = new QCheckBox(groupBox);
        checkNames->setObjectName(QString::fromUtf8("checkNames"));
        checkNames->setChecked(true);

        gridLayout->addWidget(checkNames, 1, 0, 1, 1);

        checkValues = new QCheckBox(groupBox);
        checkValues->setObjectName(QString::fromUtf8("checkValues"));
        checkValues->setChecked(true);

        gridLayout->addWidget(checkValues, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 3);

        checkMatch = new QCheckBox(groupBox_2);
        checkMatch->setObjectName(QString::fromUtf8("checkMatch"));
        checkMatch->setChecked(true);

        gridLayout_2->addWidget(checkMatch, 3, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgParameterFind);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 0, 1, 1, 1);


        retranslateUi(Gui__Dialog__DlgParameterFind);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgParameterFind, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgParameterFind, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgParameterFind);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgParameterFind)
    {
        Gui__Dialog__DlgParameterFind->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgParameterFind", "Find", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgParameterFind", "Find what:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::DlgParameterFind", "Look at", nullptr));
        checkGroups->setText(QCoreApplication::translate("Gui::Dialog::DlgParameterFind", "Groups", nullptr));
        checkNames->setText(QCoreApplication::translate("Gui::Dialog::DlgParameterFind", "Names", nullptr));
        checkValues->setText(QCoreApplication::translate("Gui::Dialog::DlgParameterFind", "Values", nullptr));
        checkMatch->setText(QCoreApplication::translate("Gui::Dialog::DlgParameterFind", "Match whole string only", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgParameterFind: public Ui_DlgParameterFind {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPARAMETERFIND_H
