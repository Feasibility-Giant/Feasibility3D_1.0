/********************************************************************************
** Form generated from reading UI file 'DlgParameter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARAMETER_H
#define UI_DLGPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>

namespace Gui {
namespace Dialog {

class Ui_DlgParameter
{
public:
    QGridLayout *gridLayout;
    QComboBox *parameterSet;
    QSplitter *splitter3;
    QHBoxLayout *hboxLayout;
    QCheckBox *checkSort;
    QLabel *quickSearch;
    QLineEdit *findGroupLE;
    QPushButton *buttonFind;
    QSpacerItem *spacerItem;
    QPushButton *buttonSaveToDisk;
    QPushButton *closeButton;

    void setupUi(QDialog *Gui__Dialog__DlgParameter)
    {
        if (Gui__Dialog__DlgParameter->objectName().isEmpty())
            Gui__Dialog__DlgParameter->setObjectName(QString::fromUtf8("Gui__Dialog__DlgParameter"));
        Gui__Dialog__DlgParameter->resize(657, 558);
        Gui__Dialog__DlgParameter->setSizeGripEnabled(true);
        Gui__Dialog__DlgParameter->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgParameter);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        parameterSet = new QComboBox(Gui__Dialog__DlgParameter);
        parameterSet->setObjectName(QString::fromUtf8("parameterSet"));

        gridLayout->addWidget(parameterSet, 0, 0, 1, 1);

        splitter3 = new QSplitter(Gui__Dialog__DlgParameter);
        splitter3->setObjectName(QString::fromUtf8("splitter3"));
        splitter3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(splitter3, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        checkSort = new QCheckBox(Gui__Dialog__DlgParameter);
        checkSort->setObjectName(QString::fromUtf8("checkSort"));
        checkSort->setChecked(true);

        hboxLayout->addWidget(checkSort);

        quickSearch = new QLabel(Gui__Dialog__DlgParameter);
        quickSearch->setObjectName(QString::fromUtf8("quickSearch"));

        hboxLayout->addWidget(quickSearch);

        findGroupLE = new QLineEdit(Gui__Dialog__DlgParameter);
        findGroupLE->setObjectName(QString::fromUtf8("findGroupLE"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(findGroupLE->sizePolicy().hasHeightForWidth());
        findGroupLE->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(findGroupLE);

        buttonFind = new QPushButton(Gui__Dialog__DlgParameter);
        buttonFind->setObjectName(QString::fromUtf8("buttonFind"));

        hboxLayout->addWidget(buttonFind);

        spacerItem = new QSpacerItem(351, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonSaveToDisk = new QPushButton(Gui__Dialog__DlgParameter);
        buttonSaveToDisk->setObjectName(QString::fromUtf8("buttonSaveToDisk"));
        buttonSaveToDisk->setAutoDefault(true);

        hboxLayout->addWidget(buttonSaveToDisk);

        closeButton = new QPushButton(Gui__Dialog__DlgParameter);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setAutoDefault(true);

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgParameter);

        buttonSaveToDisk->setDefault(true);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgParameter);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgParameter)
    {
        Gui__Dialog__DlgParameter->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Parameter Editor", nullptr));
        checkSort->setText(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Sorted", nullptr));
        quickSearch->setText(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Quick search", nullptr));
#if QT_CONFIG(tooltip)
        findGroupLE->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Type in a group name to find it", nullptr));
#endif // QT_CONFIG(tooltip)
        findGroupLE->setPlaceholderText(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Search Group", nullptr));
        buttonFind->setText(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Find...", nullptr));
        buttonSaveToDisk->setText(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Save to disk", nullptr));
#if QT_CONFIG(shortcut)
        buttonSaveToDisk->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        closeButton->setText(QCoreApplication::translate("Gui::Dialog::DlgParameter", "&Close", nullptr));
#if QT_CONFIG(shortcut)
        closeButton->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgParameter", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgParameter: public Ui_DlgParameter {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPARAMETER_H
