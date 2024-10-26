/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawAdvanced.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWADVANCED_H
#define UI_DLGPREFSTECHDRAWADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace TechDrawGui {

class Ui_DlgPrefsTechDrawAdvancedImp
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbDim;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *cbFuseBeforeSection;
    Gui::PrefCheckBox *cbDebugSection;
    Gui::PrefDoubleSpinBox *pdsbEdgeFuzz;
    QLabel *label_5;
    Gui::PrefCheckBox *cbCrazyEdges;
    Gui::PrefSpinBox *sbMaxPat;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    Gui::PrefDoubleSpinBox *pdsbMarkFuzz;
    QLabel *label;
    Gui::PrefSpinBox *sbMaxTiles;
    Gui::PrefCheckBox *cbDebugDetail;
    Gui::PrefCheckBox *cbShowSectionEdges;
    Gui::PrefCheckBox *cbReportProgress;
    Gui::PrefCheckBox *cbNewFaceFinder;
    Gui::PrefCheckBox *cbAutoCorrectRefs;
    Gui::PrefCheckBox *cbDetectFaces;
    QLabel *label_3;
    QLabel *label_2;
    Gui::PrefSpinBox *sbScrubCount;
    QLabel *label_17;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawAdvancedImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawAdvancedImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawAdvancedImp->setObjectName(QString::fromUtf8("TechDrawGui__DlgPrefsTechDrawAdvancedImp"));
        TechDrawGui__DlgPrefsTechDrawAdvancedImp->resize(474, 424);
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gbDim = new QGroupBox(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
        gbDim->setObjectName(QString::fromUtf8("gbDim"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbDim->sizePolicy().hasHeightForWidth());
        gbDim->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(gbDim);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbFuseBeforeSection = new Gui::PrefCheckBox(gbDim);
        cbFuseBeforeSection->setObjectName(QString::fromUtf8("cbFuseBeforeSection"));
        sizePolicy.setHeightForWidth(cbFuseBeforeSection->sizePolicy().hasHeightForWidth());
        cbFuseBeforeSection->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        cbFuseBeforeSection->setFont(font);
        cbFuseBeforeSection->setProperty("prefEntry", QVariant(QByteArray("SectionFuseFirst")));
        cbFuseBeforeSection->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(cbFuseBeforeSection, 2, 2, 1, 1);

        cbDebugSection = new Gui::PrefCheckBox(gbDim);
        cbDebugSection->setObjectName(QString::fromUtf8("cbDebugSection"));
        sizePolicy.setHeightForWidth(cbDebugSection->sizePolicy().hasHeightForWidth());
        cbDebugSection->setSizePolicy(sizePolicy);
        cbDebugSection->setProperty("prefEntry", QVariant(QByteArray("debugSection")));
        cbDebugSection->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/debug")));

        gridLayout->addWidget(cbDebugSection, 4, 0, 1, 1);

        pdsbEdgeFuzz = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbEdgeFuzz->setObjectName(QString::fromUtf8("pdsbEdgeFuzz"));
        sizePolicy.setHeightForWidth(pdsbEdgeFuzz->sizePolicy().hasHeightForWidth());
        pdsbEdgeFuzz->setSizePolicy(sizePolicy);
        pdsbEdgeFuzz->setMinimumSize(QSize(174, 0));
        pdsbEdgeFuzz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbEdgeFuzz->setValue(10.000000000000000);
        pdsbEdgeFuzz->setProperty("prefEntry", QVariant(QByteArray("EdgeFuzz")));
        pdsbEdgeFuzz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(pdsbEdgeFuzz, 7, 2, 1, 1);

        label_5 = new QLabel(gbDim);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        cbCrazyEdges = new Gui::PrefCheckBox(gbDim);
        cbCrazyEdges->setObjectName(QString::fromUtf8("cbCrazyEdges"));
        sizePolicy.setHeightForWidth(cbCrazyEdges->sizePolicy().hasHeightForWidth());
        cbCrazyEdges->setSizePolicy(sizePolicy);
        cbCrazyEdges->setProperty("prefEntry", QVariant(QByteArray("allowCrazyEdge")));
        cbCrazyEdges->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/debug")));

        gridLayout->addWidget(cbCrazyEdges, 3, 0, 1, 1);

        sbMaxPat = new Gui::PrefSpinBox(gbDim);
        sbMaxPat->setObjectName(QString::fromUtf8("sbMaxPat"));
        sbMaxPat->setAlignment(Qt::AlignRight);
        sbMaxPat->setMinimum(1);
        sbMaxPat->setMaximum(1000000);
        sbMaxPat->setSingleStep(100);
        sbMaxPat->setValue(10000);
        sbMaxPat->setProperty("prefEntry", QVariant(QByteArray("MaxSeg")));
        sbMaxPat->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/PAT")));

        gridLayout->addWidget(sbMaxPat, 10, 2, 1, 1);

        label_4 = new QLabel(gbDim);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 1, 1, 1);

        pdsbMarkFuzz = new Gui::PrefDoubleSpinBox(gbDim);
        pdsbMarkFuzz->setObjectName(QString::fromUtf8("pdsbMarkFuzz"));
        sizePolicy.setHeightForWidth(pdsbMarkFuzz->sizePolicy().hasHeightForWidth());
        pdsbMarkFuzz->setSizePolicy(sizePolicy);
        pdsbMarkFuzz->setMinimumSize(QSize(174, 0));
        pdsbMarkFuzz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbMarkFuzz->setValue(5.000000000000000);
        pdsbMarkFuzz->setProperty("prefEntry", QVariant(QByteArray("MarkFuzz")));
        pdsbMarkFuzz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(pdsbMarkFuzz, 8, 2, 1, 1);

        label = new QLabel(gbDim);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        sbMaxTiles = new Gui::PrefSpinBox(gbDim);
        sbMaxTiles->setObjectName(QString::fromUtf8("sbMaxTiles"));
        sbMaxTiles->setAlignment(Qt::AlignRight);
        sbMaxTiles->setMinimum(1);
        sbMaxTiles->setMaximum(1000000);
        sbMaxTiles->setSingleStep(100);
        sbMaxTiles->setValue(10000);
        sbMaxTiles->setProperty("prefEntry", QVariant(QByteArray("MaxSVGTile")));
        sbMaxTiles->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout->addWidget(sbMaxTiles, 9, 2, 1, 1);

        cbDebugDetail = new Gui::PrefCheckBox(gbDim);
        cbDebugDetail->setObjectName(QString::fromUtf8("cbDebugDetail"));
        sizePolicy.setHeightForWidth(cbDebugDetail->sizePolicy().hasHeightForWidth());
        cbDebugDetail->setSizePolicy(sizePolicy);
        cbDebugDetail->setProperty("prefEntry", QVariant(QByteArray("debugDetail")));
        cbDebugDetail->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/debug")));

        gridLayout->addWidget(cbDebugDetail, 4, 2, 1, 1);

        cbShowSectionEdges = new Gui::PrefCheckBox(gbDim);
        cbShowSectionEdges->setObjectName(QString::fromUtf8("cbShowSectionEdges"));
        sizePolicy.setHeightForWidth(cbShowSectionEdges->sizePolicy().hasHeightForWidth());
        cbShowSectionEdges->setSizePolicy(sizePolicy);
        cbShowSectionEdges->setChecked(true);
        cbShowSectionEdges->setProperty("prefEntry", QVariant(QByteArray("ShowSectionEdges")));
        cbShowSectionEdges->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(cbShowSectionEdges, 2, 0, 1, 1);

        cbReportProgress = new Gui::PrefCheckBox(gbDim);
        cbReportProgress->setObjectName(QString::fromUtf8("cbReportProgress"));
        cbReportProgress->setProperty("prefEntry", QVariant(QByteArray("ReportProgress")));
        cbReportProgress->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(cbReportProgress, 0, 2, 1, 1);

        cbNewFaceFinder = new Gui::PrefCheckBox(gbDim);
        cbNewFaceFinder->setObjectName(QString::fromUtf8("cbNewFaceFinder"));
        cbNewFaceFinder->setChecked(true);
        cbNewFaceFinder->setProperty("prefEntry", QVariant(QByteArray("NewFaceFinder")));
        cbNewFaceFinder->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(cbNewFaceFinder, 1, 0, 1, 1);

        cbAutoCorrectRefs = new Gui::PrefCheckBox(gbDim);
        cbAutoCorrectRefs->setObjectName(QString::fromUtf8("cbAutoCorrectRefs"));
        cbAutoCorrectRefs->setChecked(true);
        cbAutoCorrectRefs->setProperty("prefEntry", QVariant(QByteArray("AutoCorrectRefs")));
        cbAutoCorrectRefs->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(cbAutoCorrectRefs, 1, 2, 1, 1);

        cbDetectFaces = new Gui::PrefCheckBox(gbDim);
        cbDetectFaces->setObjectName(QString::fromUtf8("cbDetectFaces"));
        sizePolicy.setHeightForWidth(cbDetectFaces->sizePolicy().hasHeightForWidth());
        cbDetectFaces->setSizePolicy(sizePolicy);
        cbDetectFaces->setChecked(true);
        cbDetectFaces->setProperty("prefEntry", QVariant(QByteArray("HandleFaces")));
        cbDetectFaces->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/General")));

        gridLayout->addWidget(cbDetectFaces, 0, 0, 1, 1);

        label_3 = new QLabel(gbDim);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_2 = new QLabel(gbDim);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 10, 0, 1, 1);

        sbScrubCount = new Gui::PrefSpinBox(gbDim);
        sbScrubCount->setObjectName(QString::fromUtf8("sbScrubCount"));
        sbScrubCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbScrubCount->setValue(1);
        sbScrubCount->setProperty("prefEntry", QVariant(QByteArray("ScrubCount")));
        sbScrubCount->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(sbScrubCount, 6, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(gbDim);

        label_17 = new QLabel(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        label_17->setFont(font1);
        label_17->setTextFormat(Qt::RichText);
        label_17->setWordWrap(true);

        verticalLayout_2->addWidget(label_17);

        verticalSpacer = new QSpacerItem(17, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawAdvancedImp);

        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawAdvancedImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawAdvancedImp)
    {
        TechDrawGui__DlgPrefsTechDrawAdvancedImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Advanced", nullptr));
        gbDim->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        cbFuseBeforeSection->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Perform a fuse operation on input shape(s) before Section view processing", nullptr));
#endif // QT_CONFIG(tooltip)
        cbFuseBeforeSection->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Fuse Before Section", nullptr));
#if QT_CONFIG(tooltip)
        cbDebugSection->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Dump intermediate results during Section view processing", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDebugSection->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Debug Section", nullptr));
#if QT_CONFIG(tooltip)
        pdsbEdgeFuzz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Size of selection area around edges\n"
"Each unit is approx. 0.1 mm wide", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pdsbEdgeFuzz->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Edge Fuzz", nullptr));
#if QT_CONFIG(tooltip)
        cbCrazyEdges->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Include edges with unexpected geometry (zero length etc.) in results", nullptr));
#endif // QT_CONFIG(tooltip)
        cbCrazyEdges->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Allow Crazy Edges", nullptr));
#if QT_CONFIG(tooltip)
        sbMaxPat->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Maximum hatch line segments to use\n"
"when hatching a face with a PAT pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Mark Fuzz", nullptr));
#if QT_CONFIG(tooltip)
        pdsbMarkFuzz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Selection area around center marks\n"
"Each unit is approx. 0.1 mm wide", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pdsbMarkFuzz->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Max SVG Hatch Tiles", nullptr));
#if QT_CONFIG(tooltip)
        sbMaxTiles->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Limit of 64x64 pixel SVG tiles used to hatch a single face.\n"
"For large scalings you might get an error about too many SVG tiles.\n"
"Then you need to increase the tile limit.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbDebugDetail->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Dump intermediate results during Detail view processing", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDebugDetail->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Debug Detail", nullptr));
#if QT_CONFIG(tooltip)
        cbShowSectionEdges->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Highlights border of section cut in section views", nullptr));
#endif // QT_CONFIG(tooltip)
        cbShowSectionEdges->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Show Section Edges", nullptr));
#if QT_CONFIG(tooltip)
        cbReportProgress->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Issue progress messages while building View geometry", nullptr));
#endif // QT_CONFIG(tooltip)
        cbReportProgress->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Report Progress", nullptr));
#if QT_CONFIG(tooltip)
        cbNewFaceFinder->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "If checked, FreeCAD will use the new face finder algorithm.  If not checked, FreeCAD will use the original face finder.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbNewFaceFinder->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Use New Face Finder Algorithm", nullptr));
#if QT_CONFIG(tooltip)
        cbAutoCorrectRefs->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "If checked, system will attempt to automatically correct dimension references when the model changes.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cbAutoCorrectRefs->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        cbAutoCorrectRefs->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Auto Correct Dimension Refs", nullptr));
#if QT_CONFIG(tooltip)
        cbDetectFaces->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "If checked, TechDraw will attempt to build faces using the\n"
"line segments returned by the hidden line removal algorithm.\n"
"Faces must be detected in order to use hatching, but there\n"
"can be a performance penalty in complex models.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDetectFaces->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Detect Faces", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Overlap Edges Scrub Passes", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "Max PAT Hatch Segments", nullptr));
#if QT_CONFIG(tooltip)
        sbScrubCount->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "The number of times FreeCAD should try to remove overlapping edges returned by the Hidden Line Removal algorithm. A value of 0 indicates no scrubbing, 1 indicates a single pass and 2 indicates a second pass should be performed. Values above 2 are generally not productive. Each pass adds to the time required to produce the drawing.", nullptr));
#endif // QT_CONFIG(tooltip)
        sbScrubCount->setSuffix(QString());
        sbScrubCount->setPrefix(QString());
        label_17->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawAdvancedImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawAdvancedImp: public Ui_DlgPrefsTechDrawAdvancedImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWADVANCED_H
