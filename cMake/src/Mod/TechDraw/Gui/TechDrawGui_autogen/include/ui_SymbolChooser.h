/********************************************************************************
** Form generated from reading UI file 'SymbolChooser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMBOLCHOOSER_H
#define UI_SYMBOLCHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include "Gui/FileDialog.h"

namespace TechDrawGui {

class Ui_SymbolChooser
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lwSymbols;
    QDialogButtonBox *bbButtons;
    QGridLayout *gridLayout;
    QLabel *label;
    Gui::FileChooser *fcSymbolDir;

    void setupUi(QDialog *TechDrawGui__SymbolChooser)
    {
        if (TechDrawGui__SymbolChooser->objectName().isEmpty())
            TechDrawGui__SymbolChooser->setObjectName(QString::fromUtf8("TechDrawGui__SymbolChooser"));
        TechDrawGui__SymbolChooser->setWindowModality(Qt::WindowModal);
        TechDrawGui__SymbolChooser->resize(360, 280);
        TechDrawGui__SymbolChooser->setModal(true);
        verticalLayout = new QVBoxLayout(TechDrawGui__SymbolChooser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lwSymbols = new QListWidget(TechDrawGui__SymbolChooser);
        lwSymbols->setObjectName(QString::fromUtf8("lwSymbols"));

        verticalLayout->addWidget(lwSymbols);

        bbButtons = new QDialogButtonBox(TechDrawGui__SymbolChooser);
        bbButtons->setObjectName(QString::fromUtf8("bbButtons"));
        bbButtons->setOrientation(Qt::Horizontal);
        bbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        bbButtons->setCenterButtons(false);

        verticalLayout->addWidget(bbButtons);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(TechDrawGui__SymbolChooser);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fcSymbolDir = new Gui::FileChooser(TechDrawGui__SymbolChooser);
        fcSymbolDir->setObjectName(QString::fromUtf8("fcSymbolDir"));
        fcSymbolDir->setMode(Gui::FileChooser::Directory);

        gridLayout->addWidget(fcSymbolDir, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(TechDrawGui__SymbolChooser);
        QObject::connect(bbButtons, SIGNAL(accepted()), TechDrawGui__SymbolChooser, SLOT(accept()));
        QObject::connect(bbButtons, SIGNAL(rejected()), TechDrawGui__SymbolChooser, SLOT(reject()));

        QMetaObject::connectSlotsByName(TechDrawGui__SymbolChooser);
    } // setupUi

    void retranslateUi(QDialog *TechDrawGui__SymbolChooser)
    {
        TechDrawGui__SymbolChooser->setWindowTitle(QCoreApplication::translate("TechDrawGui::SymbolChooser", "Symbol Chooser", nullptr));
#if QT_CONFIG(tooltip)
        lwSymbols->setToolTip(QCoreApplication::translate("TechDrawGui::SymbolChooser", "Select a symbol that should be used", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TechDrawGui::SymbolChooser", "Symbol Dir", nullptr));
#if QT_CONFIG(tooltip)
        fcSymbolDir->setToolTip(QCoreApplication::translate("TechDrawGui::SymbolChooser", "Directory to welding symbols.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class SymbolChooser: public Ui_SymbolChooser {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_SYMBOLCHOOSER_H
