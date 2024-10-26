/********************************************************************************
** Form generated from reading UI file 'DlgStringListEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSTRINGLISTEDITOR_H
#define UI_DLGSTRINGLISTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace TechDrawGui {

class Ui_DlgStringListEditor
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QListWidget *lwTexts;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAdd;
    QLineEdit *leNewItem;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbRemove;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *bbButtons;

    void setupUi(QDialog *TechDrawGui__DlgStringListEditor)
    {
        if (TechDrawGui__DlgStringListEditor->objectName().isEmpty())
            TechDrawGui__DlgStringListEditor->setObjectName(QString::fromUtf8("TechDrawGui__DlgStringListEditor"));
        TechDrawGui__DlgStringListEditor->setWindowModality(Qt::WindowModal);
        TechDrawGui__DlgStringListEditor->resize(360, 331);
        TechDrawGui__DlgStringListEditor->setModal(true);
        verticalLayout = new QVBoxLayout(TechDrawGui__DlgStringListEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lwTexts = new QListWidget(TechDrawGui__DlgStringListEditor);
        lwTexts->setObjectName(QString::fromUtf8("lwTexts"));
        lwTexts->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        lwTexts->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(lwTexts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbAdd = new QPushButton(TechDrawGui__DlgStringListEditor);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/list-add.svg"), QSize(), QIcon::Normal, QIcon::On);
        pbAdd->setIcon(icon);

        horizontalLayout->addWidget(pbAdd);

        leNewItem = new QLineEdit(TechDrawGui__DlgStringListEditor);
        leNewItem->setObjectName(QString::fromUtf8("leNewItem"));

        horizontalLayout->addWidget(leNewItem);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbRemove = new QPushButton(TechDrawGui__DlgStringListEditor);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon1);

        horizontalLayout_2->addWidget(pbRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);

        bbButtons = new QDialogButtonBox(TechDrawGui__DlgStringListEditor);
        bbButtons->setObjectName(QString::fromUtf8("bbButtons"));
        bbButtons->setOrientation(Qt::Horizontal);
        bbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        bbButtons->setCenterButtons(false);

        verticalLayout->addWidget(bbButtons);


        retranslateUi(TechDrawGui__DlgStringListEditor);
        QObject::connect(bbButtons, SIGNAL(accepted()), TechDrawGui__DlgStringListEditor, SLOT(accept()));
        QObject::connect(bbButtons, SIGNAL(rejected()), TechDrawGui__DlgStringListEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(TechDrawGui__DlgStringListEditor);
    } // setupUi

    void retranslateUi(QDialog *TechDrawGui__DlgStringListEditor)
    {
        TechDrawGui__DlgStringListEditor->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgStringListEditor", "String List Editor", nullptr));
#if QT_CONFIG(tooltip)
        TechDrawGui__DlgStringListEditor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lwTexts->setToolTip(QCoreApplication::translate("TechDrawGui::DlgStringListEditor", "<html><head/><body><p>Double click to edit a line.  New lines are added at the current location in the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRemove->setText(QString());
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgStringListEditor: public Ui_DlgStringListEditor {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGSTRINGLISTEDITOR_H
