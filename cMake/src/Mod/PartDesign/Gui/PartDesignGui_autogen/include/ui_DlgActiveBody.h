/********************************************************************************
** Form generated from reading UI file 'DlgActiveBody.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGACTIVEBODY_H
#define UI_DLGACTIVEBODY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

namespace PartDesignGui {

class Ui_DlgActiveBody
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *bodySelect;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PartDesignGui__DlgActiveBody)
    {
        if (PartDesignGui__DlgActiveBody->objectName().isEmpty())
            PartDesignGui__DlgActiveBody->setObjectName(QString::fromUtf8("PartDesignGui__DlgActiveBody"));
        PartDesignGui__DlgActiveBody->resize(480, 270);
        verticalLayout_2 = new QVBoxLayout(PartDesignGui__DlgActiveBody);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(PartDesignGui__DlgActiveBody);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(true);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        bodySelect = new QListWidget(PartDesignGui__DlgActiveBody);
        new QListWidgetItem(bodySelect);
        bodySelect->setObjectName(QString::fromUtf8("bodySelect"));

        verticalLayout_2->addWidget(bodySelect);

        buttonBox = new QDialogButtonBox(PartDesignGui__DlgActiveBody);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(PartDesignGui__DlgActiveBody);
        QObject::connect(buttonBox, SIGNAL(accepted()), PartDesignGui__DlgActiveBody, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PartDesignGui__DlgActiveBody, SLOT(reject()));

        QMetaObject::connectSlotsByName(PartDesignGui__DlgActiveBody);
    } // setupUi

    void retranslateUi(QDialog *PartDesignGui__DlgActiveBody)
    {
        PartDesignGui__DlgActiveBody->setWindowTitle(QCoreApplication::translate("PartDesignGui::DlgActiveBody", "Active Body Required", nullptr));
        label->setText(QCoreApplication::translate("PartDesignGui::DlgActiveBody", "To create a new PartDesign object, there must be an active Body object in the document.\n"
"\n"
"Please select a body from below, or create a new body.", nullptr));

        const bool __sortingEnabled = bodySelect->isSortingEnabled();
        bodySelect->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = bodySelect->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("PartDesignGui::DlgActiveBody", "Create new body", nullptr));
        bodySelect->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class DlgActiveBody: public Ui_DlgActiveBody {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_DLGACTIVEBODY_H
