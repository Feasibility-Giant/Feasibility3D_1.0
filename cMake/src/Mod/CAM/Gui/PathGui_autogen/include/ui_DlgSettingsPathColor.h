/********************************************************************************
** Form generated from reading UI file 'DlgSettingsPathColor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSPATHCOLOR_H
#define UI_DLGSETTINGSPATHCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace PathGui {

class Ui_DlgSettingsPathColor
{
public:
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBoxDefaultColors;
    QGridLayout *gridLayout;
    Gui::PrefSpinBox *DefaultPathLineWidth;
    QLabel *label_11;
    QLabel *label_6;
    Gui::PrefColorButton *DefaultBBoxNormalColor;
    QLabel *label_13;
    Gui::PrefColorButton *DefaultNormalPathColor;
    Gui::PrefColorButton *DefaultRapidPathColor;
    QLabel *label_8;
    QLabel *label_7;
    Gui::PrefColorButton *DefaultHighlightPathColor;
    QLabel *label_14;
    QLabel *label_10;
    Gui::PrefColorButton *DefaultPathMarkerColor;
    QLabel *label_9;
    Gui::PrefColorButton *DefaultProbePathColor;
    Gui::PrefColorButton *DefaultBBoxSelectionColor;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    Gui::PrefComboBox *DefaultSelectionStyle;
    QLabel *label_2;
    Gui::PrefComboBox *DefaultTaskPanelLayout;

    void setupUi(QWidget *PathGui__DlgSettingsPathColor)
    {
        if (PathGui__DlgSettingsPathColor->objectName().isEmpty())
            PathGui__DlgSettingsPathColor->setObjectName(QString::fromUtf8("PathGui__DlgSettingsPathColor"));
        PathGui__DlgSettingsPathColor->resize(722, 718);
        formLayout = new QFormLayout(PathGui__DlgSettingsPathColor);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        verticalSpacer = new QSpacerItem(20, 217, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::SpanningRole, verticalSpacer);

        groupBoxDefaultColors = new QGroupBox(PathGui__DlgSettingsPathColor);
        groupBoxDefaultColors->setObjectName(QString::fromUtf8("groupBoxDefaultColors"));
        gridLayout = new QGridLayout(groupBoxDefaultColors);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        DefaultPathLineWidth = new Gui::PrefSpinBox(groupBoxDefaultColors);
        DefaultPathLineWidth->setObjectName(QString::fromUtf8("DefaultPathLineWidth"));
        DefaultPathLineWidth->setMaximum(9);
        DefaultPathLineWidth->setValue(1);
        DefaultPathLineWidth->setProperty("prefEntry", QVariant(QByteArray("DefaultPathLineWidth")));
        DefaultPathLineWidth->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultPathLineWidth, 1, 1, 1, 1);

        label_11 = new QLabel(groupBoxDefaultColors);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        label_6 = new QLabel(groupBoxDefaultColors);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        DefaultBBoxNormalColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultBBoxNormalColor->setObjectName(QString::fromUtf8("DefaultBBoxNormalColor"));
        DefaultBBoxNormalColor->setColor(QColor(255, 255, 255));
        DefaultBBoxNormalColor->setProperty("prefEntry", QVariant(QByteArray("DefaultBBoxNormalColor")));
        DefaultBBoxNormalColor->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultBBoxNormalColor, 6, 1, 1, 1);

        label_13 = new QLabel(groupBoxDefaultColors);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_13, 6, 0, 1, 1);

        DefaultNormalPathColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultNormalPathColor->setObjectName(QString::fromUtf8("DefaultNormalPathColor"));
        DefaultNormalPathColor->setColor(QColor(0, 170, 0));
        DefaultNormalPathColor->setProperty("prefEntry", QVariant(QByteArray("DefaultNormalPathColor")));
        DefaultNormalPathColor->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultNormalPathColor, 0, 1, 1, 1);

        DefaultRapidPathColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultRapidPathColor->setObjectName(QString::fromUtf8("DefaultRapidPathColor"));
        DefaultRapidPathColor->setColor(QColor(170, 0, 0));
        DefaultRapidPathColor->setProperty("prefEntry", QVariant(QByteArray("DefaultRapidPathColor")));
        DefaultRapidPathColor->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultRapidPathColor, 3, 1, 1, 1);

        label_8 = new QLabel(groupBoxDefaultColors);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        label_7 = new QLabel(groupBoxDefaultColors);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        DefaultHighlightPathColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultHighlightPathColor->setObjectName(QString::fromUtf8("DefaultHighlightPathColor"));
        DefaultHighlightPathColor->setColor(QColor(255, 125, 0));
        DefaultHighlightPathColor->setProperty("prefEntry", QVariant(QByteArray("DefaultHighlightPathColor")));
        DefaultHighlightPathColor->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultHighlightPathColor, 5, 1, 1, 1);

        label_14 = new QLabel(groupBoxDefaultColors);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_14, 7, 0, 1, 1);

        label_10 = new QLabel(groupBoxDefaultColors);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        DefaultPathMarkerColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultPathMarkerColor->setObjectName(QString::fromUtf8("DefaultPathMarkerColor"));
        DefaultPathMarkerColor->setColor(QColor(85, 255, 0));
        DefaultPathMarkerColor->setProperty("prefEntry", QVariant(QByteArray("DefaultPathMarkerColor")));
        DefaultPathMarkerColor->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultPathMarkerColor, 2, 1, 1, 1);

        label_9 = new QLabel(groupBoxDefaultColors);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(182, 0));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        DefaultProbePathColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultProbePathColor->setObjectName(QString::fromUtf8("DefaultProbePathColor"));
        DefaultProbePathColor->setColor(QColor(255, 255, 5));
        DefaultProbePathColor->setProperty("prefEntry", QVariant(QByteArray("DefaultProbePathColor")));
        DefaultProbePathColor->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultProbePathColor, 4, 1, 1, 1);

        DefaultBBoxSelectionColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultBBoxSelectionColor->setObjectName(QString::fromUtf8("DefaultBBoxSelectionColor"));
        DefaultBBoxSelectionColor->setColor(QColor(200, 255, 255));
        DefaultBBoxSelectionColor->setProperty("prefEntry", QVariant(QByteArray("DefaultBBoxSelectionColor")));
        DefaultBBoxSelectionColor->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        gridLayout->addWidget(DefaultBBoxSelectionColor, 7, 1, 1, 1);


        formLayout->setWidget(0, QFormLayout::SpanningRole, groupBoxDefaultColors);

        groupBox_3 = new QGroupBox(PathGui__DlgSettingsPathColor);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        DefaultSelectionStyle = new Gui::PrefComboBox(groupBox_3);
        DefaultSelectionStyle->addItem(QString());
        DefaultSelectionStyle->addItem(QString());
        DefaultSelectionStyle->addItem(QString());
        DefaultSelectionStyle->setObjectName(QString::fromUtf8("DefaultSelectionStyle"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DefaultSelectionStyle->sizePolicy().hasHeightForWidth());
        DefaultSelectionStyle->setSizePolicy(sizePolicy1);
        DefaultSelectionStyle->setProperty("prefEntry", QVariant(QByteArray("DefaultSelectionStyle")));
        DefaultSelectionStyle->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, DefaultSelectionStyle);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_2);

        DefaultTaskPanelLayout = new Gui::PrefComboBox(groupBox_3);
        DefaultTaskPanelLayout->addItem(QString());
        DefaultTaskPanelLayout->addItem(QString());
        DefaultTaskPanelLayout->addItem(QString());
        DefaultTaskPanelLayout->addItem(QString());
        DefaultTaskPanelLayout->setObjectName(QString::fromUtf8("DefaultTaskPanelLayout"));
        DefaultTaskPanelLayout->setProperty("prefEntry", QVariant(QByteArray("DefaultTaskPanelLayout")));
        DefaultTaskPanelLayout->setProperty("prefPath", QVariant(QByteArray("Mod/CAM")));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, DefaultTaskPanelLayout);


        formLayout->setWidget(1, QFormLayout::SpanningRole, groupBox_3);

        QWidget::setTabOrder(DefaultNormalPathColor, DefaultPathLineWidth);

        retranslateUi(PathGui__DlgSettingsPathColor);

        QMetaObject::connectSlotsByName(PathGui__DlgSettingsPathColor);
    } // setupUi

    void retranslateUi(QWidget *PathGui__DlgSettingsPathColor)
    {
        PathGui__DlgSettingsPathColor->setWindowTitle(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "GUI", nullptr));
        groupBoxDefaultColors->setTitle(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Default Path colors", nullptr));
#if QT_CONFIG(tooltip)
        DefaultPathLineWidth->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default line thickness for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
        DefaultPathLineWidth->setSuffix(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "px", nullptr));
        label_11->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Path highlight color", nullptr));
        label_6->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Default normal path color", nullptr));
#if QT_CONFIG(tooltip)
        DefaultBBoxNormalColor->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default line color for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Bounding box normal color", nullptr));
#if QT_CONFIG(tooltip)
        DefaultNormalPathColor->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default color for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        DefaultRapidPathColor->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default line color for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Probe path color", nullptr));
        label_7->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Rapid path color", nullptr));
#if QT_CONFIG(tooltip)
        DefaultHighlightPathColor->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default line color for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Bounding box selection color", nullptr));
        label_10->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Default path marker color", nullptr));
#if QT_CONFIG(tooltip)
        DefaultPathMarkerColor->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default line color for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Default pathline width", nullptr));
#if QT_CONFIG(tooltip)
        DefaultProbePathColor->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default line color for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        DefaultBBoxSelectionColor->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "The default line color for new shapes", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "UI Settings", nullptr));
        label_12->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Path Selection Style", nullptr));
        DefaultSelectionStyle->setItemText(0, QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Shape", nullptr));
        DefaultSelectionStyle->setItemText(1, QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Bounding Box", nullptr));
        DefaultSelectionStyle->setItemText(2, QCoreApplication::translate("PathGui::DlgSettingsPathColor", "None", nullptr));

#if QT_CONFIG(tooltip)
        DefaultSelectionStyle->setToolTip(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Default path shape selection behavior in 3D viewer", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Task Panel Layout", nullptr));
        DefaultTaskPanelLayout->setItemText(0, QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Classic", nullptr));
        DefaultTaskPanelLayout->setItemText(1, QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Classic - reversed", nullptr));
        DefaultTaskPanelLayout->setItemText(2, QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Multi Panel", nullptr));
        DefaultTaskPanelLayout->setItemText(3, QCoreApplication::translate("PathGui::DlgSettingsPathColor", "Multi Panel - reversed", nullptr));

    } // retranslateUi

};

} // namespace PathGui

namespace PathGui {
namespace Ui {
    class DlgSettingsPathColor: public Ui_DlgSettingsPathColor {};
} // namespace Ui
} // namespace PathGui

#endif // UI_DLGSETTINGSPATHCOLOR_H
