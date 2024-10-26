/********************************************************************************
** Form generated from reading UI file 'Sheet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEET_H
#define UI_SHEET_H

#include <Gui/ExpressionCompleter.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SheetTableView.h"

QT_BEGIN_NAMESPACE

class Ui_Sheet
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    Gui::ExpressionLineEdit *cellContent;
    QLabel *alias_label;
    Gui::ExpressionLineEdit *cellAlias;
    SpreadsheetGui::SheetTableView *cells;

    void setupUi(QWidget *Sheet)
    {
        if (Sheet->objectName().isEmpty())
            Sheet->setObjectName(QString::fromUtf8("Sheet"));
        Sheet->resize(727, 596);
        Sheet->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(Sheet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Sheet);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cellContent = new Gui::ExpressionLineEdit(Sheet);
        cellContent->setObjectName(QString::fromUtf8("cellContent"));
        cellContent->setEnabled(false);

        gridLayout->addWidget(cellContent, 0, 1, 1, 1);

        alias_label = new QLabel(Sheet);
        alias_label->setObjectName(QString::fromUtf8("alias_label"));

        gridLayout->addWidget(alias_label, 0, 2, 1, 1);

        cellAlias = new Gui::ExpressionLineEdit(Sheet);
        cellAlias->setObjectName(QString::fromUtf8("cellAlias"));
        cellAlias->setEnabled(false);

        gridLayout->addWidget(cellAlias, 0, 3, 1, 1);

        gridLayout->setColumnStretch(1, 3);
        gridLayout->setColumnStretch(3, 1);

        verticalLayout->addLayout(gridLayout);

        cells = new SpreadsheetGui::SheetTableView(Sheet);
        cells->setObjectName(QString::fromUtf8("cells"));

        verticalLayout->addWidget(cells);

#if QT_CONFIG(shortcut)
        label->setBuddy(cellContent);
        alias_label->setBuddy(cellAlias);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(cells, cellContent);
        QWidget::setTabOrder(cellContent, cellAlias);

        retranslateUi(Sheet);

        QMetaObject::connectSlotsByName(Sheet);
    } // setupUi

    void retranslateUi(QWidget *Sheet)
    {
        label->setText(QCoreApplication::translate("Sheet", "&Content:", nullptr));
        alias_label->setText(QCoreApplication::translate("Sheet", "&Alias:", nullptr));
#if QT_CONFIG(tooltip)
        cellAlias->setToolTip(QCoreApplication::translate("Sheet", "Refer to cell by alias, for example\n"
"Spreadsheet.my_alias_name instead of Spreadsheet.B1", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)Sheet;
    } // retranslateUi

};

namespace Ui {
    class Sheet: public Ui_Sheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEET_H
