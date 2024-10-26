/********************************************************************************
** Form generated from reading UI file 'DlgToolbars.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTOOLBARS_H
#define UI_DLGTOOLBARS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

namespace Gui {
namespace Dialog {

class Ui_DlgCustomToolbars
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QComboBox *categoryBox;
    QLineEdit *editCommand;
    QLabel *label_4;
    QTreeWidget *commandTreeWidget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *spacerItem;
    QPushButton *moveActionRightButton;
    QPushButton *moveActionLeftButton;
    QPushButton *moveActionUpButton;
    QPushButton *moveActionDownButton;
    QSpacerItem *spacerItem1;
    QVBoxLayout *verticalLayout;
    QComboBox *workbenchBox;
    QTreeWidget *toolbarTreeWidget;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem2;
    QPushButton *newButton;
    QPushButton *renameButton;
    QPushButton *deleteButton;
    QSpacerItem *spacerItem3;
    QLabel *label;

    void setupUi(QWidget *Gui__Dialog__DlgCustomToolbars)
    {
        if (Gui__Dialog__DlgCustomToolbars->objectName().isEmpty())
            Gui__Dialog__DlgCustomToolbars->setObjectName(QString::fromUtf8("Gui__Dialog__DlgCustomToolbars"));
        Gui__Dialog__DlgCustomToolbars->resize(576, 352);
        verticalLayout_3 = new QVBoxLayout(Gui__Dialog__DlgCustomToolbars);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(Gui__Dialog__DlgCustomToolbars);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        categoryBox = new QComboBox(widget);
        categoryBox->setObjectName(QString::fromUtf8("categoryBox"));

        gridLayout_2->addWidget(categoryBox, 1, 1, 1, 1);

        editCommand = new QLineEdit(widget);
        editCommand->setObjectName(QString::fromUtf8("editCommand"));

        gridLayout_2->addWidget(editCommand, 0, 0, 1, 2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        commandTreeWidget = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        commandTreeWidget->setHeaderItem(__qtreewidgetitem);
        commandTreeWidget->setObjectName(QString::fromUtf8("commandTreeWidget"));
        commandTreeWidget->setRootIsDecorated(false);

        gridLayout_2->addWidget(commandTreeWidget, 2, 0, 1, 2);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        spacerItem = new QSpacerItem(33, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem);

        moveActionRightButton = new QPushButton(widget1);
        moveActionRightButton->setObjectName(QString::fromUtf8("moveActionRightButton"));
        moveActionRightButton->setEnabled(true);
        moveActionRightButton->setMinimumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/button_right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveActionRightButton->setIcon(icon);

        verticalLayout_2->addWidget(moveActionRightButton);

        moveActionLeftButton = new QPushButton(widget1);
        moveActionLeftButton->setObjectName(QString::fromUtf8("moveActionLeftButton"));
        moveActionLeftButton->setEnabled(true);
        moveActionLeftButton->setMinimumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/button_left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveActionLeftButton->setIcon(icon1);
        moveActionLeftButton->setAutoDefault(true);

        verticalLayout_2->addWidget(moveActionLeftButton);

        moveActionUpButton = new QPushButton(widget1);
        moveActionUpButton->setObjectName(QString::fromUtf8("moveActionUpButton"));
        moveActionUpButton->setEnabled(true);
        moveActionUpButton->setMinimumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/button_up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveActionUpButton->setIcon(icon2);

        verticalLayout_2->addWidget(moveActionUpButton);

        moveActionDownButton = new QPushButton(widget1);
        moveActionDownButton->setObjectName(QString::fromUtf8("moveActionDownButton"));
        moveActionDownButton->setEnabled(true);
        moveActionDownButton->setMinimumSize(QSize(30, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/button_down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveActionDownButton->setIcon(icon3);
        moveActionDownButton->setAutoDefault(true);

        verticalLayout_2->addWidget(moveActionDownButton);

        spacerItem1 = new QSpacerItem(33, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem1);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        workbenchBox = new QComboBox(widget1);
        workbenchBox->setObjectName(QString::fromUtf8("workbenchBox"));

        verticalLayout->addWidget(workbenchBox);

        toolbarTreeWidget = new QTreeWidget(widget1);
        toolbarTreeWidget->setObjectName(QString::fromUtf8("toolbarTreeWidget"));
        toolbarTreeWidget->setColumnCount(0);

        verticalLayout->addWidget(toolbarTreeWidget);


        horizontalLayout->addLayout(verticalLayout);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem2);

        newButton = new QPushButton(widget1);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        vboxLayout->addWidget(newButton);

        renameButton = new QPushButton(widget1);
        renameButton->setObjectName(QString::fromUtf8("renameButton"));

        vboxLayout->addWidget(renameButton);

        deleteButton = new QPushButton(widget1);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        vboxLayout->addWidget(deleteButton);

        spacerItem3 = new QSpacerItem(20, 152, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        horizontalLayout->addLayout(vboxLayout);

        splitter->addWidget(widget1);

        verticalLayout_3->addWidget(splitter);

        label = new QLabel(Gui__Dialog__DlgCustomToolbars);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(label);

        QWidget::setTabOrder(editCommand, categoryBox);
        QWidget::setTabOrder(categoryBox, commandTreeWidget);
        QWidget::setTabOrder(commandTreeWidget, moveActionRightButton);
        QWidget::setTabOrder(moveActionRightButton, moveActionLeftButton);
        QWidget::setTabOrder(moveActionLeftButton, moveActionUpButton);
        QWidget::setTabOrder(moveActionUpButton, moveActionDownButton);
        QWidget::setTabOrder(moveActionDownButton, workbenchBox);
        QWidget::setTabOrder(workbenchBox, toolbarTreeWidget);
        QWidget::setTabOrder(toolbarTreeWidget, newButton);
        QWidget::setTabOrder(newButton, renameButton);
        QWidget::setTabOrder(renameButton, deleteButton);

        retranslateUi(Gui__Dialog__DlgCustomToolbars);

        moveActionLeftButton->setDefault(false);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomToolbars);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomToolbars)
    {
        Gui__Dialog__DlgCustomToolbars->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Toolbars", nullptr));
        label_4->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Category:", nullptr));
#if QT_CONFIG(tooltip)
        moveActionRightButton->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        moveActionRightButton->setWhatsThis(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item one level down.</b><p>This will also change the level of the parent item.</p>", nullptr));
#endif // QT_CONFIG(whatsthis)
        moveActionRightButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveActionLeftButton->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move left", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        moveActionLeftButton->setWhatsThis(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item one level up.</b><p>This will also change the level of the parent item.</p>", nullptr));
#endif // QT_CONFIG(whatsthis)
        moveActionLeftButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveActionUpButton->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        moveActionUpButton->setWhatsThis(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item up.</b><p>The item will be moved within the hierarchy level.</p>", nullptr));
#endif // QT_CONFIG(whatsthis)
        moveActionUpButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveActionDownButton->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        moveActionDownButton->setWhatsThis(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item down.</b><p>The item will be moved within the hierarchy level.</p>", nullptr));
#endif // QT_CONFIG(whatsthis)
        moveActionDownButton->setText(QString());
        newButton->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "New...", nullptr));
        renameButton->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Rename...", nullptr));
        deleteButton->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "Delete", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgCustomToolbars", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Note:</span> The changes become active the next time you load the appropriate workbench</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomToolbars: public Ui_DlgCustomToolbars {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGTOOLBARS_H
