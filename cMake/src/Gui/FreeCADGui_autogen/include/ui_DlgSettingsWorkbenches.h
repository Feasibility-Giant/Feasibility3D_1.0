/********************************************************************************
** Form generated from reading UI file 'DlgSettingsWorkbenches.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSWORKBENCHES_H
#define UI_DLGSETTINGSWORKBENCHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "ListWidgetDragBugFix.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsWorkbenches
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *hboxLayout;
    QLabel *WorkbenchSelectorItemLabel;
    QComboBox *WorkbenchSelectorItem;
    ListWidgetDragBugFix *wbList;
    QHBoxLayout *hboxLayout1;
    QLabel *WorkbenchSelectorTypeLabel;
    QComboBox *WorkbenchSelectorType;
    QLabel *noteLabel;
    Gui::PrefCheckBox *CheckBox_WbByTab;
    QHBoxLayout *hboxLayout2;
    QLabel *autoModuleLabel;
    QComboBox *AutoloadModuleCombo;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsWorkbenches)
    {
        if (Gui__Dialog__DlgSettingsWorkbenches->objectName().isEmpty())
            Gui__Dialog__DlgSettingsWorkbenches->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsWorkbenches"));
        Gui__Dialog__DlgSettingsWorkbenches->resize(607, 859);
        gridLayout_3 = new QGridLayout(Gui__Dialog__DlgSettingsWorkbenches);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        WorkbenchSelectorItemLabel = new QLabel(Gui__Dialog__DlgSettingsWorkbenches);
        WorkbenchSelectorItemLabel->setObjectName(QString::fromUtf8("WorkbenchSelectorItemLabel"));

        hboxLayout->addWidget(WorkbenchSelectorItemLabel);

        WorkbenchSelectorItem = new QComboBox(Gui__Dialog__DlgSettingsWorkbenches);
        WorkbenchSelectorItem->setObjectName(QString::fromUtf8("WorkbenchSelectorItem"));

        hboxLayout->addWidget(WorkbenchSelectorItem);


        gridLayout_3->addLayout(hboxLayout, 4, 0, 1, 1);

        wbList = new ListWidgetDragBugFix(Gui__Dialog__DlgSettingsWorkbenches);
        wbList->setObjectName(QString::fromUtf8("wbList"));

        gridLayout_3->addWidget(wbList, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        WorkbenchSelectorTypeLabel = new QLabel(Gui__Dialog__DlgSettingsWorkbenches);
        WorkbenchSelectorTypeLabel->setObjectName(QString::fromUtf8("WorkbenchSelectorTypeLabel"));

        hboxLayout1->addWidget(WorkbenchSelectorTypeLabel);

        WorkbenchSelectorType = new QComboBox(Gui__Dialog__DlgSettingsWorkbenches);
        WorkbenchSelectorType->setObjectName(QString::fromUtf8("WorkbenchSelectorType"));

        hboxLayout1->addWidget(WorkbenchSelectorType);


        gridLayout_3->addLayout(hboxLayout1, 3, 0, 1, 1);

        noteLabel = new QLabel(Gui__Dialog__DlgSettingsWorkbenches);
        noteLabel->setObjectName(QString::fromUtf8("noteLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(noteLabel->sizePolicy().hasHeightForWidth());
        noteLabel->setSizePolicy(sizePolicy);
        noteLabel->setMinimumSize(QSize(0, 50));
        noteLabel->setWordWrap(true);

        gridLayout_3->addWidget(noteLabel, 0, 0, 1, 1);

        CheckBox_WbByTab = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsWorkbenches);
        CheckBox_WbByTab->setObjectName(QString::fromUtf8("CheckBox_WbByTab"));
        CheckBox_WbByTab->setChecked(false);
        CheckBox_WbByTab->setProperty("prefEntry", QVariant(QByteArray("SaveWBbyTab")));
        CheckBox_WbByTab->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout_3->addWidget(CheckBox_WbByTab, 5, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        autoModuleLabel = new QLabel(Gui__Dialog__DlgSettingsWorkbenches);
        autoModuleLabel->setObjectName(QString::fromUtf8("autoModuleLabel"));

        hboxLayout2->addWidget(autoModuleLabel);

        AutoloadModuleCombo = new QComboBox(Gui__Dialog__DlgSettingsWorkbenches);
        AutoloadModuleCombo->setObjectName(QString::fromUtf8("AutoloadModuleCombo"));

        hboxLayout2->addWidget(AutoloadModuleCombo);


        gridLayout_3->addLayout(hboxLayout2, 2, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgSettingsWorkbenches);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsWorkbenches);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsWorkbenches)
    {
        Gui__Dialog__DlgSettingsWorkbenches->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Available Workbenches", nullptr));
        WorkbenchSelectorItemLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Workbench selector items style:", nullptr));
#if QT_CONFIG(tooltip)
        WorkbenchSelectorItem->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Customize how the items are displayed.", nullptr));
#endif // QT_CONFIG(tooltip)
        WorkbenchSelectorTypeLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Workbench selector type:", nullptr));
#if QT_CONFIG(tooltip)
        WorkbenchSelectorType->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Choose the workbench selector widget type (restart required).", nullptr));
#endif // QT_CONFIG(tooltip)
        noteLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "<html><head/><body><p>You can reorder workbenches by drag and drop or sort them by right-clicking on any workbench and select <span style=\"  font-weight:600; font-style:italic;\">Sort alphabetically</span>. Additional workbenches can be installed through the addon manager.</p><p>\n"
"Currently, your system has the following workbenches:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        CheckBox_WbByTab->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "If checked, application will remember which workbench is active for each tab of the viewport", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_WbByTab->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Remember active workbench by tab", nullptr));
        autoModuleLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Start up workbench:", nullptr));
#if QT_CONFIG(tooltip)
        AutoloadModuleCombo->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsWorkbenches", "Choose which workbench will be activated and shown\n"
"after FreeCAD launches", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsWorkbenches: public Ui_DlgSettingsWorkbenches {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSWORKBENCHES_H
