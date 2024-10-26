/********************************************************************************
** Form generated from reading UI file 'SketchOrientationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHORIENTATIONDIALOG_H
#define UI_SKETCHORIENTATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include "Gui/QuantitySpinBox.h"

namespace SketcherGui {

class Ui_SketchOrientationDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *XY_radioButton;
    QRadioButton *XZ_radioButton;
    QRadioButton *YZ_radioButton;
    QLabel *previewLabel;
    QCheckBox *Reverse_checkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Gui::QuantitySpinBox *Offset_doubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SketcherGui__SketchOrientationDialog)
    {
        if (SketcherGui__SketchOrientationDialog->objectName().isEmpty())
            SketcherGui__SketchOrientationDialog->setObjectName(QString::fromUtf8("SketcherGui__SketchOrientationDialog"));
        SketcherGui__SketchOrientationDialog->resize(178, 201);
        gridLayout = new QGridLayout(SketcherGui__SketchOrientationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(SketcherGui__SketchOrientationDialog);
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

        previewLabel = new QLabel(SketcherGui__SketchOrientationDialog);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setMinimumSize(QSize(48, 48));
        previewLabel->setMaximumSize(QSize(48, 48));
        previewLabel->setText(QString::fromUtf8("Preview"));

        gridLayout->addWidget(previewLabel, 0, 1, 1, 1);

        Reverse_checkBox = new QCheckBox(SketcherGui__SketchOrientationDialog);
        Reverse_checkBox->setObjectName(QString::fromUtf8("Reverse_checkBox"));

        gridLayout->addWidget(Reverse_checkBox, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SketcherGui__SketchOrientationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Offset_doubleSpinBox = new Gui::QuantitySpinBox(SketcherGui__SketchOrientationDialog);
        Offset_doubleSpinBox->setObjectName(QString::fromUtf8("Offset_doubleSpinBox"));
        Offset_doubleSpinBox->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        Offset_doubleSpinBox->setMinimum(-999999999.000000000000000);
        Offset_doubleSpinBox->setMaximum(999999999.000000000000000);
        Offset_doubleSpinBox->setSingleStep(10.000000000000000);

        horizontalLayout->addWidget(Offset_doubleSpinBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(SketcherGui__SketchOrientationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(SketcherGui__SketchOrientationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SketcherGui__SketchOrientationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SketcherGui__SketchOrientationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SketcherGui__SketchOrientationDialog);
    } // setupUi

    void retranslateUi(QDialog *SketcherGui__SketchOrientationDialog)
    {
        SketcherGui__SketchOrientationDialog->setWindowTitle(QCoreApplication::translate("SketcherGui::SketchOrientationDialog", "Choose orientation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SketcherGui::SketchOrientationDialog", "Sketch orientation", nullptr));
        XY_radioButton->setText(QCoreApplication::translate("SketcherGui::SketchOrientationDialog", "XY-Plane", nullptr));
        XZ_radioButton->setText(QCoreApplication::translate("SketcherGui::SketchOrientationDialog", "XZ-Plane", nullptr));
        YZ_radioButton->setText(QCoreApplication::translate("SketcherGui::SketchOrientationDialog", "YZ-Plane", nullptr));
        Reverse_checkBox->setText(QCoreApplication::translate("SketcherGui::SketchOrientationDialog", "Reverse direction", nullptr));
        label->setText(QCoreApplication::translate("SketcherGui::SketchOrientationDialog", "Offset:", nullptr));
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class SketchOrientationDialog: public Ui_SketchOrientationDialog {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_SKETCHORIENTATIONDIALOG_H
