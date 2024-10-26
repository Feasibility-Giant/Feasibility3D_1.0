/********************************************************************************
** Form generated from reading UI file 'DlgPrefsTechDrawHLR.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSTECHDRAWHLR_H
#define UI_DLGPREFSTECHDRAWHLR_H

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

class Ui_DlgPrefsTechDrawHLRImp
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbMisc;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    Gui::PrefCheckBox *pcbPolygon;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer;
    Gui::PrefCheckBox *pcbHardViz;
    Gui::PrefCheckBox *pcbHardHid;
    Gui::PrefCheckBox *pcbSmoothViz;
    Gui::PrefCheckBox *pcbSmoothHid;
    Gui::PrefCheckBox *pcbSeamViz;
    Gui::PrefCheckBox *pcbSeamHid;
    Gui::PrefCheckBox *pcbIsoViz;
    Gui::PrefCheckBox *pcbIsoHid;
    QLabel *label_19;
    Gui::PrefSpinBox *psbIsoCount;
    QLabel *label_20;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__DlgPrefsTechDrawHLRImp)
    {
        if (TechDrawGui__DlgPrefsTechDrawHLRImp->objectName().isEmpty())
            TechDrawGui__DlgPrefsTechDrawHLRImp->setObjectName(QString::fromUtf8("TechDrawGui__DlgPrefsTechDrawHLRImp"));
        TechDrawGui__DlgPrefsTechDrawHLRImp->resize(440, 307);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__DlgPrefsTechDrawHLRImp->sizePolicy().hasHeightForWidth());
        TechDrawGui__DlgPrefsTechDrawHLRImp->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__DlgPrefsTechDrawHLRImp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gbMisc = new QGroupBox(TechDrawGui__DlgPrefsTechDrawHLRImp);
        gbMisc->setObjectName(QString::fromUtf8("gbMisc"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbMisc->sizePolicy().hasHeightForWidth());
        gbMisc->setSizePolicy(sizePolicy1);
        gbMisc->setMinimumSize(QSize(0, 225));
        gbMisc->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(gbMisc);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pcbPolygon = new Gui::PrefCheckBox(gbMisc);
        pcbPolygon->setObjectName(QString::fromUtf8("pcbPolygon"));
        sizePolicy1.setHeightForWidth(pcbPolygon->sizePolicy().hasHeightForWidth());
        pcbPolygon->setSizePolicy(sizePolicy1);
        QFont font;
        font.setItalic(true);
        pcbPolygon->setFont(font);
        pcbPolygon->setProperty("prefEntry", QVariant(QByteArray("UsePolygon")));
        pcbPolygon->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbPolygon, 0, 0, 1, 1);

        label_17 = new QLabel(gbMisc);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_6->addWidget(label_17, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        label_18 = new QLabel(gbMisc);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_6->addWidget(label_18, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 3, 1, 1);

        pcbHardViz = new Gui::PrefCheckBox(gbMisc);
        pcbHardViz->setObjectName(QString::fromUtf8("pcbHardViz"));
        pcbHardViz->setEnabled(false);
        sizePolicy1.setHeightForWidth(pcbHardViz->sizePolicy().hasHeightForWidth());
        pcbHardViz->setSizePolicy(sizePolicy1);
        pcbHardViz->setFont(font);
        pcbHardViz->setFocusPolicy(Qt::NoFocus);
        pcbHardViz->setCheckable(true);
        pcbHardViz->setChecked(true);
        pcbHardViz->setProperty("prefEntry", QVariant(QByteArray("HardViz")));
        pcbHardViz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbHardViz, 2, 0, 1, 1);

        pcbHardHid = new Gui::PrefCheckBox(gbMisc);
        pcbHardHid->setObjectName(QString::fromUtf8("pcbHardHid"));
        sizePolicy1.setHeightForWidth(pcbHardHid->sizePolicy().hasHeightForWidth());
        pcbHardHid->setSizePolicy(sizePolicy1);
        pcbHardHid->setFont(font);
        pcbHardHid->setProperty("prefEntry", QVariant(QByteArray("HardHid")));
        pcbHardHid->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbHardHid, 2, 2, 1, 1);

        pcbSmoothViz = new Gui::PrefCheckBox(gbMisc);
        pcbSmoothViz->setObjectName(QString::fromUtf8("pcbSmoothViz"));
        sizePolicy1.setHeightForWidth(pcbSmoothViz->sizePolicy().hasHeightForWidth());
        pcbSmoothViz->setSizePolicy(sizePolicy1);
        pcbSmoothViz->setFont(font);
        pcbSmoothViz->setChecked(true);
        pcbSmoothViz->setProperty("prefEntry", QVariant(QByteArray("SmoothViz")));
        pcbSmoothViz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbSmoothViz, 3, 0, 1, 1);

        pcbSmoothHid = new Gui::PrefCheckBox(gbMisc);
        pcbSmoothHid->setObjectName(QString::fromUtf8("pcbSmoothHid"));
        sizePolicy1.setHeightForWidth(pcbSmoothHid->sizePolicy().hasHeightForWidth());
        pcbSmoothHid->setSizePolicy(sizePolicy1);
        pcbSmoothHid->setFont(font);
        pcbSmoothHid->setProperty("prefEntry", QVariant(QByteArray("SmoothHid")));
        pcbSmoothHid->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbSmoothHid, 3, 2, 1, 1);

        pcbSeamViz = new Gui::PrefCheckBox(gbMisc);
        pcbSeamViz->setObjectName(QString::fromUtf8("pcbSeamViz"));
        sizePolicy1.setHeightForWidth(pcbSeamViz->sizePolicy().hasHeightForWidth());
        pcbSeamViz->setSizePolicy(sizePolicy1);
        pcbSeamViz->setFont(font);
        pcbSeamViz->setChecked(false);
        pcbSeamViz->setProperty("prefEntry", QVariant(QByteArray("SeamViz")));
        pcbSeamViz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbSeamViz, 4, 0, 1, 1);

        pcbSeamHid = new Gui::PrefCheckBox(gbMisc);
        pcbSeamHid->setObjectName(QString::fromUtf8("pcbSeamHid"));
        sizePolicy1.setHeightForWidth(pcbSeamHid->sizePolicy().hasHeightForWidth());
        pcbSeamHid->setSizePolicy(sizePolicy1);
        pcbSeamHid->setFont(font);
        pcbSeamHid->setProperty("prefEntry", QVariant(QByteArray("SeamHid")));
        pcbSeamHid->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbSeamHid, 4, 2, 1, 1);

        pcbIsoViz = new Gui::PrefCheckBox(gbMisc);
        pcbIsoViz->setObjectName(QString::fromUtf8("pcbIsoViz"));
        sizePolicy1.setHeightForWidth(pcbIsoViz->sizePolicy().hasHeightForWidth());
        pcbIsoViz->setSizePolicy(sizePolicy1);
        pcbIsoViz->setFont(font);
        pcbIsoViz->setProperty("prefEntry", QVariant(QByteArray("IsoViz")));
        pcbIsoViz->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbIsoViz, 5, 0, 1, 1);

        pcbIsoHid = new Gui::PrefCheckBox(gbMisc);
        pcbIsoHid->setObjectName(QString::fromUtf8("pcbIsoHid"));
        sizePolicy1.setHeightForWidth(pcbIsoHid->sizePolicy().hasHeightForWidth());
        pcbIsoHid->setSizePolicy(sizePolicy1);
        pcbIsoHid->setFont(font);
        pcbIsoHid->setProperty("prefEntry", QVariant(QByteArray("IsoHid")));
        pcbIsoHid->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(pcbIsoHid, 5, 2, 1, 1);

        label_19 = new QLabel(gbMisc);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(0, 0));
        label_19->setFont(font);

        gridLayout_6->addWidget(label_19, 6, 0, 1, 1);

        psbIsoCount = new Gui::PrefSpinBox(gbMisc);
        psbIsoCount->setObjectName(QString::fromUtf8("psbIsoCount"));
        sizePolicy1.setHeightForWidth(psbIsoCount->sizePolicy().hasHeightForWidth());
        psbIsoCount->setSizePolicy(sizePolicy1);
        psbIsoCount->setMaximumSize(QSize(140, 16777215));
        psbIsoCount->setAlignment(Qt::AlignRight);
        psbIsoCount->setProperty("prefEntry", QVariant(QByteArray("IsoCount")));
        psbIsoCount->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/HLR")));

        gridLayout_6->addWidget(psbIsoCount, 6, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_6);


        verticalLayout_2->addWidget(gbMisc);

        label_20 = new QLabel(TechDrawGui__DlgPrefsTechDrawHLRImp);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        label_20->setFont(font1);
        label_20->setWordWrap(true);

        verticalLayout_2->addWidget(label_20);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__DlgPrefsTechDrawHLRImp);

        QMetaObject::connectSlotsByName(TechDrawGui__DlgPrefsTechDrawHLRImp);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__DlgPrefsTechDrawHLRImp)
    {
        TechDrawGui__DlgPrefsTechDrawHLRImp->setWindowTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "HLR", nullptr));
#if QT_CONFIG(tooltip)
        TechDrawGui__DlgPrefsTechDrawHLRImp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gbMisc->setTitle(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Hidden Line Removal", nullptr));
#if QT_CONFIG(tooltip)
        pcbPolygon->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Use an approximation to find hidden lines.\n"
"Fast, but result is a collection of short straight lines.", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbPolygon->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Use Polygon Approximation", nullptr));
        label_17->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Visible", nullptr));
        label_18->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Hidden", nullptr));
#if QT_CONFIG(tooltip)
        pcbHardViz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show hard and outline edges (always shown)", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbHardViz->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show Hard Lines", nullptr));
#if QT_CONFIG(tooltip)
        pcbHardHid->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show hidden hard and outline edges", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbHardHid->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show Hard Lines", nullptr));
#if QT_CONFIG(tooltip)
        pcbSmoothViz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show smooth lines", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbSmoothViz->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show Smooth Lines", nullptr));
#if QT_CONFIG(tooltip)
        pcbSmoothHid->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show hidden smooth edges", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbSmoothHid->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show Smooth Lines", nullptr));
#if QT_CONFIG(tooltip)
        pcbSeamViz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show seam lines", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbSeamViz->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show Seam Lines", nullptr));
#if QT_CONFIG(tooltip)
        pcbSeamHid->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show hidden seam lines", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbSeamHid->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show Seam Lines", nullptr));
#if QT_CONFIG(tooltip)
        pcbIsoViz->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Make lines of equal parameterization", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbIsoViz->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show UV ISO Lines", nullptr));
#if QT_CONFIG(tooltip)
        pcbIsoHid->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show hidden equal parameterization lines", nullptr));
#endif // QT_CONFIG(tooltip)
        pcbIsoHid->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Show UV ISO Lines", nullptr));
        label_19->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "ISO Count", nullptr));
#if QT_CONFIG(tooltip)
        psbIsoCount->setToolTip(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "Number of ISO lines per face edge", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("TechDrawGui::DlgPrefsTechDrawHLRImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> Items in <span style=\" font-style:italic;\">italics</span> are default values for new objects. They have no effect on existing objects.</p></body></html>", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class DlgPrefsTechDrawHLRImp: public Ui_DlgPrefsTechDrawHLRImp {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_DLGPREFSTECHDRAWHLR_H
