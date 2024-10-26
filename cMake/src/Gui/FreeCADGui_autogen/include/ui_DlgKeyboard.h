/********************************************************************************
** Form generated from reading UI file 'DlgKeyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGKEYBOARD_H
#define UI_DLGKEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgCustomKeyboard
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *editCommand;
    QLabel *TextLabelCategory;
    QComboBox *categoryBox;
    QTreeWidget *commandTreeWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *textLabelShortcut;
    Gui::AccelLineEdit *accelLineEditShortcut;
    QHBoxLayout *horizontalLayout_4;
    QLabel *textLabelNewShortcut;
    Gui::AccelLineEdit *editShortcut;
    QLabel *label;
    Gui::PrefSpinBox *shortcutTimeout;
    QLabel *textLabelAssigned;
    QTreeWidget *assignedTreeWidget;
    QVBoxLayout *vboxLayout;
    QPushButton *buttonAssign;
    QPushButton *buttonClear;
    QPushButton *buttonReset;
    QPushButton *buttonResetAll;
    QSpacerItem *spacerItem;
    QPushButton *buttonUp;
    QPushButton *buttonDown;

    void setupUi(QWidget *Gui__Dialog__DlgCustomKeyboard)
    {
        if (Gui__Dialog__DlgCustomKeyboard->objectName().isEmpty())
            Gui__Dialog__DlgCustomKeyboard->setObjectName(QString::fromUtf8("Gui__Dialog__DlgCustomKeyboard"));
        Gui__Dialog__DlgCustomKeyboard->resize(642, 376);
        verticalLayout = new QVBoxLayout(Gui__Dialog__DlgCustomKeyboard);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(Gui__Dialog__DlgCustomKeyboard);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        editCommand = new QLineEdit(layoutWidget);
        editCommand->setObjectName(QString::fromUtf8("editCommand"));

        gridLayout->addWidget(editCommand, 1, 0, 1, 2);

        TextLabelCategory = new QLabel(layoutWidget);
        TextLabelCategory->setObjectName(QString::fromUtf8("TextLabelCategory"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabelCategory->sizePolicy().hasHeightForWidth());
        TextLabelCategory->setSizePolicy(sizePolicy);

        gridLayout->addWidget(TextLabelCategory, 2, 0, 1, 1);

        categoryBox = new QComboBox(layoutWidget);
        categoryBox->setObjectName(QString::fromUtf8("categoryBox"));

        gridLayout->addWidget(categoryBox, 2, 1, 1, 1);

        commandTreeWidget = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        commandTreeWidget->setHeaderItem(__qtreewidgetitem);
        commandTreeWidget->setObjectName(QString::fromUtf8("commandTreeWidget"));
        commandTreeWidget->setMinimumSize(QSize(220, 0));
        commandTreeWidget->setRootIsDecorated(false);
        commandTreeWidget->setSortingEnabled(true);

        gridLayout->addWidget(commandTreeWidget, 3, 0, 1, 2);

        splitter->addWidget(layoutWidget);
        horizontalLayoutWidget = new QWidget(splitter);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textLabelShortcut = new QLabel(horizontalLayoutWidget);
        textLabelShortcut->setObjectName(QString::fromUtf8("textLabelShortcut"));

        gridLayout_2->addWidget(textLabelShortcut, 1, 1, 1, 1);

        accelLineEditShortcut = new Gui::AccelLineEdit(horizontalLayoutWidget);
        accelLineEditShortcut->setObjectName(QString::fromUtf8("accelLineEditShortcut"));
        accelLineEditShortcut->setReadOnly(true);

        gridLayout_2->addWidget(accelLineEditShortcut, 1, 2, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        textLabelNewShortcut = new QLabel(horizontalLayoutWidget);
        textLabelNewShortcut->setObjectName(QString::fromUtf8("textLabelNewShortcut"));

        horizontalLayout_4->addWidget(textLabelNewShortcut);

        editShortcut = new Gui::AccelLineEdit(horizontalLayoutWidget);
        editShortcut->setObjectName(QString::fromUtf8("editShortcut"));

        horizontalLayout_4->addWidget(editShortcut);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 1, 1, 3);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 4, 1, 1, 2);

        shortcutTimeout = new Gui::PrefSpinBox(horizontalLayoutWidget);
        shortcutTimeout->setObjectName(QString::fromUtf8("shortcutTimeout"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(shortcutTimeout->sizePolicy().hasHeightForWidth());
        shortcutTimeout->setSizePolicy(sizePolicy1);
        shortcutTimeout->setMinimumSize(QSize(50, 0));
        shortcutTimeout->setMaximum(10000);
        shortcutTimeout->setSingleStep(100);
        shortcutTimeout->setValue(300);
        shortcutTimeout->setProperty("prefPath", QVariant(QByteArray("Shortcut/Settings")));
        shortcutTimeout->setProperty("prefEntry", QVariant(QByteArray("ShortcutTimeout")));

        gridLayout_2->addWidget(shortcutTimeout, 4, 3, 1, 1);

        textLabelAssigned = new QLabel(horizontalLayoutWidget);
        textLabelAssigned->setObjectName(QString::fromUtf8("textLabelAssigned"));
        textLabelAssigned->setMinimumSize(QSize(0, 20));

        gridLayout_2->addWidget(textLabelAssigned, 5, 1, 1, 3);

        assignedTreeWidget = new QTreeWidget(horizontalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        assignedTreeWidget->setHeaderItem(__qtreewidgetitem1);
        assignedTreeWidget->setObjectName(QString::fromUtf8("assignedTreeWidget"));
        assignedTreeWidget->setMinimumSize(QSize(220, 0));
        assignedTreeWidget->setAlternatingRowColors(true);
        assignedTreeWidget->setRootIsDecorated(false);

        gridLayout_2->addWidget(assignedTreeWidget, 6, 1, 1, 3);


        horizontalLayout->addLayout(gridLayout_2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        buttonAssign = new QPushButton(horizontalLayoutWidget);
        buttonAssign->setObjectName(QString::fromUtf8("buttonAssign"));

        vboxLayout->addWidget(buttonAssign);

        buttonClear = new QPushButton(horizontalLayoutWidget);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));

        vboxLayout->addWidget(buttonClear);

        buttonReset = new QPushButton(horizontalLayoutWidget);
        buttonReset->setObjectName(QString::fromUtf8("buttonReset"));

        vboxLayout->addWidget(buttonReset);

        buttonResetAll = new QPushButton(horizontalLayoutWidget);
        buttonResetAll->setObjectName(QString::fromUtf8("buttonResetAll"));

        vboxLayout->addWidget(buttonResetAll);

        spacerItem = new QSpacerItem(41, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonUp = new QPushButton(horizontalLayoutWidget);
        buttonUp->setObjectName(QString::fromUtf8("buttonUp"));
        buttonUp->setEnabled(false);

        vboxLayout->addWidget(buttonUp);

        buttonDown = new QPushButton(horizontalLayoutWidget);
        buttonDown->setObjectName(QString::fromUtf8("buttonDown"));
        buttonDown->setEnabled(false);

        vboxLayout->addWidget(buttonDown);


        horizontalLayout->addLayout(vboxLayout);

        splitter->addWidget(horizontalLayoutWidget);

        verticalLayout->addWidget(splitter);

        verticalLayout->setStretch(0, 1);
#if QT_CONFIG(shortcut)
        TextLabelCategory->setBuddy(categoryBox);
        textLabelNewShortcut->setBuddy(editShortcut);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(editCommand, categoryBox);
        QWidget::setTabOrder(categoryBox, commandTreeWidget);
        QWidget::setTabOrder(commandTreeWidget, accelLineEditShortcut);
        QWidget::setTabOrder(accelLineEditShortcut, editShortcut);
        QWidget::setTabOrder(editShortcut, shortcutTimeout);
        QWidget::setTabOrder(shortcutTimeout, buttonAssign);
        QWidget::setTabOrder(buttonAssign, buttonClear);
        QWidget::setTabOrder(buttonClear, buttonReset);
        QWidget::setTabOrder(buttonReset, buttonResetAll);
        QWidget::setTabOrder(buttonResetAll, assignedTreeWidget);
        QWidget::setTabOrder(assignedTreeWidget, buttonUp);
        QWidget::setTabOrder(buttonUp, buttonDown);

        retranslateUi(Gui__Dialog__DlgCustomKeyboard);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomKeyboard);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomKeyboard)
    {
        Gui__Dialog__DlgCustomKeyboard->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Keyboard", nullptr));
        TextLabelCategory->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Category:", nullptr));
        textLabelShortcut->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Current shortcut:", nullptr));
#if QT_CONFIG(tooltip)
        accelLineEditShortcut->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "To change a current shortcut enter the new shortcut in the field below and press 'Assign'.", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabelNewShortcut->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&New shortcut:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Multi-key sequence delay:", nullptr));
#if QT_CONFIG(tooltip)
        shortcutTimeout->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Time in milliseconds to wait for the next keystroke of the current key sequence.\n"
"For example, pressing 'F' twice in less than the time delay setting here will be\n"
"treated as shortcut key sequence 'F, F'.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        textLabelAssigned->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "This list shows commands having the same shortcut in the priority from high\n"
"to low. If more than one command with the same shortcut are active at the\n"
"same time. The one with the highest priority will be triggered.", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabelAssigned->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Shortcut priority list:", nullptr));
        buttonAssign->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Assign", nullptr));
#if QT_CONFIG(shortcut)
        buttonAssign->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        buttonClear->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Clear", nullptr));
        buttonReset->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Reset", nullptr));
#if QT_CONFIG(shortcut)
        buttonReset->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        buttonResetAll->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Re&set All", nullptr));
#if QT_CONFIG(shortcut)
        buttonResetAll->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        buttonUp->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Up", nullptr));
        buttonDown->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Down", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomKeyboard: public Ui_DlgCustomKeyboard {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGKEYBOARD_H
