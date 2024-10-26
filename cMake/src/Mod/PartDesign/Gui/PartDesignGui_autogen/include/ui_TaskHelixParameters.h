/********************************************************************************
** Form generated from reading UI file 'TaskHelixParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKHELIXPARAMETERS_H
#define UI_TASKHELIXPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace PartDesignGui {

class Ui_TaskHelixParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutStatus;
    QLabel *labelStatus;
    QLabel *labelMessage;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAxis;
    QComboBox *axis;
    QHBoxLayout *horizontalLayoutMode;
    QLabel *labelInputMode;
    QComboBox *inputMode;
    QHBoxLayout *horizontalLayoutPitch;
    QLabel *labelPitch;
    Gui::QuantitySpinBox *pitch;
    QHBoxLayout *horizontalLayoutHeight;
    QLabel *labelHeight;
    Gui::QuantitySpinBox *height;
    QHBoxLayout *horizontalLayoutTurns;
    QLabel *labelTurns;
    Gui::QuantitySpinBox *turns;
    QHBoxLayout *horizontalLayoutConeAngle;
    QLabel *labelConeAngle;
    Gui::QuantitySpinBox *coneAngle;
    QHBoxLayout *horizontalLayoutGrowth;
    QLabel *labelGrowth;
    Gui::QuantitySpinBox *growth;
    QCheckBox *checkBoxLeftHanded;
    QCheckBox *checkBoxReversed;
    QCheckBox *checkBoxOutside;
    QFrame *line;
    QCheckBox *checkBoxUpdateView;

    void setupUi(QWidget *PartDesignGui__TaskHelixParameters)
    {
        if (PartDesignGui__TaskHelixParameters->objectName().isEmpty())
            PartDesignGui__TaskHelixParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskHelixParameters"));
        PartDesignGui__TaskHelixParameters->resize(278, 398);
        PartDesignGui__TaskHelixParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskHelixParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutStatus = new QHBoxLayout();
        horizontalLayoutStatus->setObjectName(QString::fromUtf8("horizontalLayoutStatus"));
        labelStatus = new QLabel(PartDesignGui__TaskHelixParameters);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        horizontalLayoutStatus->addWidget(labelStatus);

        labelMessage = new QLabel(PartDesignGui__TaskHelixParameters);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));

        horizontalLayoutStatus->addWidget(labelMessage);


        verticalLayout->addLayout(horizontalLayoutStatus);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelAxis = new QLabel(PartDesignGui__TaskHelixParameters);
        labelAxis->setObjectName(QString::fromUtf8("labelAxis"));

        horizontalLayout->addWidget(labelAxis);

        axis = new QComboBox(PartDesignGui__TaskHelixParameters);
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->setObjectName(QString::fromUtf8("axis"));

        horizontalLayout->addWidget(axis);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayoutMode = new QHBoxLayout();
        horizontalLayoutMode->setObjectName(QString::fromUtf8("horizontalLayoutMode"));
        labelInputMode = new QLabel(PartDesignGui__TaskHelixParameters);
        labelInputMode->setObjectName(QString::fromUtf8("labelInputMode"));

        horizontalLayoutMode->addWidget(labelInputMode);

        inputMode = new QComboBox(PartDesignGui__TaskHelixParameters);
        inputMode->addItem(QString());
        inputMode->addItem(QString());
        inputMode->addItem(QString());
        inputMode->addItem(QString());
        inputMode->setObjectName(QString::fromUtf8("inputMode"));

        horizontalLayoutMode->addWidget(inputMode);


        verticalLayout->addLayout(horizontalLayoutMode);

        horizontalLayoutPitch = new QHBoxLayout();
        horizontalLayoutPitch->setObjectName(QString::fromUtf8("horizontalLayoutPitch"));
        labelPitch = new QLabel(PartDesignGui__TaskHelixParameters);
        labelPitch->setObjectName(QString::fromUtf8("labelPitch"));

        horizontalLayoutPitch->addWidget(labelPitch);

        pitch = new Gui::QuantitySpinBox(PartDesignGui__TaskHelixParameters);
        pitch->setObjectName(QString::fromUtf8("pitch"));
        pitch->setKeyboardTracking(false);
        pitch->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        pitch->setMinimum(0.000000000000000);
        pitch->setValue(10.000000000000000);

        horizontalLayoutPitch->addWidget(pitch);


        verticalLayout->addLayout(horizontalLayoutPitch);

        horizontalLayoutHeight = new QHBoxLayout();
        horizontalLayoutHeight->setObjectName(QString::fromUtf8("horizontalLayoutHeight"));
        labelHeight = new QLabel(PartDesignGui__TaskHelixParameters);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));

        horizontalLayoutHeight->addWidget(labelHeight);

        height = new Gui::QuantitySpinBox(PartDesignGui__TaskHelixParameters);
        height->setObjectName(QString::fromUtf8("height"));
        height->setKeyboardTracking(false);
        height->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        height->setMinimum(0.000000000000000);
        height->setValue(30.000000000000000);

        horizontalLayoutHeight->addWidget(height);


        verticalLayout->addLayout(horizontalLayoutHeight);

        horizontalLayoutTurns = new QHBoxLayout();
        horizontalLayoutTurns->setObjectName(QString::fromUtf8("horizontalLayoutTurns"));
        labelTurns = new QLabel(PartDesignGui__TaskHelixParameters);
        labelTurns->setObjectName(QString::fromUtf8("labelTurns"));

        horizontalLayoutTurns->addWidget(labelTurns);

        turns = new Gui::QuantitySpinBox(PartDesignGui__TaskHelixParameters);
        turns->setObjectName(QString::fromUtf8("turns"));
        turns->setKeyboardTracking(false);
        turns->setMinimum(0.000000000000000);
        turns->setValue(3.000000000000000);

        horizontalLayoutTurns->addWidget(turns);


        verticalLayout->addLayout(horizontalLayoutTurns);

        horizontalLayoutConeAngle = new QHBoxLayout();
        horizontalLayoutConeAngle->setObjectName(QString::fromUtf8("horizontalLayoutConeAngle"));
        labelConeAngle = new QLabel(PartDesignGui__TaskHelixParameters);
        labelConeAngle->setObjectName(QString::fromUtf8("labelConeAngle"));

        horizontalLayoutConeAngle->addWidget(labelConeAngle);

        coneAngle = new Gui::QuantitySpinBox(PartDesignGui__TaskHelixParameters);
        coneAngle->setObjectName(QString::fromUtf8("coneAngle"));
        coneAngle->setKeyboardTracking(false);
        coneAngle->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        coneAngle->setMinimum(-89.000000000000000);
        coneAngle->setMaximum(89.000000000000000);
        coneAngle->setSingleStep(1.000000000000000);

        horizontalLayoutConeAngle->addWidget(coneAngle);


        verticalLayout->addLayout(horizontalLayoutConeAngle);

        horizontalLayoutGrowth = new QHBoxLayout();
        horizontalLayoutGrowth->setObjectName(QString::fromUtf8("horizontalLayoutGrowth"));
        labelGrowth = new QLabel(PartDesignGui__TaskHelixParameters);
        labelGrowth->setObjectName(QString::fromUtf8("labelGrowth"));

        horizontalLayoutGrowth->addWidget(labelGrowth);

        growth = new Gui::QuantitySpinBox(PartDesignGui__TaskHelixParameters);
        growth->setObjectName(QString::fromUtf8("growth"));
        growth->setKeyboardTracking(false);
        growth->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        horizontalLayoutGrowth->addWidget(growth);


        verticalLayout->addLayout(horizontalLayoutGrowth);

        checkBoxLeftHanded = new QCheckBox(PartDesignGui__TaskHelixParameters);
        checkBoxLeftHanded->setObjectName(QString::fromUtf8("checkBoxLeftHanded"));
        checkBoxLeftHanded->setEnabled(true);

        verticalLayout->addWidget(checkBoxLeftHanded);

        checkBoxReversed = new QCheckBox(PartDesignGui__TaskHelixParameters);
        checkBoxReversed->setObjectName(QString::fromUtf8("checkBoxReversed"));
        checkBoxReversed->setEnabled(true);

        verticalLayout->addWidget(checkBoxReversed);

        checkBoxOutside = new QCheckBox(PartDesignGui__TaskHelixParameters);
        checkBoxOutside->setObjectName(QString::fromUtf8("checkBoxOutside"));
        checkBoxOutside->setChecked(false);

        verticalLayout->addWidget(checkBoxOutside);

        line = new QFrame(PartDesignGui__TaskHelixParameters);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskHelixParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);

        QWidget::setTabOrder(axis, inputMode);
        QWidget::setTabOrder(inputMode, pitch);
        QWidget::setTabOrder(pitch, height);
        QWidget::setTabOrder(height, turns);
        QWidget::setTabOrder(turns, coneAngle);
        QWidget::setTabOrder(coneAngle, growth);
        QWidget::setTabOrder(growth, checkBoxLeftHanded);
        QWidget::setTabOrder(checkBoxLeftHanded, checkBoxReversed);
        QWidget::setTabOrder(checkBoxReversed, checkBoxOutside);
        QWidget::setTabOrder(checkBoxOutside, checkBoxUpdateView);

        retranslateUi(PartDesignGui__TaskHelixParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskHelixParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskHelixParameters)
    {
        labelStatus->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Status:", nullptr));
        labelMessage->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Valid", nullptr));
        labelAxis->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Axis:", nullptr));
        axis->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Base X axis", nullptr));
        axis->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Base Y axis", nullptr));
        axis->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Base Z axis", nullptr));
        axis->setItemText(3, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Horizontal sketch axis", nullptr));
        axis->setItemText(4, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Vertical sketch axis", nullptr));
        axis->setItemText(5, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Normal sketch axis", nullptr));
        axis->setItemText(6, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Select reference...", nullptr));

        labelInputMode->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Mode:", nullptr));
        inputMode->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Pitch-Height-Angle", nullptr));
        inputMode->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Pitch-Turns-Angle", nullptr));
        inputMode->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Height-Turns-Angle", nullptr));
        inputMode->setItemText(3, QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Height-Turns-Growth", nullptr));

        labelPitch->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Pitch:", nullptr));
        labelHeight->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Height:", nullptr));
        labelTurns->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Turns:", nullptr));
        labelConeAngle->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Cone angle:", nullptr));
        labelGrowth->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Radial growth:", nullptr));
        checkBoxLeftHanded->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Left handed", nullptr));
        checkBoxReversed->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Reversed", nullptr));
        checkBoxOutside->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Remove outside of profile", nullptr));
        checkBoxUpdateView->setText(QCoreApplication::translate("PartDesignGui::TaskHelixParameters", "Update view", nullptr));
        (void)PartDesignGui__TaskHelixParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskHelixParameters: public Ui_TaskHelixParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKHELIXPARAMETERS_H
