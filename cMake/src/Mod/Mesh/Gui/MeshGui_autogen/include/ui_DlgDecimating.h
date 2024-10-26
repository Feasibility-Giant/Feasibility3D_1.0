/********************************************************************************
** Form generated from reading UI file 'DlgDecimating.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGDECIMATING_H
#define UI_DLGDECIMATING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace MeshGui {

class Ui_DlgDecimating
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxReduction;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSlider *sliderReduction;
    QLabel *textLabel2;
    QCheckBox *checkAbsoluteNumber;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBoxReduction;
    QGroupBox *groupBoxTolerance;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QDoubleSpinBox *spinBoxTolerance;

    void setupUi(QWidget *MeshGui__DlgDecimating)
    {
        if (MeshGui__DlgDecimating->objectName().isEmpty())
            MeshGui__DlgDecimating->setObjectName(QString::fromUtf8("MeshGui__DlgDecimating"));
        MeshGui__DlgDecimating->resize(412, 214);
        gridLayout_3 = new QGridLayout(MeshGui__DlgDecimating);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBoxReduction = new QGroupBox(MeshGui__DlgDecimating);
        groupBoxReduction->setObjectName(QString::fromUtf8("groupBoxReduction"));
        gridLayout_2 = new QGridLayout(groupBoxReduction);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textLabel1 = new QLabel(groupBoxReduction);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        horizontalLayout->addWidget(textLabel1);

        sliderReduction = new QSlider(groupBoxReduction);
        sliderReduction->setObjectName(QString::fromUtf8("sliderReduction"));
        sliderReduction->setMaximum(100);
        sliderReduction->setPageStep(5);
        sliderReduction->setValue(50);
        sliderReduction->setOrientation(Qt::Horizontal);
        sliderReduction->setTickPosition(QSlider::TicksAbove);
        sliderReduction->setTickInterval(10);

        horizontalLayout->addWidget(sliderReduction);

        textLabel2 = new QLabel(groupBoxReduction);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        horizontalLayout->addWidget(textLabel2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 3);

        checkAbsoluteNumber = new QCheckBox(groupBoxReduction);
        checkAbsoluteNumber->setObjectName(QString::fromUtf8("checkAbsoluteNumber"));

        gridLayout_2->addWidget(checkAbsoluteNumber, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        spinBoxReduction = new QSpinBox(groupBoxReduction);
        spinBoxReduction->setObjectName(QString::fromUtf8("spinBoxReduction"));
        spinBoxReduction->setSuffix(QString::fromUtf8("%"));
        spinBoxReduction->setMaximum(100);
        spinBoxReduction->setValue(50);

        gridLayout_2->addWidget(spinBoxReduction, 1, 2, 1, 1);


        gridLayout_3->addWidget(groupBoxReduction, 0, 0, 1, 1);

        groupBoxTolerance = new QGroupBox(MeshGui__DlgDecimating);
        groupBoxTolerance->setObjectName(QString::fromUtf8("groupBoxTolerance"));
        gridLayout = new QGridLayout(groupBoxTolerance);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(40, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 0, 1, 1);

        spinBoxTolerance = new QDoubleSpinBox(groupBoxTolerance);
        spinBoxTolerance->setObjectName(QString::fromUtf8("spinBoxTolerance"));
        spinBoxTolerance->setSingleStep(0.050000000000000);
        spinBoxTolerance->setValue(0.100000000000000);

        gridLayout->addWidget(spinBoxTolerance, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBoxTolerance, 1, 0, 1, 1);


        retranslateUi(MeshGui__DlgDecimating);

        QMetaObject::connectSlotsByName(MeshGui__DlgDecimating);
    } // setupUi

    void retranslateUi(QWidget *MeshGui__DlgDecimating)
    {
        MeshGui__DlgDecimating->setWindowTitle(QCoreApplication::translate("MeshGui::DlgDecimating", "Decimating", nullptr));
        groupBoxReduction->setTitle(QCoreApplication::translate("MeshGui::DlgDecimating", "Reduction", nullptr));
        textLabel1->setText(QCoreApplication::translate("MeshGui::DlgDecimating", "None", nullptr));
        textLabel2->setText(QCoreApplication::translate("MeshGui::DlgDecimating", "Full", nullptr));
        checkAbsoluteNumber->setText(QCoreApplication::translate("MeshGui::DlgDecimating", "Absolute number", nullptr));
        groupBoxTolerance->setTitle(QCoreApplication::translate("MeshGui::DlgDecimating", "Tolerance", nullptr));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class DlgDecimating: public Ui_DlgDecimating {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_DLGDECIMATING_H
