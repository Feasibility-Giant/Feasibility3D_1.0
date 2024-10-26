/********************************************************************************
** Form generated from reading UI file 'DlgBindSheet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGBINDSHEET_H
#define UI_DLGBINDSHEET_H

#include <Gui/ExpressionCompleter.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DlgBindSheet
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *lineEditFromStart;
    QLineEdit *lineEditFromEnd;
    QLabel *label_3;
    Gui::ExpressionLineEdit *lineEditToStart;
    Gui::ExpressionLineEdit *lineEditToEnd;
    QFormLayout *formLayout;
    QComboBox *comboBox;
    QLabel *label;
    QCheckBox *checkBoxHREF;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnDiscard;
    QPushButton *btnCancel;
    QPushButton *btnOk;

    void setupUi(QDialog *DlgBindSheet)
    {
        if (DlgBindSheet->objectName().isEmpty())
            DlgBindSheet->setObjectName(QString::fromUtf8("DlgBindSheet"));
        DlgBindSheet->resize(257, 167);
        verticalLayout = new QVBoxLayout(DlgBindSheet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(DlgBindSheet);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(DlgBindSheet);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_2 = new QLabel(DlgBindSheet);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditFromStart = new QLineEdit(DlgBindSheet);
        lineEditFromStart->setObjectName(QString::fromUtf8("lineEditFromStart"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditFromStart->sizePolicy().hasHeightForWidth());
        lineEditFromStart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditFromStart, 1, 1, 1, 1);

        lineEditFromEnd = new QLineEdit(DlgBindSheet);
        lineEditFromEnd->setObjectName(QString::fromUtf8("lineEditFromEnd"));
        sizePolicy.setHeightForWidth(lineEditFromEnd->sizePolicy().hasHeightForWidth());
        lineEditFromEnd->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditFromEnd, 1, 2, 1, 1);

        label_3 = new QLabel(DlgBindSheet);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditToStart = new Gui::ExpressionLineEdit(DlgBindSheet);
        lineEditToStart->setObjectName(QString::fromUtf8("lineEditToStart"));
        sizePolicy.setHeightForWidth(lineEditToStart->sizePolicy().hasHeightForWidth());
        lineEditToStart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditToStart, 2, 1, 1, 1);

        lineEditToEnd = new Gui::ExpressionLineEdit(DlgBindSheet);
        lineEditToEnd->setObjectName(QString::fromUtf8("lineEditToEnd"));
        sizePolicy.setHeightForWidth(lineEditToEnd->sizePolicy().hasHeightForWidth());
        lineEditToEnd->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditToEnd, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        comboBox = new QComboBox(DlgBindSheet);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label = new QLabel(DlgBindSheet);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout);

        checkBoxHREF = new QCheckBox(DlgBindSheet);
        checkBoxHREF->setObjectName(QString::fromUtf8("checkBoxHREF"));

        verticalLayout->addWidget(checkBoxHREF);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnDiscard = new QPushButton(DlgBindSheet);
        btnDiscard->setObjectName(QString::fromUtf8("btnDiscard"));

        horizontalLayout_5->addWidget(btnDiscard);

        btnCancel = new QPushButton(DlgBindSheet);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_5->addWidget(btnCancel);

        btnOk = new QPushButton(DlgBindSheet);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_5->addWidget(btnOk);


        verticalLayout->addLayout(horizontalLayout_5);

        QWidget::setTabOrder(lineEditFromStart, lineEditFromEnd);
        QWidget::setTabOrder(lineEditFromEnd, lineEditToStart);
        QWidget::setTabOrder(lineEditToStart, lineEditToEnd);
        QWidget::setTabOrder(lineEditToEnd, comboBox);
        QWidget::setTabOrder(comboBox, checkBoxHREF);
        QWidget::setTabOrder(checkBoxHREF, btnOk);
        QWidget::setTabOrder(btnOk, btnCancel);
        QWidget::setTabOrder(btnCancel, btnDiscard);

        retranslateUi(DlgBindSheet);
        QObject::connect(btnOk, SIGNAL(clicked()), DlgBindSheet, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), DlgBindSheet, SLOT(reject()));

        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(DlgBindSheet);
    } // setupUi

    void retranslateUi(QDialog *DlgBindSheet)
    {
        DlgBindSheet->setWindowTitle(QCoreApplication::translate("DlgBindSheet", "Bind Spreadsheet Cells", nullptr));
        label_4->setText(QCoreApplication::translate("DlgBindSheet", "First cell in range", nullptr));
        label_5->setText(QCoreApplication::translate("DlgBindSheet", "Last cell in range", nullptr));
        label_2->setText(QCoreApplication::translate("DlgBindSheet", "Bind cells:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditFromStart->setToolTip(QCoreApplication::translate("DlgBindSheet", "Start cell address", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEditFromEnd->setToolTip(QCoreApplication::translate("DlgBindSheet", "End cell address", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("DlgBindSheet", "To cells:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditToStart->setToolTip(QCoreApplication::translate("DlgBindSheet", "Start cell address to bind to.\n"
"Type '=' if you want to use an expression.\n"
"The expression must evaluate to a string of some cell address.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEditToEnd->setToolTip(QCoreApplication::translate("DlgBindSheet", "End cell address to bind to.\n"
"Type '=' if you want to use an expression.\n"
"The expression must evaluate to a string of some cell address.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        comboBox->setToolTip(QCoreApplication::translate("DlgBindSheet", "Which spread sheet to bind to", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("DlgBindSheet", "Sheet:", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxHREF->setToolTip(QCoreApplication::translate("DlgBindSheet", "The dependency with the referenced spreadsheet will\n"
"be hidden to the dependency checking.\n"
"Useful to avoid cyclic dependencies, but use with caution!", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxHREF->setText(QCoreApplication::translate("DlgBindSheet", "Hide dependency of binding", nullptr));
        btnDiscard->setText(QCoreApplication::translate("DlgBindSheet", "Unbind", nullptr));
        btnCancel->setText(QCoreApplication::translate("DlgBindSheet", "Cancel", nullptr));
        btnOk->setText(QCoreApplication::translate("DlgBindSheet", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgBindSheet: public Ui_DlgBindSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGBINDSHEET_H
