/********************************************************************************
** Form generated from reading UI file 'SectionCutting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONCUTTING_H
#define UI_SECTIONCUTTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace PartGui {

class Ui_SectionCut
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBoxX;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *cutX;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *flipX;
    QSlider *cutXHS;
    QGroupBox *groupBoxY;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *cutY;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *flipY;
    QSlider *cutYHS;
    QGroupBox *groupBoxZ;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *cutZ;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *flipZ;
    QSlider *cutZHS;
    QGroupBox *CutfaceGB;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    Gui::PrefColorButton *CutColor;
    Gui::PrefCheckBox *autoCutfaceColorCB;
    QLabel *label_7;
    Gui::PrefSlider *CutTransparencyHS;
    QGroupBox *groupBoxIntersecting;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    Gui::PrefColorButton *BFragColor;
    Gui::PrefCheckBox *autoBFColorCB;
    QLabel *label_8;
    Gui::PrefSlider *BFragTransparencyHS;
    QPushButton *RefreshCutPB;
    QSpacerItem *horizontalSpacer_6;
    QDialogButtonBox *buttonBox;
    QCheckBox *keepOnlyCutCB;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PartGui__SectionCut)
    {
        if (PartGui__SectionCut->objectName().isEmpty())
            PartGui__SectionCut->setObjectName(QString::fromUtf8("PartGui__SectionCut"));
        PartGui__SectionCut->resize(230, 514);
        PartGui__SectionCut->setMaximumSize(QSize(450, 16777215));
        gridLayout_6 = new QGridLayout(PartGui__SectionCut);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBoxX = new QGroupBox(PartGui__SectionCut);
        groupBoxX->setObjectName(QString::fromUtf8("groupBoxX"));
        groupBoxX->setMaximumSize(QSize(16777215, 16777215));
        groupBoxX->setCheckable(true);
        groupBoxX->setChecked(false);
        gridLayout = new QGridLayout(groupBoxX);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBoxX);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cutX = new QDoubleSpinBox(groupBoxX);
        cutX->setObjectName(QString::fromUtf8("cutX"));
        cutX->setKeyboardTracking(false);

        gridLayout->addWidget(cutX, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        flipX = new QPushButton(groupBoxX);
        flipX->setObjectName(QString::fromUtf8("flipX"));
        flipX->setCheckable(true);
        flipX->setFlat(false);

        gridLayout->addWidget(flipX, 0, 3, 1, 1);

        cutXHS = new QSlider(groupBoxX);
        cutXHS->setObjectName(QString::fromUtf8("cutXHS"));
        cutXHS->setMaximum(100);
        cutXHS->setSliderPosition(50);
        cutXHS->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(cutXHS, 1, 0, 1, 4);


        gridLayout_6->addWidget(groupBoxX, 0, 0, 1, 3);

        groupBoxY = new QGroupBox(PartGui__SectionCut);
        groupBoxY->setObjectName(QString::fromUtf8("groupBoxY"));
        groupBoxY->setMaximumSize(QSize(16777215, 16777215));
        groupBoxY->setCheckable(true);
        groupBoxY->setChecked(false);
        gridLayout_2 = new QGridLayout(groupBoxY);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBoxY);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        cutY = new QDoubleSpinBox(groupBoxY);
        cutY->setObjectName(QString::fromUtf8("cutY"));
        cutY->setKeyboardTracking(false);

        gridLayout_2->addWidget(cutY, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        flipY = new QPushButton(groupBoxY);
        flipY->setObjectName(QString::fromUtf8("flipY"));
        flipY->setCheckable(true);

        gridLayout_2->addWidget(flipY, 0, 3, 1, 1);

        cutYHS = new QSlider(groupBoxY);
        cutYHS->setObjectName(QString::fromUtf8("cutYHS"));
        cutYHS->setValue(50);
        cutYHS->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(cutYHS, 1, 0, 1, 4);


        gridLayout_6->addWidget(groupBoxY, 1, 0, 1, 3);

        groupBoxZ = new QGroupBox(PartGui__SectionCut);
        groupBoxZ->setObjectName(QString::fromUtf8("groupBoxZ"));
        groupBoxZ->setMaximumSize(QSize(16777215, 16777215));
        groupBoxZ->setCheckable(true);
        groupBoxZ->setChecked(false);
        gridLayout_3 = new QGridLayout(groupBoxZ);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBoxZ);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        cutZ = new QDoubleSpinBox(groupBoxZ);
        cutZ->setObjectName(QString::fromUtf8("cutZ"));
        cutZ->setKeyboardTracking(false);

        gridLayout_3->addWidget(cutZ, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        flipZ = new QPushButton(groupBoxZ);
        flipZ->setObjectName(QString::fromUtf8("flipZ"));
        flipZ->setCheckable(true);

        gridLayout_3->addWidget(flipZ, 0, 3, 1, 1);

        cutZHS = new QSlider(groupBoxZ);
        cutZHS->setObjectName(QString::fromUtf8("cutZHS"));
        cutZHS->setMinimum(0);
        cutZHS->setMaximum(100);
        cutZHS->setValue(50);
        cutZHS->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(cutZHS, 1, 0, 1, 4);


        gridLayout_6->addWidget(groupBoxZ, 2, 0, 1, 3);

        CutfaceGB = new QGroupBox(PartGui__SectionCut);
        CutfaceGB->setObjectName(QString::fromUtf8("CutfaceGB"));
        gridLayout_4 = new QGridLayout(CutfaceGB);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_6 = new QLabel(CutfaceGB);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        CutColor = new Gui::PrefColorButton(CutfaceGB);
        CutColor->setObjectName(QString::fromUtf8("CutColor"));
        CutColor->setEnabled(false);
        CutColor->setMinimumSize(QSize(50, 20));
        CutColor->setMaximumSize(QSize(16777215, 16777215));
        CutColor->setColor(QColor(203, 203, 203));
        CutColor->setProperty("prefEntry", QVariant(QByteArray("DefaultShapeColor")));
        CutColor->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_4->addWidget(CutColor, 0, 1, 1, 1);

        autoCutfaceColorCB = new Gui::PrefCheckBox(CutfaceGB);
        autoCutfaceColorCB->setObjectName(QString::fromUtf8("autoCutfaceColorCB"));
        autoCutfaceColorCB->setMinimumSize(QSize(0, 0));
        autoCutfaceColorCB->setChecked(true);
        autoCutfaceColorCB->setProperty("prefEntry", QVariant(QByteArray("TwoSideRendering")));
        autoCutfaceColorCB->setProperty("prefPath", QVariant(QByteArray("Mod/Part")));

        gridLayout_4->addWidget(autoCutfaceColorCB, 0, 2, 1, 1);

        label_7 = new QLabel(CutfaceGB);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        CutTransparencyHS = new Gui::PrefSlider(CutfaceGB);
        CutTransparencyHS->setObjectName(QString::fromUtf8("CutTransparencyHS"));
        CutTransparencyHS->setEnabled(false);
#if QT_CONFIG(tooltip)
        CutTransparencyHS->setToolTip(QString::fromUtf8("0 %"));
#endif // QT_CONFIG(tooltip)
        CutTransparencyHS->setMaximum(100);
        CutTransparencyHS->setOrientation(Qt::Horizontal);
        CutTransparencyHS->setProperty("prefEntry", QVariant(QByteArray("DefaultShapeTransparency")));
        CutTransparencyHS->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_4->addWidget(CutTransparencyHS, 1, 1, 1, 2);


        gridLayout_6->addWidget(CutfaceGB, 3, 0, 1, 3);

        groupBoxIntersecting = new QGroupBox(PartGui__SectionCut);
        groupBoxIntersecting->setObjectName(QString::fromUtf8("groupBoxIntersecting"));
        groupBoxIntersecting->setMaximumSize(QSize(16777215, 16777215));
        groupBoxIntersecting->setCheckable(true);
        groupBoxIntersecting->setChecked(false);
        gridLayout_5 = new QGridLayout(groupBoxIntersecting);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_9 = new QLabel(groupBoxIntersecting);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        BFragColor = new Gui::PrefColorButton(groupBoxIntersecting);
        BFragColor->setObjectName(QString::fromUtf8("BFragColor"));
        BFragColor->setEnabled(false);
        BFragColor->setMinimumSize(QSize(50, 20));
        BFragColor->setMaximumSize(QSize(16777215, 16777215));
        BFragColor->setColor(QColor(203, 203, 203));
        BFragColor->setProperty("prefEntry", QVariant(QByteArray("DefaultShapeColor")));
        BFragColor->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_5->addWidget(BFragColor, 0, 1, 1, 1);

        autoBFColorCB = new Gui::PrefCheckBox(groupBoxIntersecting);
        autoBFColorCB->setObjectName(QString::fromUtf8("autoBFColorCB"));
        autoBFColorCB->setMinimumSize(QSize(0, 0));
        autoBFColorCB->setChecked(true);
        autoBFColorCB->setProperty("prefEntry", QVariant(QByteArray("TwoSideRendering")));
        autoBFColorCB->setProperty("prefPath", QVariant(QByteArray("Mod/Part")));

        gridLayout_5->addWidget(autoBFColorCB, 0, 2, 1, 1);

        label_8 = new QLabel(groupBoxIntersecting);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(label_8, 1, 0, 1, 1);

        BFragTransparencyHS = new Gui::PrefSlider(groupBoxIntersecting);
        BFragTransparencyHS->setObjectName(QString::fromUtf8("BFragTransparencyHS"));
        BFragTransparencyHS->setEnabled(false);
#if QT_CONFIG(tooltip)
        BFragTransparencyHS->setToolTip(QString::fromUtf8("0 %"));
#endif // QT_CONFIG(tooltip)
        BFragTransparencyHS->setMaximum(100);
        BFragTransparencyHS->setOrientation(Qt::Horizontal);
        BFragTransparencyHS->setProperty("prefEntry", QVariant(QByteArray("DefaultShapeTransparency")));
        BFragTransparencyHS->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_5->addWidget(BFragTransparencyHS, 1, 1, 1, 2);


        gridLayout_6->addWidget(groupBoxIntersecting, 4, 0, 1, 3);

        RefreshCutPB = new QPushButton(PartGui__SectionCut);
        RefreshCutPB->setObjectName(QString::fromUtf8("RefreshCutPB"));
        RefreshCutPB->setEnabled(true);

        gridLayout_6->addWidget(RefreshCutPB, 5, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PartGui__SectionCut);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_6->addWidget(buttonBox, 5, 2, 1, 1);

        keepOnlyCutCB = new QCheckBox(PartGui__SectionCut);
        keepOnlyCutCB->setObjectName(QString::fromUtf8("keepOnlyCutCB"));

        gridLayout_6->addWidget(keepOnlyCutCB, 6, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 7, 1, 1, 1);

        QWidget::setTabOrder(groupBoxX, cutX);
        QWidget::setTabOrder(cutX, flipX);
        QWidget::setTabOrder(flipX, groupBoxY);
        QWidget::setTabOrder(groupBoxY, cutY);
        QWidget::setTabOrder(cutY, flipY);
        QWidget::setTabOrder(flipY, groupBoxZ);
        QWidget::setTabOrder(groupBoxZ, cutZ);
        QWidget::setTabOrder(cutZ, flipZ);

        retranslateUi(PartGui__SectionCut);
        QObject::connect(buttonBox, SIGNAL(rejected()), PartGui__SectionCut, SLOT(reject()));
        QObject::connect(autoCutfaceColorCB, SIGNAL(toggled(bool)), CutTransparencyHS, SLOT(setDisabled(bool)));
        QObject::connect(autoCutfaceColorCB, SIGNAL(toggled(bool)), CutColor, SLOT(setDisabled(bool)));
        QObject::connect(autoBFColorCB, SIGNAL(toggled(bool)), BFragColor, SLOT(setDisabled(bool)));
        QObject::connect(autoBFColorCB, SIGNAL(toggled(bool)), BFragTransparencyHS, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(PartGui__SectionCut);
    } // setupUi

    void retranslateUi(QDialog *PartGui__SectionCut)
    {
        PartGui__SectionCut->setWindowTitle(QCoreApplication::translate("PartGui::SectionCut", "Persistent Section Cutting", nullptr));
        groupBoxX->setTitle(QCoreApplication::translate("PartGui::SectionCut", "Cutting X", nullptr));
        label->setText(QCoreApplication::translate("PartGui::SectionCut", "Offset", nullptr));
        flipX->setText(QCoreApplication::translate("PartGui::SectionCut", "Flip", nullptr));
        groupBoxY->setTitle(QCoreApplication::translate("PartGui::SectionCut", "Cutting Y", nullptr));
        label_2->setText(QCoreApplication::translate("PartGui::SectionCut", "Offset", nullptr));
        flipY->setText(QCoreApplication::translate("PartGui::SectionCut", "Flip", nullptr));
        groupBoxZ->setTitle(QCoreApplication::translate("PartGui::SectionCut", "Cutting Z", nullptr));
        label_3->setText(QCoreApplication::translate("PartGui::SectionCut", "Offset", nullptr));
        flipZ->setText(QCoreApplication::translate("PartGui::SectionCut", "Flip", nullptr));
        CutfaceGB->setTitle(QCoreApplication::translate("PartGui::SectionCut", "Cut face", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "Color of cut face", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("PartGui::SectionCut", "Color", nullptr));
#if QT_CONFIG(tooltip)
        autoCutfaceColorCB->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "If checked, the color and transparency\n"
"will be taken from the cut objects.\n"
"Works only properly if all objects\n"
"have the same values.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoCutfaceColorCB->setText(QCoreApplication::translate("PartGui::SectionCut", "Auto", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "Transparency of cut face", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("PartGui::SectionCut", "Transparency", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxIntersecting->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "Allows to cut objects intersecting each other\n"
"for the price that all cut objects\n"
"will get the same color", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxIntersecting->setTitle(QCoreApplication::translate("PartGui::SectionCut", "Cut intersecting objects", nullptr));
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "Color of cut face", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("PartGui::SectionCut", "Color", nullptr));
#if QT_CONFIG(tooltip)
        BFragColor->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "Color for all objects", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        autoBFColorCB->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "If checked, the color and transparency\n"
"will be taken from the cut objects.\n"
"Works only properly if all objects\n"
"have the same values.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoBFColorCB->setText(QCoreApplication::translate("PartGui::SectionCut", "Auto", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "Transparency of cut face", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("PartGui::SectionCut", "Transparency", nullptr));
#if QT_CONFIG(tooltip)
        RefreshCutPB->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "Refreshes the list of visible objects", nullptr));
#endif // QT_CONFIG(tooltip)
        RefreshCutPB->setText(QCoreApplication::translate("PartGui::SectionCut", "Refresh view", nullptr));
#if QT_CONFIG(tooltip)
        keepOnlyCutCB->setToolTip(QCoreApplication::translate("PartGui::SectionCut", "When the dialog is closed,\n"
"only created cuts will be visible", nullptr));
#endif // QT_CONFIG(tooltip)
        keepOnlyCutCB->setText(QCoreApplication::translate("PartGui::SectionCut", "Keep only cuts visible when closing", nullptr));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class SectionCut: public Ui_SectionCut {};
} // namespace Ui
} // namespace PartGui

#endif // UI_SECTIONCUTTING_H
