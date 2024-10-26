/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemExportAbaqus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMEXPORTABAQUS_H
#define UI_DLGSETTINGSFEMEXPORTABAQUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace FemGui {

class Ui_DlgSettingsFemExportAbaqus
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *girdLayoutAbaqus;
    QLabel *label1;
    Gui::PrefComboBox *comboBoxElemChoiceParam;
    QLabel *label2;
    Gui::PrefCheckBox *checkBoxWriteGroups;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__DlgSettingsFemExportAbaqus)
    {
        if (FemGui__DlgSettingsFemExportAbaqus->objectName().isEmpty())
            FemGui__DlgSettingsFemExportAbaqus->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemExportAbaqus"));
        FemGui__DlgSettingsFemExportAbaqus->resize(400, 98);
        gridLayout_4 = new QGridLayout(FemGui__DlgSettingsFemExportAbaqus);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(FemGui__DlgSettingsFemExportAbaqus);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        girdLayoutAbaqus = new QGridLayout();
        girdLayoutAbaqus->setObjectName(QString::fromUtf8("girdLayoutAbaqus"));
        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));

        girdLayoutAbaqus->addWidget(label1, 0, 0, 1, 1);

        comboBoxElemChoiceParam = new Gui::PrefComboBox(groupBox);
        comboBoxElemChoiceParam->addItem(QString());
        comboBoxElemChoiceParam->addItem(QString());
        comboBoxElemChoiceParam->addItem(QString());
        comboBoxElemChoiceParam->setObjectName(QString::fromUtf8("comboBoxElemChoiceParam"));
        comboBoxElemChoiceParam->setProperty("prefEntry", QVariant(QByteArray("AbaqusElementChoice")));
        comboBoxElemChoiceParam->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Abaqus")));

        girdLayoutAbaqus->addWidget(comboBoxElemChoiceParam, 0, 1, 1, 1);

        label2 = new QLabel(groupBox);
        label2->setObjectName(QString::fromUtf8("label2"));

        girdLayoutAbaqus->addWidget(label2, 1, 0, 1, 1);

        checkBoxWriteGroups = new Gui::PrefCheckBox(groupBox);
        checkBoxWriteGroups->setObjectName(QString::fromUtf8("checkBoxWriteGroups"));
        checkBoxWriteGroups->setChecked(false);
        checkBoxWriteGroups->setProperty("prefEntry", QVariant(QByteArray("AbaqusWriteGroups")));
        checkBoxWriteGroups->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Abaqus")));

        girdLayoutAbaqus->addWidget(checkBoxWriteGroups, 1, 1, 1, 1);


        gridLayout_3->addLayout(girdLayoutAbaqus, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(FemGui__DlgSettingsFemExportAbaqus);

        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemExportAbaqus);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemExportAbaqus)
    {
        FemGui__DlgSettingsFemExportAbaqus->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "INP", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "Export", nullptr));
        label1->setText(QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "Which mesh elements to export", nullptr));
        comboBoxElemChoiceParam->setItemText(0, QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "All", nullptr));
        comboBoxElemChoiceParam->setItemText(1, QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "Highest", nullptr));
        comboBoxElemChoiceParam->setItemText(2, QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "FEM", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxElemChoiceParam->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "All: All elements will be exported.\n"
"\n"
"Highest: Only the highest elements will be exported. This means\n"
"for means volumes for a volume mesh and faces for a shell mesh.\n"
"\n"
"FEM: Only FEM elements will be exported. This means only edges\n"
"not belonging to faces and faces not belonging to volumes.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboBoxElemChoiceParam->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboBoxElemChoiceParam->setWhatsThis(QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "element parameter: All: all elements, highest: highest elements only, FEM: FEM elements only (only edges not belonging to faces and faces not belonging to volumes)", nullptr));
#endif // QT_CONFIG(whatsthis)
        label2->setText(QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "Export group data", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxWriteGroups->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemExportAbaqus", "Mesh groups are exported too.\n"
"Every analysis feature and, if there are different materials,\n"
"material consists of two mesh groups, faces and nodes where\n"
"the constraint or material is applied.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxWriteGroups->setText(QString());
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemExportAbaqus: public Ui_DlgSettingsFemExportAbaqus {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMEXPORTABAQUS_H
