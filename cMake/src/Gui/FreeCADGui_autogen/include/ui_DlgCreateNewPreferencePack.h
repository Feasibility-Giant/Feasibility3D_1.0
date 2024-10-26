/********************************************************************************
** Form generated from reading UI file 'DlgCreateNewPreferencePack.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCREATENEWPREFERENCEPACK_H
#define UI_DLGCREATENEWPREFERENCEPACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

namespace Gui {
namespace Dialog {

class Ui_DlgCreateNewPreferencePack
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgCreateNewPreferencePack)
    {
        if (Gui__Dialog__DlgCreateNewPreferencePack->objectName().isEmpty())
            Gui__Dialog__DlgCreateNewPreferencePack->setObjectName(QString::fromUtf8("Gui__Dialog__DlgCreateNewPreferencePack"));
        Gui__Dialog__DlgCreateNewPreferencePack->setWindowModality(Qt::ApplicationModal);
        Gui__Dialog__DlgCreateNewPreferencePack->resize(580, 520);
        Gui__Dialog__DlgCreateNewPreferencePack->setModal(true);
        verticalLayout = new QVBoxLayout(Gui__Dialog__DlgCreateNewPreferencePack);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Gui__Dialog__DlgCreateNewPreferencePack);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Gui__Dialog__DlgCreateNewPreferencePack);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(Gui__Dialog__DlgCreateNewPreferencePack);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setColumnCount(1);
        treeWidget->header()->setMinimumSectionSize(50);
        treeWidget->header()->setDefaultSectionSize(250);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgCreateNewPreferencePack);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Gui__Dialog__DlgCreateNewPreferencePack);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgCreateNewPreferencePack, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgCreateNewPreferencePack, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCreateNewPreferencePack);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgCreateNewPreferencePack)
    {
        Gui__Dialog__DlgCreateNewPreferencePack->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgCreateNewPreferencePack", "Create New Preference Pack", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgCreateNewPreferencePack", "Name", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Gui::Dialog::DlgCreateNewPreferencePack", "Property group templates", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCreateNewPreferencePack: public Ui_DlgCreateNewPreferencePack {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGCREATENEWPREFERENCEPACK_H
