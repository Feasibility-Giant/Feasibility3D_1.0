/********************************************************************************
** Form generated from reading UI file 'DlgSettingsSelection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSSELECTION_H
#define UI_DLGSETTINGSSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsSelection
{
public:
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *checkBoxPreselection;
    Gui::PrefColorButton *HighlightColor;
    Gui::PrefCheckBox *checkBoxSelection;
    Gui::PrefColorButton *SelectionColor;
    QHBoxLayout *horizontalLayout_1;
    QLabel *spinPickRadiusLabel;
    QSpacerItem *horizSpacer_1;
    Gui::PrefDoubleSpinBox *spinPickRadius;
    Gui::PrefCheckBox *checkBoxAutoSwitch;
    Gui::PrefCheckBox *checkBoxAutoExpand;
    Gui::PrefCheckBox *checkBoxPreselect;
    Gui::PrefCheckBox *checkBoxRecord;
    Gui::PrefCheckBox *checkBoxSelectionCheckBoxes;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsSelection)
    {
        if (Gui__Dialog__DlgSettingsSelection->objectName().isEmpty())
            Gui__Dialog__DlgSettingsSelection->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsSelection"));
        Gui__Dialog__DlgSettingsSelection->resize(670, 411);
        gridLayout = new QGridLayout(Gui__Dialog__DlgSettingsSelection);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        checkBoxPreselection = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsSelection);
        checkBoxPreselection->setObjectName(QString::fromUtf8("checkBoxPreselection"));
        checkBoxPreselection->setMinimumSize(QSize(240, 0));
        checkBoxPreselection->setChecked(true);
        checkBoxPreselection->setProperty("prefEntry", QVariant(QByteArray("EnablePreselection")));
        checkBoxPreselection->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(checkBoxPreselection, 0, 0, 1, 1);

        HighlightColor = new Gui::PrefColorButton(Gui__Dialog__DlgSettingsSelection);
        HighlightColor->setObjectName(QString::fromUtf8("HighlightColor"));
        HighlightColor->setColor(QColor(225, 225, 20));
        HighlightColor->setProperty("prefEntry", QVariant(QByteArray("HighlightColor")));
        HighlightColor->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(HighlightColor, 0, 1, 1, 1);

        checkBoxSelection = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsSelection);
        checkBoxSelection->setObjectName(QString::fromUtf8("checkBoxSelection"));
        checkBoxSelection->setChecked(true);
        checkBoxSelection->setProperty("prefEntry", QVariant(QByteArray("EnableSelection")));
        checkBoxSelection->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(checkBoxSelection, 1, 0, 1, 1);

        SelectionColor = new Gui::PrefColorButton(Gui__Dialog__DlgSettingsSelection);
        SelectionColor->setObjectName(QString::fromUtf8("SelectionColor"));
        SelectionColor->setColor(QColor(28, 173, 28));
        SelectionColor->setProperty("prefEntry", QVariant(QByteArray("SelectionColor")));
        SelectionColor->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(SelectionColor, 1, 1, 1, 1);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        spinPickRadiusLabel = new QLabel(Gui__Dialog__DlgSettingsSelection);
        spinPickRadiusLabel->setObjectName(QString::fromUtf8("spinPickRadiusLabel"));

        horizontalLayout_1->addWidget(spinPickRadiusLabel);

        horizSpacer_1 = new QSpacerItem(250, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizSpacer_1);


        gridLayout->addLayout(horizontalLayout_1, 2, 0, 1, 1);

        spinPickRadius = new Gui::PrefDoubleSpinBox(Gui__Dialog__DlgSettingsSelection);
        spinPickRadius->setObjectName(QString::fromUtf8("spinPickRadius"));
        spinPickRadius->setMinimumSize(QSize(120, 0));
        spinPickRadius->setInputMethodHints(Qt::ImhPreferNumbers);
        spinPickRadius->setDecimals(1);
        spinPickRadius->setMinimum(0.500000000000000);
        spinPickRadius->setMaximum(200.000000000000000);
        spinPickRadius->setValue(5.000000000000000);
        spinPickRadius->setProperty("prefEntry", QVariant(QByteArray("PickRadius")));
        spinPickRadius->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(spinPickRadius, 2, 1, 1, 1);

        checkBoxAutoSwitch = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsSelection);
        checkBoxAutoSwitch->setObjectName(QString::fromUtf8("checkBoxAutoSwitch"));
        checkBoxAutoSwitch->setProperty("prefEntry", QVariant(QByteArray("SyncView")));
        checkBoxAutoSwitch->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout->addWidget(checkBoxAutoSwitch, 3, 0, 1, 2);

        checkBoxAutoExpand = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsSelection);
        checkBoxAutoExpand->setObjectName(QString::fromUtf8("checkBoxAutoExpand"));
        checkBoxAutoExpand->setProperty("prefEntry", QVariant(QByteArray("SyncSelection")));
        checkBoxAutoExpand->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout->addWidget(checkBoxAutoExpand, 4, 0, 1, 2);

        checkBoxPreselect = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsSelection);
        checkBoxPreselect->setObjectName(QString::fromUtf8("checkBoxPreselect"));
        checkBoxPreselect->setProperty("prefEntry", QVariant(QByteArray("PreSelection")));
        checkBoxPreselect->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout->addWidget(checkBoxPreselect, 5, 0, 1, 2);

        checkBoxRecord = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsSelection);
        checkBoxRecord->setObjectName(QString::fromUtf8("checkBoxRecord"));
        checkBoxRecord->setProperty("prefEntry", QVariant(QByteArray("RecordSelection")));
        checkBoxRecord->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout->addWidget(checkBoxRecord, 6, 0, 1, 2);

        checkBoxSelectionCheckBoxes = new Gui::PrefCheckBox(Gui__Dialog__DlgSettingsSelection);
        checkBoxSelectionCheckBoxes->setObjectName(QString::fromUtf8("checkBoxSelectionCheckBoxes"));
        checkBoxSelectionCheckBoxes->setProperty("prefEntry", QVariant(QByteArray("CheckBoxesSelection")));
        checkBoxSelectionCheckBoxes->setProperty("prefPath", QVariant(QByteArray("TreeView")));

        gridLayout->addWidget(checkBoxSelectionCheckBoxes, 7, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 245, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 2);


        retranslateUi(Gui__Dialog__DlgSettingsSelection);
        QObject::connect(checkBoxPreselection, SIGNAL(toggled(bool)), HighlightColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxSelection, SIGNAL(toggled(bool)), SelectionColor, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsSelection);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsSelection)
    {
        Gui__Dialog__DlgSettingsSelection->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Selection", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxPreselection->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Enable preselection, highlighted with specified color", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxPreselection->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Enable preselection", nullptr));
        HighlightColor->setText(QString());
#if QT_CONFIG(tooltip)
        checkBoxSelection->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Enable selection, highlighted with specified color", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxSelection->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Enable selection", nullptr));
        SelectionColor->setText(QString());
        spinPickRadiusLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Pick radius (px):", nullptr));
#if QT_CONFIG(tooltip)
        spinPickRadius->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Area for picking elements in 3D view.\n"
"Larger value eases to pick things, but can make small features impossible to select.\n"
"      ", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxAutoSwitch->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Auto switch to the 3D view containing the selected item", nullptr));
        checkBoxAutoExpand->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Auto expand tree item when the corresponding object is selected in 3D view", nullptr));
        checkBoxPreselect->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Preselect the object in 3D view when hovering the cursor over the tree item", nullptr));
        checkBoxRecord->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Record selection in tree view in order to go back/forward using navigation button", nullptr));
        checkBoxSelectionCheckBoxes->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsSelection", "Add checkboxes for selection in document tree", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsSelection: public Ui_DlgSettingsSelection {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSSELECTION_H
