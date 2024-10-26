/********************************************************************************
** Form generated from reading UI file 'TaskOrientation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKORIENTATION_H
#define UI_TASKORIENTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace Gui {

class Ui_TaskOrientation
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *XY_radioButton;
    QRadioButton *XZ_radioButton;
    QRadioButton *YZ_radioButton;
    QCheckBox *Reverse_checkBox;
    QLabel *previewLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Gui::QuantitySpinBox *Offset_doubleSpinBox;

    void setupUi(QWidget *Gui__TaskOrientation)
    {
        if (Gui__TaskOrientation->objectName().isEmpty())
            Gui__TaskOrientation->setObjectName(QString::fromUtf8("Gui__TaskOrientation"));
        Gui__TaskOrientation->resize(194, 200);
        gridLayout = new QGridLayout(Gui__TaskOrientation);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Gui__TaskOrientation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        XY_radioButton = new QRadioButton(groupBox);
        XY_radioButton->setObjectName(QString::fromUtf8("XY_radioButton"));
        XY_radioButton->setChecked(true);

        verticalLayout->addWidget(XY_radioButton);

        XZ_radioButton = new QRadioButton(groupBox);
        XZ_radioButton->setObjectName(QString::fromUtf8("XZ_radioButton"));

        verticalLayout->addWidget(XZ_radioButton);

        YZ_radioButton = new QRadioButton(groupBox);
        YZ_radioButton->setObjectName(QString::fromUtf8("YZ_radioButton"));

        verticalLayout->addWidget(YZ_radioButton);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        Reverse_checkBox = new QCheckBox(Gui__TaskOrientation);
        Reverse_checkBox->setObjectName(QString::fromUtf8("Reverse_checkBox"));

        gridLayout->addWidget(Reverse_checkBox, 1, 0, 1, 2);

        previewLabel = new QLabel(Gui__TaskOrientation);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setMinimumSize(QSize(48, 48));
        previewLabel->setMaximumSize(QSize(48, 48));
        previewLabel->setText(QString::fromUtf8("Preview"));

        gridLayout->addWidget(previewLabel, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Gui__TaskOrientation);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Offset_doubleSpinBox = new Gui::QuantitySpinBox(Gui__TaskOrientation);
        Offset_doubleSpinBox->setObjectName(QString::fromUtf8("Offset_doubleSpinBox"));
        Offset_doubleSpinBox->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        Offset_doubleSpinBox->setProperty("minimum", QVariant(-999999999.000000000000000));
        Offset_doubleSpinBox->setProperty("maximum", QVariant(999999999.000000000000000));
        Offset_doubleSpinBox->setProperty("singleStep", QVariant(1.000000000000000));

        horizontalLayout->addWidget(Offset_doubleSpinBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(Gui__TaskOrientation);

        QMetaObject::connectSlotsByName(Gui__TaskOrientation);
    } // setupUi

    void retranslateUi(QWidget *Gui__TaskOrientation)
    {
        Gui__TaskOrientation->setWindowTitle(QCoreApplication::translate("Gui::TaskOrientation", "Choose orientation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::TaskOrientation", "Planes", nullptr));
        XY_radioButton->setText(QCoreApplication::translate("Gui::TaskOrientation", "XY-Plane", nullptr));
        XZ_radioButton->setText(QCoreApplication::translate("Gui::TaskOrientation", "XZ-Plane", nullptr));
        YZ_radioButton->setText(QCoreApplication::translate("Gui::TaskOrientation", "YZ-Plane", nullptr));
        Reverse_checkBox->setText(QCoreApplication::translate("Gui::TaskOrientation", "Reverse direction", nullptr));
        label->setText(QCoreApplication::translate("Gui::TaskOrientation", "Offset:", nullptr));
    } // retranslateUi

};

} // namespace Gui

namespace Gui {
namespace Ui {
    class TaskOrientation: public Ui_TaskOrientation {};
} // namespace Ui
} // namespace Gui

#endif // UI_TASKORIENTATION_H
