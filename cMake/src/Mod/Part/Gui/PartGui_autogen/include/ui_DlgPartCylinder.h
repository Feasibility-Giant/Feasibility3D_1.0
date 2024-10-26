/********************************************************************************
** Form generated from reading UI file 'DlgPartCylinder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARTCYLINDER_H
#define UI_DLGPARTCYLINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include "Gui/QuantitySpinBox.h"

namespace PartGui {

class Ui_DlgPartCylinder
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1;
    Gui::QuantitySpinBox *xPos;
    QLabel *TextLabel2;
    Gui::QuantitySpinBox *yPos;
    QLabel *TextLabel3;
    Gui::QuantitySpinBox *zPos;
    QLabel *TextLabel1_3;
    QComboBox *direction;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QLabel *TextLabel1_2;
    Gui::QuantitySpinBox *radius;
    QLabel *label;
    Gui::QuantitySpinBox *length;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PartGui__DlgPartCylinder)
    {
        if (PartGui__DlgPartCylinder->objectName().isEmpty())
            PartGui__DlgPartCylinder->setObjectName(QString::fromUtf8("PartGui__DlgPartCylinder"));
        PartGui__DlgPartCylinder->resize(275, 279);
        gridLayout = new QGridLayout(PartGui__DlgPartCylinder);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox5 = new QGroupBox(PartGui__DlgPartCylinder);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        gridLayout1 = new QGridLayout(GroupBox5);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TextLabel1 = new QLabel(GroupBox5);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout1->addWidget(TextLabel1, 0, 0, 1, 1);

        xPos = new Gui::QuantitySpinBox(GroupBox5);
        xPos->setObjectName(QString::fromUtf8("xPos"));
        xPos->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        xPos->setMinimum(-2147480000.000000000000000);
        xPos->setMaximum(2147480000.000000000000000);

        gridLayout1->addWidget(xPos, 0, 1, 1, 1);

        TextLabel2 = new QLabel(GroupBox5);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout1->addWidget(TextLabel2, 1, 0, 1, 1);

        yPos = new Gui::QuantitySpinBox(GroupBox5);
        yPos->setObjectName(QString::fromUtf8("yPos"));
        yPos->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        yPos->setMinimum(-2147480000.000000000000000);
        yPos->setMaximum(2147480000.000000000000000);

        gridLayout1->addWidget(yPos, 1, 1, 1, 1);

        TextLabel3 = new QLabel(GroupBox5);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout1->addWidget(TextLabel3, 2, 0, 1, 1);

        zPos = new Gui::QuantitySpinBox(GroupBox5);
        zPos->setObjectName(QString::fromUtf8("zPos"));
        zPos->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        zPos->setMinimum(-2147480000.000000000000000);
        zPos->setMaximum(2147480000.000000000000000);

        gridLayout1->addWidget(zPos, 2, 1, 1, 1);

        TextLabel1_3 = new QLabel(GroupBox5);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

        gridLayout1->addWidget(TextLabel1_3, 3, 0, 1, 1);

        direction = new QComboBox(GroupBox5);
        direction->setObjectName(QString::fromUtf8("direction"));

        gridLayout1->addWidget(direction, 3, 1, 1, 1);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        groupBox = new QGroupBox(PartGui__DlgPartCylinder);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        TextLabel1_2 = new QLabel(groupBox);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout2->addWidget(TextLabel1_2, 0, 0, 1, 1);

        radius = new Gui::QuantitySpinBox(groupBox);
        radius->setObjectName(QString::fromUtf8("radius"));
        radius->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        radius->setMaximum(2147480000.000000000000000);
        radius->setValue(10.000000000000000);

        gridLayout2->addWidget(radius, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 1, 0, 1, 1);

        length = new Gui::QuantitySpinBox(groupBox);
        length->setObjectName(QString::fromUtf8("length"));
        length->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        length->setMaximum(2147480000.000000000000000);
        length->setValue(100.000000000000000);

        gridLayout2->addWidget(length, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PartGui__DlgPartCylinder);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        QWidget::setTabOrder(xPos, yPos);
        QWidget::setTabOrder(yPos, zPos);
        QWidget::setTabOrder(zPos, direction);
        QWidget::setTabOrder(direction, radius);
        QWidget::setTabOrder(radius, length);

        retranslateUi(PartGui__DlgPartCylinder);
        QObject::connect(buttonBox, SIGNAL(accepted()), PartGui__DlgPartCylinder, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PartGui__DlgPartCylinder, SLOT(reject()));

        direction->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PartGui__DlgPartCylinder);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgPartCylinder)
    {
        PartGui__DlgPartCylinder->setWindowTitle(QCoreApplication::translate("PartGui::DlgPartCylinder", "Cylinder definition", nullptr));
        GroupBox5->setTitle(QCoreApplication::translate("PartGui::DlgPartCylinder", "Position:", nullptr));
        TextLabel1->setText(QCoreApplication::translate("PartGui::DlgPartCylinder", "X:", nullptr));
        TextLabel2->setText(QCoreApplication::translate("PartGui::DlgPartCylinder", "Y:", nullptr));
        TextLabel3->setText(QCoreApplication::translate("PartGui::DlgPartCylinder", "Z:", nullptr));
        TextLabel1_3->setText(QCoreApplication::translate("PartGui::DlgPartCylinder", "Direction:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PartGui::DlgPartCylinder", "Parameter", nullptr));
        TextLabel1_2->setText(QCoreApplication::translate("PartGui::DlgPartCylinder", "Radius:", nullptr));
        label->setText(QCoreApplication::translate("PartGui::DlgPartCylinder", "Height:", nullptr));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgPartCylinder: public Ui_DlgPartCylinder {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPARTCYLINDER_H
