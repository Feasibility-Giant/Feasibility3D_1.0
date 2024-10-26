/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawDimensions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWDIMENSIONS_H
#define UI_DLGPREFSTECHDRAWDIMENSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_DlgPrefsTechDrawDimensionsImp
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gbDim;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    Gui::PrefUnitSpinBox *plsb_ArrowSize;
    QLabel *label;
    Gui::PrefComboBox *pcbArrow;
    QLabel *label_8;
    Gui::PrefComboBox *pcbStandardAndStyle;
    QLabel *label_2;
    Gui::PrefCheckBox *cbShowUnits;
    QLabel *label_16;
    Gui::PrefUnitSpinBox *plsb_FontSize;
    QLabel *label_12;
    QLabel *label_9;
    Gui::PrefDoubleSpinBox *pdsbToleranceScale;
    QLabel *lbl_LabelFont;
    Gui::PrefSpinBox *sbAltDecimals;
    Gui::PrefLineEdit *leDiameter;
    Gui::PrefCheckBox *cbGlobalDecimals;
    QSpacerItem *horizontalSpacer;
    QLabel *label_11;
    QLabel *label_3;
    Gui::PrefLineEdit *leFormatSpec;
    QLabel *label_4;
    Gui::PrefDoubleSpinBox *pdsbGapISO;
    Gui::PrefDoubleSpinBox *pdsbGapASME;
    QLabel *label_18;
    Gui::PrefDoubleSpinBox *pdsbLineSpacingFactorISO;
    QLabel *label_17;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_general;
    QLabel *dimensioningLabel;
    QComboBox *dimensioningMode;
    QLabel *radiusDiameterLabel;
    QComboBox *radiusDiameterMode;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawDimensionsImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawDimensionsImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawDimensionsImp->setObjectName(QString::fromUtf8("TechDrawGui__DlgPrefsTechDrawDimensionsImp"));
        TechDrawGui__DlgPrefsTechDrawDimensionsImp->resize(440, 508);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__DlgPrefsTechDrawDimensionsImp->sizePolicy().hasHeightForWidth());
        TechDrawGui__DlgPrefsTechDrawDimensionsImp->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawDimensionsImp);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gbDim = new QGroupBox(TechDrawGui__DlgPrefsTechDrawDimensionsImp);
        gbDim->setObjectName(QString::fromUtf8("gbDim"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbDim->sizePolicy().hasHeightForWidth());
        gbDim->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(gbDim);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plsb_ArrowSize = new Gui::PrefUnitSpinBox(gbDim);
        plsb_ArrowSize->setObjectName(QString::fromUtf8("plsb_ArrowSize"));
        sizePolicy1.setHeightForWidth(plsb_ArrowSize->sizePolicy().hasHeightForWidth());
        plsb_ArrowSize->setSizePolicy(sizePolicy1);
        plsb_ArrowSize->setValue(5.000000000000000);
        plsb_ArrowSize->setProperty("prefEntry", QVariant(QByteArray("ArrowSize")));
        plsb_ArrowSize->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(plsb_ArrowSize, 8, 2, 1, 1);

        label = new QLabel(gbDim);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setItalic(true);
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        pcbArrow = new Gui::PrefComboBox(gbDim);
        pcbArrow->setObjectName(QString::fromUtf8("pcbArrow"));
        sizePolicy1.setHeightForWidth(pcbArrow->sizePolicy().hasHeightForWidth());
        pcbArrow->setSizePolicy(sizePolicy1);
        pcbArrow->setProperty("prefEntry", QVariant(QByteArray("ArrowStyle")));
        pcbArrow->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(pcbArrow, 7, 2, 1, 1);

        label_8 = new QLabel(gbDim);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        pcbStandardAndStyle = new Gui::PrefComboBox(gbDim);
        pcbStandardAndStyle->addItem(QString());
        pcbStandardAndStyle->addItem(QString());
        pcbStandardAndStyle->addItem(QString());
        pcbStandardAndStyle->addItem(QString());
        pcbStandardAndStyle->setObjectName(QString::fromUtf8("pcbStandardAndStyle"));
        sizePolicy1.setHeightForWidth(pcbStandardAndStyle->sizePolicy().hasHeightForWidth());
        pcbStandardAndStyle->setSizePolicy(sizePolicy1);
        pcbStandardAndStyle->setProperty("prefEntry", QVariant(QByteArray("StandardAndStyle")));
        pcbStandardAndStyle->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(pcbStandardAndStyle, 0, 2, 1, 1);

        label_2 = new QLabel(gbDim);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        cbShowUnits = new Gui::PrefCheckBox(gbDim);
        cbShowUnits->setObjectName(QString::fromUtf8("cbShowUnits"));
        sizePolicy1.setHeightForWidth(cbShowUnits->sizePolicy().hasHeightForWidth());
        cbShowUnits->setSizePolicy(sizePolicy1);
        cbShowUnits->setProperty("prefEntry", QVariant(QByteArray("ShowUnits")));
        cbShowUnits->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(cbShowUnits, 1, 2, 1, 1);

        label_16 = new QLabel(gbDim);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        plsb_FontSize = new Gui::PrefUnitSpinBox(gbDim);
        plsb_FontSize->setObjectName(QString::fromUtf8("plsb_FontSize"));
        sizePolicy1.setHeightForWidth(plsb_FontSize->sizePolicy().hasHeightForWidth());
        plsb_FontSize->setSizePolicy(sizePolicy1);
        plsb_FontSize->setValue(4.000000000000000);
        plsb_FontSize->setProperty("prefEntry", QVariant(QByteArray("FontSize")));
        plsb_FontSize->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(plsb_FontSize, 4, 2, 1, 1);

        label_12 = new QLabel(gbDim);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 8, 0, 1, 1);

        label_9 = new QLabel(gbDim);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        pdsbToleranceScale = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbToleranceScale->setObjectName(QString::fromUtf8("pdsbToleranceScale"));
        sizePolicy1.setHeightForWidth(pdsbToleranceScale->sizePolicy().hasHeightForWidth());
        pdsbToleranceScale->setSizePolicy(sizePolicy1);
        pdsbToleranceScale->setMinimumSize(QSize(174, 0));
        pdsbToleranceScale->setBaseSize(QSize(0, 0));
        pdsbToleranceScale->setSingleStep(0.100000000000000);
        pdsbToleranceScale->setValue(0.800000000000000);
        pdsbToleranceScale->setProperty("prefEntry", QVariant(QByteArray("TolSizeAdjust")));
        pdsbToleranceScale->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(pdsbToleranceScale, 5, 2, 1, 1);

        lbl_LabelFont = new QLabel(gbDim);
        lbl_LabelFont->setObjectName(QString::fromUtf8("lbl_LabelFont"));
        lbl_LabelFont->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setItalic(false);
        lbl_LabelFont->setFont(font1);

        gridLayout->addWidget(lbl_LabelFont, 5, 0, 1, 1);

        sbAltDecimals = new Gui::PrefSpinBox(gbDim);
        sbAltDecimals->setObjectName(QString::fromUtf8("sbAltDecimals"));
        sbAltDecimals->setEnabled(false);
        sizePolicy1.setHeightForWidth(sbAltDecimals->sizePolicy().hasHeightForWidth());
        sbAltDecimals->setSizePolicy(sizePolicy1);
        sbAltDecimals->setValue(2);
        sbAltDecimals->setProperty("prefEntry", QVariant(QByteArray("AltDecimals")));
        sbAltDecimals->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(sbAltDecimals, 2, 2, 1, 1);

        leDiameter = new Gui::PrefLineEdit(gbDim);
        leDiameter->setObjectName(QString::fromUtf8("leDiameter"));
        sizePolicy1.setHeightForWidth(leDiameter->sizePolicy().hasHeightForWidth());
        leDiameter->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        leDiameter->setFont(font2);
        leDiameter->setText(QString::fromUtf8("\342\214\200"));
        leDiameter->setProperty("prefEntry", QVariant(QByteArray("DiameterSymbol")));
        leDiameter->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(leDiameter, 6, 2, 1, 1);

        cbGlobalDecimals = new Gui::PrefCheckBox(gbDim);
        cbGlobalDecimals->setObjectName(QString::fromUtf8("cbGlobalDecimals"));
        sizePolicy1.setHeightForWidth(cbGlobalDecimals->sizePolicy().hasHeightForWidth());
        cbGlobalDecimals->setSizePolicy(sizePolicy1);
        cbGlobalDecimals->setFont(font);
        cbGlobalDecimals->setChecked(true);
        cbGlobalDecimals->setProperty("prefEntry", QVariant(QByteArray("UseGlobalDecimals")));
        cbGlobalDecimals->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(cbGlobalDecimals, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        label_11 = new QLabel(gbDim);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_3 = new QLabel(gbDim);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 9, 0, 1, 1);

        leFormatSpec = new Gui::PrefLineEdit(gbDim);
        leFormatSpec->setObjectName(QString::fromUtf8("leFormatSpec"));
        leFormatSpec->setProperty("prefEntry", QVariant(QByteArray("formatSpec")));
        leFormatSpec->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(leFormatSpec, 3, 2, 1, 1);

        label_4 = new QLabel(gbDim);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 10, 0, 1, 1);

        pdsbGapISO = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbGapISO->setObjectName(QString::fromUtf8("pdsbGapISO"));
        pdsbGapISO->setValue(0.000000000000000);
        pdsbGapISO->setProperty("prefEntry", QVariant(QByteArray("GapISO")));
        pdsbGapISO->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(pdsbGapISO, 9, 2, 1, 1);

        pdsbGapASME = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbGapASME->setObjectName(QString::fromUtf8("pdsbGapASME"));
        pdsbGapASME->setValue(0.000000000000000);
        pdsbGapASME->setProperty("prefEntry", QVariant(QByteArray("GapASME")));
        pdsbGapASME->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(pdsbGapASME, 10, 2, 1, 1);

        label_18 = new QLabel(gbDim);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 11, 0, 1, 1);

        pdsbLineSpacingFactorISO = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbLineSpacingFactorISO->setObjectName(QString::fromUtf8("pdsbLineSpacingFactorISO"));
        pdsbLineSpacingFactorISO->setValue(2.000000000000000);
        pdsbLineSpacingFactorISO->setProperty("prefEntry", QVariant(QByteArray("LineSpacingFactorISO")));
        pdsbLineSpacingFactorISO->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(pdsbLineSpacingFactorISO, 11, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addWidget(gbDim);

        label_17 = new QLabel(TechDrawGui__DlgPrefsTechDrawDimensionsImp);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font3;
        font3.setPointSize(10);
        font3.setItalic(false);
        label_17->setFont(font3);
        label_17->setWordWrap(true);

        verticalLayout_3->addWidget(label_17);

        groupBox_6 = new QGroupBox(TechDrawGui__DlgPrefsTechDrawDimensionsImp);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy2);
        gridLayout_general = new QGridLayout(groupBox_6);
        gridLayout_general->setObjectName(QString::fromUtf8("gridLayout_general"));
        dimensioningLabel = new QLabel(groupBox_6);
        dimensioningLabel->setObjectName(QString::fromUtf8("dimensioningLabel"));

        gridLayout_general->addWidget(dimensioningLabel, 0, 0, 1, 1);

        dimensioningMode = new QComboBox(groupBox_6);
        dimensioningMode->setObjectName(QString::fromUtf8("dimensioningMode"));

        gridLayout_general->addWidget(dimensioningMode, 0, 1, 1, 1);

        radiusDiameterLabel = new QLabel(groupBox_6);
        radiusDiameterLabel->setObjectName(QString::fromUtf8("radiusDiameterLabel"));

        gridLayout_general->addWidget(radiusDiameterLabel, 1, 0, 1, 1);

        radiusDiameterMode = new QComboBox(groupBox_6);
        radiusDiameterMode->setObjectName(QString::fromUtf8("radiusDiameterMode"));

        gridLayout_general->addWidget(radiusDiameterMode, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawDimensionsImp);
        QObject::connect(cbGlobalDecimals, SIGNAL(toggled(bool)), sbAltDecimals, SLOT(setDisabled(bool)));

        pcbArrow->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawDimensionsImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawDimensionsImp)
    {
        TechDrawGui__DlgPrefsTechDrawDimensionsImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Dimensions", nullptr));
        gbDim->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Dimensions", nullptr));
#if QT_CONFIG(tooltip)
        plsb_ArrowSize->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Arrowhead size", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Dimension Format", nullptr));
#if QT_CONFIG(tooltip)
        pcbArrow->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Arrowhead style", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Diameter Symbol", nullptr));
        pcbStandardAndStyle->setItemText(0, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "ISO Oriented", nullptr));
        pcbStandardAndStyle->setItemText(1, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "ISO Referencing", nullptr));
        pcbStandardAndStyle->setItemText(2, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "ASME Inlined", nullptr));
        pcbStandardAndStyle->setItemText(3, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "ASME Referencing", nullptr));

#if QT_CONFIG(tooltip)
        pcbStandardAndStyle->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Standard to be used for dimensional values", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Font Size", nullptr));
#if QT_CONFIG(tooltip)
        cbShowUnits->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Append unit to dimension values", nullptr));
#endif // QT_CONFIG(tooltip)
        cbShowUnits->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Show Units", nullptr));
        label_16->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Standard and Style", nullptr));
#if QT_CONFIG(tooltip)
        plsb_FontSize->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Dimension text font size", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Arrow Size", nullptr));
        label_9->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Arrow Style", nullptr));
#if QT_CONFIG(tooltip)
        pdsbToleranceScale->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Tolerance text scale\n"
"Multiplier of 'Font Size'", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        pdsbToleranceScale->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        lbl_LabelFont->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Tolerance Text Scale", nullptr));
#if QT_CONFIG(tooltip)
        sbAltDecimals->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Number of decimals if 'Use Global Decimals' is not used", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        leDiameter->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Character used to indicate diameter dimensions", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbGlobalDecimals->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Use system setting for number of decimals", nullptr));
#endif // QT_CONFIG(tooltip)
        cbGlobalDecimals->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Use Global Decimals", nullptr));
        label_11->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Alternate Decimals", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Controls the size of the gap between the dimension point and the start of the extension line for ISO dimensions.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Extension Gap Factor - ISO", nullptr));
#if QT_CONFIG(tooltip)
        leFormatSpec->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Leave blank for automatic dimension format. Use %f, %g or %w specifiers to override.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Controls the size of the gap between the dimension point and the start of the extension line for ASME dimensions.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Extension Gap Factor - ASME", nullptr));
#if QT_CONFIG(tooltip)
        pdsbGapISO->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Controls the size of the gap between the dimension point and the start of the extension line for ISO dimensions.\n"
" Value * linewidth is the gap.\n"
" Normally, no gap is used. If using a gap, the recommended value is 8.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pdsbGapASME->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Controls the size of the gap between the dimension point and the start of the extension line for ASME dimensions. Value * linewidth is the gap.\n"
" Normally, no gap is used. If using a gap, the recommended value is 6.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Controls the size of spacing between dimension line and dimension text for ISO dimensions.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Line Spacing - ISO", nullptr));
#if QT_CONFIG(tooltip)
        pdsbLineSpacingFactorISO->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Controls the size of spacing between dimension line and dimension text.\n"
" Value * linewidth is the line spacing.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Tools", nullptr));
        dimensioningLabel->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Dimensioning tools:", nullptr));
#if QT_CONFIG(tooltip)
        dimensioningMode->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Select the type of dimensioning tools for your toolbar:\n"
"'Single tool': A single tool for all dimensioning in the toolbar: Distance, Distance X / Y, Angle, Radius. (Others in dropdown)\n"
"'Separated tools': Individual tools for each dimensioning tool.\n"
"'Both': You will have both the 'Dimension' tool and the separated tools.\n"
"This setting is only for the toolbar. Whichever you choose, all tools are always available in the menu and through shortcuts.", nullptr));
#endif // QT_CONFIG(tooltip)
        radiusDiameterLabel->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "Dimension tool diameter/radius mode:", nullptr));
#if QT_CONFIG(tooltip)
        radiusDiameterMode->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawDimensionsImp", "While using the Dimension tool you may choose how to handle circles and arcs:\n"
"'Auto': The tool will apply radius to arcs and diameter to circles.\n"
"'Diameter': The tool will apply diameter to all.\n"
"'Radius': The tool will apply radius to all.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawDimensionsImp: public Ui_DlgPrefsTechDrawDimensionsImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWDIMENSIONS_H
