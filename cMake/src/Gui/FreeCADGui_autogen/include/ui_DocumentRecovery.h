/********************************************************************************
** Form generated from reading UI file 'DocumentRecovery.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTRECOVERY_H
#define UI_DOCUMENTRECOVERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

namespace Gui {
namespace Dialog {

class Ui_DocumentRecovery
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QTreeWidget *treeWidget;
    QPushButton *buttonCleanup;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DocumentRecovery)
    {
        if (Gui__Dialog__DocumentRecovery->objectName().isEmpty())
            Gui__Dialog__DocumentRecovery->setObjectName(QString::fromUtf8("Gui__Dialog__DocumentRecovery"));
        Gui__Dialog__DocumentRecovery->resize(576, 495);
        gridLayout = new QGridLayout(Gui__Dialog__DocumentRecovery);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 84, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 2);

        label = new QLabel(Gui__Dialog__DocumentRecovery);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 84, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 2);

        label_2 = new QLabel(Gui__Dialog__DocumentRecovery);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 2);

        treeWidget = new QTreeWidget(Gui__Dialog__DocumentRecovery);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(treeWidget, 4, 0, 1, 2);

        buttonCleanup = new QPushButton(Gui__Dialog__DocumentRecovery);
        buttonCleanup->setObjectName(QString::fromUtf8("buttonCleanup"));
        buttonCleanup->setEnabled(true);

        gridLayout->addWidget(buttonCleanup, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DocumentRecovery);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 1, 1, 1);


        retranslateUi(Gui__Dialog__DocumentRecovery);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DocumentRecovery, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DocumentRecovery, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DocumentRecovery);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DocumentRecovery)
    {
        Gui__Dialog__DocumentRecovery->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DocumentRecovery", "Document Recovery", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::DocumentRecovery", "Press 'Start Recovery' to start the recovery process of the document listed below.\n"
"\n"
"The 'Status' column shows whether the document could be recovered.", nullptr));
        label_2->setText(QCoreApplication::translate("Gui::Dialog::DocumentRecovery", "Status of recovered documents:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("Gui::Dialog::DocumentRecovery", "Status", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Gui::Dialog::DocumentRecovery", "Document Name", nullptr));
        buttonCleanup->setText(QCoreApplication::translate("Gui::Dialog::DocumentRecovery", "Cleanup...", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DocumentRecovery: public Ui_DocumentRecovery {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DOCUMENTRECOVERY_H
