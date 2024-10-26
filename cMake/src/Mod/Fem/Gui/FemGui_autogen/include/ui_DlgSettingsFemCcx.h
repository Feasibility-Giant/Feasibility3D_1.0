/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemCcx.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMCCX_H
#define UI_DLGSETTINGSFEMCCX_H

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

class Ui_DlgSettingsFemCcxImp
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_01_ccx_param;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *l_ccx_binary_std;
    Gui::PrefCheckBox *cb_ccx_binary_std;
    QLabel *l_ccx_binary_path;
    Gui::PrefFileChooser *fc_ccx_binary_path;
    QLabel *l_editor;
    Gui::PrefCheckBox *cb_int_editor;
    QLabel *l_ext_editor;
    Gui::PrefFileChooser *fc_ext_editor;
    QLabel *l_editor_2;
    Gui::PrefCheckBox *cb_split_inp_writer;
    QGroupBox *gb_02_analysis_param;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gl_analysis;
    QLabel *l_type;
    Gui::PrefComboBox *cb_analysis_type;
    QGroupBox *gb_03_solver_param;
    QHBoxLayout *horizontalLayout_1;
    QGridLayout *gl_solver;
    QLabel *l_ccx_numcpu;
    Gui::PrefSpinBox *sb_ccx_numcpu;
    QLabel *l_solver;
    Gui::PrefComboBox *cmb_solver;
    QLabel *l_non_lin_geom;
    Gui::PrefCheckBox *cb_ccx_non_lin_geom;
    QLabel *l_use_iterations_param;
    Gui::PrefCheckBox *cb_use_iterations_param;
    QLabel *l_ccx_max_iterations;
    Gui::PrefSpinBox *sb_ccx_max_iterations;
    QLabel *l_ccx_initial_time_step;
    QSpacerItem *horizontalSpacer_2;
    Gui::PrefDoubleSpinBox *dsb_ccx_initial_time_step;
    QLabel *l_hz_1;
    QLabel *l_ccx_analysis_time;
    Gui::PrefDoubleSpinBox *dsb_ccx_analysis_time;
    QLabel *l_hz_2;
    QLabel *l_ccx_minimum_time_step;
    QSpacerItem *horizontalSpacer_3;
    Gui::PrefDoubleSpinBox *dsb_ccx_minimum_time_step;
    QLabel *l_hz_3;
    QLabel *l_ccx_maximum_time_step;
    QSpacerItem *horizontalSpacer_4;
    Gui::PrefDoubleSpinBox *dsb_ccx_maximum_time_step;
    QLabel *l_hz_4;
    QLabel *l_BeamShellOutput;
    Gui::PrefCheckBox *cb_BeamShellOutput;
    QGroupBox *gb_04_thermomech_params;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gl_thremomech;
    QLabel *l_static;
    Gui::PrefCheckBox *cb_static;
    QGroupBox *gb_05_frequercy_params;
    QVBoxLayout *verticalLayout;
    QGridLayout *gl_frequ;
    QLabel *l_eigenmode_number;
    QSpacerItem *horizontalSpacer;
    Gui::PrefSpinBox *sb_eigenmode_number;
    QLabel *l_eigenmode_high_limit;
    Gui::PrefDoubleSpinBox *dsb_eigenmode_high_limit;
    QLabel *l_hz_5;
    QLabel *l_eigenmode_low_limit;
    Gui::PrefDoubleSpinBox *dsb_eigenmode_low_limit;
    QLabel *l_hz;

    void setupUi(QWidget *FemGui__DlgSettingsFemCcxImp)
    {
        if (FemGui__DlgSettingsFemCcxImp->objectName().isEmpty())
            FemGui__DlgSettingsFemCcxImp->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemCcxImp"));
        FemGui__DlgSettingsFemCcxImp->resize(425, 642);
        verticalLayout_2 = new QVBoxLayout(FemGui__DlgSettingsFemCcxImp);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gb_01_ccx_param = new QGroupBox(FemGui__DlgSettingsFemCcxImp);
        gb_01_ccx_param->setObjectName(QString::fromUtf8("gb_01_ccx_param"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_01_ccx_param->sizePolicy().hasHeightForWidth());
        gb_01_ccx_param->setSizePolicy(sizePolicy);
        gb_01_ccx_param->setLayoutDirection(Qt::LeftToRight);
        gb_01_ccx_param->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_2 = new QGridLayout(gb_01_ccx_param);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_ccx_binary_std = new QLabel(gb_01_ccx_param);
        l_ccx_binary_std->setObjectName(QString::fromUtf8("l_ccx_binary_std"));

        gridLayout->addWidget(l_ccx_binary_std, 2, 0, 1, 1);

        cb_ccx_binary_std = new Gui::PrefCheckBox(gb_01_ccx_param);
        cb_ccx_binary_std->setObjectName(QString::fromUtf8("cb_ccx_binary_std"));
        cb_ccx_binary_std->setChecked(true);
        cb_ccx_binary_std->setProperty("prefEntry", QVariant(QByteArray("UseStandardCcxLocation")));
        cb_ccx_binary_std->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gridLayout->addWidget(cb_ccx_binary_std, 2, 1, 1, 1);

        l_ccx_binary_path = new QLabel(gb_01_ccx_param);
        l_ccx_binary_path->setObjectName(QString::fromUtf8("l_ccx_binary_path"));
        l_ccx_binary_path->setEnabled(false);
        l_ccx_binary_path->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(l_ccx_binary_path, 3, 0, 1, 1);

        fc_ccx_binary_path = new Gui::PrefFileChooser(gb_01_ccx_param);
        fc_ccx_binary_path->setObjectName(QString::fromUtf8("fc_ccx_binary_path"));
        fc_ccx_binary_path->setEnabled(false);
        sizePolicy.setHeightForWidth(fc_ccx_binary_path->sizePolicy().hasHeightForWidth());
        fc_ccx_binary_path->setSizePolicy(sizePolicy);
        fc_ccx_binary_path->setMinimumSize(QSize(0, 0));
        fc_ccx_binary_path->setSizeIncrement(QSize(0, 0));
        fc_ccx_binary_path->setBaseSize(QSize(0, 0));
        fc_ccx_binary_path->setProperty("prefEntry", QVariant(QByteArray("ccxBinaryPath")));
        fc_ccx_binary_path->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gridLayout->addWidget(fc_ccx_binary_path, 3, 1, 1, 1);

        l_editor = new QLabel(gb_01_ccx_param);
        l_editor->setObjectName(QString::fromUtf8("l_editor"));

        gridLayout->addWidget(l_editor, 4, 0, 1, 1);

        cb_int_editor = new Gui::PrefCheckBox(gb_01_ccx_param);
        cb_int_editor->setObjectName(QString::fromUtf8("cb_int_editor"));
        cb_int_editor->setChecked(true);
        cb_int_editor->setProperty("prefEntry", QVariant(QByteArray("UseInternalEditor")));
        cb_int_editor->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gridLayout->addWidget(cb_int_editor, 4, 1, 1, 1);

        l_ext_editor = new QLabel(gb_01_ccx_param);
        l_ext_editor->setObjectName(QString::fromUtf8("l_ext_editor"));
        l_ext_editor->setEnabled(false);
        l_ext_editor->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(l_ext_editor, 5, 0, 1, 1);

        fc_ext_editor = new Gui::PrefFileChooser(gb_01_ccx_param);
        fc_ext_editor->setObjectName(QString::fromUtf8("fc_ext_editor"));
        fc_ext_editor->setEnabled(false);
        fc_ext_editor->setProperty("prefEntry", QVariant(QByteArray("ExternalEditorPath")));
        fc_ext_editor->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gridLayout->addWidget(fc_ext_editor, 5, 1, 1, 1);

        l_editor_2 = new QLabel(gb_01_ccx_param);
        l_editor_2->setObjectName(QString::fromUtf8("l_editor_2"));

        gridLayout->addWidget(l_editor_2, 6, 0, 1, 1);

        cb_split_inp_writer = new Gui::PrefCheckBox(gb_01_ccx_param);
        cb_split_inp_writer->setObjectName(QString::fromUtf8("cb_split_inp_writer"));
        cb_split_inp_writer->setEnabled(true);
        cb_split_inp_writer->setChecked(false);
        cb_split_inp_writer->setProperty("prefEntry", QVariant(QByteArray("SplitInputWriter")));
        cb_split_inp_writer->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gridLayout->addWidget(cb_split_inp_writer, 6, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 3);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(gb_01_ccx_param);

        gb_02_analysis_param = new QGroupBox(FemGui__DlgSettingsFemCcxImp);
        gb_02_analysis_param->setObjectName(QString::fromUtf8("gb_02_analysis_param"));
        horizontalLayout_3 = new QHBoxLayout(gb_02_analysis_param);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gl_analysis = new QGridLayout();
        gl_analysis->setSpacing(6);
        gl_analysis->setObjectName(QString::fromUtf8("gl_analysis"));
        l_type = new QLabel(gb_02_analysis_param);
        l_type->setObjectName(QString::fromUtf8("l_type"));

        gl_analysis->addWidget(l_type, 0, 0, 1, 1);

        cb_analysis_type = new Gui::PrefComboBox(gb_02_analysis_param);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/fem-solver-analysis-static.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cb_analysis_type->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/fem-solver-analysis-frequency.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cb_analysis_type->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/fem-solver-analysis-thermomechanical.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cb_analysis_type->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/fem-solver-analysis-checkmesh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cb_analysis_type->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/fem-solver-analysis-buckling.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cb_analysis_type->addItem(icon4, QString());
        cb_analysis_type->setObjectName(QString::fromUtf8("cb_analysis_type"));
        cb_analysis_type->setMinimumSize(QSize(148, 0));
        cb_analysis_type->setProperty("prefEntry", QVariant(QByteArray("AnalysisType")));
        cb_analysis_type->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_analysis->addWidget(cb_analysis_type, 0, 1, 1, 1);

        gl_analysis->setColumnStretch(0, 3);
        gl_analysis->setColumnStretch(1, 2);

        horizontalLayout_3->addLayout(gl_analysis);


        verticalLayout_2->addWidget(gb_02_analysis_param);

        gb_03_solver_param = new QGroupBox(FemGui__DlgSettingsFemCcxImp);
        gb_03_solver_param->setObjectName(QString::fromUtf8("gb_03_solver_param"));
        horizontalLayout_1 = new QHBoxLayout(gb_03_solver_param);
        horizontalLayout_1->setSpacing(6);
        horizontalLayout_1->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        gl_solver = new QGridLayout();
        gl_solver->setSpacing(6);
        gl_solver->setObjectName(QString::fromUtf8("gl_solver"));
        l_ccx_numcpu = new QLabel(gb_03_solver_param);
        l_ccx_numcpu->setObjectName(QString::fromUtf8("l_ccx_numcpu"));

        gl_solver->addWidget(l_ccx_numcpu, 0, 0, 1, 1);

        sb_ccx_numcpu = new Gui::PrefSpinBox(gb_03_solver_param);
        sb_ccx_numcpu->setObjectName(QString::fromUtf8("sb_ccx_numcpu"));
        sb_ccx_numcpu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sb_ccx_numcpu->setMinimum(1);
        sb_ccx_numcpu->setMaximum(40);
        sb_ccx_numcpu->setProperty("prefEntry", QVariant(QByteArray("AnalysisNumCPUs")));
        sb_ccx_numcpu->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(sb_ccx_numcpu, 0, 2, 1, 1);

        l_solver = new QLabel(gb_03_solver_param);
        l_solver->setObjectName(QString::fromUtf8("l_solver"));
        l_solver->setEnabled(true);

        gl_solver->addWidget(l_solver, 1, 0, 1, 1);

        cmb_solver = new Gui::PrefComboBox(gb_03_solver_param);
        cmb_solver->addItem(QString());
        cmb_solver->addItem(QString());
        cmb_solver->addItem(QString());
        cmb_solver->addItem(QString());
        cmb_solver->addItem(QString());
        cmb_solver->addItem(QString());
        cmb_solver->setObjectName(QString::fromUtf8("cmb_solver"));
        cmb_solver->setEnabled(true);
        cmb_solver->setEditable(false);
        cmb_solver->setProperty("prefEntry", QVariant(QByteArray("Solver")));
        cmb_solver->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(cmb_solver, 1, 2, 1, 1);

        l_non_lin_geom = new QLabel(gb_03_solver_param);
        l_non_lin_geom->setObjectName(QString::fromUtf8("l_non_lin_geom"));

        gl_solver->addWidget(l_non_lin_geom, 2, 0, 1, 1);

        cb_ccx_non_lin_geom = new Gui::PrefCheckBox(gb_03_solver_param);
        cb_ccx_non_lin_geom->setObjectName(QString::fromUtf8("cb_ccx_non_lin_geom"));
        cb_ccx_non_lin_geom->setChecked(false);
        cb_ccx_non_lin_geom->setProperty("prefEntry", QVariant(QByteArray("NonlinearGeometry")));
        cb_ccx_non_lin_geom->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(cb_ccx_non_lin_geom, 2, 2, 1, 1);

        l_use_iterations_param = new QLabel(gb_03_solver_param);
        l_use_iterations_param->setObjectName(QString::fromUtf8("l_use_iterations_param"));

        gl_solver->addWidget(l_use_iterations_param, 3, 0, 1, 1);

        cb_use_iterations_param = new Gui::PrefCheckBox(gb_03_solver_param);
        cb_use_iterations_param->setObjectName(QString::fromUtf8("cb_use_iterations_param"));
        cb_use_iterations_param->setChecked(false);
        cb_use_iterations_param->setProperty("prefEntry", QVariant(QByteArray("UseNonCcxIterationParam")));
        cb_use_iterations_param->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(cb_use_iterations_param, 3, 2, 1, 1);

        l_ccx_max_iterations = new QLabel(gb_03_solver_param);
        l_ccx_max_iterations->setObjectName(QString::fromUtf8("l_ccx_max_iterations"));

        gl_solver->addWidget(l_ccx_max_iterations, 4, 0, 1, 1);

        sb_ccx_max_iterations = new Gui::PrefSpinBox(gb_03_solver_param);
        sb_ccx_max_iterations->setObjectName(QString::fromUtf8("sb_ccx_max_iterations"));
        sb_ccx_max_iterations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sb_ccx_max_iterations->setMinimum(1);
        sb_ccx_max_iterations->setMaximum(10000000);
        sb_ccx_max_iterations->setSingleStep(10);
        sb_ccx_max_iterations->setValue(2000);
        sb_ccx_max_iterations->setProperty("prefEntry", QVariant(QByteArray("AnalysisMaxIterations")));
        sb_ccx_max_iterations->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(sb_ccx_max_iterations, 4, 2, 1, 1);

        l_ccx_initial_time_step = new QLabel(gb_03_solver_param);
        l_ccx_initial_time_step->setObjectName(QString::fromUtf8("l_ccx_initial_time_step"));

        gl_solver->addWidget(l_ccx_initial_time_step, 5, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_solver->addItem(horizontalSpacer_2, 5, 1, 1, 1);

        dsb_ccx_initial_time_step = new Gui::PrefDoubleSpinBox(gb_03_solver_param);
        dsb_ccx_initial_time_step->setObjectName(QString::fromUtf8("dsb_ccx_initial_time_step"));
        dsb_ccx_initial_time_step->setContextMenuPolicy(Qt::DefaultContextMenu);
        dsb_ccx_initial_time_step->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsb_ccx_initial_time_step->setDecimals(9);
        dsb_ccx_initial_time_step->setMinimum(0.000000001000000);
        dsb_ccx_initial_time_step->setSingleStep(0.010000000000000);
        dsb_ccx_initial_time_step->setValue(0.010000000000000);
        dsb_ccx_initial_time_step->setProperty("prefEntry", QVariant(QByteArray("AnalysisTimeInitialStep")));
        dsb_ccx_initial_time_step->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(dsb_ccx_initial_time_step, 5, 2, 1, 1);

        l_hz_1 = new QLabel(gb_03_solver_param);
        l_hz_1->setObjectName(QString::fromUtf8("l_hz_1"));

        gl_solver->addWidget(l_hz_1, 5, 3, 1, 1);

        l_ccx_analysis_time = new QLabel(gb_03_solver_param);
        l_ccx_analysis_time->setObjectName(QString::fromUtf8("l_ccx_analysis_time"));

        gl_solver->addWidget(l_ccx_analysis_time, 6, 0, 1, 1);

        dsb_ccx_analysis_time = new Gui::PrefDoubleSpinBox(gb_03_solver_param);
        dsb_ccx_analysis_time->setObjectName(QString::fromUtf8("dsb_ccx_analysis_time"));
        dsb_ccx_analysis_time->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsb_ccx_analysis_time->setDecimals(9);
        dsb_ccx_analysis_time->setMinimum(0.000000001000000);
        dsb_ccx_analysis_time->setSingleStep(0.010000000000000);
        dsb_ccx_analysis_time->setValue(1.000000000000000);
        dsb_ccx_analysis_time->setProperty("prefEntry", QVariant(QByteArray("AnalysisTime")));
        dsb_ccx_analysis_time->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(dsb_ccx_analysis_time, 6, 2, 1, 1);

        l_hz_2 = new QLabel(gb_03_solver_param);
        l_hz_2->setObjectName(QString::fromUtf8("l_hz_2"));

        gl_solver->addWidget(l_hz_2, 6, 3, 1, 1);

        l_ccx_minimum_time_step = new QLabel(gb_03_solver_param);
        l_ccx_minimum_time_step->setObjectName(QString::fromUtf8("l_ccx_minimum_time_step"));

        gl_solver->addWidget(l_ccx_minimum_time_step, 7, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_solver->addItem(horizontalSpacer_3, 7, 1, 1, 1);

        dsb_ccx_minimum_time_step = new Gui::PrefDoubleSpinBox(gb_03_solver_param);
        dsb_ccx_minimum_time_step->setObjectName(QString::fromUtf8("dsb_ccx_minimum_time_step"));
        dsb_ccx_minimum_time_step->setContextMenuPolicy(Qt::DefaultContextMenu);
        dsb_ccx_minimum_time_step->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsb_ccx_minimum_time_step->setDecimals(9);
        dsb_ccx_minimum_time_step->setMinimum(0.000000001000000);
        dsb_ccx_minimum_time_step->setSingleStep(0.010000000000000);
        dsb_ccx_minimum_time_step->setValue(0.000010000000000);
        dsb_ccx_minimum_time_step->setProperty("prefEntry", QVariant(QByteArray("AnalysisTimeMinimumStep")));
        dsb_ccx_minimum_time_step->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(dsb_ccx_minimum_time_step, 7, 2, 1, 1);

        l_hz_3 = new QLabel(gb_03_solver_param);
        l_hz_3->setObjectName(QString::fromUtf8("l_hz_3"));

        gl_solver->addWidget(l_hz_3, 7, 3, 1, 1);

        l_ccx_maximum_time_step = new QLabel(gb_03_solver_param);
        l_ccx_maximum_time_step->setObjectName(QString::fromUtf8("l_ccx_maximum_time_step"));

        gl_solver->addWidget(l_ccx_maximum_time_step, 8, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_solver->addItem(horizontalSpacer_4, 8, 1, 1, 1);

        dsb_ccx_maximum_time_step = new Gui::PrefDoubleSpinBox(gb_03_solver_param);
        dsb_ccx_maximum_time_step->setObjectName(QString::fromUtf8("dsb_ccx_maximum_time_step"));
        dsb_ccx_maximum_time_step->setContextMenuPolicy(Qt::DefaultContextMenu);
        dsb_ccx_maximum_time_step->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsb_ccx_maximum_time_step->setDecimals(9);
        dsb_ccx_maximum_time_step->setMinimum(0.000000001000000);
        dsb_ccx_maximum_time_step->setSingleStep(1.000000000000000);
        dsb_ccx_maximum_time_step->setValue(1.000000000000000);
        dsb_ccx_maximum_time_step->setProperty("prefEntry", QVariant(QByteArray("AnalysisTimeMaximumStep")));
        dsb_ccx_maximum_time_step->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(dsb_ccx_maximum_time_step, 8, 2, 1, 1);

        l_hz_4 = new QLabel(gb_03_solver_param);
        l_hz_4->setObjectName(QString::fromUtf8("l_hz_4"));

        gl_solver->addWidget(l_hz_4, 8, 3, 1, 1);

        l_BeamShellOutput = new QLabel(gb_03_solver_param);
        l_BeamShellOutput->setObjectName(QString::fromUtf8("l_BeamShellOutput"));

        gl_solver->addWidget(l_BeamShellOutput, 9, 0, 1, 1);

        cb_BeamShellOutput = new Gui::PrefCheckBox(gb_03_solver_param);
        cb_BeamShellOutput->setObjectName(QString::fromUtf8("cb_BeamShellOutput"));
        cb_BeamShellOutput->setChecked(true);
        cb_BeamShellOutput->setProperty("prefEntry", QVariant(QByteArray("BeamShellOutput")));
        cb_BeamShellOutput->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_solver->addWidget(cb_BeamShellOutput, 9, 2, 1, 1);

        gl_solver->setColumnStretch(0, 3);
        gl_solver->setColumnStretch(1, 2);

        horizontalLayout_1->addLayout(gl_solver);


        verticalLayout_2->addWidget(gb_03_solver_param);

        gb_04_thermomech_params = new QGroupBox(FemGui__DlgSettingsFemCcxImp);
        gb_04_thermomech_params->setObjectName(QString::fromUtf8("gb_04_thermomech_params"));
        horizontalLayout_2 = new QHBoxLayout(gb_04_thermomech_params);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gl_thremomech = new QGridLayout();
        gl_thremomech->setSpacing(6);
        gl_thremomech->setObjectName(QString::fromUtf8("gl_thremomech"));
        l_static = new QLabel(gb_04_thermomech_params);
        l_static->setObjectName(QString::fromUtf8("l_static"));

        gl_thremomech->addWidget(l_static, 1, 0, 1, 1);

        cb_static = new Gui::PrefCheckBox(gb_04_thermomech_params);
        cb_static->setObjectName(QString::fromUtf8("cb_static"));
        cb_static->setChecked(true);
        cb_static->setProperty("prefEntry", QVariant(QByteArray("StaticAnalysis")));
        cb_static->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_thremomech->addWidget(cb_static, 1, 1, 1, 1);

        gl_thremomech->setColumnStretch(0, 3);
        gl_thremomech->setColumnStretch(1, 2);

        horizontalLayout_2->addLayout(gl_thremomech);


        verticalLayout_2->addWidget(gb_04_thermomech_params);

        gb_05_frequercy_params = new QGroupBox(FemGui__DlgSettingsFemCcxImp);
        gb_05_frequercy_params->setObjectName(QString::fromUtf8("gb_05_frequercy_params"));
        verticalLayout = new QVBoxLayout(gb_05_frequercy_params);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gl_frequ = new QGridLayout();
        gl_frequ->setSpacing(6);
        gl_frequ->setObjectName(QString::fromUtf8("gl_frequ"));
        l_eigenmode_number = new QLabel(gb_05_frequercy_params);
        l_eigenmode_number->setObjectName(QString::fromUtf8("l_eigenmode_number"));

        gl_frequ->addWidget(l_eigenmode_number, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_frequ->addItem(horizontalSpacer, 1, 1, 1, 1);

        sb_eigenmode_number = new Gui::PrefSpinBox(gb_05_frequercy_params);
        sb_eigenmode_number->setObjectName(QString::fromUtf8("sb_eigenmode_number"));
        sb_eigenmode_number->setMinimumSize(QSize(158, 0));
        sb_eigenmode_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sb_eigenmode_number->setMaximum(100);
        sb_eigenmode_number->setValue(10);
        sb_eigenmode_number->setProperty("prefEntry", QVariant(QByteArray("EigenmodesCount")));
        sb_eigenmode_number->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_frequ->addWidget(sb_eigenmode_number, 1, 2, 1, 1);

        l_eigenmode_high_limit = new QLabel(gb_05_frequercy_params);
        l_eigenmode_high_limit->setObjectName(QString::fromUtf8("l_eigenmode_high_limit"));

        gl_frequ->addWidget(l_eigenmode_high_limit, 2, 0, 1, 1);

        dsb_eigenmode_high_limit = new Gui::PrefDoubleSpinBox(gb_05_frequercy_params);
        dsb_eigenmode_high_limit->setObjectName(QString::fromUtf8("dsb_eigenmode_high_limit"));
        dsb_eigenmode_high_limit->setMinimumSize(QSize(158, 0));
        dsb_eigenmode_high_limit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsb_eigenmode_high_limit->setDecimals(1);
        dsb_eigenmode_high_limit->setMaximum(1000000.000000000000000);
        dsb_eigenmode_high_limit->setSingleStep(10000.000000000000000);
        dsb_eigenmode_high_limit->setValue(1000000.000000000000000);
        dsb_eigenmode_high_limit->setProperty("prefEntry", QVariant(QByteArray("EigenmodeHighLimit")));
        dsb_eigenmode_high_limit->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_frequ->addWidget(dsb_eigenmode_high_limit, 2, 2, 1, 1);

        l_hz_5 = new QLabel(gb_05_frequercy_params);
        l_hz_5->setObjectName(QString::fromUtf8("l_hz_5"));

        gl_frequ->addWidget(l_hz_5, 2, 3, 1, 1);

        l_eigenmode_low_limit = new QLabel(gb_05_frequercy_params);
        l_eigenmode_low_limit->setObjectName(QString::fromUtf8("l_eigenmode_low_limit"));

        gl_frequ->addWidget(l_eigenmode_low_limit, 3, 0, 1, 1);

        dsb_eigenmode_low_limit = new Gui::PrefDoubleSpinBox(gb_05_frequercy_params);
        dsb_eigenmode_low_limit->setObjectName(QString::fromUtf8("dsb_eigenmode_low_limit"));
        dsb_eigenmode_low_limit->setMinimumSize(QSize(158, 0));
        dsb_eigenmode_low_limit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsb_eigenmode_low_limit->setDecimals(1);
        dsb_eigenmode_low_limit->setMinimum(0.000000000000000);
        dsb_eigenmode_low_limit->setMaximum(1000000.000000000000000);
        dsb_eigenmode_low_limit->setSingleStep(10000.000000000000000);
        dsb_eigenmode_low_limit->setValue(0.000000000000000);
        dsb_eigenmode_low_limit->setProperty("prefEntry", QVariant(QByteArray("EigenmodeLowLimit")));
        dsb_eigenmode_low_limit->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Ccx")));

        gl_frequ->addWidget(dsb_eigenmode_low_limit, 3, 2, 1, 1);

        l_hz = new QLabel(gb_05_frequercy_params);
        l_hz->setObjectName(QString::fromUtf8("l_hz"));

        gl_frequ->addWidget(l_hz, 3, 3, 1, 1);

        gl_frequ->setColumnStretch(0, 6);
        gl_frequ->setColumnStretch(1, 3);
        gl_frequ->setColumnStretch(2, 1);

        verticalLayout->addLayout(gl_frequ);


        verticalLayout_2->addWidget(gb_05_frequercy_params);


        retranslateUi(FemGui__DlgSettingsFemCcxImp);
        QObject::connect(cb_int_editor, SIGNAL(toggled(bool)), l_ext_editor, SLOT(setDisabled(bool)));
        QObject::connect(cb_int_editor, SIGNAL(toggled(bool)), fc_ext_editor, SLOT(setDisabled(bool)));
        QObject::connect(cb_ccx_binary_std, SIGNAL(toggled(bool)), l_ccx_binary_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_ccx_binary_std, SIGNAL(toggled(bool)), fc_ccx_binary_path, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemCcxImp);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemCcxImp)
    {
        FemGui__DlgSettingsFemCcxImp->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "CalculiX", nullptr));
        gb_01_ccx_param->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "CalculiX", nullptr));
        l_ccx_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "CalculiX binary", nullptr));
        cb_ccx_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Search in known binary directories", nullptr));
        l_ccx_binary_path->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "ccx binary path", nullptr));
#if QT_CONFIG(tooltip)
        fc_ccx_binary_path->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Leave blank to use default CalculiX ccx binary file", nullptr));
#endif // QT_CONFIG(tooltip)
        l_editor->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Input file Editor", nullptr));
        cb_int_editor->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Use internal editor for *.inp files", nullptr));
        l_ext_editor->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "External editor:", nullptr));
        l_editor_2->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Input file splitting", nullptr));
        cb_split_inp_writer->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Split writing of  *.inp", nullptr));
        gb_02_analysis_param->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Analysis defaults", nullptr));
        l_type->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Type", nullptr));
        cb_analysis_type->setItemText(0, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Static", nullptr));
        cb_analysis_type->setItemText(1, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Frequency", nullptr));
        cb_analysis_type->setItemText(2, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Thermomech", nullptr));
        cb_analysis_type->setItemText(3, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Check Mesh", nullptr));
        cb_analysis_type->setItemText(4, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Buckling", nullptr));

#if QT_CONFIG(tooltip)
        cb_analysis_type->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Default type on analysis", nullptr));
#endif // QT_CONFIG(tooltip)
        gb_03_solver_param->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Solver defaults", nullptr));
        l_ccx_numcpu->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Number of CPU's to use", nullptr));
        l_solver->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Matrix solver", nullptr));
        cmb_solver->setItemText(0, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Default", nullptr));
        cmb_solver->setItemText(1, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "PaStiX", nullptr));
        cmb_solver->setItemText(2, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Pardiso", nullptr));
        cmb_solver->setItemText(3, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Spooles equation solver", nullptr));
        cmb_solver->setItemText(4, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Iterative Scaling", nullptr));
        cmb_solver->setItemText(5, QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Cholesky iterative solver", nullptr));

        l_non_lin_geom->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Non-linear geometry", nullptr));
        cb_ccx_non_lin_geom->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Use non-linear geometry", nullptr));
        l_use_iterations_param->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Time incrementation control parameter", nullptr));
        cb_use_iterations_param->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Use non ccx defaults", nullptr));
        l_ccx_max_iterations->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Maximum number of iterations", nullptr));
        l_ccx_initial_time_step->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Time Initial Step", nullptr));
        l_hz_1->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "s", nullptr));
        l_ccx_analysis_time->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Time End", nullptr));
        l_hz_2->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "s", nullptr));
        l_ccx_minimum_time_step->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Time Minimum Step", nullptr));
        l_hz_3->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "s", nullptr));
        l_ccx_maximum_time_step->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Time Maximum Step", nullptr));
        l_hz_4->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "s", nullptr));
        l_BeamShellOutput->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Beam, shell element 3D output format", nullptr));
        cb_BeamShellOutput->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "3D Output, unchecked for 2D", nullptr));
        gb_04_thermomech_params->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Thermo mechanical defaults", nullptr));
        l_static->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Analysis type (transient or steady state)", nullptr));
        cb_static->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Use steady state", nullptr));
        gb_05_frequercy_params->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Frequency defaults", nullptr));
        l_eigenmode_number->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Eigenmode number", nullptr));
        l_eigenmode_high_limit->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "High frequency limit", nullptr));
        l_hz_5->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Hz", nullptr));
        l_eigenmode_low_limit->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Low frequency limit", nullptr));
        l_hz->setText(QCoreApplication::translate("FemGui::DlgSettingsFemCcxImp", "Hz", nullptr));
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemCcxImp: public Ui_DlgSettingsFemCcxImp {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMCCX_H
