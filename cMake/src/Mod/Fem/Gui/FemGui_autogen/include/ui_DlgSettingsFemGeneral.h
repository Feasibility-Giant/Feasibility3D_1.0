/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemGeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMGENERAL_H
#define UI_DLGSETTINGSFEMGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"
#include "Gui/PrefWidgets.h"

namespace FemGui {

class Ui_DlgSettingsFemGeneralImp
{
public:
    QGridLayout *gridLayout1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_2_workingdir;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    Gui::PrefRadioButton *cb_wd_temp;
    QLabel *l_wd_temp_desc;
    QVBoxLayout *verticalLayout_5;
    Gui::PrefRadioButton *cb_wd_beside;
    QLabel *l_wd_beside_desc;
    QVBoxLayout *verticalLayout_8;
    Gui::PrefRadioButton *cb_wd_custom;
    QLabel *l_custom_desc;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_wd_custom_path;
    Gui::PrefFileChooser *le_wd_custom;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_10;
    Gui::PrefCheckBox *cb_overwrite_solver_working_directory;
    QGroupBox *gb_3_mesh;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gl_2;
    Gui::PrefCheckBox *cb_analysis_group_meshing;
    QGroupBox *gb_5_results;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    Gui::PrefCheckBox *cb_keep_results_on_rerun;
    Gui::PrefCheckBox *cb_restore_result_dialog;
    Gui::PrefCheckBox *cb_hide_constraint;
    QGroupBox *gb_6_defaults;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gl_3;
    QLabel *l_def_solver;
    Gui::PrefComboBox *cmb_def_solver;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__DlgSettingsFemGeneralImp)
    {
        if (FemGui__DlgSettingsFemGeneralImp->objectName().isEmpty())
            FemGui__DlgSettingsFemGeneralImp->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemGeneralImp"));
        FemGui__DlgSettingsFemGeneralImp->resize(411, 450);
        gridLayout1 = new QGridLayout(FemGui__DlgSettingsFemGeneralImp);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gb_2_workingdir = new QGroupBox(FemGui__DlgSettingsFemGeneralImp);
        gb_2_workingdir->setObjectName(QString::fromUtf8("gb_2_workingdir"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_2_workingdir->sizePolicy().hasHeightForWidth());
        gb_2_workingdir->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(gb_2_workingdir);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cb_wd_temp = new Gui::PrefRadioButton(gb_2_workingdir);
        cb_wd_temp->setObjectName(QString::fromUtf8("cb_wd_temp"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        cb_wd_temp->setFont(font);
        cb_wd_temp->setChecked(true);
        cb_wd_temp->setProperty("prefEntry", QVariant(QByteArray("UseTempDirectory")));
        cb_wd_temp->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        verticalLayout_4->addWidget(cb_wd_temp);

        l_wd_temp_desc = new QLabel(gb_2_workingdir);
        l_wd_temp_desc->setObjectName(QString::fromUtf8("l_wd_temp_desc"));
        QFont font1;
        font1.setItalic(true);
        l_wd_temp_desc->setFont(font1);
        l_wd_temp_desc->setWordWrap(true);
        l_wd_temp_desc->setIndent(10);

        verticalLayout_4->addWidget(l_wd_temp_desc);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        cb_wd_beside = new Gui::PrefRadioButton(gb_2_workingdir);
        cb_wd_beside->setObjectName(QString::fromUtf8("cb_wd_beside"));
        cb_wd_beside->setFont(font);
        cb_wd_beside->setProperty("prefEntry", QVariant(QByteArray("UseBesideDirectory")));
        cb_wd_beside->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        verticalLayout_5->addWidget(cb_wd_beside);

        l_wd_beside_desc = new QLabel(gb_2_workingdir);
        l_wd_beside_desc->setObjectName(QString::fromUtf8("l_wd_beside_desc"));
        l_wd_beside_desc->setFont(font1);
        l_wd_beside_desc->setWordWrap(true);
        l_wd_beside_desc->setIndent(10);

        verticalLayout_5->addWidget(l_wd_beside_desc);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        cb_wd_custom = new Gui::PrefRadioButton(gb_2_workingdir);
        cb_wd_custom->setObjectName(QString::fromUtf8("cb_wd_custom"));
        cb_wd_custom->setFont(font);
        cb_wd_custom->setProperty("prefEntry", QVariant(QByteArray("UseCustomDirectory")));
        cb_wd_custom->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        verticalLayout_8->addWidget(cb_wd_custom);

        l_custom_desc = new QLabel(gb_2_workingdir);
        l_custom_desc->setObjectName(QString::fromUtf8("l_custom_desc"));
        l_custom_desc->setFont(font1);
        l_custom_desc->setWordWrap(true);
        l_custom_desc->setIndent(10);

        verticalLayout_8->addWidget(l_custom_desc);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 3, 0, 0);
        l_wd_custom_path = new QLabel(gb_2_workingdir);
        l_wd_custom_path->setObjectName(QString::fromUtf8("l_wd_custom_path"));
        l_wd_custom_path->setIndent(10);

        horizontalLayout_4->addWidget(l_wd_custom_path);

        le_wd_custom = new Gui::PrefFileChooser(gb_2_workingdir);
        le_wd_custom->setObjectName(QString::fromUtf8("le_wd_custom"));
        le_wd_custom->setEnabled(true);
        le_wd_custom->setMaximumSize(QSize(250, 16777215));
        le_wd_custom->setMode(Gui::FileChooser::Directory);
        le_wd_custom->setProperty("prefEntry", QVariant(QByteArray("CustomDirectoryPath")));
        le_wd_custom->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        horizontalLayout_4->addWidget(le_wd_custom);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_8->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        cb_overwrite_solver_working_directory = new Gui::PrefCheckBox(gb_2_workingdir);
        cb_overwrite_solver_working_directory->setObjectName(QString::fromUtf8("cb_overwrite_solver_working_directory"));
        cb_overwrite_solver_working_directory->setEnabled(false);
        cb_overwrite_solver_working_directory->setLayoutDirection(Qt::LeftToRight);
        cb_overwrite_solver_working_directory->setChecked(true);
        cb_overwrite_solver_working_directory->setProperty("prefEntry", QVariant(QByteArray("OverwriteSolverWorkingDirectory")));
        cb_overwrite_solver_working_directory->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        verticalLayout_10->addWidget(cb_overwrite_solver_working_directory);


        verticalLayout_3->addLayout(verticalLayout_10);


        verticalLayout_2->addWidget(gb_2_workingdir);

        gb_3_mesh = new QGroupBox(FemGui__DlgSettingsFemGeneralImp);
        gb_3_mesh->setObjectName(QString::fromUtf8("gb_3_mesh"));
        horizontalLayout_2 = new QHBoxLayout(gb_3_mesh);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gl_2 = new QGridLayout();
        gl_2->setSpacing(6);
        gl_2->setObjectName(QString::fromUtf8("gl_2"));
        cb_analysis_group_meshing = new Gui::PrefCheckBox(gb_3_mesh);
        cb_analysis_group_meshing->setObjectName(QString::fromUtf8("cb_analysis_group_meshing"));
        cb_analysis_group_meshing->setEnabled(true);
        cb_analysis_group_meshing->setChecked(false);
        cb_analysis_group_meshing->setProperty("prefEntry", QVariant(QByteArray("AnalysisGroupMeshing")));
        cb_analysis_group_meshing->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        gl_2->addWidget(cb_analysis_group_meshing, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gl_2);


        verticalLayout_2->addWidget(gb_3_mesh);

        gb_5_results = new QGroupBox(FemGui__DlgSettingsFemGeneralImp);
        gb_5_results->setObjectName(QString::fromUtf8("gb_5_results"));
        horizontalLayout_5 = new QHBoxLayout(gb_5_results);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        cb_keep_results_on_rerun = new Gui::PrefCheckBox(gb_5_results);
        cb_keep_results_on_rerun->setObjectName(QString::fromUtf8("cb_keep_results_on_rerun"));
        cb_keep_results_on_rerun->setEnabled(true);
        cb_keep_results_on_rerun->setChecked(false);
        cb_keep_results_on_rerun->setProperty("prefEntry", QVariant(QByteArray("KeepResultsOnReRun")));
        cb_keep_results_on_rerun->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        verticalLayout_7->addWidget(cb_keep_results_on_rerun);

        cb_restore_result_dialog = new Gui::PrefCheckBox(gb_5_results);
        cb_restore_result_dialog->setObjectName(QString::fromUtf8("cb_restore_result_dialog"));
        cb_restore_result_dialog->setChecked(true);
        cb_restore_result_dialog->setProperty("prefEntry", QVariant(QByteArray("RestoreResultDialog")));
        cb_restore_result_dialog->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        verticalLayout_7->addWidget(cb_restore_result_dialog);

        cb_hide_constraint = new Gui::PrefCheckBox(gb_5_results);
        cb_hide_constraint->setObjectName(QString::fromUtf8("cb_hide_constraint"));
        cb_hide_constraint->setEnabled(true);
        cb_hide_constraint->setCheckable(true);
        cb_hide_constraint->setChecked(false);
        cb_hide_constraint->setProperty("prefEntry", QVariant(QByteArray("HideConstraint")));
        cb_hide_constraint->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        verticalLayout_7->addWidget(cb_hide_constraint);


        horizontalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_2->addWidget(gb_5_results);

        gb_6_defaults = new QGroupBox(FemGui__DlgSettingsFemGeneralImp);
        gb_6_defaults->setObjectName(QString::fromUtf8("gb_6_defaults"));
        horizontalLayout_6 = new QHBoxLayout(gb_6_defaults);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        gl_3 = new QGridLayout();
        gl_3->setSpacing(6);
        gl_3->setObjectName(QString::fromUtf8("gl_3"));
        l_def_solver = new QLabel(gb_6_defaults);
        l_def_solver->setObjectName(QString::fromUtf8("l_def_solver"));
        l_def_solver->setEnabled(true);

        gl_3->addWidget(l_def_solver, 0, 0, 1, 1);

        cmb_def_solver = new Gui::PrefComboBox(gb_6_defaults);
        cmb_def_solver->addItem(QString());
        cmb_def_solver->setObjectName(QString::fromUtf8("cmb_def_solver"));
        cmb_def_solver->setEnabled(true);
        cmb_def_solver->setProperty("prefEntry", QVariant(QByteArray("DefaultSolver")));
        cmb_def_solver->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/General")));

        gl_3->addWidget(cmb_def_solver, 0, 1, 1, 1);


        horizontalLayout_6->addLayout(gl_3);


        verticalLayout_2->addWidget(gb_6_defaults);


        gridLayout1->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(FemGui__DlgSettingsFemGeneralImp);
        QObject::connect(cb_wd_custom, SIGNAL(toggled(bool)), le_wd_custom, SLOT(setDisabled(bool)));
        QObject::connect(cb_wd_custom, SIGNAL(toggled(bool)), l_wd_custom_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_wd_custom, SIGNAL(toggled(bool)), le_wd_custom, SLOT(setEnabled(bool)));
        QObject::connect(cb_wd_custom, SIGNAL(toggled(bool)), l_wd_custom_path, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemGeneralImp);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemGeneralImp)
    {
        FemGui__DlgSettingsFemGeneralImp->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "General", nullptr));
        gb_2_workingdir->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Working directory for solving analysis and Gmsh meshing", nullptr));
#if QT_CONFIG(accessibility)
        cb_wd_temp->setAccessibleDescription(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "sdfsdfsdfds", nullptr));
#endif // QT_CONFIG(accessibility)
        cb_wd_temp->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Temporary directories", nullptr));
        l_wd_temp_desc->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Let the application manage (create, delete) the working directories for all solvers. Use temporary directories.", nullptr));
        cb_wd_beside->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Beside .FCStd file", nullptr));
        l_wd_beside_desc->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Create a directory in the same folder in which the FCStd file of the document is located. Use Subfolder for each solver (e.g. for a file ./mydoc.FCStd and a solver with the label Elmer002 use ./mydoc/Elmer002).", nullptr));
        cb_wd_custom->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Use custom directory", nullptr));
        l_custom_desc->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Use directory set below. Create own subdirectory for every solver. Name directory after the solver label prefixed with the document name.", nullptr));
        l_wd_custom_path->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Path:", nullptr));
        cb_overwrite_solver_working_directory->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Overwrite solver working directory with the directory chosen above", nullptr));
        gb_3_mesh->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Mesh", nullptr));
        cb_analysis_group_meshing->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Create mesh groups for analysis reference shapes (highly experimental)", nullptr));
        gb_5_results->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Results", nullptr));
#if QT_CONFIG(tooltip)
        cb_keep_results_on_rerun->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Existing result objects will be kept\n"
"otherwise overwritten by new solver run", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_keep_results_on_rerun->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Keep results on calculation re-run", nullptr));
#if QT_CONFIG(tooltip)
        cb_restore_result_dialog->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "The results dialog will be opened\n"
"with the last used dialog settings", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_restore_result_dialog->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Restore result dialog settings", nullptr));
#if QT_CONFIG(tooltip)
        cb_hide_constraint->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "All analysis features are hidden in the model view\n"
"when the results dialog is opened", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_hide_constraint->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Hide analysis features when opening result dialog", nullptr));
        gb_6_defaults->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Defaults", nullptr));
        l_def_solver->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Default solver", nullptr));
        cmb_def_solver->setItemText(0, QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "None", nullptr));

#if QT_CONFIG(tooltip)
        cmb_def_solver->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemGeneralImp", "Default solver to be added when\n"
"adding an analysis container", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemGeneralImp: public Ui_DlgSettingsFemGeneralImp {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMGENERAL_H
