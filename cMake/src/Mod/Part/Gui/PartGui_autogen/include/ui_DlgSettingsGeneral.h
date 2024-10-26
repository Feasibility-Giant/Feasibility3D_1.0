/********************************************************************************
** Form generated from reading UI file 'DlgSettingsGeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSGENERAL_H
#define UI_DLGSETTINGSGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace PartGui {

class Ui_DlgSettingsGeneral
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *checkBooleanCheck;
    Gui::PrefCheckBox *checkBooleanRefine;
    Gui::PrefCheckBox *checkSketchBaseRefine;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    Gui::PrefCheckBox *checkObjectNaming;
    QGroupBox *groupBoxExperimental;
    QVBoxLayout *verticalLayout_2;
    QLabel *warningLabel;
    Gui::PrefCheckBox *checkAllowCompoundBody;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *PartGui__DlgSettingsGeneral)
    {
        if (PartGui__DlgSettingsGeneral->objectName().isEmpty())
            PartGui__DlgSettingsGeneral->setObjectName(QString::fromUtf8("PartGui__DlgSettingsGeneral"));
        PartGui__DlgSettingsGeneral->resize(550, 333);
        verticalLayout = new QVBoxLayout(PartGui__DlgSettingsGeneral);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(PartGui__DlgSettingsGeneral);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBooleanCheck = new Gui::PrefCheckBox(groupBox_2);
        checkBooleanCheck->setObjectName(QString::fromUtf8("checkBooleanCheck"));
        checkBooleanCheck->setChecked(true);
        checkBooleanCheck->setProperty("prefEntry", QVariant(QByteArray("CheckModel")));
        checkBooleanCheck->setProperty("prefPath", QVariant(QByteArray("Mod/Part/Boolean")));

        gridLayout->addWidget(checkBooleanCheck, 0, 0, 1, 1);

        checkBooleanRefine = new Gui::PrefCheckBox(groupBox_2);
        checkBooleanRefine->setObjectName(QString::fromUtf8("checkBooleanRefine"));
        checkBooleanRefine->setChecked(true);
        checkBooleanRefine->setProperty("prefEntry", QVariant(QByteArray("RefineModel")));
        checkBooleanRefine->setProperty("prefPath", QVariant(QByteArray("Mod/Part/Boolean")));

        gridLayout->addWidget(checkBooleanRefine, 1, 0, 1, 1);

        checkSketchBaseRefine = new Gui::PrefCheckBox(groupBox_2);
        checkSketchBaseRefine->setObjectName(QString::fromUtf8("checkSketchBaseRefine"));
        checkSketchBaseRefine->setChecked(true);
        checkSketchBaseRefine->setProperty("prefEntry", QVariant(QByteArray("RefineModel")));
        checkSketchBaseRefine->setProperty("prefPath", QVariant(QByteArray("Mod/PartDesign")));

        gridLayout->addWidget(checkSketchBaseRefine, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(PartGui__DlgSettingsGeneral);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setVisible(false);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkObjectNaming = new Gui::PrefCheckBox(groupBox_3);
        checkObjectNaming->setObjectName(QString::fromUtf8("checkObjectNaming"));
        checkObjectNaming->setProperty("prefEntry", QVariant(QByteArray("AddBaseObjectName")));
        checkObjectNaming->setProperty("prefPath", QVariant(QByteArray("Mod/Part")));

        gridLayout_2->addWidget(checkObjectNaming, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBoxExperimental = new QGroupBox(PartGui__DlgSettingsGeneral);
        groupBoxExperimental->setObjectName(QString::fromUtf8("groupBoxExperimental"));
        groupBoxExperimental->setEnabled(true);
        groupBoxExperimental->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBoxExperimental);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        warningLabel = new QLabel(groupBoxExperimental);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setWordWrap(true);

        verticalLayout_2->addWidget(warningLabel);

        checkAllowCompoundBody = new Gui::PrefCheckBox(groupBoxExperimental);
        checkAllowCompoundBody->setObjectName(QString::fromUtf8("checkAllowCompoundBody"));
        checkAllowCompoundBody->setProperty("prefEntry", QVariant(QByteArray("AllowCompoundDefault")));
        checkAllowCompoundBody->setProperty("prefPath", QVariant(QByteArray("Mod/PartDesign")));

        verticalLayout_2->addWidget(checkAllowCompoundBody);


        verticalLayout->addWidget(groupBoxExperimental);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);


        retranslateUi(PartGui__DlgSettingsGeneral);

        QMetaObject::connectSlotsByName(PartGui__DlgSettingsGeneral);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgSettingsGeneral)
    {
        PartGui__DlgSettingsGeneral->setWindowTitle(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "General", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Model settings", nullptr));
        checkBooleanCheck->setText(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Automatically check model after boolean operation", nullptr));
        checkBooleanRefine->setText(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Automatically refine model after boolean operation", nullptr));
        checkSketchBaseRefine->setText(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Automatically refine model after sketch-based operation", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Object naming", nullptr));
        checkObjectNaming->setText(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Add name of base object", nullptr));
        groupBoxExperimental->setTitle(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Experimental", nullptr));
        warningLabel->setText(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "These settings are experimental and may result in decreased stability, more problems and undefined behaviors.", nullptr));
        checkAllowCompoundBody->setText(QCoreApplication::translate("PartGui::DlgSettingsGeneral", "Allow multiple solids in Part Design Body by default (experimental)", nullptr));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgSettingsGeneral: public Ui_DlgSettingsGeneral {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGSETTINGSGENERAL_H
