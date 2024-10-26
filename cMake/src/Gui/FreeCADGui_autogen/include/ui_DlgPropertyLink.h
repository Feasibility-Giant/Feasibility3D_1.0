/********************************************************************************
** Form generated from reading UI file 'DlgPropertyLink.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROPERTYLINK_H
#define UI_DLGPROPERTYLINK_H

#include <Gui/ExpressionCompleter.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgPropertyLink
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkObjectType;
    QCheckBox *checkSubObject;
    QTreeWidget *typeTree;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Gui::ExpressionLineEdit *searchBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgPropertyLink)
    {
        if (Gui__Dialog__DlgPropertyLink->objectName().isEmpty())
            Gui__Dialog__DlgPropertyLink->setObjectName(QString::fromUtf8("Gui__Dialog__DlgPropertyLink"));
        Gui__Dialog__DlgPropertyLink->resize(436, 438);
        gridLayout = new QGridLayout(Gui__Dialog__DlgPropertyLink);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(Gui__Dialog__DlgPropertyLink);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidget->setProperty("showDropIndicator", QVariant(false));
        treeWidget->setHeaderHidden(true);
        treeWidget->setExpandsOnDoubleClick(false);
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkObjectType = new QCheckBox(Gui__Dialog__DlgPropertyLink);
        checkObjectType->setObjectName(QString::fromUtf8("checkObjectType"));

        horizontalLayout_2->addWidget(checkObjectType);

        checkSubObject = new QCheckBox(Gui__Dialog__DlgPropertyLink);
        checkSubObject->setObjectName(QString::fromUtf8("checkSubObject"));

        horizontalLayout_2->addWidget(checkSubObject);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        typeTree = new QTreeWidget(Gui__Dialog__DlgPropertyLink);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        typeTree->setHeaderItem(__qtreewidgetitem1);
        typeTree->setObjectName(QString::fromUtf8("typeTree"));
        typeTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        typeTree->setRootIsDecorated(false);
        typeTree->setSortingEnabled(true);
        typeTree->header()->setVisible(false);

        gridLayout->addWidget(typeTree, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Gui__Dialog__DlgPropertyLink);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        searchBox = new Gui::ExpressionLineEdit(Gui__Dialog__DlgPropertyLink);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        horizontalLayout->addWidget(searchBox);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgPropertyLink);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 10, 0, 1, 1);

        QWidget::setTabOrder(treeWidget, typeTree);
        QWidget::setTabOrder(typeTree, searchBox);
        QWidget::setTabOrder(searchBox, buttonBox);

        retranslateUi(Gui__Dialog__DlgPropertyLink);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgPropertyLink, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgPropertyLink, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgPropertyLink);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgPropertyLink)
    {
        Gui__Dialog__DlgPropertyLink->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgPropertyLink", "Link", nullptr));
        checkObjectType->setText(QCoreApplication::translate("Gui::Dialog::DlgPropertyLink", "Filter by type", nullptr));
#if QT_CONFIG(tooltip)
        checkSubObject->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgPropertyLink", "If enabled, then 3D view selection will be synchronized with full object hierarchy.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkSubObject->setText(QCoreApplication::translate("Gui::Dialog::DlgPropertyLink", "Sync sub-object selection", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgPropertyLink", "Search", nullptr));
#if QT_CONFIG(tooltip)
        searchBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgPropertyLink", "A search pattern to filter the results above", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgPropertyLink: public Ui_DlgPropertyLink {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPROPERTYLINK_H
