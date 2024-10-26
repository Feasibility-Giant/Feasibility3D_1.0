/********************************************************************************
** Form generated from reading UI file 'TaskGeomHatch.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKGEOMHATCH_H
#define UI_TASKGEOMHATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskGeomHatch
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *label;
    Gui::FileChooser *fcFile;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_6;
    Gui::ColorButton *ccColor;
    QLabel *label_4;
    QLabel *label_7;
    QComboBox *cbName;
    QLabel *label_5;
    QDoubleSpinBox *dsbRotation;
    Gui::QuantitySpinBox *sbWeight;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    Gui::QuantitySpinBox *sbScale;
    QLabel *label_8;
    QDoubleSpinBox *dsbOffsetX;
    QDoubleSpinBox *dsbOffsetY;

    void setupUi(QWidget *TechDrawGui__TaskGeomHatch)
    {
        if (TechDrawGui__TaskGeomHatch->objectName().isEmpty())
            TechDrawGui__TaskGeomHatch->setObjectName(QString::fromUtf8("TechDrawGui__TaskGeomHatch"));
        TechDrawGui__TaskGeomHatch->resize(385, 314);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskGeomHatch->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskGeomHatch->setSizePolicy(sizePolicy);
        TechDrawGui__TaskGeomHatch->setMinimumSize(QSize(250, 0));
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__TaskGeomHatch);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(TechDrawGui__TaskGeomHatch);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        fcFile = new Gui::FileChooser(groupBox);
        fcFile->setObjectName(QString::fromUtf8("fcFile"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fcFile->sizePolicy().hasHeightForWidth());
        fcFile->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(fcFile, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        ccColor = new Gui::ColorButton(groupBox);
        ccColor->setObjectName(QString::fromUtf8("ccColor"));
        ccColor->setMinimumSize(QSize(0, 22));

        gridLayout_2->addWidget(ccColor, 3, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        cbName = new QComboBox(groupBox);
        cbName->setObjectName(QString::fromUtf8("cbName"));
        cbName->setMinimumSize(QSize(0, 22));

        gridLayout_2->addWidget(cbName, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        dsbRotation = new QDoubleSpinBox(groupBox);
        dsbRotation->setObjectName(QString::fromUtf8("dsbRotation"));
        dsbRotation->setWrapping(true);
        dsbRotation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbRotation->setMinimum(-360.000000000000000);
        dsbRotation->setMaximum(360.000000000000000);

        gridLayout_2->addWidget(dsbRotation, 4, 2, 1, 1);

        sbWeight = new Gui::QuantitySpinBox(groupBox);
        sbWeight->setObjectName(QString::fromUtf8("sbWeight"));
        sbWeight->setMinimumSize(QSize(0, 22));
        sbWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbWeight->setKeyboardTracking(false);
        sbWeight->setMinimum(0.001000000000000);
        sbWeight->setSingleStep(0.100000000000000);
        sbWeight->setValue(1.000000000000000);

        gridLayout_2->addWidget(sbWeight, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        sbScale = new Gui::QuantitySpinBox(groupBox);
        sbScale->setObjectName(QString::fromUtf8("sbScale"));
        sbScale->setMinimumSize(QSize(0, 22));
        sbScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbScale->setKeyboardTracking(false);
        sbScale->setMinimum(0.100000000000000);
        sbScale->setSingleStep(0.100000000000000);
        sbScale->setValue(1.000000000000000);

        gridLayout_2->addWidget(sbScale, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        dsbOffsetX = new QDoubleSpinBox(groupBox);
        dsbOffsetX->setObjectName(QString::fromUtf8("dsbOffsetX"));
        dsbOffsetX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(dsbOffsetX, 5, 2, 1, 1);

        dsbOffsetY = new QDoubleSpinBox(groupBox);
        dsbOffsetY->setObjectName(QString::fromUtf8("dsbOffsetY"));
        dsbOffsetY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(dsbOffsetY, 6, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(TechDrawGui__TaskGeomHatch);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskGeomHatch);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskGeomHatch)
    {
        TechDrawGui__TaskGeomHatch->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Apply Geometric Hatch to Face", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Define your pattern", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Pattern File", nullptr));
#if QT_CONFIG(tooltip)
        fcFile->setToolTip(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "The PAT file containing your pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Pattern Scale", nullptr));
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Rotation", nullptr));
#if QT_CONFIG(tooltip)
        ccColor->setToolTip(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Color of pattern lines", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Pattern Name", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Offset X", nullptr));
#if QT_CONFIG(tooltip)
        cbName->setToolTip(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Name of pattern within file", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Line Width", nullptr));
#if QT_CONFIG(tooltip)
        sbWeight->setToolTip(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Thickness of lines within the pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Line Color", nullptr));
#if QT_CONFIG(tooltip)
        sbScale->setToolTip(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Enlarges/shrinks the pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::TaskGeomHatch", "Offset Y", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskGeomHatch: public Ui_TaskGeomHatch {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKGEOMHATCH_H
