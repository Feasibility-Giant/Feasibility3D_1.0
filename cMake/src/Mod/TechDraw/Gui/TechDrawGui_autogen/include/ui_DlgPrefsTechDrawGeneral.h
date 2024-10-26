/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawGeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWGENERAL_H
#define UI_DLGPREFSTECHDRAWGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_DlgPrefsTechDrawGeneralImp
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gbMisc;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_5;
    Gui::PrefCheckBox *cb_Global;
    Gui::PrefCheckBox *cb_Override;
    Gui::PrefCheckBox *cb_PageUpdate;
    Gui::PrefCheckBox *cb_AutoDist;
    QGroupBox *gb_Font;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *lbl_LabelFont;
    QSpacerItem *horizontalSpacer_2;
    Gui::PrefFontBox *pfb_LabelFont;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    Gui::PrefUnitSpinBox *plsb_LabelSize;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    Gui::PrefComboBox *cbProjAngle;
    Gui::PrefComboBox *cbSectionLineStd;
    QLabel *label_13;
    QGroupBox *gb_Templates;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_9;
    Gui::PrefFileChooser *pfc_HatchFile;
    Gui::PrefFileChooser *pfc_LineGroup;
    Gui::PrefFileChooser *pfc_DefTemp;
    QLabel *label_11;
    Gui::PrefFileChooser *pfc_FilePattern;
    Gui::PrefFileChooser *pfc_Welding;
    Gui::PrefFileChooser *pfc_DefDir;
    QLabel *label_2;
    Gui::PrefFileChooser *fcSymbolDir;
    QLabel *lbl_Hatch;
    QLabel *label;
    QLabel *label_5;
    Gui::PrefLineEdit *le_NamePattern;
    QLabel *label_10;
    QLabel *label_8;
    QGroupBox *gbGrid;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    Gui::PrefCheckBox *cb_ShowGrid;
    QLabel *label_4;
    Gui::PrefUnitSpinBox *psb_GridSpacing;
    QGroupBox *gbSelection;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_7;
    Gui::PrefCheckBox *cbMultiSelection;
    QGroupBox *gbViewDefaut;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    Gui::PrefCheckBox *cb_useCameraDirection;
    Gui::PrefCheckBox *cb_alwaysShowLabel;
    QLabel *label_12;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawGeneralImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawGeneralImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawGeneralImp->setObjectName(QString::fromUtf8("TechDrawGui__DlgPrefsTechDrawGeneralImp"));
        TechDrawGui__DlgPrefsTechDrawGeneralImp->resize(547, 915);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__DlgPrefsTechDrawGeneralImp->sizePolicy().hasHeightForWidth());
        TechDrawGui__DlgPrefsTechDrawGeneralImp->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gbMisc = new QGroupBox(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        gbMisc->setObjectName(QString::fromUtf8("gbMisc"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbMisc->sizePolicy().hasHeightForWidth());
        gbMisc->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(gbMisc);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        cb_Global = new Gui::PrefCheckBox(gbMisc);
        cb_Global->setObjectName(QString::fromUtf8("cb_Global"));
        sizePolicy1.setHeightForWidth(cb_Global->sizePolicy().hasHeightForWidth());
        cb_Global->setSizePolicy(sizePolicy1);
        cb_Global->setChecked(true);
        cb_Global->setProperty("prefEntry", QVariant(QByteArray("GlobalUpdateDrawings")));
        cb_Global->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_5->addWidget(cb_Global, 0, 0, 1, 1);

        cb_Override = new Gui::PrefCheckBox(gbMisc);
        cb_Override->setObjectName(QString::fromUtf8("cb_Override"));
        sizePolicy1.setHeightForWidth(cb_Override->sizePolicy().hasHeightForWidth());
        cb_Override->setSizePolicy(sizePolicy1);
        cb_Override->setChecked(true);
        cb_Override->setProperty("prefEntry", QVariant(QByteArray("AllowPageOverride")));
        cb_Override->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_5->addWidget(cb_Override, 0, 1, 1, 1);

        cb_PageUpdate = new Gui::PrefCheckBox(gbMisc);
        cb_PageUpdate->setObjectName(QString::fromUtf8("cb_PageUpdate"));
        sizePolicy1.setHeightForWidth(cb_PageUpdate->sizePolicy().hasHeightForWidth());
        cb_PageUpdate->setSizePolicy(sizePolicy1);
        QFont font;
        font.setItalic(true);
        cb_PageUpdate->setFont(font);
        cb_PageUpdate->setChecked(true);
        cb_PageUpdate->setProperty("prefEntry", QVariant(QByteArray("KeepPagesUpToDate")));
        cb_PageUpdate->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_5->addWidget(cb_PageUpdate, 1, 0, 1, 1);

        cb_AutoDist = new Gui::PrefCheckBox(gbMisc);
        cb_AutoDist->setObjectName(QString::fromUtf8("cb_AutoDist"));
        sizePolicy1.setHeightForWidth(cb_AutoDist->sizePolicy().hasHeightForWidth());
        cb_AutoDist->setSizePolicy(sizePolicy1);
        cb_AutoDist->setFont(font);
        cb_AutoDist->setChecked(true);
        cb_AutoDist->setProperty("prefEntry", QVariant(QByteArray("AutoDist")));
        cb_AutoDist->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout_5->addWidget(cb_AutoDist, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_5);


        verticalLayout_3->addWidget(gbMisc);

        gb_Font = new QGroupBox(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        gb_Font->setObjectName(QString::fromUtf8("gb_Font"));
        sizePolicy1.setHeightForWidth(gb_Font->sizePolicy().hasHeightForWidth());
        gb_Font->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(gb_Font);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lbl_LabelFont = new QLabel(gb_Font);
        lbl_LabelFont->setObjectName(QString::fromUtf8("lbl_LabelFont"));
        lbl_LabelFont->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(lbl_LabelFont, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        pfb_LabelFont = new Gui::PrefFontBox(gb_Font);
        pfb_LabelFont->setObjectName(QString::fromUtf8("pfb_LabelFont"));
        sizePolicy1.setHeightForWidth(pfb_LabelFont->sizePolicy().hasHeightForWidth());
        pfb_LabelFont->setSizePolicy(sizePolicy1);
        pfb_LabelFont->setBaseSize(QSize(0, 0));
        pfb_LabelFont->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        QFont font1;
        pfb_LabelFont->setCurrentFont(font1);
        pfb_LabelFont->setProperty("prefEntry", QVariant(QByteArray("LabelFont")));
        pfb_LabelFont->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Labels")));

        gridLayout_2->addWidget(pfb_LabelFont, 0, 2, 1, 1);

        label_6 = new QLabel(gb_Font);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        plsb_LabelSize = new Gui::PrefUnitSpinBox(gb_Font);
        plsb_LabelSize->setObjectName(QString::fromUtf8("plsb_LabelSize"));
        sizePolicy1.setHeightForWidth(plsb_LabelSize->sizePolicy().hasHeightForWidth());
        plsb_LabelSize->setSizePolicy(sizePolicy1);
        plsb_LabelSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        plsb_LabelSize->setValue(8.000000000000000);
        plsb_LabelSize->setProperty("prefEntry", QVariant(QByteArray("LabelSize")));
        plsb_LabelSize->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Labels")));

        gridLayout_2->addWidget(plsb_LabelSize, 1, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout_4->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(gb_Font);

        groupBox_2 = new QGroupBox(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setBaseSize(QSize(0, 500));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        cbProjAngle = new Gui::PrefComboBox(groupBox_2);
        cbProjAngle->addItem(QString());
        cbProjAngle->addItem(QString());
        cbProjAngle->addItem(QString());
        cbProjAngle->setObjectName(QString::fromUtf8("cbProjAngle"));
        sizePolicy1.setHeightForWidth(cbProjAngle->sizePolicy().hasHeightForWidth());
        cbProjAngle->setSizePolicy(sizePolicy1);
        cbProjAngle->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        cbProjAngle->setProperty("prefEntry", QVariant(QByteArray("ProjectionAngle")));
        cbProjAngle->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_6->addWidget(cbProjAngle, 0, 2, 1, 1);

        cbSectionLineStd = new Gui::PrefComboBox(groupBox_2);
        cbSectionLineStd->addItem(QString());
        cbSectionLineStd->addItem(QString());
        cbSectionLineStd->setObjectName(QString::fromUtf8("cbSectionLineStd"));
        sizePolicy1.setHeightForWidth(cbSectionLineStd->sizePolicy().hasHeightForWidth());
        cbSectionLineStd->setSizePolicy(sizePolicy1);
        cbSectionLineStd->setProperty("prefEntry", QVariant(QByteArray("SectionLineStandard")));
        cbSectionLineStd->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Standards")));

        gridLayout_6->addWidget(cbSectionLineStd, 1, 2, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font2;
        font2.setItalic(false);
        label_13->setFont(font2);

        gridLayout_6->addWidget(label_13, 1, 0, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);

        verticalLayout->addLayout(gridLayout_6);


        verticalLayout_3->addWidget(groupBox_2);

        gb_Templates = new QGroupBox(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        gb_Templates->setObjectName(QString::fromUtf8("gb_Templates"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gb_Templates->sizePolicy().hasHeightForWidth());
        gb_Templates->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(gb_Templates);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 1, 1, 2, 1);

        label_9 = new QLabel(gb_Templates);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_3->addWidget(label_9, 5, 0, 1, 1);

        pfc_HatchFile = new Gui::PrefFileChooser(gb_Templates);
        pfc_HatchFile->setObjectName(QString::fromUtf8("pfc_HatchFile"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pfc_HatchFile->sizePolicy().hasHeightForWidth());
        pfc_HatchFile->setSizePolicy(sizePolicy3);
        pfc_HatchFile->setProperty("prefEntry", QVariant(QByteArray("FileHatch")));
        pfc_HatchFile->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Files")));

        gridLayout_3->addWidget(pfc_HatchFile, 2, 2, 1, 1);

        pfc_LineGroup = new Gui::PrefFileChooser(gb_Templates);
        pfc_LineGroup->setObjectName(QString::fromUtf8("pfc_LineGroup"));
        sizePolicy3.setHeightForWidth(pfc_LineGroup->sizePolicy().hasHeightForWidth());
        pfc_LineGroup->setSizePolicy(sizePolicy3);
        pfc_LineGroup->setProperty("prefEntry", QVariant(QByteArray("LineGroupFile")));
        pfc_LineGroup->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Files")));

        gridLayout_3->addWidget(pfc_LineGroup, 3, 2, 1, 1);

        pfc_DefTemp = new Gui::PrefFileChooser(gb_Templates);
        pfc_DefTemp->setObjectName(QString::fromUtf8("pfc_DefTemp"));
        sizePolicy3.setHeightForWidth(pfc_DefTemp->sizePolicy().hasHeightForWidth());
        pfc_DefTemp->setSizePolicy(sizePolicy3);
        pfc_DefTemp->setProperty("prefEntry", QVariant(QByteArray("TemplateFile")));
        pfc_DefTemp->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Files")));

        gridLayout_3->addWidget(pfc_DefTemp, 0, 2, 1, 1);

        label_11 = new QLabel(gb_Templates);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_3->addWidget(label_11, 4, 0, 1, 1);

        pfc_FilePattern = new Gui::PrefFileChooser(gb_Templates);
        pfc_FilePattern->setObjectName(QString::fromUtf8("pfc_FilePattern"));
        sizePolicy3.setHeightForWidth(pfc_FilePattern->sizePolicy().hasHeightForWidth());
        pfc_FilePattern->setSizePolicy(sizePolicy3);
        pfc_FilePattern->setProperty("prefEntry", QVariant(QByteArray("FilePattern")));
        pfc_FilePattern->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/PAT")));

        gridLayout_3->addWidget(pfc_FilePattern, 5, 2, 1, 1);

        pfc_Welding = new Gui::PrefFileChooser(gb_Templates);
        pfc_Welding->setObjectName(QString::fromUtf8("pfc_Welding"));
        sizePolicy3.setHeightForWidth(pfc_Welding->sizePolicy().hasHeightForWidth());
        pfc_Welding->setSizePolicy(sizePolicy3);
        pfc_Welding->setMode(Gui::FileChooser::Directory);
        pfc_Welding->setProperty("prefEntry", QVariant(QByteArray("WeldingDir")));
        pfc_Welding->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Files")));

        gridLayout_3->addWidget(pfc_Welding, 4, 2, 1, 1);

        pfc_DefDir = new Gui::PrefFileChooser(gb_Templates);
        pfc_DefDir->setObjectName(QString::fromUtf8("pfc_DefDir"));
        sizePolicy3.setHeightForWidth(pfc_DefDir->sizePolicy().hasHeightForWidth());
        pfc_DefDir->setSizePolicy(sizePolicy3);
        pfc_DefDir->setMode(Gui::FileChooser::Directory);
        pfc_DefDir->setProperty("prefEntry", QVariant(QByteArray("TemplateDir")));
        pfc_DefDir->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Files")));

        gridLayout_3->addWidget(pfc_DefDir, 1, 2, 1, 1);

        label_2 = new QLabel(gb_Templates);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        fcSymbolDir = new Gui::PrefFileChooser(gb_Templates);
        fcSymbolDir->setObjectName(QString::fromUtf8("fcSymbolDir"));
        sizePolicy3.setHeightForWidth(fcSymbolDir->sizePolicy().hasHeightForWidth());
        fcSymbolDir->setSizePolicy(sizePolicy3);
        fcSymbolDir->setMode(Gui::FileChooser::Directory);
        fcSymbolDir->setProperty("prefEntry", QVariant(QByteArray("DirSymbol")));
        fcSymbolDir->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Files")));

        gridLayout_3->addWidget(fcSymbolDir, 7, 2, 1, 1);

        lbl_Hatch = new QLabel(gb_Templates);
        lbl_Hatch->setObjectName(QString::fromUtf8("lbl_Hatch"));
        lbl_Hatch->setFont(font);

        gridLayout_3->addWidget(lbl_Hatch, 2, 0, 1, 1);

        label = new QLabel(gb_Templates);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(gb_Templates);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 7, 0, 1, 1);

        le_NamePattern = new Gui::PrefLineEdit(gb_Templates);
        le_NamePattern->setObjectName(QString::fromUtf8("le_NamePattern"));
        sizePolicy3.setHeightForWidth(le_NamePattern->sizePolicy().hasHeightForWidth());
        le_NamePattern->setSizePolicy(sizePolicy3);
        le_NamePattern->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_NamePattern->setProperty("prefEntry", QVariant(QByteArray("NamePattern")));
        le_NamePattern->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/PAT")));

        gridLayout_3->addWidget(le_NamePattern, 6, 2, 1, 1);

        label_10 = new QLabel(gb_Templates);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        label_8 = new QLabel(gb_Templates);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_3->addWidget(label_8, 6, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(2, 2);

        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        verticalLayout_3->addWidget(gb_Templates);

        gbGrid = new QGroupBox(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        gbGrid->setObjectName(QString::fromUtf8("gbGrid"));
        verticalLayout_5 = new QVBoxLayout(gbGrid);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        cb_ShowGrid = new Gui::PrefCheckBox(gbGrid);
        cb_ShowGrid->setObjectName(QString::fromUtf8("cb_ShowGrid"));
        cb_ShowGrid->setFont(font);
        cb_ShowGrid->setChecked(true);
        cb_ShowGrid->setProperty("prefEntry", QVariant(QByteArray("showGrid")));
        cb_ShowGrid->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(cb_ShowGrid, 0, 0, 1, 1);

        label_4 = new QLabel(gbGrid);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        psb_GridSpacing = new Gui::PrefUnitSpinBox(gbGrid);
        psb_GridSpacing->setObjectName(QString::fromUtf8("psb_GridSpacing"));
        psb_GridSpacing->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        psb_GridSpacing->setValue(10.000000000000000);
        psb_GridSpacing->setProperty("prefEntry", QVariant(QByteArray("gridSpacing")));
        psb_GridSpacing->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(psb_GridSpacing, 1, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        verticalLayout_5->addLayout(gridLayout);


        verticalLayout_3->addWidget(gbGrid);

        gbSelection = new QGroupBox(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        gbSelection->setObjectName(QString::fromUtf8("gbSelection"));
        sizePolicy1.setHeightForWidth(gbSelection->sizePolicy().hasHeightForWidth());
        gbSelection->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(gbSelection);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        cbMultiSelection = new Gui::PrefCheckBox(gbSelection);
        cbMultiSelection->setObjectName(QString::fromUtf8("cbMultiSelection"));
        sizePolicy1.setHeightForWidth(cbMultiSelection->sizePolicy().hasHeightForWidth());
        cbMultiSelection->setSizePolicy(sizePolicy1);
        cbMultiSelection->setChecked(false);
        cbMultiSelection->setProperty("prefEntry", QVariant(QByteArray("multiSelection")));
        cbMultiSelection->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_7->addWidget(cbMultiSelection, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_7);


        verticalLayout_3->addWidget(gbSelection);

        gbViewDefaut = new QGroupBox(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        gbViewDefaut->setObjectName(QString::fromUtf8("gbViewDefaut"));
        sizePolicy2.setHeightForWidth(gbViewDefaut->sizePolicy().hasHeightForWidth());
        gbViewDefaut->setSizePolicy(sizePolicy2);
        verticalLayout_8 = new QVBoxLayout(gbViewDefaut);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        cb_useCameraDirection = new Gui::PrefCheckBox(gbViewDefaut);
        cb_useCameraDirection->setObjectName(QString::fromUtf8("cb_useCameraDirection"));
        sizePolicy1.setHeightForWidth(cb_useCameraDirection->sizePolicy().hasHeightForWidth());
        cb_useCameraDirection->setSizePolicy(sizePolicy1);
        cb_useCameraDirection->setFont(font);
        cb_useCameraDirection->setProperty("prefEntry", QVariant(QByteArray("UseCameraDirection")));
        cb_useCameraDirection->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        verticalLayout_7->addWidget(cb_useCameraDirection);

        cb_alwaysShowLabel = new Gui::PrefCheckBox(gbViewDefaut);
        cb_alwaysShowLabel->setObjectName(QString::fromUtf8("cb_alwaysShowLabel"));
        cb_alwaysShowLabel->setFont(font);
        cb_alwaysShowLabel->setProperty("prefEntry", QVariant(QByteArray("AlwaysShowLabel")));
        cb_alwaysShowLabel->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        verticalLayout_7->addWidget(cb_alwaysShowLabel);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_3->addWidget(gbViewDefaut);

        label_12 = new QLabel(TechDrawGui__DlgPrefsTechDrawGeneralImp);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font3;
        font3.setPointSize(10);
        font3.setItalic(false);
        label_12->setFont(font3);
        label_12->setWordWrap(true);

        verticalLayout_3->addWidget(label_12);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawGeneralImp);

        cbSectionLineStd->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawGeneralImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawGeneralImp)
    {
        TechDrawGui__DlgPrefsTechDrawGeneralImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "General", nullptr));
#if QT_CONFIG(tooltip)
        TechDrawGui__DlgPrefsTechDrawGeneralImp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gbMisc->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Drawing Update", nullptr));
#if QT_CONFIG(tooltip)
        cb_Global->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Whether or not pages are updated every time the 3D model is changed", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_Global->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Update With 3D (global policy)", nullptr));
#if QT_CONFIG(tooltip)
        cb_Override->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Whether or not a page's 'Keep Updated' property\n"
"can override the global 'Update With 3D' parameter", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_Override->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Allow Page Override (global policy)", nullptr));
#if QT_CONFIG(tooltip)
        cb_PageUpdate->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Keep drawing pages in sync with changes of 3D model in real time.\n"
"This can slow down the response time.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_PageUpdate->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Keep Page Up To Date", nullptr));
#if QT_CONFIG(tooltip)
        cb_AutoDist->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Automatically distribute secondary views\n"
"for ProjectionGroups", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_AutoDist->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Auto-distribute Secondary Views", nullptr));
        gb_Font->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Labels", nullptr));
#if QT_CONFIG(tooltip)
        lbl_LabelFont->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "* this font is also used for dimensions\n"
"   Changes have no effect on existing dimensions.", nullptr));
#endif // QT_CONFIG(tooltip)
        lbl_LabelFont->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Label Font*", nullptr));
#if QT_CONFIG(tooltip)
        pfb_LabelFont->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Font for labels", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Label Size", nullptr));
#if QT_CONFIG(tooltip)
        plsb_LabelSize->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Label size", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Conventions", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Projection Group Angle", nullptr));
        cbProjAngle->setItemText(0, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "First-angle", nullptr));
        cbProjAngle->setItemText(1, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Third-angle", nullptr));
        cbProjAngle->setItemText(2, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Page", nullptr));

#if QT_CONFIG(tooltip)
        cbProjAngle->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Use first- or third-angle multiview projection convention", nullptr));
#endif // QT_CONFIG(tooltip)
        cbSectionLineStd->setItemText(0, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "ANSI", nullptr));
        cbSectionLineStd->setItemText(1, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "ISO", nullptr));

#if QT_CONFIG(tooltip)
        cbSectionLineStd->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Standard to be used to draw section lines.  This affects the position of arrows and symbol.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Section Line Convention", nullptr));
        gb_Templates->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Files", nullptr));
        label_9->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "PAT File", nullptr));
#if QT_CONFIG(tooltip)
        pfc_HatchFile->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Preferred SVG or bitmap file for hatching.  This value will also control the initial directory for choosing hatch patterns.  You can use this to get hatch files from a local directory.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pfc_LineGroup->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Alternate file for personal LineGroup definition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pfc_DefTemp->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Default template file for new pages", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Welding Directory", nullptr));
#if QT_CONFIG(tooltip)
        pfc_FilePattern->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Default PAT pattern definition file for geometric hatching", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pfc_Welding->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Default directory for welding symbols", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pfc_DefDir->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Starting directory for menu 'Insert Page using Template'", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Template Directory", nullptr));
#if QT_CONFIG(tooltip)
        fcSymbolDir->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Alternate directory to search for SVG symbol files.", nullptr));
#endif // QT_CONFIG(tooltip)
        lbl_Hatch->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Hatch Pattern File", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Default Template", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Symbol Directory", nullptr));
#if QT_CONFIG(tooltip)
        le_NamePattern->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Name of the default PAT pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        le_NamePattern->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Diamond", nullptr));
        label_10->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Line Group File", nullptr));
        label_8->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Pattern Name", nullptr));
        gbGrid->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Grid", nullptr));
#if QT_CONFIG(tooltip)
        cb_ShowGrid->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Set ShowGrid property to true on new Pages.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_ShowGrid->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Show Grid", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Grid Spacing", nullptr));
#if QT_CONFIG(tooltip)
        psb_GridSpacing->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Distance between Page grid lines.", nullptr));
#endif // QT_CONFIG(tooltip)
        gbSelection->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Selection", nullptr));
#if QT_CONFIG(tooltip)
        cbMultiSelection->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "If enabled, clicking without Ctrl does not clear existing vertex/edge/face selection", nullptr));
#endif // QT_CONFIG(tooltip)
        cbMultiSelection->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Enable Multiselection Mode", nullptr));
        gbViewDefaut->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "View Defaults", nullptr));
#if QT_CONFIG(tooltip)
        cb_useCameraDirection->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "If checked, the 3d camera direction (or normal of a selected face) will be used as the view direction.  If not checked, Views will be created as Front Views.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_useCameraDirection->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Use 3d Camera Direction", nullptr));
#if QT_CONFIG(tooltip)
        cb_alwaysShowLabel->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "If checked, view labels will be displayed even when frames are suppressed.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_alwaysShowLabel->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "Always Show Label", nullptr));
        label_12->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawGeneralImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawGeneralImp: public Ui_DlgPrefsTechDrawGeneralImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWGENERAL_H
