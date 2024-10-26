/********************************************************************************
** Form generated from reading UI file 'TaskCosmeticLine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCOSMETICLINE_H
#define UI_TASKCOSMETICLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_TaskCosmeticLine
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *le_View;
    QGridLayout *gridLayout_2;
    QRadioButton *rb2d1;
    QRadioButton *rb3d1;
    QGridLayout *gridLayout_3;
    QLabel *label;
    Gui::QuantitySpinBox *qsbx1;
    QLabel *label_2;
    Gui::QuantitySpinBox *qsby1;
    QLabel *label_3;
    Gui::QuantitySpinBox *qsbz1;
    QGridLayout *gridLayout_4;
    QRadioButton *rb2d2;
    QRadioButton *rb3d2;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    Gui::QuantitySpinBox *qsbx2;
    QLabel *label_6;
    Gui::QuantitySpinBox *qsby2;
    QLabel *label_7;
    Gui::QuantitySpinBox *qsbz2;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *TechDrawGui__TaskCosmeticLine)
    {
        if (TechDrawGui__TaskCosmeticLine->objectName().isEmpty())
            TechDrawGui__TaskCosmeticLine->setObjectName(QString::fromUtf8("TechDrawGui__TaskCosmeticLine"));
        TechDrawGui__TaskCosmeticLine->resize(350, 331);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskCosmeticLine->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskCosmeticLine->setSizePolicy(sizePolicy);
        TechDrawGui__TaskCosmeticLine->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskCosmeticLine);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(TechDrawGui__TaskCosmeticLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        le_View = new QLineEdit(TechDrawGui__TaskCosmeticLine);
        le_View->setObjectName(QString::fromUtf8("le_View"));
        le_View->setEnabled(false);
        le_View->setMouseTracking(false);
        le_View->setFocusPolicy(Qt::NoFocus);
        le_View->setAcceptDrops(false);

        gridLayout->addWidget(le_View, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rb2d1 = new QRadioButton(TechDrawGui__TaskCosmeticLine);
        buttonGroup = new QButtonGroup(TechDrawGui__TaskCosmeticLine);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(rb2d1);
        rb2d1->setObjectName(QString::fromUtf8("rb2d1"));
        rb2d1->setChecked(true);
        rb2d1->setAutoExclusive(true);

        gridLayout_2->addWidget(rb2d1, 0, 0, 1, 1);

        rb3d1 = new QRadioButton(TechDrawGui__TaskCosmeticLine);
        buttonGroup->addButton(rb3d1);
        rb3d1->setObjectName(QString::fromUtf8("rb3d1"));
        rb3d1->setAutoExclusive(true);

        gridLayout_2->addWidget(rb3d1, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(TechDrawGui__TaskCosmeticLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        qsbx1 = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticLine);
        qsbx1->setObjectName(QString::fromUtf8("qsbx1"));
        qsbx1->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_3->addWidget(qsbx1, 0, 1, 1, 1);

        label_2 = new QLabel(TechDrawGui__TaskCosmeticLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        qsby1 = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticLine);
        qsby1->setObjectName(QString::fromUtf8("qsby1"));
        qsby1->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_3->addWidget(qsby1, 1, 1, 1, 1);

        label_3 = new QLabel(TechDrawGui__TaskCosmeticLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        qsbz1 = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticLine);
        qsbz1->setObjectName(QString::fromUtf8("qsbz1"));
        qsbz1->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_3->addWidget(qsbz1, 2, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 4);

        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        rb2d2 = new QRadioButton(TechDrawGui__TaskCosmeticLine);
        buttonGroup_2 = new QButtonGroup(TechDrawGui__TaskCosmeticLine);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(rb2d2);
        rb2d2->setObjectName(QString::fromUtf8("rb2d2"));
        rb2d2->setChecked(true);
        rb2d2->setAutoExclusive(true);

        gridLayout_4->addWidget(rb2d2, 0, 0, 1, 1);

        rb3d2 = new QRadioButton(TechDrawGui__TaskCosmeticLine);
        buttonGroup_2->addButton(rb3d2);
        rb3d2->setObjectName(QString::fromUtf8("rb3d2"));
        rb3d2->setAutoExclusive(true);

        gridLayout_4->addWidget(rb3d2, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(TechDrawGui__TaskCosmeticLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        qsbx2 = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticLine);
        qsbx2->setObjectName(QString::fromUtf8("qsbx2"));
        qsbx2->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_5->addWidget(qsbx2, 0, 1, 1, 1);

        label_6 = new QLabel(TechDrawGui__TaskCosmeticLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 1, 0, 1, 1);

        qsby2 = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticLine);
        qsby2->setObjectName(QString::fromUtf8("qsby2"));
        qsby2->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_5->addWidget(qsby2, 1, 1, 1, 1);

        label_7 = new QLabel(TechDrawGui__TaskCosmeticLine);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 2, 0, 1, 1);

        qsbz2 = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticLine);
        qsbz2->setObjectName(QString::fromUtf8("qsbz2"));
        qsbz2->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_5->addWidget(qsbz2, 2, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 4);

        verticalLayout->addLayout(gridLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__TaskCosmeticLine);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskCosmeticLine);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskCosmeticLine)
    {
        TechDrawGui__TaskCosmeticLine->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "Cosmetic Line", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "View", nullptr));
        rb2d1->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "2d Point", nullptr));
        rb3d1->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "3d Point", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "Y:", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "Z:", nullptr));
        rb2d2->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "2d Point", nullptr));
        rb3d2->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "3d Point", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "X:", nullptr));
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "Y:", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticLine", "Z:", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskCosmeticLine: public Ui_TaskCosmeticLine {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKCOSMETICLINE_H
