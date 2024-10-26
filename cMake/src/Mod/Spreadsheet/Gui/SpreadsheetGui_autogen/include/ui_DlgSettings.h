/********************************************************************************
** Form generated from reading UI file 'DlgSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGS_H
#define UI_DLGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace SpreadsheetGui {

class Ui_DlgSettings
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox1;
    QHBoxLayout *gridLayout1;
    Gui::PrefCheckBox *checkBoxShowAlias;
    QSpacerItem *horizontalSpacer1;
    Gui::PrefLineEdit *formatString;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel;
    QSpacerItem *horizontalSpacer;
    Gui::PrefComboBox *delimiterComboBox;
    QLabel *textLabel2;
    Gui::PrefLineEdit *quoteCharLineEdit;
    QLabel *textLabel3;
    Gui::PrefLineEdit *escapeCharLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SpreadsheetGui__DlgSettings)
    {
        if (SpreadsheetGui__DlgSettings->objectName().isEmpty())
            SpreadsheetGui__DlgSettings->setObjectName(QString::fromUtf8("SpreadsheetGui__DlgSettings"));
        SpreadsheetGui__DlgSettings->resize(322, 149);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SpreadsheetGui__DlgSettings->sizePolicy().hasHeightForWidth());
        SpreadsheetGui__DlgSettings->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(SpreadsheetGui__DlgSettings);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox1 = new QGroupBox(SpreadsheetGui__DlgSettings);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout1 = new QHBoxLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        checkBoxShowAlias = new Gui::PrefCheckBox(groupBox1);
        checkBoxShowAlias->setObjectName(QString::fromUtf8("checkBoxShowAlias"));
        checkBoxShowAlias->setProperty("prefEntry", QVariant(QByteArray("showAliasName")));
        checkBoxShowAlias->setProperty("prefPath", QVariant(QByteArray("Mod/Spreadsheet")));

        gridLayout1->addWidget(checkBoxShowAlias);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer1);

        formatString = new Gui::PrefLineEdit(groupBox1);
        formatString->setObjectName(QString::fromUtf8("formatString"));
        formatString->setText(QString::fromUtf8("%V = %A"));
        formatString->setProperty("prefEntry", QVariant(QByteArray("DisplayAliasFormatString")));
        formatString->setProperty("prefPath", QVariant(QByteArray("Mod/Spreadsheet")));

        gridLayout1->addWidget(formatString);


        gridLayout_2->addWidget(groupBox1, 1, 0, 1, 1);

        groupBox = new QGroupBox(SpreadsheetGui__DlgSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel = new QLabel(groupBox);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel->sizePolicy().hasHeightForWidth());
        textLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        delimiterComboBox = new Gui::PrefComboBox(groupBox);
        delimiterComboBox->addItem(QString());
        delimiterComboBox->addItem(QString::fromUtf8(";"));
        delimiterComboBox->addItem(QString::fromUtf8(","));
        delimiterComboBox->setObjectName(QString::fromUtf8("delimiterComboBox"));
        delimiterComboBox->setEditable(true);
        delimiterComboBox->setCurrentText(QString::fromUtf8("tab"));
        delimiterComboBox->setProperty("prefEntry", QVariant(QByteArray("ImportExportDelimiter")));
        delimiterComboBox->setProperty("prefPath", QVariant(QByteArray("Mod/Spreadsheet")));

        gridLayout->addWidget(delimiterComboBox, 0, 2, 1, 1);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        sizePolicy1.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        quoteCharLineEdit = new Gui::PrefLineEdit(groupBox);
        quoteCharLineEdit->setObjectName(QString::fromUtf8("quoteCharLineEdit"));
        quoteCharLineEdit->setText(QString::fromUtf8("\""));
        quoteCharLineEdit->setProperty("prefEntry", QVariant(QByteArray("ImportExportQuoteCharacter")));
        quoteCharLineEdit->setProperty("prefPath", QVariant(QByteArray("Mod/Spreadsheet")));

        gridLayout->addWidget(quoteCharLineEdit, 1, 2, 1, 1);

        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        escapeCharLineEdit = new Gui::PrefLineEdit(groupBox);
        escapeCharLineEdit->setObjectName(QString::fromUtf8("escapeCharLineEdit"));
        escapeCharLineEdit->setText(QString::fromUtf8("\\"));
        escapeCharLineEdit->setProperty("prefEntry", QVariant(QByteArray("ImportExportEscapeCharacter")));
        escapeCharLineEdit->setProperty("prefPath", QVariant(QByteArray("Mod/Spreadsheet")));

        gridLayout->addWidget(escapeCharLineEdit, 2, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(SpreadsheetGui__DlgSettings);

        QMetaObject::connectSlotsByName(SpreadsheetGui__DlgSettings);
    } // setupUi

    void retranslateUi(QWidget *SpreadsheetGui__DlgSettings)
    {
        SpreadsheetGui__DlgSettings->setWindowTitle(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "Spreadsheet", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "Display Settings", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxShowAlias->setToolTip(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "If checked, use the custom presentation to display cell string.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxShowAlias->setText(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "Show alias in cell with format", nullptr));
#if QT_CONFIG(tooltip)
        formatString->setToolTip(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "The format of the custom cell string presentation.\n"
"Defaults to: %V = %A\n"
"\n"
"%A - alias name\n"
"%V - cell value", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "Import/Export Settings", nullptr));
        textLabel->setText(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "Delimiter Character:", nullptr));
        delimiterComboBox->setItemText(0, QCoreApplication::translate("SpreadsheetGui::DlgSettings", "tab", nullptr));

#if QT_CONFIG(tooltip)
        delimiterComboBox->setToolTip(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "<html><head/><body><p>Character to use as field delimiter.  Default is tab, but also commonly used are commas (,) and semicolons (;). Select from the list or enter your own in the field. Must be a single character or the words <span style=\" font-style:italic;\">tab</span>, <span style=\" font-style:italic;\">comma</span>, or <span style=\" font-style:italic;\">semicolon</span>.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel2->setText(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "Quote Character:", nullptr));
#if QT_CONFIG(tooltip)
        quoteCharLineEdit->setToolTip(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "<html><head/><body><p>Character used to delimit strings, typically is single quote (') or double quote (&quot;). Must be a single character.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        quoteCharLineEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        textLabel3->setText(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "Escape Character:", nullptr));
#if QT_CONFIG(tooltip)
        escapeCharLineEdit->setToolTip(QCoreApplication::translate("SpreadsheetGui::DlgSettings", "<html><head/><body><p>Escape character, typically the backslash (\\), used to indicate special unprintable characters, e.g. \\t = tab. Must be a single character.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace SpreadsheetGui

namespace SpreadsheetGui {
namespace Ui {
    class DlgSettings: public Ui_DlgSettings {};
} // namespace Ui
} // namespace SpreadsheetGui

#endif // UI_DLGSETTINGS_H
