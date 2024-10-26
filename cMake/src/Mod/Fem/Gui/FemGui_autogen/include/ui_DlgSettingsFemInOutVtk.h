/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemInOutVtk.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMINOUTVTK_H
#define UI_DLGSETTINGSFEMINOUTVTK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace FemGui {

class Ui_DlgSettingsFemInOutVtk
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *girdLayout;
    QLabel *label1;
    Gui::PrefComboBox *comboBoxVtkImportObject;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__DlgSettingsFemInOutVtk)
    {
        if (FemGui__DlgSettingsFemInOutVtk->objectName().isEmpty())
            FemGui__DlgSettingsFemInOutVtk->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemInOutVtk"));
        FemGui__DlgSettingsFemInOutVtk->resize(400, 79);
        gridLayout_4 = new QGridLayout(FemGui__DlgSettingsFemInOutVtk);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(FemGui__DlgSettingsFemInOutVtk);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        girdLayout = new QGridLayout();
        girdLayout->setObjectName(QString::fromUtf8("girdLayout"));
        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));

        girdLayout->addWidget(label1, 0, 0, 1, 1);

        comboBoxVtkImportObject = new Gui::PrefComboBox(groupBox);
        comboBoxVtkImportObject->addItem(QString());
        comboBoxVtkImportObject->addItem(QString());
        comboBoxVtkImportObject->addItem(QString());
        comboBoxVtkImportObject->setObjectName(QString::fromUtf8("comboBoxVtkImportObject"));
        comboBoxVtkImportObject->setProperty("prefEntry", QVariant(QByteArray("ImportObject")));
        comboBoxVtkImportObject->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/InOutVtk")));

        girdLayout->addWidget(comboBoxVtkImportObject, 0, 1, 1, 1);


        gridLayout_3->addLayout(girdLayout, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(FemGui__DlgSettingsFemInOutVtk);

        comboBoxVtkImportObject->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemInOutVtk);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemInOutVtk)
    {
        FemGui__DlgSettingsFemInOutVtk->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "VTK", nullptr));
#if QT_CONFIG(tooltip)
        FemGui__DlgSettingsFemInOutVtk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "Import", nullptr));
        label1->setText(QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "Which object to import into", nullptr));
        comboBoxVtkImportObject->setItemText(0, QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "VTK result object", nullptr));
        comboBoxVtkImportObject->setItemText(1, QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "FEM mesh object", nullptr));
        comboBoxVtkImportObject->setItemText(2, QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "FreeCAD result object", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxVtkImportObject->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "VTK result object: A FreeCAD FEM VTK result object will be imported\n"
"(equals to the object which was exported).\n"
"\n"
"FEM mesh object: The results in the VTK file will be omitted, only the\n"
"mesh data will be imported and a FreeCAD FEM mesh object will be created.\n"
"\n"
"FreeCAD result object: The imported data will be converted into a\n"
"FreeCAD FEM Result object. Note: this setting needs the exact result\n"
"component names and thus it only works properly with VTK files\n"
"exported from FreeCAD.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboBoxVtkImportObject->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboBoxVtkImportObject->setWhatsThis(QCoreApplication::translate("FemGui::DlgSettingsFemInOutVtk", "Choose in which object to import into", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemInOutVtk: public Ui_DlgSettingsFemInOutVtk {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMINOUTVTK_H
