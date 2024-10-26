/********************************************************************************
** Form generated from reading UI file 'DlgSettingsLightSources.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSLIGHTSOURCES_H
#define UI_DLGSETTINGSLIGHTSOURCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/View3DInventorViewer.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsLightSources
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *checkBoxLight1;
    Gui::PrefColorButton *light1Color;
    QSpacerItem *horizontalSpacer;
    QLabel *light1Label;
    Gui::PrefSlider *sliderIntensity1;
    QGroupBox *groupBoxDirection;
    QGridLayout *gridLayout_3;
    Gui::View3DInventorViewer *viewer;
    QDoubleSpinBox *z_spnBox;
    QDoubleSpinBox *q0_spnBox;
    QLabel *q1_label;
    QDoubleSpinBox *q1_spnBox;
    QLabel *z_label;
    QLabel *q2_label;
    QLabel *q3_label;
    QDoubleSpinBox *x_spnBox;
    QLabel *y_label;
    QDoubleSpinBox *q2_spnBox;
    QDoubleSpinBox *q3_spnBox;
    QDoubleSpinBox *y_spnBox;
    QLabel *q0_label;
    QLabel *x_label;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsLightSources)
    {
        if (Gui__Dialog__DlgSettingsLightSources->objectName().isEmpty())
            Gui__Dialog__DlgSettingsLightSources->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsLightSources"));
        Gui__Dialog__DlgSettingsLightSources->resize(484, 515);
        gridLayout_2 = new QGridLayout(Gui__Dialog__DlgSettingsLightSources);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(428, 376, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        groupBox = new QGroupBox(Gui__Dialog__DlgSettingsLightSources);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBoxLight1 = new Gui::PrefCheckBox(groupBox);
        checkBoxLight1->setObjectName(QString::fromUtf8("checkBoxLight1"));
        checkBoxLight1->setChecked(true);
        checkBoxLight1->setProperty("prefEntry", QVariant(QByteArray("EnableHeadlight")));
        checkBoxLight1->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(checkBoxLight1, 0, 0, 1, 1);

        light1Color = new Gui::PrefColorButton(groupBox);
        light1Color->setObjectName(QString::fromUtf8("light1Color"));
        light1Color->setProperty("color", QVariant(QColor(255, 255, 255)));
        light1Color->setProperty("prefEntry", QVariant(QByteArray("HeadlightColor")));
        light1Color->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(light1Color, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(115, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        light1Label = new QLabel(groupBox);
        light1Label->setObjectName(QString::fromUtf8("light1Label"));

        gridLayout->addWidget(light1Label, 0, 3, 1, 1);

        sliderIntensity1 = new Gui::PrefSlider(groupBox);
        sliderIntensity1->setObjectName(QString::fromUtf8("sliderIntensity1"));
        sliderIntensity1->setMaximum(100);
        sliderIntensity1->setValue(100);
        sliderIntensity1->setOrientation(Qt::Horizontal);
        sliderIntensity1->setTickPosition(QSlider::TicksBelow);
        sliderIntensity1->setTickInterval(10);
        sliderIntensity1->setProperty("prefEntry", QVariant(QByteArray("HeadlightIntensity")));
        sliderIntensity1->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(sliderIntensity1, 0, 4, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBoxDirection = new QGroupBox(Gui__Dialog__DlgSettingsLightSources);
        groupBoxDirection->setObjectName(QString::fromUtf8("groupBoxDirection"));
        gridLayout_3 = new QGridLayout(groupBoxDirection);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        viewer = new Gui::View3DInventorViewer(groupBoxDirection);
        viewer->setObjectName(QString::fromUtf8("viewer"));
        viewer->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(viewer, 0, 2, 7, 1);

        z_spnBox = new QDoubleSpinBox(groupBoxDirection);
        z_spnBox->setObjectName(QString::fromUtf8("z_spnBox"));
        z_spnBox->setMinimum(-100.000000000000000);
        z_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(z_spnBox, 2, 1, 1, 1);

        q0_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q0_spnBox->setObjectName(QString::fromUtf8("q0_spnBox"));
        q0_spnBox->setDecimals(2);
        q0_spnBox->setMinimum(-100.000000000000000);
        q0_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q0_spnBox, 0, 4, 1, 1);

        q1_label = new QLabel(groupBoxDirection);
        q1_label->setObjectName(QString::fromUtf8("q1_label"));

        gridLayout_3->addWidget(q1_label, 1, 3, 1, 1);

        q1_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q1_spnBox->setObjectName(QString::fromUtf8("q1_spnBox"));
        q1_spnBox->setDecimals(2);
        q1_spnBox->setMinimum(-100.000000000000000);
        q1_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q1_spnBox, 1, 4, 1, 1);

        z_label = new QLabel(groupBoxDirection);
        z_label->setObjectName(QString::fromUtf8("z_label"));

        gridLayout_3->addWidget(z_label, 2, 0, 1, 1);

        q2_label = new QLabel(groupBoxDirection);
        q2_label->setObjectName(QString::fromUtf8("q2_label"));

        gridLayout_3->addWidget(q2_label, 2, 3, 1, 1);

        q3_label = new QLabel(groupBoxDirection);
        q3_label->setObjectName(QString::fromUtf8("q3_label"));

        gridLayout_3->addWidget(q3_label, 3, 3, 1, 1);

        x_spnBox = new QDoubleSpinBox(groupBoxDirection);
        x_spnBox->setObjectName(QString::fromUtf8("x_spnBox"));
        x_spnBox->setMinimum(-100.000000000000000);
        x_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(x_spnBox, 0, 1, 1, 1);

        y_label = new QLabel(groupBoxDirection);
        y_label->setObjectName(QString::fromUtf8("y_label"));

        gridLayout_3->addWidget(y_label, 1, 0, 1, 1);

        q2_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q2_spnBox->setObjectName(QString::fromUtf8("q2_spnBox"));
        q2_spnBox->setDecimals(2);
        q2_spnBox->setMinimum(-100.000000000000000);
        q2_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q2_spnBox, 2, 4, 1, 1);

        q3_spnBox = new QDoubleSpinBox(groupBoxDirection);
        q3_spnBox->setObjectName(QString::fromUtf8("q3_spnBox"));
        q3_spnBox->setDecimals(2);
        q3_spnBox->setMinimum(-100.000000000000000);
        q3_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(q3_spnBox, 3, 4, 1, 1);

        y_spnBox = new QDoubleSpinBox(groupBoxDirection);
        y_spnBox->setObjectName(QString::fromUtf8("y_spnBox"));
        y_spnBox->setMinimum(-100.000000000000000);
        y_spnBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(y_spnBox, 1, 1, 1, 1);

        q0_label = new QLabel(groupBoxDirection);
        q0_label->setObjectName(QString::fromUtf8("q0_label"));

        gridLayout_3->addWidget(q0_label, 0, 3, 1, 1);

        x_label = new QLabel(groupBoxDirection);
        x_label->setObjectName(QString::fromUtf8("x_label"));

        gridLayout_3->addWidget(x_label, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxDirection, 1, 0, 1, 1);

        QWidget::setTabOrder(checkBoxLight1, light1Color);
        QWidget::setTabOrder(light1Color, sliderIntensity1);
        QWidget::setTabOrder(sliderIntensity1, x_spnBox);
        QWidget::setTabOrder(x_spnBox, y_spnBox);
        QWidget::setTabOrder(y_spnBox, z_spnBox);
        QWidget::setTabOrder(z_spnBox, q0_spnBox);
        QWidget::setTabOrder(q0_spnBox, q1_spnBox);
        QWidget::setTabOrder(q1_spnBox, q2_spnBox);
        QWidget::setTabOrder(q2_spnBox, q3_spnBox);

        retranslateUi(Gui__Dialog__DlgSettingsLightSources);
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), light1Color, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), light1Label, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), sliderIntensity1, SLOT(setEnabled(bool)));
        QObject::connect(q1_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(q2_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(q3_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(q0_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerQS(void)));
        QObject::connect(checkBoxLight1, SIGNAL(toggled(bool)), Gui__Dialog__DlgSettingsLightSources, SLOT(toggleLight(bool)));
        QObject::connect(sliderIntensity1, SIGNAL(valueChanged(int)), Gui__Dialog__DlgSettingsLightSources, SLOT(lightIntensity(int)));
        QObject::connect(light1Color, SIGNAL(changed(void)), Gui__Dialog__DlgSettingsLightSources, SLOT(lightColor(void)));
        QObject::connect(x_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerXYZ(void)));
        QObject::connect(y_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerXYZ(void)));
        QObject::connect(z_spnBox, SIGNAL(valueChanged(double)), Gui__Dialog__DlgSettingsLightSources, SLOT(updateDraggerXYZ(void)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsLightSources);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsLightSources)
    {
        Gui__Dialog__DlgSettingsLightSources->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Light Sources", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Light sources", nullptr));
        checkBoxLight1->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Light source", nullptr));
        light1Label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Intensity", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxDirection->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Adjust the orientation of the directional light source by dragging the handle with the mouse or use the spin boxes for fine tuning.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxDirection->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "Direction", nullptr));
        q1_label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "q1", nullptr));
        z_label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "<html><head/><body><p>z</p></body></html>", nullptr));
        q2_label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "q2", nullptr));
        q3_label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "q3", nullptr));
        y_label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "y", nullptr));
        q0_label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "q0", nullptr));
        x_label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsLightSources", "x", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsLightSources: public Ui_DlgSettingsLightSources {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSLIGHTSOURCES_H
