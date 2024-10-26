/********************************************************************************
** Form generated from reading UI file 'FitBSplineCurve.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITBSPLINECURVE_H
#define UI_FITBSPLINECURVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace ReenGui {

class Ui_FitBSplineCurve
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxU;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *paramType;
    QLabel *label_3;
    QSpinBox *degreeMax;
    QSpinBox *degreeMin;
    QCheckBox *checkBox;
    QComboBox *continuity;
    QLabel *label;
    QCheckBox *checkBoxClosed;
    QGroupBox *groupBoxSmooth;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_9;
    QDoubleSpinBox *curvature;
    QDoubleSpinBox *torsion;
    QDoubleSpinBox *curveLength;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ReenGui__FitBSplineCurve)
    {
        if (ReenGui__FitBSplineCurve->objectName().isEmpty())
            ReenGui__FitBSplineCurve->setObjectName(QString::fromUtf8("ReenGui__FitBSplineCurve"));
        ReenGui__FitBSplineCurve->resize(360, 375);
        gridLayout_2 = new QGridLayout(ReenGui__FitBSplineCurve);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBoxU = new QGroupBox(ReenGui__FitBSplineCurve);
        groupBoxU->setObjectName(QString::fromUtf8("groupBoxU"));
        gridLayout = new QGridLayout(groupBoxU);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBoxU);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        paramType = new QComboBox(groupBoxU);
        paramType->addItem(QString());
        paramType->addItem(QString());
        paramType->addItem(QString());
        paramType->setObjectName(QString::fromUtf8("paramType"));
        paramType->setEnabled(false);

        gridLayout->addWidget(paramType, 3, 1, 1, 1);

        label_3 = new QLabel(groupBoxU);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        degreeMax = new QSpinBox(groupBoxU);
        degreeMax->setObjectName(QString::fromUtf8("degreeMax"));
        degreeMax->setMinimum(2);
        degreeMax->setMaximum(11);
        degreeMax->setValue(6);

        gridLayout->addWidget(degreeMax, 1, 1, 1, 1);

        degreeMin = new QSpinBox(groupBoxU);
        degreeMin->setObjectName(QString::fromUtf8("degreeMin"));
        degreeMin->setMinimum(1);
        degreeMin->setMaximum(11);
        degreeMin->setValue(2);

        gridLayout->addWidget(degreeMin, 0, 1, 1, 1);

        checkBox = new QCheckBox(groupBoxU);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 3, 0, 1, 1);

        continuity = new QComboBox(groupBoxU);
        continuity->addItem(QString());
        continuity->addItem(QString());
        continuity->addItem(QString());
        continuity->addItem(QString());
        continuity->addItem(QString());
        continuity->addItem(QString());
        continuity->addItem(QString());
        continuity->setObjectName(QString::fromUtf8("continuity"));

        gridLayout->addWidget(continuity, 2, 1, 1, 1);

        label = new QLabel(groupBoxU);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkBoxClosed = new QCheckBox(groupBoxU);
        checkBoxClosed->setObjectName(QString::fromUtf8("checkBoxClosed"));

        gridLayout->addWidget(checkBoxClosed, 4, 0, 1, 2);


        gridLayout_2->addWidget(groupBoxU, 0, 0, 1, 1);

        groupBoxSmooth = new QGroupBox(ReenGui__FitBSplineCurve);
        groupBoxSmooth->setObjectName(QString::fromUtf8("groupBoxSmooth"));
        groupBoxSmooth->setCheckable(true);
        gridLayout_3 = new QGridLayout(groupBoxSmooth);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_10 = new QLabel(groupBoxSmooth);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        label_8 = new QLabel(groupBoxSmooth);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(groupBoxSmooth);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        curvature = new QDoubleSpinBox(groupBoxSmooth);
        curvature->setObjectName(QString::fromUtf8("curvature"));
        curvature->setMaximum(1.000000000000000);
        curvature->setSingleStep(0.100000000000000);
        curvature->setValue(1.000000000000000);

        gridLayout_3->addWidget(curvature, 1, 1, 1, 1);

        torsion = new QDoubleSpinBox(groupBoxSmooth);
        torsion->setObjectName(QString::fromUtf8("torsion"));
        torsion->setMaximum(1.000000000000000);
        torsion->setSingleStep(0.100000000000000);
        torsion->setValue(1.000000000000000);

        gridLayout_3->addWidget(torsion, 2, 1, 1, 1);

        curveLength = new QDoubleSpinBox(groupBoxSmooth);
        curveLength->setObjectName(QString::fromUtf8("curveLength"));
        curveLength->setMaximum(1.000000000000000);
        curveLength->setSingleStep(0.100000000000000);
        curveLength->setValue(1.000000000000000);

        gridLayout_3->addWidget(curveLength, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxSmooth, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(degreeMin, degreeMax);
        QWidget::setTabOrder(degreeMax, continuity);
        QWidget::setTabOrder(continuity, checkBox);
        QWidget::setTabOrder(checkBox, paramType);
        QWidget::setTabOrder(paramType, checkBoxClosed);
        QWidget::setTabOrder(checkBoxClosed, groupBoxSmooth);
        QWidget::setTabOrder(groupBoxSmooth, curveLength);
        QWidget::setTabOrder(curveLength, curvature);
        QWidget::setTabOrder(curvature, torsion);

        retranslateUi(ReenGui__FitBSplineCurve);

        QMetaObject::connectSlotsByName(ReenGui__FitBSplineCurve);
    } // setupUi

    void retranslateUi(QWidget *ReenGui__FitBSplineCurve)
    {
        ReenGui__FitBSplineCurve->setWindowTitle(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Fit B-spline surface", nullptr));
        groupBoxU->setTitle(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Parameters", nullptr));
        label_2->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Maximum degree", nullptr));
        paramType->setItemText(0, QCoreApplication::translate("ReenGui::FitBSplineCurve", "Chord length", nullptr));
        paramType->setItemText(1, QCoreApplication::translate("ReenGui::FitBSplineCurve", "Centripetal", nullptr));
        paramType->setItemText(2, QCoreApplication::translate("ReenGui::FitBSplineCurve", "Iso-Parametric", nullptr));

        label_3->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Continuity", nullptr));
        checkBox->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Parametrization type", nullptr));
        continuity->setItemText(0, QCoreApplication::translate("ReenGui::FitBSplineCurve", "C0", nullptr));
        continuity->setItemText(1, QCoreApplication::translate("ReenGui::FitBSplineCurve", "G1", nullptr));
        continuity->setItemText(2, QCoreApplication::translate("ReenGui::FitBSplineCurve", "C1", nullptr));
        continuity->setItemText(3, QCoreApplication::translate("ReenGui::FitBSplineCurve", "G2", nullptr));
        continuity->setItemText(4, QCoreApplication::translate("ReenGui::FitBSplineCurve", "C2", nullptr));
        continuity->setItemText(5, QCoreApplication::translate("ReenGui::FitBSplineCurve", "C3", nullptr));
        continuity->setItemText(6, QCoreApplication::translate("ReenGui::FitBSplineCurve", "CN", nullptr));

        label->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Minimum degree", nullptr));
        checkBoxClosed->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Closed curve", nullptr));
        groupBoxSmooth->setTitle(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Smoothing", nullptr));
        label_10->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Torsion", nullptr));
        label_8->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Curve length", nullptr));
        label_9->setText(QCoreApplication::translate("ReenGui::FitBSplineCurve", "Curvature", nullptr));
    } // retranslateUi

};

} // namespace ReenGui

namespace ReenGui {
namespace Ui {
    class FitBSplineCurve: public Ui_FitBSplineCurve {};
} // namespace Ui
} // namespace ReenGui

#endif // UI_FITBSPLINECURVE_H
