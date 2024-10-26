/********************************************************************************
** Form generated from reading UI file 'DlgMacroExecute.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMACROEXECUTE_H
#define UI_DLGMACROEXECUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"

namespace Gui {
namespace Dialog {

class Ui_DlgMacroExecute
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QGroupBox *MacroNameGroup;
    QGridLayout *gridLayout2;
    QLineEdit *LineEditMacroName;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *LineEditFind;
    QLabel *label1;
    QLineEdit *LineEditFindInFiles;
    QTabWidget *tabMacroWidget;
    QWidget *userSpecificTab;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *userMacroListBox;
    QWidget *systemWideTag;
    QVBoxLayout *verticalLayout;
    QTreeWidget *systemMacroListBox;
    QVBoxLayout *vboxLayout;
    QPushButton *executeButton;
    QPushButton *closeButton;
    QSpacerItem *spacerItem;
    QPushButton *createButton;
    QPushButton *deleteButton;
    QPushButton *editButton;
    QPushButton *renameButton;
    QPushButton *duplicateButton;
    QPushButton *toolbarButton;
    QSpacerItem *spacerItem1;
    QPushButton *addonsButton;
    QGroupBox *DestinationGroup;
    QGridLayout *gridLayout3;
    Gui::FileChooser *fileChooser;

    void setupUi(QDialog *Gui__Dialog__DlgMacroExecute)
    {
        if (Gui__Dialog__DlgMacroExecute->objectName().isEmpty())
            Gui__Dialog__DlgMacroExecute->setObjectName(QString::fromUtf8("Gui__Dialog__DlgMacroExecute"));
        Gui__Dialog__DlgMacroExecute->resize(640, 480);
        Gui__Dialog__DlgMacroExecute->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgMacroExecute);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        MacroNameGroup = new QGroupBox(Gui__Dialog__DlgMacroExecute);
        MacroNameGroup->setObjectName(QString::fromUtf8("MacroNameGroup"));
        gridLayout2 = new QGridLayout(MacroNameGroup);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        LineEditMacroName = new QLineEdit(MacroNameGroup);
        LineEditMacroName->setObjectName(QString::fromUtf8("LineEditMacroName"));
        LineEditMacroName->setEnabled(false);

        gridLayout2->addWidget(LineEditMacroName, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(MacroNameGroup);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        LineEditFind = new QLineEdit(MacroNameGroup);
        LineEditFind->setObjectName(QString::fromUtf8("LineEditFind"));

        hboxLayout->addWidget(LineEditFind);

        label1 = new QLabel(MacroNameGroup);
        label1->setObjectName(QString::fromUtf8("label1"));

        hboxLayout->addWidget(label1);

        LineEditFindInFiles = new QLineEdit(MacroNameGroup);
        LineEditFindInFiles->setObjectName(QString::fromUtf8("LineEditFindInFiles"));

        hboxLayout->addWidget(LineEditFindInFiles);


        gridLayout2->addLayout(hboxLayout, 1, 0, 1, 1);

        tabMacroWidget = new QTabWidget(MacroNameGroup);
        tabMacroWidget->setObjectName(QString::fromUtf8("tabMacroWidget"));
        tabMacroWidget->setTabPosition(QTabWidget::North);
        userSpecificTab = new QWidget();
        userSpecificTab->setObjectName(QString::fromUtf8("userSpecificTab"));
        verticalLayout_2 = new QVBoxLayout(userSpecificTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        userMacroListBox = new QTreeWidget(userSpecificTab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        userMacroListBox->setHeaderItem(__qtreewidgetitem);
        userMacroListBox->setObjectName(QString::fromUtf8("userMacroListBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userMacroListBox->sizePolicy().hasHeightForWidth());
        userMacroListBox->setSizePolicy(sizePolicy);
        userMacroListBox->setRootIsDecorated(false);

        verticalLayout_2->addWidget(userMacroListBox);

        tabMacroWidget->addTab(userSpecificTab, QString());
        systemWideTag = new QWidget();
        systemWideTag->setObjectName(QString::fromUtf8("systemWideTag"));
        verticalLayout = new QVBoxLayout(systemWideTag);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        systemMacroListBox = new QTreeWidget(systemWideTag);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        systemMacroListBox->setHeaderItem(__qtreewidgetitem1);
        systemMacroListBox->setObjectName(QString::fromUtf8("systemMacroListBox"));
        sizePolicy.setHeightForWidth(systemMacroListBox->sizePolicy().hasHeightForWidth());
        systemMacroListBox->setSizePolicy(sizePolicy);
        systemMacroListBox->setRootIsDecorated(false);

        verticalLayout->addWidget(systemMacroListBox);

        tabMacroWidget->addTab(systemWideTag, QString());

        gridLayout2->addWidget(tabMacroWidget, 2, 0, 1, 1);


        gridLayout1->addWidget(MacroNameGroup, 0, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        executeButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        executeButton->setObjectName(QString::fromUtf8("executeButton"));
        executeButton->setEnabled(false);

        vboxLayout->addWidget(executeButton);

        closeButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        vboxLayout->addWidget(closeButton);

        spacerItem = new QSpacerItem(77, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        createButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setEnabled(true);

        vboxLayout->addWidget(createButton);

        deleteButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setEnabled(false);

        vboxLayout->addWidget(deleteButton);

        editButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setEnabled(false);

        vboxLayout->addWidget(editButton);

        renameButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        renameButton->setObjectName(QString::fromUtf8("renameButton"));
        renameButton->setEnabled(false);

        vboxLayout->addWidget(renameButton);

        duplicateButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        duplicateButton->setObjectName(QString::fromUtf8("duplicateButton"));
        duplicateButton->setEnabled(false);

        vboxLayout->addWidget(duplicateButton);

        toolbarButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        toolbarButton->setObjectName(QString::fromUtf8("toolbarButton"));
        toolbarButton->setEnabled(false);

        vboxLayout->addWidget(toolbarButton);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        addonsButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        addonsButton->setObjectName(QString::fromUtf8("addonsButton"));
        addonsButton->setEnabled(true);

        vboxLayout->addWidget(addonsButton);


        gridLayout1->addLayout(vboxLayout, 0, 1, 1, 1);

        DestinationGroup = new QGroupBox(Gui__Dialog__DlgMacroExecute);
        DestinationGroup->setObjectName(QString::fromUtf8("DestinationGroup"));
        gridLayout3 = new QGridLayout(DestinationGroup);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        fileChooser = new Gui::FileChooser(DestinationGroup);
        fileChooser->setObjectName(QString::fromUtf8("fileChooser"));
        fileChooser->setFocusPolicy(Qt::StrongFocus);
        fileChooser->setMode(Gui::FileChooser::Directory);

        gridLayout3->addWidget(fileChooser, 0, 0, 1, 1);


        gridLayout1->addWidget(DestinationGroup, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        QWidget::setTabOrder(LineEditMacroName, executeButton);
        QWidget::setTabOrder(executeButton, closeButton);
        QWidget::setTabOrder(closeButton, createButton);
        QWidget::setTabOrder(createButton, deleteButton);
        QWidget::setTabOrder(deleteButton, editButton);
        QWidget::setTabOrder(editButton, renameButton);
        QWidget::setTabOrder(renameButton, duplicateButton);
        QWidget::setTabOrder(duplicateButton, toolbarButton);
        QWidget::setTabOrder(toolbarButton, addonsButton);
        QWidget::setTabOrder(addonsButton, fileChooser);

        retranslateUi(Gui__Dialog__DlgMacroExecute);
        QObject::connect(closeButton, SIGNAL(clicked()), Gui__Dialog__DlgMacroExecute, SLOT(reject()));
        QObject::connect(userMacroListBox, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), Gui__Dialog__DlgMacroExecute, SLOT(accept()));
        QObject::connect(systemMacroListBox, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), Gui__Dialog__DlgMacroExecute, SLOT(accept()));
        QObject::connect(executeButton, SIGNAL(clicked()), Gui__Dialog__DlgMacroExecute, SLOT(accept()));

        tabMacroWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgMacroExecute);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgMacroExecute)
    {
        Gui__Dialog__DlgMacroExecute->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Execute macro", nullptr));
        MacroNameGroup->setTitle(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Macro name:", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Find file:", nullptr));
#if QT_CONFIG(tooltip)
        LineEditFind->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Case-insensitive search for filenames, regular expressions supported", nullptr));
#endif // QT_CONFIG(tooltip)
        label1->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Find in files:", nullptr));
#if QT_CONFIG(tooltip)
        LineEditFindInFiles->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Filter by case-insensitive file content, regular expressions supported", nullptr));
#endif // QT_CONFIG(tooltip)
        tabMacroWidget->setTabText(tabMacroWidget->indexOf(userSpecificTab), QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "User macros", nullptr));
        tabMacroWidget->setTabText(tabMacroWidget->indexOf(systemWideTag), QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "System macros", nullptr));
        executeButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Execute", nullptr));
        closeButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Close", nullptr));
        createButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Create", nullptr));
        deleteButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Delete", nullptr));
        editButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Edit", nullptr));
        renameButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Rename", nullptr));
        duplicateButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Duplicate", nullptr));
#if QT_CONFIG(tooltip)
        toolbarButton->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Launch a guide on how to set up a macro in a custom global toolbar.", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbarButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        addonsButton->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Open Addon Manager where macros created by the community and other addons can be downloaded.", nullptr));
#endif // QT_CONFIG(tooltip)
        addonsButton->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "Download", nullptr));
        DestinationGroup->setTitle(QCoreApplication::translate("Gui::Dialog::DlgMacroExecute", "User macros location:", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgMacroExecute: public Ui_DlgMacroExecute {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGMACROEXECUTE_H
