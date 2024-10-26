/********************************************************************************
** Form generated from reading UI file 'TaskImage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKIMAGE_H
#define UI_TASKIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace Gui {

class Ui_TaskImage
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *XY_radioButton;
    QRadioButton *XZ_radioButton;
    QRadioButton *YZ_radioButton;
    QLabel *previewLabel;
    QCheckBox *Reverse_checkBox;
    QLabel *labelZ;
    Gui::QuantitySpinBox *spinBoxZ;
    QLabel *labelX;
    Gui::QuantitySpinBox *spinBoxX;
    QLabel *labelY;
    Gui::QuantitySpinBox *spinBoxY;
    QLabel *labelRotation;
    Gui::QuantitySpinBox *spinBoxRotation;
    QHBoxLayout *hboxLayout;
    QLabel *labelTransparency;
    QSlider *sliderTransparency;
    QSpinBox *spinBoxTransparency;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    Gui::QuantitySpinBox *spinBoxWidth;
    QLabel *label_2;
    Gui::QuantitySpinBox *spinBoxHeight;
    QCheckBox *checkBoxRatio;
    QPushButton *pushButtonScale;
    QGroupBox *groupBoxCalibration;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *Gui__TaskImage)
    {
        if (Gui__TaskImage->objectName().isEmpty())
            Gui__TaskImage->setObjectName(QString::fromUtf8("Gui__TaskImage"));
        Gui__TaskImage->resize(421, 267);
        gridLayout_5 = new QGridLayout(Gui__TaskImage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox = new QGroupBox(Gui__TaskImage);
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


        gridLayout_8->addWidget(groupBox, 0, 0, 1, 1);

        previewLabel = new QLabel(Gui__TaskImage);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setMinimumSize(QSize(48, 48));
        previewLabel->setMaximumSize(QSize(48, 48));
        previewLabel->setText(QString::fromUtf8("Preview"));

        gridLayout_8->addWidget(previewLabel, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_8, 0, 0, 1, 2);

        Reverse_checkBox = new QCheckBox(Gui__TaskImage);
        Reverse_checkBox->setObjectName(QString::fromUtf8("Reverse_checkBox"));

        gridLayout_5->addWidget(Reverse_checkBox, 1, 0, 1, 2);

        labelZ = new QLabel(Gui__TaskImage);
        labelZ->setObjectName(QString::fromUtf8("labelZ"));

        gridLayout_5->addWidget(labelZ, 2, 0, 1, 1);

        spinBoxZ = new Gui::QuantitySpinBox(Gui__TaskImage);
        spinBoxZ->setObjectName(QString::fromUtf8("spinBoxZ"));
        spinBoxZ->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spinBoxZ->setProperty("minimum", QVariant(-999999999.000000000000000));
        spinBoxZ->setProperty("maximum", QVariant(999999999.000000000000000));

        gridLayout_5->addWidget(spinBoxZ, 2, 1, 1, 1);

        labelX = new QLabel(Gui__TaskImage);
        labelX->setObjectName(QString::fromUtf8("labelX"));

        gridLayout_5->addWidget(labelX, 3, 0, 1, 1);

        spinBoxX = new Gui::QuantitySpinBox(Gui__TaskImage);
        spinBoxX->setObjectName(QString::fromUtf8("spinBoxX"));
        spinBoxX->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spinBoxX->setProperty("minimum", QVariant(-999999999.000000000000000));
        spinBoxX->setProperty("maximum", QVariant(999999999.000000000000000));

        gridLayout_5->addWidget(spinBoxX, 3, 1, 1, 1);

        labelY = new QLabel(Gui__TaskImage);
        labelY->setObjectName(QString::fromUtf8("labelY"));

        gridLayout_5->addWidget(labelY, 4, 0, 1, 1);

        spinBoxY = new Gui::QuantitySpinBox(Gui__TaskImage);
        spinBoxY->setObjectName(QString::fromUtf8("spinBoxY"));
        spinBoxY->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spinBoxY->setProperty("minimum", QVariant(-999999999.000000000000000));
        spinBoxY->setProperty("maximum", QVariant(999999999.000000000000000));

        gridLayout_5->addWidget(spinBoxY, 4, 1, 1, 1);

        labelRotation = new QLabel(Gui__TaskImage);
        labelRotation->setObjectName(QString::fromUtf8("labelRotation"));

        gridLayout_5->addWidget(labelRotation, 5, 0, 1, 1);

        spinBoxRotation = new Gui::QuantitySpinBox(Gui__TaskImage);
        spinBoxRotation->setObjectName(QString::fromUtf8("spinBoxRotation"));
        spinBoxRotation->setProperty("unit", QVariant(QString::fromUtf8("deg")));

        gridLayout_5->addWidget(spinBoxRotation, 5, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        labelTransparency = new QLabel(Gui__TaskImage);
        labelTransparency->setObjectName(QString::fromUtf8("labelTransparency"));

        hboxLayout->addWidget(labelTransparency);

        sliderTransparency = new QSlider(Gui__TaskImage);
        sliderTransparency->setObjectName(QString::fromUtf8("sliderTransparency"));
        sliderTransparency->setMaximum(100);
        sliderTransparency->setOrientation(Qt::Horizontal);

        hboxLayout->addWidget(sliderTransparency);

        spinBoxTransparency = new QSpinBox(Gui__TaskImage);
        spinBoxTransparency->setObjectName(QString::fromUtf8("spinBoxTransparency"));
        spinBoxTransparency->setValue(0);
        spinBoxTransparency->setMinimum(0);
        spinBoxTransparency->setMaximum(100);

        hboxLayout->addWidget(spinBoxTransparency);


        gridLayout_5->addLayout(hboxLayout, 6, 0, 1, 2);

        groupBox1 = new QGroupBox(Gui__TaskImage);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout_2 = new QGridLayout(groupBox1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spinBoxWidth = new Gui::QuantitySpinBox(groupBox1);
        spinBoxWidth->setObjectName(QString::fromUtf8("spinBoxWidth"));
        spinBoxWidth->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spinBoxWidth->setProperty("minimum", QVariant(0.000000010000000));
        spinBoxWidth->setProperty("maximum", QVariant(999999999.000000000000000));

        gridLayout_2->addWidget(spinBoxWidth, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        spinBoxHeight = new Gui::QuantitySpinBox(groupBox1);
        spinBoxHeight->setObjectName(QString::fromUtf8("spinBoxHeight"));
        spinBoxHeight->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spinBoxHeight->setProperty("minimum", QVariant(0.000000010000000));
        spinBoxHeight->setProperty("maximum", QVariant(999999999.000000000000000));

        gridLayout_2->addWidget(spinBoxHeight, 1, 1, 1, 1);

        checkBoxRatio = new QCheckBox(groupBox1);
        checkBoxRatio->setObjectName(QString::fromUtf8("checkBoxRatio"));
        checkBoxRatio->setChecked(true);

        gridLayout_2->addWidget(checkBoxRatio, 2, 0, 1, 2);

        pushButtonScale = new QPushButton(groupBox1);
        pushButtonScale->setObjectName(QString::fromUtf8("pushButtonScale"));

        gridLayout_2->addWidget(pushButtonScale, 3, 0, 1, 2);

        groupBoxCalibration = new QGroupBox(groupBox1);
        groupBoxCalibration->setObjectName(QString::fromUtf8("groupBoxCalibration"));
        horizontalLayout = new QHBoxLayout(groupBoxCalibration);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonApply = new QPushButton(groupBoxCalibration);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));

        horizontalLayout->addWidget(pushButtonApply);

        pushButtonCancel = new QPushButton(groupBoxCalibration);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout_2->addWidget(groupBoxCalibration, 4, 0, 1, 2);


        gridLayout_5->addWidget(groupBox1, 7, 0, 1, 2);


        retranslateUi(Gui__TaskImage);

        QMetaObject::connectSlotsByName(Gui__TaskImage);
    } // setupUi

    void retranslateUi(QWidget *Gui__TaskImage)
    {
        Gui__TaskImage->setWindowTitle(QCoreApplication::translate("Gui::TaskImage", "Image plane settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::TaskImage", "Planes", nullptr));
        XY_radioButton->setText(QCoreApplication::translate("Gui::TaskImage", "XY-Plane", nullptr));
        XZ_radioButton->setText(QCoreApplication::translate("Gui::TaskImage", "XZ-Plane", nullptr));
        YZ_radioButton->setText(QCoreApplication::translate("Gui::TaskImage", "YZ-Plane", nullptr));
        Reverse_checkBox->setText(QCoreApplication::translate("Gui::TaskImage", "Reverse direction", nullptr));
        labelZ->setText(QCoreApplication::translate("Gui::TaskImage", "Offset:", nullptr));
        labelX->setText(QCoreApplication::translate("Gui::TaskImage", "X distance:", nullptr));
        labelY->setText(QCoreApplication::translate("Gui::TaskImage", "Y distance:", nullptr));
        labelRotation->setText(QCoreApplication::translate("Gui::TaskImage", "Rotation :", nullptr));
        labelTransparency->setText(QCoreApplication::translate("Gui::TaskImage", "Transparency :", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("Gui::TaskImage", "Image size", nullptr));
        label->setText(QCoreApplication::translate("Gui::TaskImage", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("Gui::TaskImage", "Height:", nullptr));
        checkBoxRatio->setText(QCoreApplication::translate("Gui::TaskImage", "Keep aspect ratio", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonScale->setToolTip(QCoreApplication::translate("Gui::TaskImage", "Interactively scale the image by setting a length between two points of the image.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonScale->setText(QCoreApplication::translate("Gui::TaskImage", "Calibrate", nullptr));
        groupBoxCalibration->setTitle(QCoreApplication::translate("Gui::TaskImage", "Calibration", nullptr));
        pushButtonApply->setText(QCoreApplication::translate("Gui::TaskImage", "Apply", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Gui::TaskImage", "Cancel", nullptr));
    } // retranslateUi

};

} // namespace Gui

namespace Gui {
namespace Ui {
    class TaskImage: public Ui_TaskImage {};
} // namespace Ui
} // namespace Gui

#endif // UI_TASKIMAGE_H
