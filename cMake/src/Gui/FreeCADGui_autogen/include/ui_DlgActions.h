/********************************************************************************
** Form generated from reading UI file 'DlgActions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGACTIONS_H
#define UI_DLGACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgCustomActions
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox7;
    QGridLayout *gridLayout1;
    QTreeWidget *actionListWidget;
    QLabel *TextLabel1_3;
    QComboBox *actionMacros;
    QLabel *TextLabel3;
    QLineEdit *actionMenu;
    QLabel *TextLabel2_2;
    QLineEdit *actionToolTip;
    QLabel *TextLabel3_2;
    QLineEdit *actionStatus;
    QLabel *TextLabel2;
    QLineEdit *actionWhatsThis;
    QLabel *TextLabel1;
    Gui::AccelLineEdit *actionAccel;
    QLabel *TextLabel5_2;
    QToolButton *buttonChoosePixmap;
    QLabel *pixmapLabel;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QPushButton *buttonAddAction;
    QPushButton *buttonRemoveAction;
    QPushButton *buttonReplaceAction;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *Gui__Dialog__DlgCustomActions)
    {
        if (Gui__Dialog__DlgCustomActions->objectName().isEmpty())
            Gui__Dialog__DlgCustomActions->setObjectName(QString::fromUtf8("Gui__Dialog__DlgCustomActions"));
        Gui__Dialog__DlgCustomActions->resize(523, 383);
        gridLayout = new QGridLayout(Gui__Dialog__DlgCustomActions);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox7 = new QGroupBox(Gui__Dialog__DlgCustomActions);
        GroupBox7->setObjectName(QString::fromUtf8("GroupBox7"));
        gridLayout1 = new QGridLayout(GroupBox7);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        actionListWidget = new QTreeWidget(GroupBox7);
        actionListWidget->setObjectName(QString::fromUtf8("actionListWidget"));
        actionListWidget->setMaximumSize(QSize(150, 16777215));
        actionListWidget->setRootIsDecorated(false);

        gridLayout1->addWidget(actionListWidget, 0, 0, 9, 1);

        TextLabel1_3 = new QLabel(GroupBox7);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

        gridLayout1->addWidget(TextLabel1_3, 0, 1, 1, 1);

        actionMacros = new QComboBox(GroupBox7);
        actionMacros->setObjectName(QString::fromUtf8("actionMacros"));

        gridLayout1->addWidget(actionMacros, 0, 2, 1, 4);

        TextLabel3 = new QLabel(GroupBox7);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout1->addWidget(TextLabel3, 1, 1, 1, 1);

        actionMenu = new QLineEdit(GroupBox7);
        actionMenu->setObjectName(QString::fromUtf8("actionMenu"));

        gridLayout1->addWidget(actionMenu, 1, 2, 1, 4);

        TextLabel2_2 = new QLabel(GroupBox7);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout1->addWidget(TextLabel2_2, 2, 1, 1, 1);

        actionToolTip = new QLineEdit(GroupBox7);
        actionToolTip->setObjectName(QString::fromUtf8("actionToolTip"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(actionToolTip->sizePolicy().hasHeightForWidth());
        actionToolTip->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(actionToolTip, 2, 2, 1, 4);

        TextLabel3_2 = new QLabel(GroupBox7);
        TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

        gridLayout1->addWidget(TextLabel3_2, 3, 1, 1, 1);

        actionStatus = new QLineEdit(GroupBox7);
        actionStatus->setObjectName(QString::fromUtf8("actionStatus"));

        gridLayout1->addWidget(actionStatus, 3, 2, 1, 4);

        TextLabel2 = new QLabel(GroupBox7);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout1->addWidget(TextLabel2, 4, 1, 1, 1);

        actionWhatsThis = new QLineEdit(GroupBox7);
        actionWhatsThis->setObjectName(QString::fromUtf8("actionWhatsThis"));

        gridLayout1->addWidget(actionWhatsThis, 4, 2, 1, 4);

        TextLabel1 = new QLabel(GroupBox7);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout1->addWidget(TextLabel1, 5, 1, 1, 1);

        actionAccel = new Gui::AccelLineEdit(GroupBox7);
        actionAccel->setObjectName(QString::fromUtf8("actionAccel"));

        gridLayout1->addWidget(actionAccel, 5, 2, 1, 4);

        TextLabel5_2 = new QLabel(GroupBox7);
        TextLabel5_2->setObjectName(QString::fromUtf8("TextLabel5_2"));

        gridLayout1->addWidget(TextLabel5_2, 6, 1, 1, 1);

        buttonChoosePixmap = new QToolButton(GroupBox7);
        buttonChoosePixmap->setObjectName(QString::fromUtf8("buttonChoosePixmap"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonChoosePixmap->sizePolicy().hasHeightForWidth());
        buttonChoosePixmap->setSizePolicy(sizePolicy1);
        buttonChoosePixmap->setMinimumSize(QSize(40, 30));
        buttonChoosePixmap->setMaximumSize(QSize(40, 30));
        buttonChoosePixmap->setText(QString::fromUtf8("..."));

        gridLayout1->addWidget(buttonChoosePixmap, 6, 2, 1, 1);

        pixmapLabel = new QLabel(GroupBox7);
        pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
        pixmapLabel->setMinimumSize(QSize(40, 40));
        pixmapLabel->setMaximumSize(QSize(40, 40));
        pixmapLabel->setScaledContents(true);

        gridLayout1->addWidget(pixmapLabel, 6, 3, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 6, 4, 1, 2);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 7, 1, 1, 1);

        buttonAddAction = new QPushButton(GroupBox7);
        buttonAddAction->setObjectName(QString::fromUtf8("buttonAddAction"));

        gridLayout1->addWidget(buttonAddAction, 8, 1, 1, 1);

        buttonRemoveAction = new QPushButton(GroupBox7);
        buttonRemoveAction->setObjectName(QString::fromUtf8("buttonRemoveAction"));

        gridLayout1->addWidget(buttonRemoveAction, 8, 2, 1, 2);

        buttonReplaceAction = new QPushButton(GroupBox7);
        buttonReplaceAction->setObjectName(QString::fromUtf8("buttonReplaceAction"));

        gridLayout1->addWidget(buttonReplaceAction, 8, 4, 1, 1);

        spacerItem2 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 8, 5, 1, 1);


        gridLayout->addWidget(GroupBox7, 0, 0, 1, 1);

        QWidget::setTabOrder(actionMacros, actionMenu);
        QWidget::setTabOrder(actionMenu, actionToolTip);
        QWidget::setTabOrder(actionToolTip, actionStatus);
        QWidget::setTabOrder(actionStatus, actionWhatsThis);
        QWidget::setTabOrder(actionWhatsThis, actionAccel);
        QWidget::setTabOrder(actionAccel, buttonAddAction);
        QWidget::setTabOrder(buttonAddAction, buttonRemoveAction);

        retranslateUi(Gui__Dialog__DlgCustomActions);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomActions);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomActions)
    {
        Gui__Dialog__DlgCustomActions->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Macros", nullptr));
        GroupBox7->setTitle(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Setup Custom Macros", nullptr));
        TextLabel1_3->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Macro:", nullptr));
        TextLabel3->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Menu text:", nullptr));
        TextLabel2_2->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Tool tip:", nullptr));
        TextLabel3_2->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Status text:", nullptr));
        TextLabel2->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "What's this:", nullptr));
        TextLabel1->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Accelerator:", nullptr));
        TextLabel5_2->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Pixmap", nullptr));
        buttonAddAction->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Add", nullptr));
        buttonRemoveAction->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Remove", nullptr));
        buttonReplaceAction->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomActions", "Replace", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomActions: public Ui_DlgCustomActions {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGACTIONS_H
