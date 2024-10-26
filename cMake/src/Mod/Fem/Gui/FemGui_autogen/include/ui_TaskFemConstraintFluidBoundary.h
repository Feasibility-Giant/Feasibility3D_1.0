/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintFluidBoundary.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTFLUIDBOUNDARY_H
#define UI_TASKFEMCONSTRAINTFLUIDBOUNDARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintFluidBoundary
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *layoutBoundaryType;
    QLabel *labelBoundaryType;
    QComboBox *comboBoundaryType;
    QLabel *labelSubtype;
    QComboBox *comboSubtype;
    QLabel *lbl_info;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *listReferences;
    QLabel *labelHelpText;
    QTabWidget *tabWidget;
    QWidget *tabBasicBoundary;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelBoundaryValue;
    QHBoxLayout *layoutBoundaryValue;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *spinBoundaryValue;
    QHBoxLayout *layoutDirection;
    QPushButton *buttonDirection;
    QLineEdit *lineDirection;
    QCheckBox *checkReverse;
    QWidget *tabTurbulenceBoundary;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTurbulenceSpecification;
    QComboBox *comboTurbulenceSpecification;
    QFormLayout *formLayout_2;
    QLabel *labelTurbulentIntensityValue;
    QDoubleSpinBox *spinTurbulentIntensityValue;
    QLabel *labelTurbulentLengthValue;
    QDoubleSpinBox *spinTurbulentLengthValue;
    QWidget *tabThermalBoundary;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *labelThermalBoundaryType;
    QComboBox *comboThermalBoundaryType;
    QLabel *labelTemperature;
    QDoubleSpinBox *spinTemperatureValue;
    QLabel *labelHeatFlux;
    QLabel *labelHTCeoff;
    QDoubleSpinBox *spinHTCoeffValue;
    QDoubleSpinBox *spinHeatFluxValue;

    void setupUi(QWidget *TaskFemConstraintFluidBoundary)
    {
        if (TaskFemConstraintFluidBoundary->objectName().isEmpty())
            TaskFemConstraintFluidBoundary->setObjectName(QString::fromUtf8("TaskFemConstraintFluidBoundary"));
        TaskFemConstraintFluidBoundary->resize(300, 388);
        TaskFemConstraintFluidBoundary->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskFemConstraintFluidBoundary);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutBoundaryType = new QFormLayout();
        layoutBoundaryType->setObjectName(QString::fromUtf8("layoutBoundaryType"));
        labelBoundaryType = new QLabel(TaskFemConstraintFluidBoundary);
        labelBoundaryType->setObjectName(QString::fromUtf8("labelBoundaryType"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelBoundaryType->sizePolicy().hasHeightForWidth());
        labelBoundaryType->setSizePolicy(sizePolicy);

        layoutBoundaryType->setWidget(0, QFormLayout::LabelRole, labelBoundaryType);

        comboBoundaryType = new QComboBox(TaskFemConstraintFluidBoundary);
        comboBoundaryType->setObjectName(QString::fromUtf8("comboBoundaryType"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoundaryType->sizePolicy().hasHeightForWidth());
        comboBoundaryType->setSizePolicy(sizePolicy1);

        layoutBoundaryType->setWidget(0, QFormLayout::FieldRole, comboBoundaryType);

        labelSubtype = new QLabel(TaskFemConstraintFluidBoundary);
        labelSubtype->setObjectName(QString::fromUtf8("labelSubtype"));
        sizePolicy.setHeightForWidth(labelSubtype->sizePolicy().hasHeightForWidth());
        labelSubtype->setSizePolicy(sizePolicy);

        layoutBoundaryType->setWidget(1, QFormLayout::LabelRole, labelSubtype);

        comboSubtype = new QComboBox(TaskFemConstraintFluidBoundary);
        comboSubtype->setObjectName(QString::fromUtf8("comboSubtype"));
        sizePolicy1.setHeightForWidth(comboSubtype->sizePolicy().hasHeightForWidth());
        comboSubtype->setSizePolicy(sizePolicy1);

        layoutBoundaryType->setWidget(1, QFormLayout::FieldRole, comboSubtype);


        verticalLayout->addLayout(layoutBoundaryType);

        lbl_info = new QLabel(TaskFemConstraintFluidBoundary);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnAdd = new QToolButton(TaskFemConstraintFluidBoundary);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        sizePolicy1.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy1);
        btnAdd->setCheckable(true);

        horizontalLayout_2->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintFluidBoundary);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy1.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy1);
        btnRemove->setCheckable(true);

        horizontalLayout_2->addWidget(btnRemove);


        verticalLayout->addLayout(horizontalLayout_2);

        listReferences = new QListWidget(TaskFemConstraintFluidBoundary);
        listReferences->setObjectName(QString::fromUtf8("listReferences"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listReferences->sizePolicy().hasHeightForWidth());
        listReferences->setSizePolicy(sizePolicy2);
        listReferences->setMinimumSize(QSize(0, 100));
        listReferences->setMaximumSize(QSize(16777215, 16777215));
        listReferences->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(listReferences);

        labelHelpText = new QLabel(TaskFemConstraintFluidBoundary);
        labelHelpText->setObjectName(QString::fromUtf8("labelHelpText"));
        labelHelpText->setWordWrap(true);

        verticalLayout->addWidget(labelHelpText);

        tabWidget = new QTabWidget(TaskFemConstraintFluidBoundary);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabBasicBoundary = new QWidget();
        tabBasicBoundary->setObjectName(QString::fromUtf8("tabBasicBoundary"));
        tabBasicBoundary->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(tabBasicBoundary);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelBoundaryValue = new QLabel(tabBasicBoundary);
        labelBoundaryValue->setObjectName(QString::fromUtf8("labelBoundaryValue"));
        labelBoundaryValue->setEnabled(true);
        labelBoundaryValue->setMinimumSize(QSize(50, 0));

        verticalLayout_3->addWidget(labelBoundaryValue);

        layoutBoundaryValue = new QHBoxLayout();
        layoutBoundaryValue->setObjectName(QString::fromUtf8("layoutBoundaryValue"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutBoundaryValue->addItem(horizontalSpacer);

        spinBoundaryValue = new QDoubleSpinBox(tabBasicBoundary);
        spinBoundaryValue->setObjectName(QString::fromUtf8("spinBoundaryValue"));
        spinBoundaryValue->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBoundaryValue->sizePolicy().hasHeightForWidth());
        spinBoundaryValue->setSizePolicy(sizePolicy3);
        spinBoundaryValue->setMinimumSize(QSize(80, 0));
        spinBoundaryValue->setValue(0.000000000000000);

        layoutBoundaryValue->addWidget(spinBoundaryValue);


        verticalLayout_3->addLayout(layoutBoundaryValue);

        layoutDirection = new QHBoxLayout();
        layoutDirection->setObjectName(QString::fromUtf8("layoutDirection"));
        buttonDirection = new QPushButton(tabBasicBoundary);
        buttonDirection->setObjectName(QString::fromUtf8("buttonDirection"));
        sizePolicy3.setHeightForWidth(buttonDirection->sizePolicy().hasHeightForWidth());
        buttonDirection->setSizePolicy(sizePolicy3);
        buttonDirection->setMaximumSize(QSize(16777215, 16777215));

        layoutDirection->addWidget(buttonDirection);

        lineDirection = new QLineEdit(tabBasicBoundary);
        lineDirection->setObjectName(QString::fromUtf8("lineDirection"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineDirection->sizePolicy().hasHeightForWidth());
        lineDirection->setSizePolicy(sizePolicy4);
        lineDirection->setMinimumSize(QSize(75, 0));
        lineDirection->setMaximumSize(QSize(16777215, 16777215));
        lineDirection->setBaseSize(QSize(0, 0));

        layoutDirection->addWidget(lineDirection);


        verticalLayout_3->addLayout(layoutDirection);

        checkReverse = new QCheckBox(tabBasicBoundary);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));
        checkReverse->setEnabled(true);
        checkReverse->setMinimumSize(QSize(160, 0));
        checkReverse->setMaximumSize(QSize(200, 16777215));

        verticalLayout_3->addWidget(checkReverse);

        tabWidget->addTab(tabBasicBoundary, QString());
        tabTurbulenceBoundary = new QWidget();
        tabTurbulenceBoundary->setObjectName(QString::fromUtf8("tabTurbulenceBoundary"));
        verticalLayout_2 = new QVBoxLayout(tabTurbulenceBoundary);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelTurbulenceSpecification = new QLabel(tabTurbulenceBoundary);
        labelTurbulenceSpecification->setObjectName(QString::fromUtf8("labelTurbulenceSpecification"));

        verticalLayout_2->addWidget(labelTurbulenceSpecification);

        comboTurbulenceSpecification = new QComboBox(tabTurbulenceBoundary);
        comboTurbulenceSpecification->setObjectName(QString::fromUtf8("comboTurbulenceSpecification"));
        sizePolicy1.setHeightForWidth(comboTurbulenceSpecification->sizePolicy().hasHeightForWidth());
        comboTurbulenceSpecification->setSizePolicy(sizePolicy1);
        comboTurbulenceSpecification->setFrame(true);

        verticalLayout_2->addWidget(comboTurbulenceSpecification);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        labelTurbulentIntensityValue = new QLabel(tabTurbulenceBoundary);
        labelTurbulentIntensityValue->setObjectName(QString::fromUtf8("labelTurbulentIntensityValue"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelTurbulentIntensityValue);

        spinTurbulentIntensityValue = new QDoubleSpinBox(tabTurbulenceBoundary);
        spinTurbulentIntensityValue->setObjectName(QString::fromUtf8("spinTurbulentIntensityValue"));
        sizePolicy4.setHeightForWidth(spinTurbulentIntensityValue->sizePolicy().hasHeightForWidth());
        spinTurbulentIntensityValue->setSizePolicy(sizePolicy4);
        spinTurbulentIntensityValue->setMinimumSize(QSize(80, 0));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinTurbulentIntensityValue);

        labelTurbulentLengthValue = new QLabel(tabTurbulenceBoundary);
        labelTurbulentLengthValue->setObjectName(QString::fromUtf8("labelTurbulentLengthValue"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelTurbulentLengthValue);

        spinTurbulentLengthValue = new QDoubleSpinBox(tabTurbulenceBoundary);
        spinTurbulentLengthValue->setObjectName(QString::fromUtf8("spinTurbulentLengthValue"));
        sizePolicy1.setHeightForWidth(spinTurbulentLengthValue->sizePolicy().hasHeightForWidth());
        spinTurbulentLengthValue->setSizePolicy(sizePolicy1);
        spinTurbulentLengthValue->setMinimumSize(QSize(80, 0));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinTurbulentLengthValue);


        verticalLayout_2->addLayout(formLayout_2);

        tabWidget->addTab(tabTurbulenceBoundary, QString());
        tabThermalBoundary = new QWidget();
        tabThermalBoundary->setObjectName(QString::fromUtf8("tabThermalBoundary"));
        verticalLayout_5 = new QVBoxLayout(tabThermalBoundary);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelThermalBoundaryType = new QLabel(tabThermalBoundary);
        labelThermalBoundaryType->setObjectName(QString::fromUtf8("labelThermalBoundaryType"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelThermalBoundaryType);

        comboThermalBoundaryType = new QComboBox(tabThermalBoundary);
        comboThermalBoundaryType->setObjectName(QString::fromUtf8("comboThermalBoundaryType"));
        sizePolicy1.setHeightForWidth(comboThermalBoundaryType->sizePolicy().hasHeightForWidth());
        comboThermalBoundaryType->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboThermalBoundaryType);

        labelTemperature = new QLabel(tabThermalBoundary);
        labelTemperature->setObjectName(QString::fromUtf8("labelTemperature"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelTemperature);

        spinTemperatureValue = new QDoubleSpinBox(tabThermalBoundary);
        spinTemperatureValue->setObjectName(QString::fromUtf8("spinTemperatureValue"));
        sizePolicy1.setHeightForWidth(spinTemperatureValue->sizePolicy().hasHeightForWidth());
        spinTemperatureValue->setSizePolicy(sizePolicy1);
        spinTemperatureValue->setMinimum(-273.149999999999977);
        spinTemperatureValue->setMaximum(9999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinTemperatureValue);

        labelHeatFlux = new QLabel(tabThermalBoundary);
        labelHeatFlux->setObjectName(QString::fromUtf8("labelHeatFlux"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelHeatFlux);

        labelHTCeoff = new QLabel(tabThermalBoundary);
        labelHTCeoff->setObjectName(QString::fromUtf8("labelHTCeoff"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelHTCeoff);

        spinHTCoeffValue = new QDoubleSpinBox(tabThermalBoundary);
        spinHTCoeffValue->setObjectName(QString::fromUtf8("spinHTCoeffValue"));
        sizePolicy1.setHeightForWidth(spinHTCoeffValue->sizePolicy().hasHeightForWidth());
        spinHTCoeffValue->setSizePolicy(sizePolicy1);
        spinHTCoeffValue->setMinimum(0.000000000000000);
        spinHTCoeffValue->setMaximum(99999.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinHTCoeffValue);

        spinHeatFluxValue = new QDoubleSpinBox(tabThermalBoundary);
        spinHeatFluxValue->setObjectName(QString::fromUtf8("spinHeatFluxValue"));
        sizePolicy1.setHeightForWidth(spinHeatFluxValue->sizePolicy().hasHeightForWidth());
        spinHeatFluxValue->setSizePolicy(sizePolicy1);
        spinHeatFluxValue->setMinimum(0.000000000000000);
        spinHeatFluxValue->setMaximum(99999.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinHeatFluxValue);


        verticalLayout_5->addLayout(formLayout);

        tabWidget->addTab(tabThermalBoundary, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(TaskFemConstraintFluidBoundary);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TaskFemConstraintFluidBoundary);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintFluidBoundary)
    {
        labelBoundaryType->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Boundary", nullptr));
        labelSubtype->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Subtype", nullptr));
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Select multiple face(s), click Add or Remove", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Remove", nullptr));
        labelHelpText->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Help text", nullptr));
        labelBoundaryValue->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Value [Unit]", nullptr));
#if QT_CONFIG(tooltip)
        buttonDirection->setToolTip(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Select a planar edge or face, then press this button", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDirection->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Direction", nullptr));
#if QT_CONFIG(tooltip)
        lineDirection->setToolTip(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "The direction of the edge or the direction of the\n"
"normal vector of the face is used as direction", nullptr));
#endif // QT_CONFIG(tooltip)
        checkReverse->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Reverse direction", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBasicBoundary), QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Tab 1", nullptr));
        labelTurbulenceSpecification->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Turbulence specification", nullptr));
        labelTurbulentIntensityValue->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Intensity", nullptr));
        labelTurbulentLengthValue->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Length [m]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTurbulenceBoundary), QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Page", nullptr));
        labelThermalBoundaryType->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Type", nullptr));
        labelTemperature->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Temperature [K]", nullptr));
        labelHeatFlux->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Heat flux [W/m2]", nullptr));
        labelHTCeoff->setText(QCoreApplication::translate("TaskFemConstraintFluidBoundary", "HT coeff", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabThermalBoundary), QCoreApplication::translate("TaskFemConstraintFluidBoundary", "Tab 2", nullptr));
        (void)TaskFemConstraintFluidBoundary;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintFluidBoundary: public Ui_TaskFemConstraintFluidBoundary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTFLUIDBOUNDARY_H
