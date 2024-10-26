/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawScale.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWSCALE_H
#define UI_DLGPREFSTECHDRAWSCALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_DlgPrefsTechDrawScaleImp
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gbScale;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_13;
    Gui::PrefDoubleSpinBox *pdsbPageScale;
    QLabel *label_14;
    Gui::PrefComboBox *cbViewScaleType;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer;
    Gui::PrefDoubleSpinBox *pdsbViewScale;
    QGroupBox *gb_SizeAdj;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    Gui::PrefDoubleSpinBox *pdsbVertexScale;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    Gui::PrefDoubleSpinBox *pdsbCenterScale;
    QLabel *label_7;
    Gui::PrefUnitSpinBox *pdsbTemplateMark;
    QLabel *label_5;
    Gui::PrefDoubleSpinBox *pdsbSymbolScale;
    QLabel *label_12;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawScaleImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawScaleImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawScaleImp->setObjectName(QString::fromUtf8("TechDrawGui__DlgPrefsTechDrawScaleImp"));
        TechDrawGui__DlgPrefsTechDrawScaleImp->resize(440, 342);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__DlgPrefsTechDrawScaleImp->sizePolicy().hasHeightForWidth());
        TechDrawGui__DlgPrefsTechDrawScaleImp->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawScaleImp);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gbScale = new QGroupBox(TechDrawGui__DlgPrefsTechDrawScaleImp);
        gbScale->setObjectName(QString::fromUtf8("gbScale"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbScale->sizePolicy().hasHeightForWidth());
        gbScale->setSizePolicy(sizePolicy1);
        gbScale->setMinimumSize(QSize(0, 113));
        gbScale->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(gbScale);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_13 = new QLabel(gbScale);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font;
        font.setItalic(true);
        label_13->setFont(font);

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        pdsbPageScale = new Gui::PrefDoubleSpinBox(gbScale);
        pdsbPageScale->setObjectName(QString::fromUtf8("pdsbPageScale"));
        sizePolicy1.setHeightForWidth(pdsbPageScale->sizePolicy().hasHeightForWidth());
        pdsbPageScale->setSizePolicy(sizePolicy1);
        pdsbPageScale->setMinimumSize(QSize(174, 0));
        pdsbPageScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbPageScale->setDecimals(2);
        pdsbPageScale->setValue(1.000000000000000);
        pdsbPageScale->setProperty("prefEntry", QVariant(QByteArray("DefaultScale")));
        pdsbPageScale->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(pdsbPageScale, 0, 2, 1, 1);

        label_14 = new QLabel(gbScale);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 1, 0, 1, 1);

        cbViewScaleType = new Gui::PrefComboBox(gbScale);
        cbViewScaleType->addItem(QString());
        cbViewScaleType->addItem(QString());
        cbViewScaleType->addItem(QString());
        cbViewScaleType->setObjectName(QString::fromUtf8("cbViewScaleType"));
        cbViewScaleType->setEnabled(true);
        sizePolicy1.setHeightForWidth(cbViewScaleType->sizePolicy().hasHeightForWidth());
        cbViewScaleType->setSizePolicy(sizePolicy1);
        cbViewScaleType->setMinimumSize(QSize(174, 0));
        cbViewScaleType->setProperty("prefEntry", QVariant(QByteArray("DefaultScaleType")));
        cbViewScaleType->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(cbViewScaleType, 1, 2, 1, 1);

        label_15 = new QLabel(gbScale);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        gridLayout->addWidget(label_15, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        pdsbViewScale = new Gui::PrefDoubleSpinBox(gbScale);
        pdsbViewScale->setObjectName(QString::fromUtf8("pdsbViewScale"));
        pdsbViewScale->setEnabled(false);
        sizePolicy1.setHeightForWidth(pdsbViewScale->sizePolicy().hasHeightForWidth());
        pdsbViewScale->setSizePolicy(sizePolicy1);
        pdsbViewScale->setMinimumSize(QSize(174, 0));
        pdsbViewScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbViewScale->setDecimals(2);
        pdsbViewScale->setValue(1.000000000000000);
        pdsbViewScale->setProperty("prefEntry", QVariant(QByteArray("DefaultViewScale")));
        pdsbViewScale->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout->addWidget(pdsbViewScale, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_4->addWidget(gbScale);

        gb_SizeAdj = new QGroupBox(TechDrawGui__DlgPrefsTechDrawScaleImp);
        gb_SizeAdj->setObjectName(QString::fromUtf8("gb_SizeAdj"));
        sizePolicy1.setHeightForWidth(gb_SizeAdj->sizePolicy().hasHeightForWidth());
        gb_SizeAdj->setSizePolicy(sizePolicy1);
        gb_SizeAdj->setMinimumSize(QSize(0, 141));
        verticalLayout_3 = new QVBoxLayout(gb_SizeAdj);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(gb_SizeAdj);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        pdsbVertexScale = new Gui::PrefDoubleSpinBox(gb_SizeAdj);
        pdsbVertexScale->setObjectName(QString::fromUtf8("pdsbVertexScale"));
        sizePolicy1.setHeightForWidth(pdsbVertexScale->sizePolicy().hasHeightForWidth());
        pdsbVertexScale->setSizePolicy(sizePolicy1);
        pdsbVertexScale->setMinimumSize(QSize(174, 0));
        pdsbVertexScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbVertexScale->setValue(5.000000000000000);
        pdsbVertexScale->setProperty("prefEntry", QVariant(QByteArray("VertexScale")));
        pdsbVertexScale->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_3->addWidget(pdsbVertexScale, 0, 2, 1, 1);

        label_2 = new QLabel(gb_SizeAdj);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        pdsbCenterScale = new Gui::PrefDoubleSpinBox(gb_SizeAdj);
        pdsbCenterScale->setObjectName(QString::fromUtf8("pdsbCenterScale"));
        sizePolicy1.setHeightForWidth(pdsbCenterScale->sizePolicy().hasHeightForWidth());
        pdsbCenterScale->setSizePolicy(sizePolicy1);
        pdsbCenterScale->setMinimumSize(QSize(174, 0));
        pdsbCenterScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbCenterScale->setSingleStep(0.100000000000000);
        pdsbCenterScale->setValue(0.500000000000000);
        pdsbCenterScale->setProperty("prefEntry", QVariant(QByteArray("CenterMarkScale")));
        pdsbCenterScale->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_3->addWidget(pdsbCenterScale, 1, 2, 1, 1);

        label_7 = new QLabel(gb_SizeAdj);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        pdsbTemplateMark = new Gui::PrefUnitSpinBox(gb_SizeAdj);
        pdsbTemplateMark->setObjectName(QString::fromUtf8("pdsbTemplateMark"));
        sizePolicy1.setHeightForWidth(pdsbTemplateMark->sizePolicy().hasHeightForWidth());
        pdsbTemplateMark->setSizePolicy(sizePolicy1);
        pdsbTemplateMark->setMinimumSize(QSize(174, 0));
        pdsbTemplateMark->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbTemplateMark->setValue(3.000000000000000);
        pdsbTemplateMark->setProperty("prefEntry", QVariant(QByteArray("TemplateDotSize")));
        pdsbTemplateMark->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/General")));

        gridLayout_3->addWidget(pdsbTemplateMark, 2, 2, 1, 1);

        label_5 = new QLabel(gb_SizeAdj);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        pdsbSymbolScale = new Gui::PrefDoubleSpinBox(gb_SizeAdj);
        pdsbSymbolScale->setObjectName(QString::fromUtf8("pdsbSymbolScale"));
        pdsbSymbolScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pdsbSymbolScale->setSingleStep(0.100000000000000);
        pdsbSymbolScale->setValue(1.250000000000000);
        pdsbSymbolScale->setProperty("prefEntry", QVariant(QByteArray("SymbolFactor")));
        pdsbSymbolScale->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Decorations")));

        gridLayout_3->addWidget(pdsbSymbolScale, 3, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);


        verticalLayout_4->addWidget(gb_SizeAdj);

        label_12 = new QLabel(TechDrawGui__DlgPrefsTechDrawScaleImp);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        label_12->setFont(font1);
        label_12->setWordWrap(true);

        verticalLayout_4->addWidget(label_12);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawScaleImp);

        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawScaleImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawScaleImp)
    {
        TechDrawGui__DlgPrefsTechDrawScaleImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Scale", nullptr));
#if QT_CONFIG(tooltip)
        TechDrawGui__DlgPrefsTechDrawScaleImp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gbScale->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Scale", nullptr));
        label_13->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Page Scale", nullptr));
#if QT_CONFIG(tooltip)
        pdsbPageScale->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Default scale for new pages", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "View Scale Type", nullptr));
        cbViewScaleType->setItemText(0, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Page", nullptr));
        cbViewScaleType->setItemText(1, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Auto", nullptr));
        cbViewScaleType->setItemText(2, QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Custom", nullptr));

#if QT_CONFIG(tooltip)
        cbViewScaleType->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Default scale for new views", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "View Custom Scale", nullptr));
#if QT_CONFIG(tooltip)
        pdsbViewScale->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Default scale for views if 'View Scale Type' is 'Custom'", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pdsbViewScale->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        gb_SizeAdj->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Size Adjustments", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Vertex Scale", nullptr));
#if QT_CONFIG(tooltip)
        pdsbVertexScale->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Scale of vertex dots. Multiplier of line width.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        pdsbVertexScale->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_2->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Center Mark Scale", nullptr));
#if QT_CONFIG(tooltip)
        pdsbCenterScale->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Size of center marks. Multiplier of vertex size.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        pdsbCenterScale->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label_7->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Template Edit Mark", nullptr));
#if QT_CONFIG(tooltip)
        pdsbTemplateMark->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Size of template field click handles", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Welding Symbol Scale", nullptr));
#if QT_CONFIG(tooltip)
        pdsbSymbolScale->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "Multiplier for size of welding symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawScaleImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawScaleImp: public Ui_DlgPrefsTechDrawScaleImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWSCALE_H
