/********************************************************************************
** Form generated from reading UI file 'DlgSettingsUI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSUI_H
#define UI_DLGSETTINGSUI_H

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

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsUI
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label1;
    Gui::PrefColorButton *ThemeAccentColor1;
    QLabel *label2;
    QLabel *label3;
    QLabel *styleSheetLabel;
    QLabel *label_2;
    Gui::PrefColorButton *ThemeAccentColor2;
    Gui::PrefColorButton *ThemeAccentColor3;
    Gui::PrefComboBox *StyleSheets;
    Gui::PrefComboBox *OverlayStyleSheets;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    Gui::PrefCheckBox *hideInternalNamesCheckBox;
    Gui::PrefSpinBox *iconSizeSpinBox;
    QLabel *rowSpacingLabel;
    Gui::PrefCheckBox *resizableColumnsCheckBox;
    QLabel *iconSizeLabel;
    Gui::PrefSpinBox *rowSpacingSpinBox;
    Gui::PrefCheckBox *showVisibilityIconCheckBox;
    Gui::PrefCheckBox *hideHeaderCheckBox;
    Gui::PrefCheckBox *hideTreeViewScrollBarCheckBox;
    Gui::PrefCheckBox *hideDescriptionCheckBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    Gui::PrefCheckBox *hideTabBarCheckBox;
    Gui::PrefCheckBox *hintShowTabBarCheckBox;
    Gui::PrefCheckBox *hidePropertyViewScrollBarCheckBox;
    Gui::PrefCheckBox *overlayAutoHideCheckBox;
    Gui::PrefCheckBox *mouseClickPassThroughCheckBox;
    Gui::PrefCheckBox *mouseWheelPassThroughCheckBox;
    QSpacerItem *spacer_3;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsUI)
    {
        if (Gui__Dialog__DlgSettingsUI->objectName().isEmpty())
            Gui__Dialog__DlgSettingsUI->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsUI"));
        Gui__Dialog__DlgSettingsUI->resize(405, 1065);
        verticalLayout = new QVBoxLayout(Gui__Dialog__DlgSettingsUI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Gui__Dialog__DlgSettingsUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        ThemeAccentColor1 = new Gui::PrefColorButton(groupBox);
        ThemeAccentColor1->setObjectName(QString::fromUtf8("ThemeAccentColor1"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThemeAccentColor1->sizePolicy().hasHeightForWidth());
        ThemeAccentColor1->setSizePolicy(sizePolicy);
        ThemeAccentColor1->setProperty("color", QVariant(QColor(85, 123, 182)));
        ThemeAccentColor1->setProperty("prefEntry", QVariant(QByteArray("ThemeAccentColor1")));
        ThemeAccentColor1->setProperty("prefPath", QVariant(QByteArray("Themes")));

        gridLayout->addWidget(ThemeAccentColor1, 0, 1, 1, 1);

        label2 = new QLabel(groupBox);
        label2->setObjectName(QString::fromUtf8("label2"));

        gridLayout->addWidget(label2, 1, 0, 1, 1);

        label3 = new QLabel(groupBox);
        label3->setObjectName(QString::fromUtf8("label3"));

        gridLayout->addWidget(label3, 2, 0, 1, 1);

        styleSheetLabel = new QLabel(groupBox);
        styleSheetLabel->setObjectName(QString::fromUtf8("styleSheetLabel"));

        gridLayout->addWidget(styleSheetLabel, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        ThemeAccentColor2 = new Gui::PrefColorButton(groupBox);
        ThemeAccentColor2->setObjectName(QString::fromUtf8("ThemeAccentColor2"));
        sizePolicy.setHeightForWidth(ThemeAccentColor2->sizePolicy().hasHeightForWidth());
        ThemeAccentColor2->setSizePolicy(sizePolicy);
        ThemeAccentColor2->setProperty("color", QVariant(QColor(85, 123, 182)));
        ThemeAccentColor2->setProperty("prefEntry", QVariant(QByteArray("ThemeAccentColor2")));
        ThemeAccentColor2->setProperty("prefPath", QVariant(QByteArray("Themes")));

        gridLayout->addWidget(ThemeAccentColor2, 1, 1, 1, 1);

        ThemeAccentColor3 = new Gui::PrefColorButton(groupBox);
        ThemeAccentColor3->setObjectName(QString::fromUtf8("ThemeAccentColor3"));
        sizePolicy.setHeightForWidth(ThemeAccentColor3->sizePolicy().hasHeightForWidth());
        ThemeAccentColor3->setSizePolicy(sizePolicy);
        ThemeAccentColor3->setProperty("color", QVariant(QColor(85, 123, 182)));
        ThemeAccentColor3->setProperty("prefEntry", QVariant(QByteArray("ThemeAccentColor3")));
        ThemeAccentColor3->setProperty("prefPath", QVariant(QByteArray("Themes")));

        gridLayout->addWidget(ThemeAccentColor3, 2, 1, 1, 1);

        StyleSheets = new Gui::PrefComboBox(groupBox);
        StyleSheets->setObjectName(QString::fromUtf8("StyleSheets"));
        StyleSheets->setProperty("prefPath", QVariant(QByteArray("MainWindow")));
        StyleSheets->setProperty("prefEntry", QVariant(QByteArray("StyleSheet")));
        StyleSheets->setProperty("prefType", QVariant(QByteArray("")));

        gridLayout->addWidget(StyleSheets, 3, 1, 1, 1);

        OverlayStyleSheets = new Gui::PrefComboBox(groupBox);
        OverlayStyleSheets->setObjectName(QString::fromUtf8("OverlayStyleSheets"));
        OverlayStyleSheets->setProperty("prefPath", QVariant(QByteArray("MainWindow")));
        OverlayStyleSheets->setProperty("prefEntry", QVariant(QByteArray("OverlayActiveStyleSheet")));
        OverlayStyleSheets->setProperty("prefType", QVariant(QByteArray("")));

        gridLayout->addWidget(OverlayStyleSheets, 4, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);

        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgSettingsUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hideInternalNamesCheckBox = new Gui::PrefCheckBox(groupBox_2);
        hideInternalNamesCheckBox->setObjectName(QString::fromUtf8("hideInternalNamesCheckBox"));
        hideInternalNamesCheckBox->setChecked(true);
        hideInternalNamesCheckBox->setProperty("prefEntry", QVariant(QByteArray("HideInternalNames")));
        hideInternalNamesCheckBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout1->addWidget(hideInternalNamesCheckBox, 5, 0, 1, 2);

        iconSizeSpinBox = new Gui::PrefSpinBox(groupBox_2);
        iconSizeSpinBox->setObjectName(QString::fromUtf8("iconSizeSpinBox"));
        iconSizeSpinBox->setSingleStep(1);
        iconSizeSpinBox->setValue(16);
        iconSizeSpinBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));
        iconSizeSpinBox->setProperty("prefEntry", QVariant(QByteArray("IconSize")));

        gridLayout1->addWidget(iconSizeSpinBox, 0, 1, 1, 1);

        rowSpacingLabel = new QLabel(groupBox_2);
        rowSpacingLabel->setObjectName(QString::fromUtf8("rowSpacingLabel"));

        gridLayout1->addWidget(rowSpacingLabel, 1, 0, 1, 1);

        resizableColumnsCheckBox = new Gui::PrefCheckBox(groupBox_2);
        resizableColumnsCheckBox->setObjectName(QString::fromUtf8("resizableColumnsCheckBox"));
        resizableColumnsCheckBox->setProperty("prefEntry", QVariant(QByteArray("ResizableColumn")));
        resizableColumnsCheckBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout1->addWidget(resizableColumnsCheckBox, 2, 0, 1, 2);

        iconSizeLabel = new QLabel(groupBox_2);
        iconSizeLabel->setObjectName(QString::fromUtf8("iconSizeLabel"));

        gridLayout1->addWidget(iconSizeLabel, 0, 0, 1, 1);

        rowSpacingSpinBox = new Gui::PrefSpinBox(groupBox_2);
        rowSpacingSpinBox->setObjectName(QString::fromUtf8("rowSpacingSpinBox"));
        rowSpacingSpinBox->setSingleStep(1);
        rowSpacingSpinBox->setValue(0);
        rowSpacingSpinBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));
        rowSpacingSpinBox->setProperty("prefEntry", QVariant(QByteArray("ItemSpacing")));

        gridLayout1->addWidget(rowSpacingSpinBox, 1, 1, 1, 1);

        showVisibilityIconCheckBox = new Gui::PrefCheckBox(groupBox_2);
        showVisibilityIconCheckBox->setObjectName(QString::fromUtf8("showVisibilityIconCheckBox"));
        showVisibilityIconCheckBox->setChecked(true);
        showVisibilityIconCheckBox->setProperty("prefEntry", QVariant(QByteArray("VisibilityIcon")));
        showVisibilityIconCheckBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout1->addWidget(showVisibilityIconCheckBox, 3, 0, 1, 2);

        hideHeaderCheckBox = new Gui::PrefCheckBox(groupBox_2);
        hideHeaderCheckBox->setObjectName(QString::fromUtf8("hideHeaderCheckBox"));
        hideHeaderCheckBox->setChecked(true);
        hideHeaderCheckBox->setProperty("prefEntry", QVariant(QByteArray("HideHeaderView")));
        hideHeaderCheckBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout1->addWidget(hideHeaderCheckBox, 7, 0, 1, 2);

        hideTreeViewScrollBarCheckBox = new Gui::PrefCheckBox(groupBox_2);
        hideTreeViewScrollBarCheckBox->setObjectName(QString::fromUtf8("hideTreeViewScrollBarCheckBox"));
        hideTreeViewScrollBarCheckBox->setChecked(true);
        hideTreeViewScrollBarCheckBox->setProperty("prefEntry", QVariant(QByteArray("HideScrollBar")));
        hideTreeViewScrollBarCheckBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout1->addWidget(hideTreeViewScrollBarCheckBox, 6, 0, 1, 2);

        hideDescriptionCheckBox = new Gui::PrefCheckBox(groupBox_2);
        hideDescriptionCheckBox->setObjectName(QString::fromUtf8("hideDescriptionCheckBox"));
        hideDescriptionCheckBox->setChecked(true);
        hideDescriptionCheckBox->setProperty("prefEntry", QVariant(QByteArray("HideColumn")));
        hideDescriptionCheckBox->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout1->addWidget(hideDescriptionCheckBox, 4, 0, 1, 2);

        gridLayout1->setColumnStretch(0, 2);
        gridLayout1->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Gui__Dialog__DlgSettingsUI);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        hideTabBarCheckBox = new Gui::PrefCheckBox(groupBox_3);
        hideTabBarCheckBox->setObjectName(QString::fromUtf8("hideTabBarCheckBox"));
        hideTabBarCheckBox->setChecked(true);
        hideTabBarCheckBox->setProperty("prefEntry", QVariant(QByteArray("DockOverlayHideTabBar")));
        hideTabBarCheckBox->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_2->addWidget(hideTabBarCheckBox, 0, 0, 1, 1);

        hintShowTabBarCheckBox = new Gui::PrefCheckBox(groupBox_3);
        hintShowTabBarCheckBox->setObjectName(QString::fromUtf8("hintShowTabBarCheckBox"));
        hintShowTabBarCheckBox->setProperty("prefEntry", QVariant(QByteArray("DockOverlayHintTabBar")));
        hintShowTabBarCheckBox->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_2->addWidget(hintShowTabBarCheckBox, 1, 0, 1, 1);

        hidePropertyViewScrollBarCheckBox = new Gui::PrefCheckBox(groupBox_3);
        hidePropertyViewScrollBarCheckBox->setObjectName(QString::fromUtf8("hidePropertyViewScrollBarCheckBox"));
        hidePropertyViewScrollBarCheckBox->setProperty("prefEntry", QVariant(QByteArray("DockOverlayHidePropertyViewScrollBar")));
        hidePropertyViewScrollBarCheckBox->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_2->addWidget(hidePropertyViewScrollBarCheckBox, 2, 0, 1, 1);

        overlayAutoHideCheckBox = new Gui::PrefCheckBox(groupBox_3);
        overlayAutoHideCheckBox->setObjectName(QString::fromUtf8("overlayAutoHideCheckBox"));
        overlayAutoHideCheckBox->setChecked(true);
        overlayAutoHideCheckBox->setProperty("prefEntry", QVariant(QByteArray("DockOverlayAutoView")));
        overlayAutoHideCheckBox->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_2->addWidget(overlayAutoHideCheckBox, 3, 0, 1, 1);

        mouseClickPassThroughCheckBox = new Gui::PrefCheckBox(groupBox_3);
        mouseClickPassThroughCheckBox->setObjectName(QString::fromUtf8("mouseClickPassThroughCheckBox"));
        mouseClickPassThroughCheckBox->setChecked(true);
        mouseClickPassThroughCheckBox->setProperty("prefEntry", QVariant(QByteArray("DockOverlayAutoMouseThrough")));
        mouseClickPassThroughCheckBox->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_2->addWidget(mouseClickPassThroughCheckBox, 4, 0, 1, 1);

        mouseWheelPassThroughCheckBox = new Gui::PrefCheckBox(groupBox_3);
        mouseWheelPassThroughCheckBox->setObjectName(QString::fromUtf8("mouseWheelPassThroughCheckBox"));
        mouseWheelPassThroughCheckBox->setChecked(true);
        mouseWheelPassThroughCheckBox->setProperty("prefEntry", QVariant(QByteArray("DockOverlayWheelPassThrough")));
        mouseWheelPassThroughCheckBox->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_2->addWidget(mouseWheelPassThroughCheckBox, 5, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        spacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer_3);

#if QT_CONFIG(shortcut)
        label1->setBuddy(ThemeAccentColor1);
        label2->setBuddy(ThemeAccentColor2);
        label3->setBuddy(ThemeAccentColor3);
        styleSheetLabel->setBuddy(StyleSheets);
        label_2->setBuddy(OverlayStyleSheets);
        rowSpacingLabel->setBuddy(rowSpacingSpinBox);
        iconSizeLabel->setBuddy(iconSizeSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(ThemeAccentColor1, ThemeAccentColor2);
        QWidget::setTabOrder(ThemeAccentColor2, ThemeAccentColor3);
        QWidget::setTabOrder(ThemeAccentColor3, StyleSheets);
        QWidget::setTabOrder(StyleSheets, OverlayStyleSheets);
        QWidget::setTabOrder(OverlayStyleSheets, iconSizeSpinBox);
        QWidget::setTabOrder(iconSizeSpinBox, rowSpacingSpinBox);
        QWidget::setTabOrder(rowSpacingSpinBox, resizableColumnsCheckBox);
        QWidget::setTabOrder(resizableColumnsCheckBox, showVisibilityIconCheckBox);
        QWidget::setTabOrder(showVisibilityIconCheckBox, hideDescriptionCheckBox);
        QWidget::setTabOrder(hideDescriptionCheckBox, hideInternalNamesCheckBox);
        QWidget::setTabOrder(hideInternalNamesCheckBox, hideTreeViewScrollBarCheckBox);
        QWidget::setTabOrder(hideTreeViewScrollBarCheckBox, hideHeaderCheckBox);
        QWidget::setTabOrder(hideHeaderCheckBox, hideTabBarCheckBox);
        QWidget::setTabOrder(hideTabBarCheckBox, hintShowTabBarCheckBox);
        QWidget::setTabOrder(hintShowTabBarCheckBox, hidePropertyViewScrollBarCheckBox);
        QWidget::setTabOrder(hidePropertyViewScrollBarCheckBox, overlayAutoHideCheckBox);
        QWidget::setTabOrder(overlayAutoHideCheckBox, mouseClickPassThroughCheckBox);
        QWidget::setTabOrder(mouseClickPassThroughCheckBox, mouseWheelPassThroughCheckBox);

        retranslateUi(Gui__Dialog__DlgSettingsUI);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsUI);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsUI)
    {
        Gui__Dialog__DlgSettingsUI->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "UI", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Theme customization", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "This section lets you customize your current theme. The offered settings are optional for theme developers so they may or may not have an effect in your current theme.", nullptr));
        label1->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Accent color 1", nullptr));
#if QT_CONFIG(tooltip)
        ThemeAccentColor1->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "This color might be used by your theme to let you customize it.", nullptr));
#endif // QT_CONFIG(tooltip)
        label2->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Accent color 2", nullptr));
        label3->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Accent color 3", nullptr));
        styleSheetLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Style sheet (advanced):", nullptr));
        label_2->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Overlay style sheet:", nullptr));
#if QT_CONFIG(tooltip)
        ThemeAccentColor2->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "This color might be used by your theme to let you customize it.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ThemeAccentColor3->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "This color might be used by your theme to let you customize it.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        StyleSheets->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Style sheet how user interface will look like", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Tree view", nullptr));
#if QT_CONFIG(tooltip)
        hideInternalNamesCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide extra tree view column - Internal Names.", nullptr));
#endif // QT_CONFIG(tooltip)
        hideInternalNamesCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide Internal Names", nullptr));
#if QT_CONFIG(tooltip)
        iconSizeSpinBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Icon size override, set to 0 for the default value.", nullptr));
#endif // QT_CONFIG(tooltip)
        rowSpacingLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Additional row spacing", nullptr));
#if QT_CONFIG(tooltip)
        resizableColumnsCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Allow tree view columns to be manually resized.", nullptr));
#endif // QT_CONFIG(tooltip)
        resizableColumnsCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Resizable columns", nullptr));
        iconSizeLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Icon size", nullptr));
#if QT_CONFIG(tooltip)
        rowSpacingSpinBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Additional spacing for tree view rows. Bigger values will increase row item heights.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        showVisibilityIconCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "If enabled, show an eye icon before the tree view items, showing their visibility status. When clicked the visibility is toggled.", nullptr));
#endif // QT_CONFIG(tooltip)
        showVisibilityIconCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Show visibility icon", nullptr));
#if QT_CONFIG(tooltip)
        hideHeaderCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide header with column names from the tree view.", nullptr));
#endif // QT_CONFIG(tooltip)
        hideHeaderCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide header", nullptr));
#if QT_CONFIG(tooltip)
        hideTreeViewScrollBarCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide scroll bar from the tree view, scrolling will still be possible using mouse wheel.", nullptr));
#endif // QT_CONFIG(tooltip)
        hideTreeViewScrollBarCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide scroll bar", nullptr));
#if QT_CONFIG(tooltip)
        hideDescriptionCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide column with object description in tree view.", nullptr));
#endif // QT_CONFIG(tooltip)
        hideDescriptionCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide description", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Overlay", nullptr));
#if QT_CONFIG(tooltip)
        hideTabBarCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide tab bar in dock overlay", nullptr));
#endif // QT_CONFIG(tooltip)
        hideTabBarCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide tab bar", nullptr));
#if QT_CONFIG(tooltip)
        hintShowTabBarCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Show tab bar on mouse over when auto hide", nullptr));
#endif // QT_CONFIG(tooltip)
        hintShowTabBarCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hint show tab bar", nullptr));
#if QT_CONFIG(tooltip)
        hidePropertyViewScrollBarCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide property view scroll bar in dock overlay", nullptr));
#endif // QT_CONFIG(tooltip)
        hidePropertyViewScrollBarCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Hide property view scroll bar", nullptr));
#if QT_CONFIG(tooltip)
        overlayAutoHideCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Automatically hide overlayed dock panels when in non 3D view (like TechDraw or Spreadsheet).", nullptr));
#endif // QT_CONFIG(tooltip)
        overlayAutoHideCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Auto hide in non 3D view", nullptr));
#if QT_CONFIG(tooltip)
        mouseClickPassThroughCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Auto mouse click through transparent part of dock overlay.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseClickPassThroughCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Auto mouse pass through", nullptr));
#if QT_CONFIG(tooltip)
        mouseWheelPassThroughCheckBox->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Auto pass through mouse wheel event on transparent dock overlay.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseWheelPassThroughCheckBox->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsUI", "Auto mouse wheel pass through", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsUI: public Ui_DlgSettingsUI {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSUI_H
