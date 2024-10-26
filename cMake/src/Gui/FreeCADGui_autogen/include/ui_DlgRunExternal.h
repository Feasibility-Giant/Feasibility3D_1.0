/********************************************************************************
** Form generated from reading UI file 'DlgRunExternal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGRUNEXTERNAL_H
#define UI_DLGRUNEXTERNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgRunExternal
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *programName;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonAdvanced;
    QWidget *extensionWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *programPath;
    QPushButton *chooseProgram;
    QTextEdit *output;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonAccept;
    QPushButton *buttonDiscard;
    QPushButton *buttonAbort;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonHelp;

    void setupUi(QDialog *Gui__Dialog__DlgRunExternal)
    {
        if (Gui__Dialog__DlgRunExternal->objectName().isEmpty())
            Gui__Dialog__DlgRunExternal->setObjectName(QString::fromUtf8("Gui__Dialog__DlgRunExternal"));
        Gui__Dialog__DlgRunExternal->resize(387, 363);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Gui__Dialog__DlgRunExternal->sizePolicy().hasHeightForWidth());
        Gui__Dialog__DlgRunExternal->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Gui__Dialog__DlgRunExternal);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        programName = new QLabel(Gui__Dialog__DlgRunExternal);
        programName->setObjectName(QString::fromUtf8("programName"));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        programName->setFont(font);

        horizontalLayout->addWidget(programName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonAdvanced = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonAdvanced->setObjectName(QString::fromUtf8("buttonAdvanced"));

        horizontalLayout->addWidget(buttonAdvanced);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        extensionWidget = new QWidget(Gui__Dialog__DlgRunExternal);
        extensionWidget->setObjectName(QString::fromUtf8("extensionWidget"));
        verticalLayout = new QVBoxLayout(extensionWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        programPath = new QLineEdit(extensionWidget);
        programPath->setObjectName(QString::fromUtf8("programPath"));

        hboxLayout->addWidget(programPath);

        chooseProgram = new QPushButton(extensionWidget);
        chooseProgram->setObjectName(QString::fromUtf8("chooseProgram"));
        chooseProgram->setText(QString::fromUtf8("..."));

        hboxLayout->addWidget(chooseProgram);


        verticalLayout->addLayout(hboxLayout);

        output = new QTextEdit(extensionWidget);
        output->setObjectName(QString::fromUtf8("output"));

        verticalLayout->addWidget(output);


        gridLayout->addWidget(extensionWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonAccept = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonAccept->setObjectName(QString::fromUtf8("buttonAccept"));

        horizontalLayout_2->addWidget(buttonAccept);

        buttonDiscard = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonDiscard->setObjectName(QString::fromUtf8("buttonDiscard"));

        horizontalLayout_2->addWidget(buttonDiscard);

        buttonAbort = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonAbort->setObjectName(QString::fromUtf8("buttonAbort"));

        horizontalLayout_2->addWidget(buttonAbort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonHelp = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));

        horizontalLayout_2->addWidget(buttonHelp);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgRunExternal);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgRunExternal);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgRunExternal)
    {
        Gui__Dialog__DlgRunExternal->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgRunExternal", "Running external program", nullptr));
        programName->setText(QCoreApplication::translate("Gui::Dialog::DlgRunExternal", "TextLabel", nullptr));
        buttonAdvanced->setText(QCoreApplication::translate("Gui::Dialog::DlgRunExternal", "Advanced >>", nullptr));
        buttonAccept->setText(QCoreApplication::translate("Gui::Dialog::DlgRunExternal", "Accept changes", nullptr));
        buttonDiscard->setText(QCoreApplication::translate("Gui::Dialog::DlgRunExternal", "Discard changes", nullptr));
        buttonAbort->setText(QCoreApplication::translate("Gui::Dialog::DlgRunExternal", "Abort program", nullptr));
        buttonHelp->setText(QCoreApplication::translate("Gui::Dialog::DlgRunExternal", "Help", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgRunExternal: public Ui_DlgRunExternal {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGRUNEXTERNAL_H
