/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemElmer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMELMER_H
#define UI_DLGSETTINGSFEMELMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"
#include "Gui/PrefWidgets.h"

namespace FemGui {

class Ui_DlgSettingsFemElmerImp
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *gb_gmsh_param;
    QGridLayout *gridLayout;
    QLabel *l_grid_binary_std;
    Gui::PrefFileChooser *fc_elmer_binary_path;
    Gui::PrefCheckBox *cb_grid_binary_std;
    Gui::PrefFileChooser *fc_grid_binary_path;
    QLabel *l_elmer_binary_std;
    Gui::PrefCheckBox *cb_elmer_binary_std;
    QLabel *l_grid_binary_path;
    QLabel *l_elmer_binary_path;
    QGroupBox *gb_elmer_options;
    QGridLayout *gridLayout_2;
    QLabel *l_elmer_multithreading;
    QHBoxLayout *horizontalLayout;
    QLabel *label_cores;
    Gui::PrefSpinBox *sb_elmer_num_cores;
    QSpacerItem *horizontalSpacer;
    QLabel *l_elmer_multiCPU;
    Gui::PrefCheckBox *cb_elmer_filtering;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__DlgSettingsFemElmerImp)
    {
        if (FemGui__DlgSettingsFemElmerImp->objectName().isEmpty())
            FemGui__DlgSettingsFemElmerImp->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemElmerImp"));
        FemGui__DlgSettingsFemElmerImp->resize(350, 259);
        gridLayout_3 = new QGridLayout(FemGui__DlgSettingsFemElmerImp);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gb_gmsh_param = new QGroupBox(FemGui__DlgSettingsFemElmerImp);
        gb_gmsh_param->setObjectName(QString::fromUtf8("gb_gmsh_param"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_gmsh_param->sizePolicy().hasHeightForWidth());
        gb_gmsh_param->setSizePolicy(sizePolicy);
        gb_gmsh_param->setLayoutDirection(Qt::LeftToRight);
        gb_gmsh_param->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout = new QGridLayout(gb_gmsh_param);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_grid_binary_std = new QLabel(gb_gmsh_param);
        l_grid_binary_std->setObjectName(QString::fromUtf8("l_grid_binary_std"));

        gridLayout->addWidget(l_grid_binary_std, 0, 0, 1, 1);

        fc_elmer_binary_path = new Gui::PrefFileChooser(gb_gmsh_param);
        fc_elmer_binary_path->setObjectName(QString::fromUtf8("fc_elmer_binary_path"));
        fc_elmer_binary_path->setEnabled(false);
        sizePolicy.setHeightForWidth(fc_elmer_binary_path->sizePolicy().hasHeightForWidth());
        fc_elmer_binary_path->setSizePolicy(sizePolicy);
        fc_elmer_binary_path->setMinimumSize(QSize(0, 0));
        fc_elmer_binary_path->setSizeIncrement(QSize(0, 0));
        fc_elmer_binary_path->setBaseSize(QSize(0, 0));
        fc_elmer_binary_path->setProperty("prefEntry", QVariant(QByteArray("elmerBinaryPath")));
        fc_elmer_binary_path->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Elmer")));

        gridLayout->addWidget(fc_elmer_binary_path, 3, 1, 1, 1);

        cb_grid_binary_std = new Gui::PrefCheckBox(gb_gmsh_param);
        cb_grid_binary_std->setObjectName(QString::fromUtf8("cb_grid_binary_std"));
        cb_grid_binary_std->setChecked(true);
        cb_grid_binary_std->setProperty("prefEntry", QVariant(QByteArray("UseStandardGridLocation")));
        cb_grid_binary_std->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Elmer")));

        gridLayout->addWidget(cb_grid_binary_std, 0, 1, 1, 1);

        fc_grid_binary_path = new Gui::PrefFileChooser(gb_gmsh_param);
        fc_grid_binary_path->setObjectName(QString::fromUtf8("fc_grid_binary_path"));
        fc_grid_binary_path->setEnabled(false);
        sizePolicy.setHeightForWidth(fc_grid_binary_path->sizePolicy().hasHeightForWidth());
        fc_grid_binary_path->setSizePolicy(sizePolicy);
        fc_grid_binary_path->setMinimumSize(QSize(0, 0));
        fc_grid_binary_path->setSizeIncrement(QSize(0, 0));
        fc_grid_binary_path->setBaseSize(QSize(0, 0));
        fc_grid_binary_path->setProperty("prefEntry", QVariant(QByteArray("gridBinaryPath")));
        fc_grid_binary_path->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Elmer")));

        gridLayout->addWidget(fc_grid_binary_path, 1, 1, 1, 1);

        l_elmer_binary_std = new QLabel(gb_gmsh_param);
        l_elmer_binary_std->setObjectName(QString::fromUtf8("l_elmer_binary_std"));

        gridLayout->addWidget(l_elmer_binary_std, 2, 0, 1, 1);

        cb_elmer_binary_std = new Gui::PrefCheckBox(gb_gmsh_param);
        cb_elmer_binary_std->setObjectName(QString::fromUtf8("cb_elmer_binary_std"));
        cb_elmer_binary_std->setChecked(true);
        cb_elmer_binary_std->setProperty("prefEntry", QVariant(QByteArray("UseStandardElmerLocation")));
        cb_elmer_binary_std->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Elmer")));

        gridLayout->addWidget(cb_elmer_binary_std, 2, 1, 1, 1);

        l_grid_binary_path = new QLabel(gb_gmsh_param);
        l_grid_binary_path->setObjectName(QString::fromUtf8("l_grid_binary_path"));
        l_grid_binary_path->setEnabled(false);
        l_grid_binary_path->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(l_grid_binary_path, 1, 0, 1, 1);

        l_elmer_binary_path = new QLabel(gb_gmsh_param);
        l_elmer_binary_path->setObjectName(QString::fromUtf8("l_elmer_binary_path"));
        l_elmer_binary_path->setEnabled(false);
        l_elmer_binary_path->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(l_elmer_binary_path, 3, 0, 1, 1);


        gridLayout_3->addWidget(gb_gmsh_param, 0, 0, 1, 1);

        gb_elmer_options = new QGroupBox(FemGui__DlgSettingsFemElmerImp);
        gb_elmer_options->setObjectName(QString::fromUtf8("gb_elmer_options"));
        gridLayout_2 = new QGridLayout(gb_elmer_options);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        l_elmer_multithreading = new QLabel(gb_elmer_options);
        l_elmer_multithreading->setObjectName(QString::fromUtf8("l_elmer_multithreading"));

        gridLayout_2->addWidget(l_elmer_multithreading, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_cores = new QLabel(gb_elmer_options);
        label_cores->setObjectName(QString::fromUtf8("label_cores"));
        label_cores->setEnabled(true);

        horizontalLayout->addWidget(label_cores);

        sb_elmer_num_cores = new Gui::PrefSpinBox(gb_elmer_options);
        sb_elmer_num_cores->setObjectName(QString::fromUtf8("sb_elmer_num_cores"));
        sb_elmer_num_cores->setEnabled(true);
        sb_elmer_num_cores->setMinimum(1);
        sb_elmer_num_cores->setMaximum(32);
        sb_elmer_num_cores->setProperty("prefEntry", QVariant(QByteArray("UseNumberOfCores")));
        sb_elmer_num_cores->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Elmer")));

        horizontalLayout->addWidget(sb_elmer_num_cores);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        l_elmer_multiCPU = new QLabel(gb_elmer_options);
        l_elmer_multiCPU->setObjectName(QString::fromUtf8("l_elmer_multiCPU"));

        gridLayout_2->addWidget(l_elmer_multiCPU, 1, 0, 1, 1);

        cb_elmer_filtering = new Gui::PrefCheckBox(gb_elmer_options);
        cb_elmer_filtering->setObjectName(QString::fromUtf8("cb_elmer_filtering"));
        cb_elmer_filtering->setChecked(true);
        cb_elmer_filtering->setProperty("prefEntry", QVariant(QByteArray("FilterMultiCPUResults")));
        cb_elmer_filtering->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Elmer")));

        gridLayout_2->addWidget(cb_elmer_filtering, 1, 1, 1, 1);


        gridLayout_3->addWidget(gb_elmer_options, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(FemGui__DlgSettingsFemElmerImp);
        QObject::connect(cb_grid_binary_std, SIGNAL(toggled(bool)), l_grid_binary_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_grid_binary_std, SIGNAL(toggled(bool)), fc_grid_binary_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_elmer_binary_std, SIGNAL(toggled(bool)), fc_elmer_binary_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_elmer_binary_std, SIGNAL(toggled(bool)), l_elmer_binary_path, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemElmerImp);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemElmerImp)
    {
        FemGui__DlgSettingsFemElmerImp->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Elmer", nullptr));
        gb_gmsh_param->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Elmer binaries", nullptr));
        l_grid_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "ElmerGrid:", nullptr));
#if QT_CONFIG(tooltip)
        fc_elmer_binary_path->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "<html><head/><body><p>Leave blank to use default Elmer elmer binary file</p><p><span style=\" font-weight:600;\">Note:</span> To use multithreading you must specify here<br> the executable variant with the suffix &quot;_mpi&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_grid_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Search in known binary directories", nullptr));
#if QT_CONFIG(tooltip)
        fc_grid_binary_path->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Leave blank to use default ElmerGrid binary file", nullptr));
#endif // QT_CONFIG(tooltip)
        l_elmer_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "ElmerSolver:", nullptr));
        cb_elmer_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Search in known binary directories", nullptr));
        l_grid_binary_path->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "ElmerGrid binary path", nullptr));
        l_elmer_binary_path->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "ElmerSolver binary path", nullptr));
        gb_elmer_options->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Options", nullptr));
        l_elmer_multithreading->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Multithreading:", nullptr));
        label_cores->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "CPU cores to be used:", nullptr));
#if QT_CONFIG(tooltip)
        sb_elmer_num_cores->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> It is recommended to use an even number of cores to benefit from mesh symmetries. (Using 8 cores can be faster than 9 cores.)<br/><span style=\" font-weight:600;\">Note too:</span> In extreme cases ElmerSolver might not converge if the core number is too high.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        l_elmer_multiCPU->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Multi-core CPU support:", nullptr));
#if QT_CONFIG(tooltip)
        cb_elmer_filtering->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "The mesh volume regions processed by each CPU core\n"
"will be merged to make the volume boundaries invisible.", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_elmer_filtering->setText(QCoreApplication::translate("FemGui::DlgSettingsFemElmerImp", "Filter results", nullptr));
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemElmerImp: public Ui_DlgSettingsFemElmerImp {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMELMER_H
