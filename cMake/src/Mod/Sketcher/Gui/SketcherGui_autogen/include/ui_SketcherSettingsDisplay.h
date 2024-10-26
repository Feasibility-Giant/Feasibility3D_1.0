/********************************************************************************
** Form generated from reading UI file 'SketcherSettingsDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHERSETTINGSDISPLAY_H
#define UI_SKETCHERSETTINGSDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace SketcherGui {

class Ui_SketcherSettingsDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout_1;
    QLabel *label_1;
    Gui::PrefDoubleSpinBox *viewScalingFactor;
    Gui::PrefSpinBox *SegmentsPerGeometry;
    Gui::PrefCheckBox *checkBoxShowDimensionalName;
    Gui::PrefLineEdit *prefDimensionalStringFormat;
    QLabel *label_3;
    Gui::PrefCheckBox *continueMode;
    Gui::PrefSpinBox *EditSketcherFontSize;
    Gui::PrefCheckBox *checkBoxHideUnits;
    QLabel *label_0;
    Gui::PrefCheckBox *constraintMode;
    Gui::PrefCheckBox *checkBoxShowCursorCoords;
    Gui::PrefCheckBox *dialogOnDistanceConstraint;
    Gui::PrefCheckBox *checkBoxUseSystemDecimals;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    Gui::PrefCheckBox *checkBoxTVHideDependent;
    Gui::PrefCheckBox *checkBoxTVShowLinks;
    Gui::PrefCheckBox *checkBoxTVShowSupport;
    Gui::PrefCheckBox *checkBoxTVRestoreCamera;
    Gui::PrefCheckBox *checkBoxTVForceOrtho;
    Gui::PrefCheckBox *checkBoxTVSectionView;
    QLabel *label_4;
    QPushButton *btnTVApply;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SketcherGui__SketcherSettingsDisplay)
    {
        if (SketcherGui__SketcherSettingsDisplay->objectName().isEmpty())
            SketcherGui__SketcherSettingsDisplay->setObjectName(QString::fromUtf8("SketcherGui__SketcherSettingsDisplay"));
        SketcherGui__SketcherSettingsDisplay->resize(500, 538);
        verticalLayout = new QVBoxLayout(SketcherGui__SketcherSettingsDisplay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_1 = new QGroupBox(SketcherGui__SketcherSettingsDisplay);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        gridLayout_1 = new QGridLayout(groupBox_1);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        label_1 = new QLabel(groupBox_1);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setMinimumSize(QSize(182, 0));

        gridLayout_1->addWidget(label_1, 1, 0, 1, 1);

        viewScalingFactor = new Gui::PrefDoubleSpinBox(groupBox_1);
        viewScalingFactor->setObjectName(QString::fromUtf8("viewScalingFactor"));
        viewScalingFactor->setInputMethodHints(Qt::ImhPreferNumbers);
        viewScalingFactor->setDecimals(2);
        viewScalingFactor->setMinimum(0.500000000000000);
        viewScalingFactor->setMaximum(5.000000000000000);
        viewScalingFactor->setSingleStep(0.050000000000000);
        viewScalingFactor->setValue(1.000000000000000);
        viewScalingFactor->setProperty("prefEntry", QVariant(QByteArray("ViewScalingFactor")));
        viewScalingFactor->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_1->addWidget(viewScalingFactor, 1, 1, 1, 1);

        SegmentsPerGeometry = new Gui::PrefSpinBox(groupBox_1);
        SegmentsPerGeometry->setObjectName(QString::fromUtf8("SegmentsPerGeometry"));
        SegmentsPerGeometry->setMinimum(50);
        SegmentsPerGeometry->setMaximum(1000);
        SegmentsPerGeometry->setProperty("prefEntry", QVariant(QByteArray("SegmentsPerGeometry")));
        SegmentsPerGeometry->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_1->addWidget(SegmentsPerGeometry, 2, 1, 1, 1);

        checkBoxShowDimensionalName = new Gui::PrefCheckBox(groupBox_1);
        checkBoxShowDimensionalName->setObjectName(QString::fromUtf8("checkBoxShowDimensionalName"));
        checkBoxShowDimensionalName->setProperty("prefEntry", QVariant(QByteArray("ShowDimensionalName")));
        checkBoxShowDimensionalName->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(checkBoxShowDimensionalName, 9, 0, 1, 1);

        prefDimensionalStringFormat = new Gui::PrefLineEdit(groupBox_1);
        prefDimensionalStringFormat->setObjectName(QString::fromUtf8("prefDimensionalStringFormat"));
        prefDimensionalStringFormat->setText(QString::fromUtf8("%N = %V"));
        prefDimensionalStringFormat->setProperty("prefEntry", QVariant(QByteArray("DimensionalStringFormat")));
        prefDimensionalStringFormat->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(prefDimensionalStringFormat, 9, 1, 1, 1);

        label_3 = new QLabel(groupBox_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_1->addWidget(label_3, 2, 0, 1, 1);

        continueMode = new Gui::PrefCheckBox(groupBox_1);
        continueMode->setObjectName(QString::fromUtf8("continueMode"));
        continueMode->setChecked(true);
        continueMode->setProperty("prefEntry", QVariant(QByteArray("ContinuousCreationMode")));
        continueMode->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(continueMode, 4, 0, 1, 2);

        EditSketcherFontSize = new Gui::PrefSpinBox(groupBox_1);
        EditSketcherFontSize->setObjectName(QString::fromUtf8("EditSketcherFontSize"));
        EditSketcherFontSize->setMinimum(1);
        EditSketcherFontSize->setMaximum(100);
        EditSketcherFontSize->setValue(17);
        EditSketcherFontSize->setProperty("prefEntry", QVariant(QByteArray("EditSketcherFontSize")));
        EditSketcherFontSize->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_1->addWidget(EditSketcherFontSize, 0, 1, 1, 1);

        checkBoxHideUnits = new Gui::PrefCheckBox(groupBox_1);
        checkBoxHideUnits->setObjectName(QString::fromUtf8("checkBoxHideUnits"));
        checkBoxHideUnits->setProperty("prefEntry", QVariant(QByteArray("HideUnits")));
        checkBoxHideUnits->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(checkBoxHideUnits, 6, 0, 1, 2);

        label_0 = new QLabel(groupBox_1);
        label_0->setObjectName(QString::fromUtf8("label_0"));
        label_0->setMinimumSize(QSize(182, 0));

        gridLayout_1->addWidget(label_0, 0, 0, 1, 1);

        constraintMode = new Gui::PrefCheckBox(groupBox_1);
        constraintMode->setObjectName(QString::fromUtf8("constraintMode"));
        constraintMode->setChecked(true);
        constraintMode->setProperty("prefEntry", QVariant(QByteArray("ContinuousConstraintMode")));
        constraintMode->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(constraintMode, 5, 0, 1, 2);

        checkBoxShowCursorCoords = new Gui::PrefCheckBox(groupBox_1);
        checkBoxShowCursorCoords->setObjectName(QString::fromUtf8("checkBoxShowCursorCoords"));
        checkBoxShowCursorCoords->setChecked(true);
        checkBoxShowCursorCoords->setProperty("prefEntry", QVariant(QByteArray("ShowCursorCoords")));
        checkBoxShowCursorCoords->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(checkBoxShowCursorCoords, 7, 0, 1, 1);

        dialogOnDistanceConstraint = new Gui::PrefCheckBox(groupBox_1);
        dialogOnDistanceConstraint->setObjectName(QString::fromUtf8("dialogOnDistanceConstraint"));
        dialogOnDistanceConstraint->setChecked(true);
        dialogOnDistanceConstraint->setProperty("prefEntry", QVariant(QByteArray("ShowDialogOnDistanceConstraint")));
        dialogOnDistanceConstraint->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(dialogOnDistanceConstraint, 3, 0, 1, 2);

        checkBoxUseSystemDecimals = new Gui::PrefCheckBox(groupBox_1);
        checkBoxUseSystemDecimals->setObjectName(QString::fromUtf8("checkBoxUseSystemDecimals"));
        checkBoxUseSystemDecimals->setProperty("prefEntry", QVariant(QByteArray("UseSystemDecimals")));
        checkBoxUseSystemDecimals->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        gridLayout_1->addWidget(checkBoxUseSystemDecimals, 8, 0, 1, 1);


        verticalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(SketcherGui__SketcherSettingsDisplay);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 0));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        groupBox_2->setBaseSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxTVHideDependent = new Gui::PrefCheckBox(groupBox_2);
        checkBoxTVHideDependent->setObjectName(QString::fromUtf8("checkBoxTVHideDependent"));
        checkBoxTVHideDependent->setChecked(true);
        checkBoxTVHideDependent->setProperty("prefEntry", QVariant(QByteArray("HideDependent")));
        checkBoxTVHideDependent->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/General")));

        verticalLayout_2->addWidget(checkBoxTVHideDependent);

        checkBoxTVShowLinks = new Gui::PrefCheckBox(groupBox_2);
        checkBoxTVShowLinks->setObjectName(QString::fromUtf8("checkBoxTVShowLinks"));
        checkBoxTVShowLinks->setChecked(true);
        checkBoxTVShowLinks->setProperty("prefEntry", QVariant(QByteArray("ShowLinks")));
        checkBoxTVShowLinks->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/General")));

        verticalLayout_2->addWidget(checkBoxTVShowLinks);

        checkBoxTVShowSupport = new Gui::PrefCheckBox(groupBox_2);
        checkBoxTVShowSupport->setObjectName(QString::fromUtf8("checkBoxTVShowSupport"));
        checkBoxTVShowSupport->setChecked(true);
        checkBoxTVShowSupport->setProperty("prefEntry", QVariant(QByteArray("ShowSupport")));
        checkBoxTVShowSupport->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/General")));

        verticalLayout_2->addWidget(checkBoxTVShowSupport);

        checkBoxTVRestoreCamera = new Gui::PrefCheckBox(groupBox_2);
        checkBoxTVRestoreCamera->setObjectName(QString::fromUtf8("checkBoxTVRestoreCamera"));
        checkBoxTVRestoreCamera->setChecked(true);
        checkBoxTVRestoreCamera->setProperty("prefEntry", QVariant(QByteArray("RestoreCamera")));
        checkBoxTVRestoreCamera->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/General")));

        verticalLayout_2->addWidget(checkBoxTVRestoreCamera);

        checkBoxTVForceOrtho = new Gui::PrefCheckBox(groupBox_2);
        checkBoxTVForceOrtho->setObjectName(QString::fromUtf8("checkBoxTVForceOrtho"));
        checkBoxTVForceOrtho->setChecked(false);
        checkBoxTVForceOrtho->setProperty("prefEntry", QVariant(QByteArray("ForceOrtho")));
        checkBoxTVForceOrtho->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/General")));

        verticalLayout_2->addWidget(checkBoxTVForceOrtho);

        checkBoxTVSectionView = new Gui::PrefCheckBox(groupBox_2);
        checkBoxTVSectionView->setObjectName(QString::fromUtf8("checkBoxTVSectionView"));
        checkBoxTVSectionView->setChecked(false);
        checkBoxTVSectionView->setProperty("prefEntry", QVariant(QByteArray("SectionView")));
        checkBoxTVSectionView->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher/General")));

        verticalLayout_2->addWidget(checkBoxTVSectionView);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_4->setWordWrap(true);

        verticalLayout_2->addWidget(label_4);

        btnTVApply = new QPushButton(groupBox_2);
        btnTVApply->setObjectName(QString::fromUtf8("btnTVApply"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnTVApply->sizePolicy().hasHeightForWidth());
        btnTVApply->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(btnTVApply);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        label_1->setBuddy(viewScalingFactor);
        label_3->setBuddy(SegmentsPerGeometry);
        label_0->setBuddy(EditSketcherFontSize);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(EditSketcherFontSize, viewScalingFactor);
        QWidget::setTabOrder(viewScalingFactor, SegmentsPerGeometry);
        QWidget::setTabOrder(SegmentsPerGeometry, dialogOnDistanceConstraint);
        QWidget::setTabOrder(dialogOnDistanceConstraint, continueMode);
        QWidget::setTabOrder(continueMode, constraintMode);
        QWidget::setTabOrder(constraintMode, checkBoxHideUnits);
        QWidget::setTabOrder(checkBoxHideUnits, checkBoxShowDimensionalName);
        QWidget::setTabOrder(checkBoxShowDimensionalName, prefDimensionalStringFormat);
        QWidget::setTabOrder(prefDimensionalStringFormat, checkBoxTVHideDependent);
        QWidget::setTabOrder(checkBoxTVHideDependent, checkBoxTVShowLinks);
        QWidget::setTabOrder(checkBoxTVShowLinks, checkBoxTVShowSupport);
        QWidget::setTabOrder(checkBoxTVShowSupport, checkBoxTVRestoreCamera);
        QWidget::setTabOrder(checkBoxTVRestoreCamera, checkBoxTVForceOrtho);
        QWidget::setTabOrder(checkBoxTVForceOrtho, checkBoxTVSectionView);
        QWidget::setTabOrder(checkBoxTVSectionView, btnTVApply);

        retranslateUi(SketcherGui__SketcherSettingsDisplay);
        QObject::connect(checkBoxTVRestoreCamera, SIGNAL(toggled(bool)), checkBoxTVForceOrtho, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(SketcherGui__SketcherSettingsDisplay);
    } // setupUi

    void retranslateUi(QWidget *SketcherGui__SketcherSettingsDisplay)
    {
        SketcherGui__SketcherSettingsDisplay->setWindowTitle(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Display", nullptr));
        groupBox_1->setTitle(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Sketch editing", nullptr));
        label_1->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "View scale ratio", nullptr));
#if QT_CONFIG(tooltip)
        viewScalingFactor->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "The 3D view is scaled based on this factor.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SegmentsPerGeometry->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "The number of polygons used for geometry approximation.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBoxShowDimensionalName->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "If checked, displays the name on dimensional constraints (if exists).", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxShowDimensionalName->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Show dimensional constraint name with format", nullptr));
#if QT_CONFIG(tooltip)
        prefDimensionalStringFormat->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "The format of the dimensional constraint string presentation.\n"
"Defaults to: %N = %V\n"
"\n"
"%N - name parameter\n"
"%V - dimension value", nullptr));
#endif // QT_CONFIG(tooltip)
        prefDimensionalStringFormat->setPlaceholderText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "%N = %V", nullptr));
        label_3->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Segments per geometry", nullptr));
#if QT_CONFIG(tooltip)
        continueMode->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "The current sketcher creation tool will remain active after creation.", nullptr));
#endif // QT_CONFIG(tooltip)
        continueMode->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Geometry creation \"Continue Mode\"", nullptr));
#if QT_CONFIG(tooltip)
        EditSketcherFontSize->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Font size used for labels and constraints.", nullptr));
#endif // QT_CONFIG(tooltip)
        EditSketcherFontSize->setSuffix(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "px", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxHideUnits->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Base length units will not be displayed in constraints or cursor coordinates.\n"
"Supports all unit systems except 'US customary' and 'Building US/Euro'.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxHideUnits->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Hide base length units for supported unit systems", nullptr));
        label_0->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Font size", nullptr));
#if QT_CONFIG(tooltip)
        constraintMode->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "The current constraint creation tool will remain active after creation.", nullptr));
#endif // QT_CONFIG(tooltip)
        constraintMode->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Constraint creation \"Continue Mode\"", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxShowCursorCoords->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Cursor position coordinates will be displayed beside cursor while editing sketch.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxShowCursorCoords->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Show coordinates beside cursor while editing", nullptr));
#if QT_CONFIG(tooltip)
        dialogOnDistanceConstraint->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "A dialog will pop up to input a value for new dimensional constraints.", nullptr));
#endif // QT_CONFIG(tooltip)
        dialogOnDistanceConstraint->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Ask for value after creating a dimensional constraint", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseSystemDecimals->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Cursor coordinates will use the system decimals setting instead of the short form.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseSystemDecimals->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Use system decimals setting for cursor coordinates", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Visibility automation", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxTVHideDependent->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "When opening a sketch, hide all features that depend on it.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxTVHideDependent->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Hide all objects that depend on the sketch", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxTVShowLinks->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "When opening a sketch, show sources for external geometry links.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxTVShowLinks->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Show objects used for external geometry", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxTVShowSupport->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "When opening a sketch, show objects the sketch is attached to.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxTVShowSupport->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Show objects that the sketch is attached to", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxTVRestoreCamera->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "When closing a sketch, move camera back to where it was before the sketch was opened.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxTVRestoreCamera->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Restore camera position after editing", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxTVForceOrtho->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "When entering edit mode, force orthographic view of camera.\n"
"Works only when \"Restore camera position after editing\" is enabled.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxTVForceOrtho->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Force orthographic camera when entering edit", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxTVSectionView->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Open a sketch in Section View mode by default.\n"
"Then objects are only visible behind the sketch plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxTVSectionView->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Open sketch in Section View mode", nullptr));
        label_4->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Note: these settings are defaults applied to new sketches. The behavior is remembered for each sketch individually as properties on the View tab.", nullptr));
#if QT_CONFIG(tooltip)
        btnTVApply->setToolTip(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Applies current visibility automation settings to all sketches in open documents.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnTVApply->setText(QCoreApplication::translate("SketcherGui::SketcherSettingsDisplay", "Apply to existing sketches", nullptr));
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class SketcherSettingsDisplay: public Ui_SketcherSettingsDisplay {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_SKETCHERSETTINGSDISPLAY_H
