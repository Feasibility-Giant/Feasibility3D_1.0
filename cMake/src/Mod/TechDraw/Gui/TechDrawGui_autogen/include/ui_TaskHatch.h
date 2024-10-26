/********************************************************************************
** Form generated from reading UI file 'TaskHatch.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKHATCH_H
#define UI_TASKHATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskHatch
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    Gui::FileChooser *fcFile;
    QLabel *label;
    QGridLayout *gridLayout_3;
    Gui::QuantitySpinBox *sbScale;
    QLabel *label_3;
    QLabel *label_5;
    Gui::ColorButton *ccColor;
    QDoubleSpinBox *dsbRotation;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QDoubleSpinBox *dsbOffsetX;
    QDoubleSpinBox *dsbOffsetY;

    void setupUi(QWidget *TechDrawGui__TaskHatch)
    {
        if (TechDrawGui__TaskHatch->objectName().isEmpty())
            TechDrawGui__TaskHatch->setObjectName(QString::fromUtf8("TechDrawGui__TaskHatch"));
        TechDrawGui__TaskHatch->resize(398, 244);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskHatch->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskHatch->setSizePolicy(sizePolicy);
        TechDrawGui__TaskHatch->setMinimumSize(QSize(250, 0));
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__TaskHatch);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(TechDrawGui__TaskHatch);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        fcFile = new Gui::FileChooser(groupBox);
        fcFile->setObjectName(QString::fromUtf8("fcFile"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fcFile->sizePolicy().hasHeightForWidth());
        fcFile->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(fcFile, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sbScale = new Gui::QuantitySpinBox(groupBox);
        sbScale->setObjectName(QString::fromUtf8("sbScale"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sbScale->sizePolicy().hasHeightForWidth());
        sbScale->setSizePolicy(sizePolicy3);
        sbScale->setMinimumSize(QSize(0, 26));
        sbScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbScale->setKeyboardTracking(false);
        sbScale->setMinimum(0.001000000000000);
        sbScale->setSingleStep(0.100000000000000);
        sbScale->setValue(1.000000000000000);

        gridLayout_3->addWidget(sbScale, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        ccColor = new Gui::ColorButton(groupBox);
        ccColor->setObjectName(QString::fromUtf8("ccColor"));
        sizePolicy3.setHeightForWidth(ccColor->sizePolicy().hasHeightForWidth());
        ccColor->setSizePolicy(sizePolicy3);
        ccColor->setMinimumSize(QSize(0, 26));

        gridLayout_3->addWidget(ccColor, 2, 1, 1, 1);

        dsbRotation = new QDoubleSpinBox(groupBox);
        dsbRotation->setObjectName(QString::fromUtf8("dsbRotation"));
        dsbRotation->setWrapping(true);
        dsbRotation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbRotation->setMinimum(-360.000000000000000);
        dsbRotation->setMaximum(360.000000000000000);

        gridLayout_3->addWidget(dsbRotation, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 5, 0, 1, 1);

        dsbOffsetX = new QDoubleSpinBox(groupBox);
        dsbOffsetX->setObjectName(QString::fromUtf8("dsbOffsetX"));
        dsbOffsetX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(dsbOffsetX, 4, 1, 1, 1);

        dsbOffsetY = new QDoubleSpinBox(groupBox);
        dsbOffsetY->setObjectName(QString::fromUtf8("dsbOffsetY"));
        dsbOffsetY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(dsbOffsetY, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(TechDrawGui__TaskHatch);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskHatch);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskHatch)
    {
        TechDrawGui__TaskHatch->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskHatch", "Apply Hatch to Face", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("TechDrawGui::TaskHatch", "Select an SVG or Bitmap file", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("TechDrawGui::TaskHatch", "Pattern Parameters", nullptr));
#if QT_CONFIG(tooltip)
        fcFile->setToolTip(QCoreApplication::translate("TechDrawGui::TaskHatch", "Choose an SVG or Bitmap file as a pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TechDrawGui::TaskHatch", "Pattern File", nullptr));
#if QT_CONFIG(tooltip)
        sbScale->setToolTip(QCoreApplication::translate("TechDrawGui::TaskHatch", "Enlarges/shrinks the pattern (SVG Only)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskHatch", "Svg Line Color", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskHatch", "Offset X", nullptr));
#if QT_CONFIG(tooltip)
        ccColor->setToolTip(QCoreApplication::translate("TechDrawGui::TaskHatch", "Color of pattern lines (SVG Only)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dsbRotation->setToolTip(QCoreApplication::translate("TechDrawGui::TaskHatch", "Rotation the pattern (degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskHatch", "SVG Pattern Scale", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskHatch", "Rotation", nullptr));
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskHatch", "Offset Y", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskHatch: public Ui_TaskHatch {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKHATCH_H
