/********************************************************************************
** Form generated from reading UI file 'TaskChamferParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCHAMFERPARAMETERS_H
#define UI_TASKCHAMFERPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace PartDesignGui {

class Ui_TaskChamferParameters
{
public:
    QVBoxLayout *verticalLayout;
    QToolButton *buttonRefSel;
    QListWidget *listWidgetReferences;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *typeLabel;
    QComboBox *chamferType;
    QToolButton *flipDirection;
    QFormLayout *formLayout_4;
    QLabel *sizeLabel;
    Gui::QuantitySpinBox *chamferSize;
    QCheckBox *checkBoxUseAllEdges;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QWidget *page_2;
    QFormLayout *formLayout_2;
    QLabel *size2Label;
    Gui::QuantitySpinBox *chamferSize2;
    QWidget *page_3;
    QFormLayout *formLayout_3;
    QLabel *angleLabel;
    Gui::QuantitySpinBox *chamferAngle;

    void setupUi(QWidget *PartDesignGui__TaskChamferParameters)
    {
        if (PartDesignGui__TaskChamferParameters->objectName().isEmpty())
            PartDesignGui__TaskChamferParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskChamferParameters"));
        PartDesignGui__TaskChamferParameters->resize(263, 254);
        PartDesignGui__TaskChamferParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskChamferParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonRefSel = new QToolButton(PartDesignGui__TaskChamferParameters);
        buttonRefSel->setObjectName(QString::fromUtf8("buttonRefSel"));
        buttonRefSel->setCheckable(true);

        verticalLayout->addWidget(buttonRefSel);

        listWidgetReferences = new QListWidget(PartDesignGui__TaskChamferParameters);
        listWidgetReferences->setObjectName(QString::fromUtf8("listWidgetReferences"));
        listWidgetReferences->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(listWidgetReferences);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        typeLabel = new QLabel(PartDesignGui__TaskChamferParameters);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, typeLabel);

        chamferType = new QComboBox(PartDesignGui__TaskChamferParameters);
        chamferType->addItem(QString());
        chamferType->addItem(QString());
        chamferType->addItem(QString());
        chamferType->setObjectName(QString::fromUtf8("chamferType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, chamferType);


        horizontalLayout_2->addLayout(formLayout);

        flipDirection = new QToolButton(PartDesignGui__TaskChamferParameters);
        flipDirection->setObjectName(QString::fromUtf8("flipDirection"));
        flipDirection->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/PartDesign_Flip_Direction.svg"), QSize(), QIcon::Normal, QIcon::Off);
        flipDirection->setIcon(icon);
        flipDirection->setCheckable(true);

        horizontalLayout_2->addWidget(flipDirection);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        sizeLabel = new QLabel(PartDesignGui__TaskChamferParameters);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, sizeLabel);

        chamferSize = new Gui::QuantitySpinBox(PartDesignGui__TaskChamferParameters);
        chamferSize->setObjectName(QString::fromUtf8("chamferSize"));
        chamferSize->setKeyboardTracking(false);
        chamferSize->setValue(1.000000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, chamferSize);


        verticalLayout->addLayout(formLayout_4);

        checkBoxUseAllEdges = new QCheckBox(PartDesignGui__TaskChamferParameters);
        checkBoxUseAllEdges->setObjectName(QString::fromUtf8("checkBoxUseAllEdges"));

        verticalLayout->addWidget(checkBoxUseAllEdges);

        stackedWidget = new QStackedWidget(PartDesignGui__TaskChamferParameters);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        formLayout_2 = new QFormLayout(page_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        size2Label = new QLabel(page_2);
        size2Label->setObjectName(QString::fromUtf8("size2Label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, size2Label);

        chamferSize2 = new Gui::QuantitySpinBox(page_2);
        chamferSize2->setObjectName(QString::fromUtf8("chamferSize2"));
        chamferSize2->setKeyboardTracking(false);
        chamferSize2->setValue(1.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, chamferSize2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        formLayout_3 = new QFormLayout(page_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        angleLabel = new QLabel(page_3);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, angleLabel);

        chamferAngle = new Gui::QuantitySpinBox(page_3);
        chamferAngle->setObjectName(QString::fromUtf8("chamferAngle"));
        chamferAngle->setKeyboardTracking(false);
        chamferAngle->setMinimum(0.000000000000000);
        chamferAngle->setMaximum(180.000000000000000);
        chamferAngle->setSingleStep(1.000000000000000);
        chamferAngle->setValue(45.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, chamferAngle);

        stackedWidget->addWidget(page_3);

        verticalLayout->addWidget(stackedWidget);

        QWidget::setTabOrder(buttonRefSel, listWidgetReferences);
        QWidget::setTabOrder(listWidgetReferences, chamferType);
        QWidget::setTabOrder(chamferType, flipDirection);
        QWidget::setTabOrder(flipDirection, chamferSize);
        QWidget::setTabOrder(chamferSize, checkBoxUseAllEdges);
        QWidget::setTabOrder(checkBoxUseAllEdges, chamferSize2);
        QWidget::setTabOrder(chamferSize2, chamferAngle);

        retranslateUi(PartDesignGui__TaskChamferParameters);
        QObject::connect(chamferType, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PartDesignGui__TaskChamferParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskChamferParameters)
    {
#if QT_CONFIG(tooltip)
        buttonRefSel->setToolTip(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Click button to enter selection mode,\n"
"click again to end selection", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonRefSel->setText(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Select", nullptr));
#if QT_CONFIG(tooltip)
        listWidgetReferences->setToolTip(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "- select an item to highlight it\n"
"- double-click on an item to see the chamfers", nullptr));
#endif // QT_CONFIG(tooltip)
        typeLabel->setText(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Type", nullptr));
        chamferType->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Equal distance", nullptr));
        chamferType->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Two distances", nullptr));
        chamferType->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Distance and angle", nullptr));

#if QT_CONFIG(tooltip)
        flipDirection->setToolTip(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Flip direction", nullptr));
#endif // QT_CONFIG(tooltip)
        flipDirection->setText(QString());
        sizeLabel->setText(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Size", nullptr));
        checkBoxUseAllEdges->setText(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Use All Edges", nullptr));
        size2Label->setText(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Size 2", nullptr));
        angleLabel->setText(QCoreApplication::translate("PartDesignGui::TaskChamferParameters", "Angle", nullptr));
        (void)PartDesignGui__TaskChamferParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskChamferParameters: public Ui_TaskChamferParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKCHAMFERPARAMETERS_H
