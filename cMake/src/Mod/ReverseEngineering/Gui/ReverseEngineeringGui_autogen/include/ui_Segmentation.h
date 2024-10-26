/********************************************************************************
** Form generated from reading UI file 'Segmentation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTATION_H
#define UI_SEGMENTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace ReverseEngineeringGui {

class Ui_Segmentation
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxSmooth;
    QSpinBox *smoothSteps;
    QGroupBox *groupBoxPln;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *curvTolPln;
    QLabel *label_3;
    QDoubleSpinBox *distToPln;
    QLabel *label_2;
    QSpinBox *numPln;
    QCheckBox *createUnused;
    QCheckBox *createCompound;

    void setupUi(QWidget *ReverseEngineeringGui__Segmentation)
    {
        if (ReverseEngineeringGui__Segmentation->objectName().isEmpty())
            ReverseEngineeringGui__Segmentation->setObjectName(QString::fromUtf8("ReverseEngineeringGui__Segmentation"));
        ReverseEngineeringGui__Segmentation->resize(343, 242);
        gridLayout_2 = new QGridLayout(ReverseEngineeringGui__Segmentation);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBoxSmooth = new QCheckBox(ReverseEngineeringGui__Segmentation);
        checkBoxSmooth->setObjectName(QString::fromUtf8("checkBoxSmooth"));
        checkBoxSmooth->setChecked(true);

        gridLayout_2->addWidget(checkBoxSmooth, 0, 0, 1, 1);

        smoothSteps = new QSpinBox(ReverseEngineeringGui__Segmentation);
        smoothSteps->setObjectName(QString::fromUtf8("smoothSteps"));
        smoothSteps->setValue(3);

        gridLayout_2->addWidget(smoothSteps, 0, 1, 1, 1);

        groupBoxPln = new QGroupBox(ReverseEngineeringGui__Segmentation);
        groupBoxPln->setObjectName(QString::fromUtf8("groupBoxPln"));
        groupBoxPln->setCheckable(true);
        gridLayout = new QGridLayout(groupBoxPln);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBoxPln);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        curvTolPln = new QDoubleSpinBox(groupBoxPln);
        curvTolPln->setObjectName(QString::fromUtf8("curvTolPln"));
        curvTolPln->setSingleStep(0.010000000000000);
        curvTolPln->setValue(0.010000000000000);

        gridLayout->addWidget(curvTolPln, 0, 1, 1, 1);

        label_3 = new QLabel(groupBoxPln);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        distToPln = new QDoubleSpinBox(groupBoxPln);
        distToPln->setObjectName(QString::fromUtf8("distToPln"));
        distToPln->setSingleStep(0.010000000000000);
        distToPln->setValue(0.010000000000000);

        gridLayout->addWidget(distToPln, 1, 1, 1, 1);

        label_2 = new QLabel(groupBoxPln);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        numPln = new QSpinBox(groupBoxPln);
        numPln->setObjectName(QString::fromUtf8("numPln"));
        numPln->setMaximum(100000);
        numPln->setValue(100);

        gridLayout->addWidget(numPln, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxPln, 1, 0, 1, 2);

        createUnused = new QCheckBox(ReverseEngineeringGui__Segmentation);
        createUnused->setObjectName(QString::fromUtf8("createUnused"));

        gridLayout_2->addWidget(createUnused, 2, 0, 1, 2);

        createCompound = new QCheckBox(ReverseEngineeringGui__Segmentation);
        createCompound->setObjectName(QString::fromUtf8("createCompound"));

        gridLayout_2->addWidget(createCompound, 3, 0, 1, 2);


        retranslateUi(ReverseEngineeringGui__Segmentation);

        QMetaObject::connectSlotsByName(ReverseEngineeringGui__Segmentation);
    } // setupUi

    void retranslateUi(QWidget *ReverseEngineeringGui__Segmentation)
    {
        ReverseEngineeringGui__Segmentation->setWindowTitle(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Mesh segmentation", nullptr));
        checkBoxSmooth->setText(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Smooth mesh", nullptr));
        groupBoxPln->setTitle(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Plane", nullptr));
        label->setText(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Curvature tolerance", nullptr));
        label_3->setText(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Distance to plane", nullptr));
        label_2->setText(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Minimum number of faces", nullptr));
        createUnused->setText(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Create mesh from unused triangles", nullptr));
        createCompound->setText(QCoreApplication::translate("ReverseEngineeringGui::Segmentation", "Create compound", nullptr));
    } // retranslateUi

};

} // namespace ReverseEngineeringGui

namespace ReverseEngineeringGui {
namespace Ui {
    class Segmentation: public Ui_Segmentation {};
} // namespace Ui
} // namespace ReverseEngineeringGui

#endif // UI_SEGMENTATION_H
