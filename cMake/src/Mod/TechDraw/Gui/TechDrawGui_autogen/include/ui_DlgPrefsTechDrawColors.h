/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawColors.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWCOLORS_H
#define UI_DLGPREFSTECHDRAWCOLORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_DlgPrefsTechDrawColorsImp
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gb_Colors;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_7;
    Gui::PrefColorButton *pcbHighlight;
    Gui::PrefCheckBox *pcbMonochrome;
    QLabel *lbl_Select;
    Gui::PrefColorButton *pcb_Background;
    QSpacerItem *horizontalSpacer_3;
    Gui::PrefColorButton *pcbCenterColor;
    QLabel *label_3;
    QLabel *label_15;
    Gui::PrefColorButton *pcb_PreSelect;
    QLabel *label_16;
    QLabel *label_4;
    Gui::PrefColorButton *pcb_Face;
    QLabel *lbl_PreSelect;
    QLabel *label_17;
    Gui::PrefColorButton *pcbLightTextColor;
    Gui::PrefColorButton *pcbDimColor;
    Gui::PrefColorButton *pcbPageColor;
    QLabel *label_6;
    Gui::PrefColorButton *pcb_Hatch;
    Gui::PrefColorButton *pcbSectionLine;
    Gui::PrefColorButton *pcb_GeomHatch;
    QLabel *label_18;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_14;
    Gui::PrefCheckBox *pcbLightOnDark;
    Gui::PrefColorButton *pcb_Select;
    Gui::PrefColorButton *pcbMarkup;
    Gui::PrefCheckBox *pcb_PaintFaces;
    Gui::PrefColorButton *pcb_Normal;
    Gui::PrefColorButton *pcb_Hidden;
    Gui::PrefColorButton *pcb_Grid;
    QLabel *label_13;
    Gui::PrefColorButton *pcbVertexColor;
    QLabel *label;
    QLabel *lbl_Hidden;
    QLabel *lbl_Normal;
    Gui::PrefColorButton *pcb_Surface;
    QLabel *label_8;
    Gui::PrefColorButton *pcbUnderline;
    QLabel *label_12;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawColorsImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawColorsImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawColorsImp->setObjectName(QString::fromUtf8("TechDrawGui__DlgPrefsTechDrawColorsImp"));
        TechDrawGui__DlgPrefsTechDrawColorsImp->resize(440, 448);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__DlgPrefsTechDrawColorsImp->sizePolicy().hasHeightForWidth());
        TechDrawGui__DlgPrefsTechDrawColorsImp->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawColorsImp);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gb_Colors = new QGroupBox(TechDrawGui__DlgPrefsTechDrawColorsImp);
        gb_Colors->setObjectName(QString::fromUtf8("gb_Colors"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gb_Colors->sizePolicy().hasHeightForWidth());
        gb_Colors->setSizePolicy(sizePolicy1);
        gb_Colors->setMinimumSize(QSize(0, 225));
        gb_Colors->setBaseSize(QSize(0, 200));
        verticalLayout = new QVBoxLayout(gb_Colors);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(gb_Colors);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setItalic(true);
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 4, 3, 1, 1);

        pcbHighlight = new Gui::PrefColorButton(gb_Colors);
        pcbHighlight->setObjectName(QString::fromUtf8("pcbHighlight"));
        pcbHighlight->setColor(QColor(0, 0, 0));
        pcbHighlight->setProperty("prefEntry", QVariant(QByteArray("HighlightColor")));
        pcbHighlight->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout->addWidget(pcbHighlight, 6, 1, 1, 1);

        pcbMonochrome = new Gui::PrefCheckBox(gb_Colors);
        pcbMonochrome->setObjectName(QString::fromUtf8("pcbMonochrome"));
        pcbMonochrome->setProperty("prefEntry", QVariant(QByteArray("Monochrome")));
        pcbMonochrome->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcbMonochrome, 11, 0, 1, 1);

        lbl_Select = new QLabel(gb_Colors);
        lbl_Select->setObjectName(QString::fromUtf8("lbl_Select"));
        lbl_Select->setFont(font);

        gridLayout->addWidget(lbl_Select, 2, 0, 1, 1);

        pcb_Background = new Gui::PrefColorButton(gb_Colors);
        pcb_Background->setObjectName(QString::fromUtf8("pcb_Background"));
        pcb_Background->setColor(QColor(211, 211, 211));
        pcb_Background->setProperty("prefEntry", QVariant(QByteArray("Background")));
        pcb_Background->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Background, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        pcbCenterColor = new Gui::PrefColorButton(gb_Colors);
        pcbCenterColor->setObjectName(QString::fromUtf8("pcbCenterColor"));
        pcbCenterColor->setColor(QColor(0, 0, 0));
        pcbCenterColor->setProperty("prefEntry", QVariant(QByteArray("CenterColor")));
        pcbCenterColor->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout->addWidget(pcbCenterColor, 5, 1, 1, 1);

        label_3 = new QLabel(gb_Colors);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 3, 1, 1);

        label_15 = new QLabel(gb_Colors);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 5, 0, 1, 1);

        pcb_PreSelect = new Gui::PrefColorButton(gb_Colors);
        pcb_PreSelect->setObjectName(QString::fromUtf8("pcb_PreSelect"));
        pcb_PreSelect->setColor(QColor(255, 255, 0));
        pcb_PreSelect->setProperty("prefEntry", QVariant(QByteArray("PreSelectColor")));
        pcb_PreSelect->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_PreSelect, 1, 1, 1, 1);

        label_16 = new QLabel(gb_Colors);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 5, 3, 1, 1);

        label_4 = new QLabel(gb_Colors);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        pcb_Face = new Gui::PrefColorButton(gb_Colors);
        pcb_Face->setObjectName(QString::fromUtf8("pcb_Face"));
        pcb_Face->setColor(QColor(255, 255, 255));
        pcb_Face->setProperty("prefEntry", QVariant(QByteArray("FaceColor")));
        pcb_Face->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Face, 7, 4, 1, 1);

        lbl_PreSelect = new QLabel(gb_Colors);
        lbl_PreSelect->setObjectName(QString::fromUtf8("lbl_PreSelect"));
        lbl_PreSelect->setFont(font);

        gridLayout->addWidget(lbl_PreSelect, 1, 0, 1, 1);

        label_17 = new QLabel(gb_Colors);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        gridLayout->addWidget(label_17, 6, 3, 1, 1);

        pcbLightTextColor = new Gui::PrefColorButton(gb_Colors);
        pcbLightTextColor->setObjectName(QString::fromUtf8("pcbLightTextColor"));
        pcbLightTextColor->setProperty("prefEntry", QVariant(QByteArray("LightTextColor")));
        pcbLightTextColor->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcbLightTextColor, 11, 1, 1, 1);

        pcbDimColor = new Gui::PrefColorButton(gb_Colors);
        pcbDimColor->setObjectName(QString::fromUtf8("pcbDimColor"));
        pcbDimColor->setColor(QColor(0, 0, 0));
        pcbDimColor->setProperty("prefEntry", QVariant(QByteArray("Color")));
        pcbDimColor->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(pcbDimColor, 4, 1, 1, 1);

        pcbPageColor = new Gui::PrefColorButton(gb_Colors);
        pcbPageColor->setObjectName(QString::fromUtf8("pcbPageColor"));
        pcbPageColor->setColor(QColor(255, 255, 255));
        pcbPageColor->setProperty("prefEntry", QVariant(QByteArray("PageColor")));
        pcbPageColor->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcbPageColor, 11, 4, 1, 1);

        label_6 = new QLabel(gb_Colors);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        pcb_Hatch = new Gui::PrefColorButton(gb_Colors);
        pcb_Hatch->setObjectName(QString::fromUtf8("pcb_Hatch"));
        pcb_Hatch->setColor(QColor(0, 0, 0));
        pcb_Hatch->setProperty("prefEntry", QVariant(QByteArray("Hatch")));
        pcb_Hatch->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Hatch, 3, 4, 1, 1);

        pcbSectionLine = new Gui::PrefColorButton(gb_Colors);
        pcbSectionLine->setObjectName(QString::fromUtf8("pcbSectionLine"));
        pcbSectionLine->setColor(QColor(0, 0, 0));
        pcbSectionLine->setProperty("prefEntry", QVariant(QByteArray("SectionColor")));
        pcbSectionLine->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Decorations")));

        gridLayout->addWidget(pcbSectionLine, 2, 4, 1, 1);

        pcb_GeomHatch = new Gui::PrefColorButton(gb_Colors);
        pcb_GeomHatch->setObjectName(QString::fromUtf8("pcb_GeomHatch"));
        pcb_GeomHatch->setColor(QColor(0, 0, 0));
        pcb_GeomHatch->setProperty("prefEntry", QVariant(QByteArray("GeomHatch")));
        pcb_GeomHatch->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_GeomHatch, 4, 4, 1, 1);

        label_18 = new QLabel(gb_Colors);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 6, 0, 1, 1);

        label_5 = new QLabel(gb_Colors);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 3, 1, 1);

        label_2 = new QLabel(gb_Colors);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 11, 3, 1, 1);

        label_14 = new QLabel(gb_Colors);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 2, 3, 1, 1);

        pcbLightOnDark = new Gui::PrefCheckBox(gb_Colors);
        pcbLightOnDark->setObjectName(QString::fromUtf8("pcbLightOnDark"));
        pcbLightOnDark->setProperty("prefEntry", QVariant(QByteArray("LightOnDark")));
        pcbLightOnDark->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcbLightOnDark, 10, 0, 1, 1);

        pcb_Select = new Gui::PrefColorButton(gb_Colors);
        pcb_Select->setObjectName(QString::fromUtf8("pcb_Select"));
        pcb_Select->setColor(QColor(0, 255, 0));
        pcb_Select->setProperty("prefEntry", QVariant(QByteArray("SelectColor")));
        pcb_Select->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Select, 2, 1, 1, 1);

        pcbMarkup = new Gui::PrefColorButton(gb_Colors);
        pcbMarkup->setObjectName(QString::fromUtf8("pcbMarkup"));
        pcbMarkup->setColor(QColor(0, 0, 0));
        pcbMarkup->setProperty("prefEntry", QVariant(QByteArray("Color")));
        pcbMarkup->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Markups")));

        gridLayout->addWidget(pcbMarkup, 6, 4, 1, 1);

        pcb_PaintFaces = new Gui::PrefCheckBox(gb_Colors);
        pcb_PaintFaces->setObjectName(QString::fromUtf8("pcb_PaintFaces"));
        pcb_PaintFaces->setMinimumSize(QSize(0, 20));
        pcb_PaintFaces->setFont(font);
        pcb_PaintFaces->setProperty("prefEntry", QVariant(QByteArray("ClearFace")));
        pcb_PaintFaces->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_PaintFaces, 7, 3, 1, 1);

        pcb_Normal = new Gui::PrefColorButton(gb_Colors);
        pcb_Normal->setObjectName(QString::fromUtf8("pcb_Normal"));
        pcb_Normal->setColor(QColor(0, 0, 0));
        pcb_Normal->setProperty("prefEntry", QVariant(QByteArray("NormalColor")));
        pcb_Normal->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Normal, 0, 1, 1, 1);

        pcb_Hidden = new Gui::PrefColorButton(gb_Colors);
        pcb_Hidden->setObjectName(QString::fromUtf8("pcb_Hidden"));
        pcb_Hidden->setColor(QColor(0, 0, 0));
        pcb_Hidden->setProperty("prefEntry", QVariant(QByteArray("HiddenColor")));
        pcb_Hidden->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Hidden, 0, 4, 1, 1);

        pcb_Grid = new Gui::PrefColorButton(gb_Colors);
        pcb_Grid->setObjectName(QString::fromUtf8("pcb_Grid"));
        pcb_Grid->setColor(QColor(0, 0, 0));
        pcb_Grid->setProperty("prefEntry", QVariant(QByteArray("gridColor")));
        pcb_Grid->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Grid, 7, 1, 1, 1);

        label_13 = new QLabel(gb_Colors);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        pcbVertexColor = new Gui::PrefColorButton(gb_Colors);
        pcbVertexColor->setObjectName(QString::fromUtf8("pcbVertexColor"));
        pcbVertexColor->setColor(QColor(0, 0, 0));
        pcbVertexColor->setProperty("prefEntry", QVariant(QByteArray("VertexColor")));
        pcbVertexColor->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout->addWidget(pcbVertexColor, 5, 4, 1, 1);

        label = new QLabel(gb_Colors);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        lbl_Hidden = new QLabel(gb_Colors);
        lbl_Hidden->setObjectName(QString::fromUtf8("lbl_Hidden"));
        lbl_Hidden->setFont(font);

        gridLayout->addWidget(lbl_Hidden, 0, 3, 1, 1);

        lbl_Normal = new QLabel(gb_Colors);
        lbl_Normal->setObjectName(QString::fromUtf8("lbl_Normal"));
        lbl_Normal->setFont(font);

        gridLayout->addWidget(lbl_Normal, 0, 0, 1, 1);

        pcb_Surface = new Gui::PrefColorButton(gb_Colors);
        pcb_Surface->setObjectName(QString::fromUtf8("pcb_Surface"));
        pcb_Surface->setColor(QColor(211, 211, 211));
        pcb_Surface->setProperty("prefEntry", QVariant(QByteArray("CutSurfaceColor")));
        pcb_Surface->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcb_Surface, 1, 4, 1, 1);

        label_8 = new QLabel(gb_Colors);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        pcbUnderline = new Gui::PrefColorButton(gb_Colors);
        pcbUnderline->setObjectName(QString::fromUtf8("pcbUnderline"));
        pcbUnderline->setColor(QColor(0, 0, 255));
        pcbUnderline->setProperty("prefEntry", QVariant(QByteArray("TemplateUnderlineColor")));
        pcbUnderline->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Colors")));

        gridLayout->addWidget(pcbUnderline, 8, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_3->addWidget(gb_Colors);

        label_12 = new QLabel(TechDrawGui__DlgPrefsTechDrawColorsImp);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        label_12->setFont(font1);
        label_12->setWordWrap(true);

        verticalLayout_3->addWidget(label_12);

        verticalSpacer = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawColorsImp);

        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawColorsImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawColorsImp)
    {
        TechDrawGui__DlgPrefsTechDrawColorsImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Colors", nullptr));
#if QT_CONFIG(tooltip)
        TechDrawGui__DlgPrefsTechDrawColorsImp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gb_Colors->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Colors", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Geometric Hatch", nullptr));
#if QT_CONFIG(tooltip)
        pcbMonochrome->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "If checked FreeCAD will use a single color for all text and lines.", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbMonochrome->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Monochrome", nullptr));
        lbl_Select->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Selected", nullptr));
#if QT_CONFIG(tooltip)
        pcb_Background->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Background color around pages", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbCenterColor->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Centerline color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Section Face", nullptr));
        label_15->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Centerline", nullptr));
#if QT_CONFIG(tooltip)
        pcb_PreSelect->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Preselection color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Vertex", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Background", nullptr));
#if QT_CONFIG(tooltip)
        pcb_Face->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Face color (if not transparent)", nullptr));
#endif // QT_CONFIG(tooltip)
        lbl_PreSelect->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Preselected", nullptr));
        label_17->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Leaderline", nullptr));
#if QT_CONFIG(tooltip)
        pcbLightTextColor->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Monochrome text color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbDimColor->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Color of dimension lines and text.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbPageColor->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Use a light color for dark text and dark color for light text.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QString());
#if QT_CONFIG(tooltip)
        pcb_Hatch->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Hatch image color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbSectionLine->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Section line color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcb_GeomHatch->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Geometric hatch pattern color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Detail Highlight", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Hatch", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Page Color", nullptr));
        label_14->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Section Line", nullptr));
#if QT_CONFIG(tooltip)
        pcbLightOnDark->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Check this to use light text and lines on dark backgrounds. Set Page Color to a dark color. Transparent or light color faces are recommended with this option.", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbLightOnDark->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Light on dark", nullptr));
#if QT_CONFIG(tooltip)
        pcb_Select->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Selected item color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcbMarkup->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Default color for leader lines", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcb_PaintFaces->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Object faces will be transparent", nullptr));
#endif // QT_CONFIG(tooltip)
        pcb_PaintFaces->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Transparent Faces", nullptr));
#if QT_CONFIG(tooltip)
        pcb_Normal->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Normal line color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pcb_Hidden->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Hidden line color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Dimension", nullptr));
#if QT_CONFIG(tooltip)
        pcbVertexColor->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Color of vertices in views", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Grid Color", nullptr));
        lbl_Hidden->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Hidden Line", nullptr));
        lbl_Normal->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Normal", nullptr));
#if QT_CONFIG(tooltip)
        pcb_Surface->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Section face color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "Template Underline", nullptr));
        label_12->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawColorsImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawColorsImp: public Ui_DlgPrefsTechDrawColorsImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWCOLORS_H
