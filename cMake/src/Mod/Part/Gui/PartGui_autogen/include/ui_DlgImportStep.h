/********************************************************************************
** Form generated from reading UI file 'DlgImportStep.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGIMPORTSTEP_H
#define UI_DLGIMPORTSTEP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace PartGui {

class Ui_DlgImportStep
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *GroupBox2;
    QVBoxLayout *verticalLayout;
    Gui::PrefCheckBox *checkBoxMergeCompound;
    Gui::PrefCheckBox *checkBoxUseLinkGroup;
    Gui::PrefCheckBox *checkBoxImportHiddenObj;
    Gui::PrefCheckBox *checkBoxReduceObjects;
    Gui::PrefCheckBox *checkBoxExpandCompound;
    Gui::PrefCheckBox *checkBoxShowProgress;
    Gui::PrefCheckBox *checkBoxUseBaseName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    Gui::PrefComboBox *comboBoxImportCodePage;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    Gui::PrefComboBox *comboBoxImportMode;

    void setupUi(QWidget *PartGui__DlgImportStep)
    {
        if (PartGui__DlgImportStep->objectName().isEmpty())
            PartGui__DlgImportStep->setObjectName(QString::fromUtf8("PartGui__DlgImportStep"));
        PartGui__DlgImportStep->resize(445, 365);
        PartGui__DlgImportStep->setWindowTitle(QString::fromUtf8("STEP"));
        gridLayout_4 = new QGridLayout(PartGui__DlgImportStep);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        GroupBox2 = new QGroupBox(PartGui__DlgImportStep);
        GroupBox2->setObjectName(QString::fromUtf8("GroupBox2"));
        verticalLayout = new QVBoxLayout(GroupBox2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxMergeCompound = new Gui::PrefCheckBox(GroupBox2);
        checkBoxMergeCompound->setObjectName(QString::fromUtf8("checkBoxMergeCompound"));
        checkBoxMergeCompound->setProperty("prefEntry", QVariant(QByteArray("ReadShapeCompoundMode")));
        checkBoxMergeCompound->setProperty("prefPath", QVariant(QByteArray("Mod/Import/hSTEP")));

        verticalLayout->addWidget(checkBoxMergeCompound);

        checkBoxUseLinkGroup = new Gui::PrefCheckBox(GroupBox2);
        checkBoxUseLinkGroup->setObjectName(QString::fromUtf8("checkBoxUseLinkGroup"));
        checkBoxUseLinkGroup->setProperty("prefEntry", QVariant(QByteArray("UseLinkGroup")));
        checkBoxUseLinkGroup->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        verticalLayout->addWidget(checkBoxUseLinkGroup);

        checkBoxImportHiddenObj = new Gui::PrefCheckBox(GroupBox2);
        checkBoxImportHiddenObj->setObjectName(QString::fromUtf8("checkBoxImportHiddenObj"));
        checkBoxImportHiddenObj->setProperty("prefEntry", QVariant(QByteArray("ImportHiddenObject")));
        checkBoxImportHiddenObj->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        verticalLayout->addWidget(checkBoxImportHiddenObj);

        checkBoxReduceObjects = new Gui::PrefCheckBox(GroupBox2);
        checkBoxReduceObjects->setObjectName(QString::fromUtf8("checkBoxReduceObjects"));
        checkBoxReduceObjects->setProperty("prefEntry", QVariant(QByteArray("ReduceObjects")));
        checkBoxReduceObjects->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        verticalLayout->addWidget(checkBoxReduceObjects);

        checkBoxExpandCompound = new Gui::PrefCheckBox(GroupBox2);
        checkBoxExpandCompound->setObjectName(QString::fromUtf8("checkBoxExpandCompound"));
        checkBoxExpandCompound->setProperty("prefEntry", QVariant(QByteArray("ExpandCompound")));
        checkBoxExpandCompound->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        verticalLayout->addWidget(checkBoxExpandCompound);

        checkBoxShowProgress = new Gui::PrefCheckBox(GroupBox2);
        checkBoxShowProgress->setObjectName(QString::fromUtf8("checkBoxShowProgress"));
        checkBoxShowProgress->setProperty("prefEntry", QVariant(QByteArray("ShowProgress")));
        checkBoxShowProgress->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        verticalLayout->addWidget(checkBoxShowProgress);

        checkBoxUseBaseName = new Gui::PrefCheckBox(GroupBox2);
        checkBoxUseBaseName->setObjectName(QString::fromUtf8("checkBoxUseBaseName"));
        checkBoxUseBaseName->setProperty("prefEntry", QVariant(QByteArray("UseBaseName")));
        checkBoxUseBaseName->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        verticalLayout->addWidget(checkBoxUseBaseName);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(GroupBox2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        label_6->setMinimumSize(QSize(197, 0));

        horizontalLayout_2->addWidget(label_6);

        comboBoxImportCodePage = new Gui::PrefComboBox(GroupBox2);
        comboBoxImportCodePage->setObjectName(QString::fromUtf8("comboBoxImportCodePage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxImportCodePage->sizePolicy().hasHeightForWidth());
        comboBoxImportCodePage->setSizePolicy(sizePolicy);
        comboBoxImportCodePage->setProperty("prefEntry", QVariant(QByteArray("ImportCodePage")));
        comboBoxImportCodePage->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        horizontalLayout_2->addWidget(comboBoxImportCodePage);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(GroupBox2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        comboBoxImportMode = new Gui::PrefComboBox(GroupBox2);
        comboBoxImportMode->addItem(QString());
        comboBoxImportMode->addItem(QString());
        comboBoxImportMode->addItem(QString());
        comboBoxImportMode->addItem(QString());
        comboBoxImportMode->addItem(QString());
        comboBoxImportMode->setObjectName(QString::fromUtf8("comboBoxImportMode"));
        sizePolicy.setHeightForWidth(comboBoxImportMode->sizePolicy().hasHeightForWidth());
        comboBoxImportMode->setSizePolicy(sizePolicy);
        comboBoxImportMode->setProperty("prefEntry", QVariant(QByteArray("ImportMode")));
        comboBoxImportMode->setProperty("prefPath", QVariant(QByteArray("Mod/Import")));

        horizontalLayout->addWidget(comboBoxImportMode);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_4->addWidget(GroupBox2, 1, 0, 1, 1);

        QWidget::setTabOrder(checkBoxMergeCompound, checkBoxUseLinkGroup);
        QWidget::setTabOrder(checkBoxUseLinkGroup, checkBoxImportHiddenObj);
        QWidget::setTabOrder(checkBoxImportHiddenObj, checkBoxReduceObjects);
        QWidget::setTabOrder(checkBoxReduceObjects, checkBoxExpandCompound);
        QWidget::setTabOrder(checkBoxExpandCompound, checkBoxUseBaseName);
        QWidget::setTabOrder(checkBoxUseBaseName, comboBoxImportMode);

        retranslateUi(PartGui__DlgImportStep);

        QMetaObject::connectSlotsByName(PartGui__DlgImportStep);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgImportStep)
    {
        GroupBox2->setTitle(QCoreApplication::translate("PartGui::DlgImportStep", "Import", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxMergeCompound->setToolTip(QCoreApplication::translate("PartGui::DlgImportStep", "If checked, no Compound merge will be done\n"
"during file reading (slower but higher details).", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxMergeCompound->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Enable STEP Compound merge", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseLinkGroup->setToolTip(QCoreApplication::translate("PartGui::DlgImportStep", "Select this to use App::LinkGroup as group container, or else use App::Part.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseLinkGroup->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Use LinkGroup", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxImportHiddenObj->setToolTip(QCoreApplication::translate("PartGui::DlgImportStep", "Select this to import invisible objects.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxImportHiddenObj->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Import invisible objects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxReduceObjects->setToolTip(QCoreApplication::translate("PartGui::DlgImportStep", "Reduce number of objects using Link array", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxReduceObjects->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Reduce number of objects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxExpandCompound->setToolTip(QCoreApplication::translate("PartGui::DlgImportStep", "Expand compound shape with multiple solids", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxExpandCompound->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Expand compound shape", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxShowProgress->setToolTip(QCoreApplication::translate("PartGui::DlgImportStep", "Show progress bar when importing", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxShowProgress->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Show progress bar when importing", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseBaseName->setToolTip(QCoreApplication::translate("PartGui::DlgImportStep", "Do not use instance names. Useful for some legacy STEP files with non-meaningful auto-generated instance names.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseBaseName->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Ignore instance names", nullptr));
        label_6->setText(QCoreApplication::translate("PartGui::DlgImportStep", "CodePage", nullptr));
        label_5->setText(QCoreApplication::translate("PartGui::DlgImportStep", "Mode", nullptr));
        comboBoxImportMode->setItemText(0, QCoreApplication::translate("PartGui::DlgImportStep", "Single document", nullptr));
        comboBoxImportMode->setItemText(1, QCoreApplication::translate("PartGui::DlgImportStep", "Assembly per document", nullptr));
        comboBoxImportMode->setItemText(2, QCoreApplication::translate("PartGui::DlgImportStep", "Assembly per document in sub-directory", nullptr));
        comboBoxImportMode->setItemText(3, QCoreApplication::translate("PartGui::DlgImportStep", "Object per document", nullptr));
        comboBoxImportMode->setItemText(4, QCoreApplication::translate("PartGui::DlgImportStep", "Object per document in sub-directory", nullptr));

        (void)PartGui__DlgImportStep;
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgImportStep: public Ui_DlgImportStep {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGIMPORTSTEP_H
