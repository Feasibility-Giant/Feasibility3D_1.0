/********************************************************************************
** Form generated from reading UI file 'DlgSheetConf.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSHEETCONF_H
#define UI_DLGSHEETCONF_H

#include <Gui/ExpressionCompleter.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgSheetConf
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditStart;
    QLineEdit *lineEditEnd;
    QLabel *label_2;
    Gui::ExpressionLineEdit *lineEditProp;
    QLabel *label_3;
    QLineEdit *lineEditGroup;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDiscard;
    QPushButton *bthCancel;
    QPushButton *btnOk;

    void setupUi(QDialog *DlgSheetConf)
    {
        if (DlgSheetConf->objectName().isEmpty())
            DlgSheetConf->setObjectName(QString::fromUtf8("DlgSheetConf"));
        DlgSheetConf->resize(366, 146);
        gridLayout = new QGridLayout(DlgSheetConf);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DlgSheetConf);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditStart = new QLineEdit(DlgSheetConf);
        lineEditStart->setObjectName(QString::fromUtf8("lineEditStart"));

        gridLayout->addWidget(lineEditStart, 0, 1, 1, 1);

        lineEditEnd = new QLineEdit(DlgSheetConf);
        lineEditEnd->setObjectName(QString::fromUtf8("lineEditEnd"));

        gridLayout->addWidget(lineEditEnd, 0, 2, 1, 1);

        label_2 = new QLabel(DlgSheetConf);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditProp = new Gui::ExpressionLineEdit(DlgSheetConf);
        lineEditProp->setObjectName(QString::fromUtf8("lineEditProp"));

        gridLayout->addWidget(lineEditProp, 1, 1, 1, 2);

        label_3 = new QLabel(DlgSheetConf);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditGroup = new QLineEdit(DlgSheetConf);
        lineEditGroup->setObjectName(QString::fromUtf8("lineEditGroup"));

        gridLayout->addWidget(lineEditGroup, 2, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnDiscard = new QPushButton(DlgSheetConf);
        btnDiscard->setObjectName(QString::fromUtf8("btnDiscard"));

        horizontalLayout->addWidget(btnDiscard);

        bthCancel = new QPushButton(DlgSheetConf);
        bthCancel->setObjectName(QString::fromUtf8("bthCancel"));

        horizontalLayout->addWidget(bthCancel);

        btnOk = new QPushButton(DlgSheetConf);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout->addWidget(btnOk);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 2);


        retranslateUi(DlgSheetConf);
        QObject::connect(btnOk, SIGNAL(clicked()), DlgSheetConf, SLOT(accept()));
        QObject::connect(bthCancel, SIGNAL(clicked()), DlgSheetConf, SLOT(reject()));

        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(DlgSheetConf);
    } // setupUi

    void retranslateUi(QDialog *DlgSheetConf)
    {
        DlgSheetConf->setWindowTitle(QCoreApplication::translate("DlgSheetConf", "Setup Configuration Table", nullptr));
        label->setText(QCoreApplication::translate("DlgSheetConf", "Cell range:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditStart->setToolTip(QCoreApplication::translate("DlgSheetConf", "Starting cell address.\n"
"\n"
"The first column of the range is assumed to contain a list of configuration\n"
"names, which will be used to generate a string list and bind to the given\n"
"property for user to dynamically switch configuration.\n"
"\n"
"The first row of the range will be bound to whatever row (indirectly) selected\n"
"by that property.\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEditEnd->setToolTip(QCoreApplication::translate("DlgSheetConf", "Ending cell address.\n"
"\n"
"The first column of the range is assumed to contain a list of configuration\n"
"names, which will be used to generate a string list and bind to the given\n"
"property for user to dynamically switch configuration.\n"
"\n"
"The first row of the range will be bound to whatever row (indirectly) selected\n"
"by that property.\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("DlgSheetConf", "Property:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditProp->setToolTip(QCoreApplication::translate("DlgSheetConf", "Type in an expression to specify the object and property name to dynamically\n"
"switch the design configuration. The property will be created if not exist.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("DlgSheetConf", "Group:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditGroup->setToolTip(QCoreApplication::translate("DlgSheetConf", "Optional property group name.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDiscard->setText(QCoreApplication::translate("DlgSheetConf", "Unsetup", nullptr));
        bthCancel->setText(QCoreApplication::translate("DlgSheetConf", "Cancel", nullptr));
        btnOk->setText(QCoreApplication::translate("DlgSheetConf", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgSheetConf: public Ui_DlgSheetConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSHEETCONF_H
