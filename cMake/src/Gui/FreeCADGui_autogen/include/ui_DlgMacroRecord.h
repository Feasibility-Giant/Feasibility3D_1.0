/********************************************************************************
** Form generated from reading UI file 'DlgMacroRecord.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMACRORECORD_H
#define UI_DLGMACRORECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace Gui {
namespace Dialog {

class Ui_DlgMacroRecord
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEditPath;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout;
    QLineEdit *lineEditMacroPath;
    QPushButton *pushButtonChooseDir;
    QHBoxLayout *hboxLayout1;
    QPushButton *buttonStart;
    QSpacerItem *spacerItem;
    QPushButton *buttonStop;
    QPushButton *buttonClose;

    void setupUi(QDialog *Gui__Dialog__DlgMacroRecord)
    {
        if (Gui__Dialog__DlgMacroRecord->objectName().isEmpty())
            Gui__Dialog__DlgMacroRecord->setObjectName(QString::fromUtf8("Gui__Dialog__DlgMacroRecord"));
        Gui__Dialog__DlgMacroRecord->resize(302, 229);
        vboxLayout = new QVBoxLayout(Gui__Dialog__DlgMacroRecord);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        groupBox = new QGroupBox(Gui__Dialog__DlgMacroRecord);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(11, 11, 11, 11);
        lineEditPath = new QLineEdit(groupBox);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));

        gridLayout->addWidget(lineEditPath, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgMacroRecord);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout = new QHBoxLayout(groupBox_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        lineEditMacroPath = new QLineEdit(groupBox_2);
        lineEditMacroPath->setObjectName(QString::fromUtf8("lineEditMacroPath"));
        lineEditMacroPath->setEnabled(false);

        hboxLayout->addWidget(lineEditMacroPath);

        pushButtonChooseDir = new QPushButton(groupBox_2);
        pushButtonChooseDir->setObjectName(QString::fromUtf8("pushButtonChooseDir"));
        pushButtonChooseDir->setMaximumSize(QSize(35, 16777215));
        pushButtonChooseDir->setText(QString::fromUtf8("..."));

        hboxLayout->addWidget(pushButtonChooseDir);


        vboxLayout->addWidget(groupBox_2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        buttonStart = new QPushButton(Gui__Dialog__DlgMacroRecord);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));

        hboxLayout1->addWidget(buttonStart);

        spacerItem = new QSpacerItem(16, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        buttonStop = new QPushButton(Gui__Dialog__DlgMacroRecord);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));

        hboxLayout1->addWidget(buttonStop);

        buttonClose = new QPushButton(Gui__Dialog__DlgMacroRecord);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));

        hboxLayout1->addWidget(buttonClose);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(lineEditPath, buttonStart);
        QWidget::setTabOrder(buttonStart, buttonStop);
        QWidget::setTabOrder(buttonStop, buttonClose);

        retranslateUi(Gui__Dialog__DlgMacroRecord);

        buttonStart->setDefault(true);
        buttonStop->setDefault(true);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgMacroRecord);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgMacroRecord)
    {
        Gui__Dialog__DlgMacroRecord->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgMacroRecord", "Macro recording", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::DlgMacroRecord", "Macro name:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Gui::Dialog::DlgMacroRecord", "Macro path:", nullptr));
        buttonStart->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroRecord", "Record", nullptr));
        buttonStop->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroRecord", "Stop", nullptr));
        buttonClose->setText(QCoreApplication::translate("Gui::Dialog::DlgMacroRecord", "Close", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgMacroRecord: public Ui_DlgMacroRecord {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGMACRORECORD_H
