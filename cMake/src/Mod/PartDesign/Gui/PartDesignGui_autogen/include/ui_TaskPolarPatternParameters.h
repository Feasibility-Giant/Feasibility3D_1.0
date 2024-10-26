/********************************************************************************
** Form generated from reading UI file 'TaskPolarPatternParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOLARPATTERNPARAMETERS_H
#define UI_TASKPOLARPATTERNPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/SpinBox.h"

namespace PartDesignGui {

class Ui_TaskPolarPatternParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelAxis;
    QComboBox *comboAxis;
    QCheckBox *checkReverse;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QComboBox *comboMode;
    QWidget *polarAngleWrapper;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    Gui::QuantitySpinBox *polarAngle;
    QWidget *angleOffsetWrapper;
    QHBoxLayout *hboxLayout2;
    QLabel *label2;
    Gui::QuantitySpinBox *angleOffset;
    QHBoxLayout *horizontalLayout;
    QLabel *label3;
    Gui::UIntSpinBox *spinOccurrences;

    void setupUi(QWidget *PartDesignGui__TaskPolarPatternParameters)
    {
        if (PartDesignGui__TaskPolarPatternParameters->objectName().isEmpty())
            PartDesignGui__TaskPolarPatternParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskPolarPatternParameters"));
        PartDesignGui__TaskPolarPatternParameters->resize(253, 206);
        PartDesignGui__TaskPolarPatternParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskPolarPatternParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelAxis = new QLabel(PartDesignGui__TaskPolarPatternParameters);
        labelAxis->setObjectName(QString::fromUtf8("labelAxis"));

        horizontalLayout_3->addWidget(labelAxis);

        comboAxis = new QComboBox(PartDesignGui__TaskPolarPatternParameters);
        comboAxis->setObjectName(QString::fromUtf8("comboAxis"));

        horizontalLayout_3->addWidget(comboAxis);


        verticalLayout->addLayout(horizontalLayout_3);

        checkReverse = new QCheckBox(PartDesignGui__TaskPolarPatternParameters);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));

        verticalLayout->addWidget(checkReverse);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(PartDesignGui__TaskPolarPatternParameters);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        comboMode = new QComboBox(PartDesignGui__TaskPolarPatternParameters);
        comboMode->addItem(QString());
        comboMode->addItem(QString());
        comboMode->setObjectName(QString::fromUtf8("comboMode"));

        hboxLayout->addWidget(comboMode);


        verticalLayout->addLayout(hboxLayout);

        polarAngleWrapper = new QWidget(PartDesignGui__TaskPolarPatternParameters);
        polarAngleWrapper->setObjectName(QString::fromUtf8("polarAngleWrapper"));
        hboxLayout1 = new QHBoxLayout(polarAngleWrapper);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(polarAngleWrapper);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        polarAngle = new Gui::QuantitySpinBox(polarAngleWrapper);
        polarAngle->setObjectName(QString::fromUtf8("polarAngle"));
        polarAngle->setProperty("keyboardTracking", QVariant(false));
        polarAngle->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        polarAngle->setProperty("minimum", QVariant(0.000000000000000));
        polarAngle->setProperty("maximum", QVariant(360.000000000000000));
        polarAngle->setProperty("value", QVariant(360.000000000000000));

        hboxLayout1->addWidget(polarAngle);


        verticalLayout->addWidget(polarAngleWrapper);

        angleOffsetWrapper = new QWidget(PartDesignGui__TaskPolarPatternParameters);
        angleOffsetWrapper->setObjectName(QString::fromUtf8("angleOffsetWrapper"));
        hboxLayout2 = new QHBoxLayout(angleOffsetWrapper);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label2 = new QLabel(angleOffsetWrapper);
        label2->setObjectName(QString::fromUtf8("label2"));

        hboxLayout2->addWidget(label2);

        angleOffset = new Gui::QuantitySpinBox(angleOffsetWrapper);
        angleOffset->setObjectName(QString::fromUtf8("angleOffset"));
        angleOffset->setProperty("keyboardTracking", QVariant(false));
        angleOffset->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        angleOffset->setProperty("minimum", QVariant(0.000000000000000));
        angleOffset->setProperty("maximum", QVariant(360.000000000000000));
        angleOffset->setProperty("value", QVariant(360.000000000000000));

        hboxLayout2->addWidget(angleOffset);


        verticalLayout->addWidget(angleOffsetWrapper);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label3 = new QLabel(PartDesignGui__TaskPolarPatternParameters);
        label3->setObjectName(QString::fromUtf8("label3"));

        horizontalLayout->addWidget(label3);

        spinOccurrences = new Gui::UIntSpinBox(PartDesignGui__TaskPolarPatternParameters);
        spinOccurrences->setObjectName(QString::fromUtf8("spinOccurrences"));

        horizontalLayout->addWidget(spinOccurrences);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboAxis, checkReverse);
        QWidget::setTabOrder(checkReverse, polarAngle);
        QWidget::setTabOrder(polarAngle, spinOccurrences);

        retranslateUi(PartDesignGui__TaskPolarPatternParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskPolarPatternParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskPolarPatternParameters)
    {
        labelAxis->setText(QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Axis", nullptr));
        checkReverse->setText(QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Reverse direction", nullptr));
        label->setText(QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Mode", nullptr));
        comboMode->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Overall Angle", nullptr));
        comboMode->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Offset Angle", nullptr));

        label_2->setText(QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Angle", nullptr));
        label2->setText(QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Offset", nullptr));
        label3->setText(QCoreApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Occurrences", nullptr));
        (void)PartDesignGui__TaskPolarPatternParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskPolarPatternParameters: public Ui_TaskPolarPatternParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKPOLARPATTERNPARAMETERS_H
