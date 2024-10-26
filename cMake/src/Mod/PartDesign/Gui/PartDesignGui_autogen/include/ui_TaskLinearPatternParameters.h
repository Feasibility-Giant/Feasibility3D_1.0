/********************************************************************************
** Form generated from reading UI file 'TaskLinearPatternParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLINEARPATTERNPARAMETERS_H
#define UI_TASKLINEARPATTERNPARAMETERS_H

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

class Ui_TaskLinearPatternParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDirection;
    QComboBox *comboDirection;
    QCheckBox *checkReverse;
    QHBoxLayout *hboxLayout;
    QLabel *labelMode;
    QComboBox *comboMode;
    QWidget *lengthWrapper;
    QHBoxLayout *_3;
    QLabel *labelLength;
    Gui::QuantitySpinBox *spinLength;
    QWidget *offsetWrapper;
    QHBoxLayout *_2;
    QLabel *labelOffset;
    Gui::QuantitySpinBox *spinOffset;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Gui::UIntSpinBox *spinOccurrences;

    void setupUi(QWidget *PartDesignGui__TaskLinearPatternParameters)
    {
        if (PartDesignGui__TaskLinearPatternParameters->objectName().isEmpty())
            PartDesignGui__TaskLinearPatternParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskLinearPatternParameters"));
        PartDesignGui__TaskLinearPatternParameters->resize(270, 188);
        PartDesignGui__TaskLinearPatternParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskLinearPatternParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelDirection = new QLabel(PartDesignGui__TaskLinearPatternParameters);
        labelDirection->setObjectName(QString::fromUtf8("labelDirection"));

        horizontalLayout_3->addWidget(labelDirection);

        comboDirection = new QComboBox(PartDesignGui__TaskLinearPatternParameters);
        comboDirection->setObjectName(QString::fromUtf8("comboDirection"));

        horizontalLayout_3->addWidget(comboDirection);


        verticalLayout->addLayout(horizontalLayout_3);

        checkReverse = new QCheckBox(PartDesignGui__TaskLinearPatternParameters);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));

        verticalLayout->addWidget(checkReverse);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        labelMode = new QLabel(PartDesignGui__TaskLinearPatternParameters);
        labelMode->setObjectName(QString::fromUtf8("labelMode"));

        hboxLayout->addWidget(labelMode);

        comboMode = new QComboBox(PartDesignGui__TaskLinearPatternParameters);
        comboMode->addItem(QString());
        comboMode->addItem(QString());
        comboMode->setObjectName(QString::fromUtf8("comboMode"));

        hboxLayout->addWidget(comboMode);


        verticalLayout->addLayout(hboxLayout);

        lengthWrapper = new QWidget(PartDesignGui__TaskLinearPatternParameters);
        lengthWrapper->setObjectName(QString::fromUtf8("lengthWrapper"));
        _3 = new QHBoxLayout(lengthWrapper);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        labelLength = new QLabel(lengthWrapper);
        labelLength->setObjectName(QString::fromUtf8("labelLength"));

        _3->addWidget(labelLength);

        spinLength = new Gui::QuantitySpinBox(lengthWrapper);
        spinLength->setObjectName(QString::fromUtf8("spinLength"));
        spinLength->setProperty("keyboardTracking", QVariant(false));
        spinLength->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spinLength->setProperty("value", QVariant(100.000000000000000));

        _3->addWidget(spinLength);


        verticalLayout->addWidget(lengthWrapper);

        offsetWrapper = new QWidget(PartDesignGui__TaskLinearPatternParameters);
        offsetWrapper->setObjectName(QString::fromUtf8("offsetWrapper"));
        _2 = new QHBoxLayout(offsetWrapper);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        labelOffset = new QLabel(offsetWrapper);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        _2->addWidget(labelOffset);

        spinOffset = new Gui::QuantitySpinBox(offsetWrapper);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        spinOffset->setProperty("keyboardTracking", QVariant(false));
        spinOffset->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        spinOffset->setProperty("value", QVariant(10.000000000000000));

        _2->addWidget(spinOffset);


        verticalLayout->addWidget(offsetWrapper);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PartDesignGui__TaskLinearPatternParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinOccurrences = new Gui::UIntSpinBox(PartDesignGui__TaskLinearPatternParameters);
        spinOccurrences->setObjectName(QString::fromUtf8("spinOccurrences"));

        horizontalLayout->addWidget(spinOccurrences);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboDirection, checkReverse);
        QWidget::setTabOrder(checkReverse, spinLength);
        QWidget::setTabOrder(spinLength, spinOccurrences);

        retranslateUi(PartDesignGui__TaskLinearPatternParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskLinearPatternParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskLinearPatternParameters)
    {
        labelDirection->setText(QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Direction", nullptr));
        checkReverse->setText(QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Reverse direction", nullptr));
        labelMode->setText(QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Mode", nullptr));
        comboMode->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Overall Length", nullptr));
        comboMode->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Offset", nullptr));

        labelLength->setText(QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Length", nullptr));
        labelOffset->setText(QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Offset", nullptr));
        label->setText(QCoreApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Occurrences", nullptr));
        (void)PartDesignGui__TaskLinearPatternParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskLinearPatternParameters: public Ui_TaskLinearPatternParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKLINEARPATTERNPARAMETERS_H
