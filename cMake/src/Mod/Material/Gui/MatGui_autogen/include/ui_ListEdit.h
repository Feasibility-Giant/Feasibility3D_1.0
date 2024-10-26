/********************************************************************************
** Form generated from reading UI file 'ListEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEDIT_H
#define UI_LISTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace MatGui {

class Ui_ListEdit
{
public:
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonDeleteRow;
    QDialogButtonBox *standardButtons;

    void setupUi(QDialog *MatGui__ListEdit)
    {
        if (MatGui__ListEdit->objectName().isEmpty())
            MatGui__ListEdit->setObjectName(QString::fromUtf8("MatGui__ListEdit"));
        MatGui__ListEdit->resize(400, 300);
        verticalLayout = new QVBoxLayout(MatGui__ListEdit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new QListView(MatGui__ListEdit);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonDeleteRow = new QPushButton(MatGui__ListEdit);
        buttonDeleteRow->setObjectName(QString::fromUtf8("buttonDeleteRow"));
        buttonDeleteRow->setEnabled(false);

        horizontalLayout->addWidget(buttonDeleteRow);


        verticalLayout->addLayout(horizontalLayout);

        standardButtons = new QDialogButtonBox(MatGui__ListEdit);
        standardButtons->setObjectName(QString::fromUtf8("standardButtons"));
        standardButtons->setOrientation(Qt::Horizontal);
        standardButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(standardButtons);


        retranslateUi(MatGui__ListEdit);
        QObject::connect(standardButtons, SIGNAL(accepted()), MatGui__ListEdit, SLOT(accept()));
        QObject::connect(standardButtons, SIGNAL(rejected()), MatGui__ListEdit, SLOT(reject()));

        QMetaObject::connectSlotsByName(MatGui__ListEdit);
    } // setupUi

    void retranslateUi(QDialog *MatGui__ListEdit)
    {
        MatGui__ListEdit->setWindowTitle(QCoreApplication::translate("MatGui::ListEdit", "List Edit", nullptr));
        buttonDeleteRow->setText(QCoreApplication::translate("MatGui::ListEdit", "Delete Row", nullptr));
    } // retranslateUi

};

} // namespace MatGui

namespace MatGui {
namespace Ui {
    class ListEdit: public Ui_ListEdit {};
} // namespace Ui
} // namespace MatGui

#endif // UI_LISTEDIT_H
