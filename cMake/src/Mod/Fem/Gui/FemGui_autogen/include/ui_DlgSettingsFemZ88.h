/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemZ88.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMZ88_H
#define UI_DLGSETTINGSFEMZ88_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"
#include "Gui/PrefWidgets.h"

namespace FemGui {

class Ui_DlgSettingsFemZ88Imp
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gb_z88_param_binary;
    QVBoxLayout *verticalLayout;
    QGridLayout *gl_z88;
    Gui::PrefCheckBox *cb_z88_binary_std;
    QLabel *l_z88_binary_path;
    Gui::PrefFileChooser *fc_z88_binary_path;
    QGroupBox *gb_z88_param_solver;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gl_z88_2;
    QLabel *l_solver_method;
    Gui::PrefComboBox *cmb_solver;
    QLabel *l_max_stiffness;
    Gui::PrefSpinBox *sb_Z88_MaxGS;
    QLabel *l_max_coincidence;
    Gui::PrefSpinBox *sb_Z88_MaxKOI;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__DlgSettingsFemZ88Imp)
    {
        if (FemGui__DlgSettingsFemZ88Imp->objectName().isEmpty())
            FemGui__DlgSettingsFemZ88Imp->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemZ88Imp"));
        FemGui__DlgSettingsFemZ88Imp->resize(466, 218);
        verticalLayout_3 = new QVBoxLayout(FemGui__DlgSettingsFemZ88Imp);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gb_z88_param_binary = new QGroupBox(FemGui__DlgSettingsFemZ88Imp);
        gb_z88_param_binary->setObjectName(QString::fromUtf8("gb_z88_param_binary"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_z88_param_binary->sizePolicy().hasHeightForWidth());
        gb_z88_param_binary->setSizePolicy(sizePolicy);
        gb_z88_param_binary->setLayoutDirection(Qt::LeftToRight);
        gb_z88_param_binary->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout = new QVBoxLayout(gb_z88_param_binary);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gl_z88 = new QGridLayout();
        gl_z88->setSpacing(6);
        gl_z88->setObjectName(QString::fromUtf8("gl_z88"));
        cb_z88_binary_std = new Gui::PrefCheckBox(gb_z88_param_binary);
        cb_z88_binary_std->setObjectName(QString::fromUtf8("cb_z88_binary_std"));
        cb_z88_binary_std->setMinimumSize(QSize(0, 20));
        cb_z88_binary_std->setChecked(true);
        cb_z88_binary_std->setProperty("prefEntry", QVariant(QByteArray("UseStandardZ88Location")));
        cb_z88_binary_std->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Z88")));

        gl_z88->addWidget(cb_z88_binary_std, 0, 2, 1, 1);

        l_z88_binary_path = new QLabel(gb_z88_param_binary);
        l_z88_binary_path->setObjectName(QString::fromUtf8("l_z88_binary_path"));
        l_z88_binary_path->setEnabled(true);
        sizePolicy.setHeightForWidth(l_z88_binary_path->sizePolicy().hasHeightForWidth());
        l_z88_binary_path->setSizePolicy(sizePolicy);
        l_z88_binary_path->setMinimumSize(QSize(0, 0));

        gl_z88->addWidget(l_z88_binary_path, 2, 0, 1, 1);

        fc_z88_binary_path = new Gui::PrefFileChooser(gb_z88_param_binary);
        fc_z88_binary_path->setObjectName(QString::fromUtf8("fc_z88_binary_path"));
        fc_z88_binary_path->setEnabled(false);
        sizePolicy.setHeightForWidth(fc_z88_binary_path->sizePolicy().hasHeightForWidth());
        fc_z88_binary_path->setSizePolicy(sizePolicy);
        fc_z88_binary_path->setMinimumSize(QSize(0, 20));
        fc_z88_binary_path->setSizeIncrement(QSize(0, 0));
        fc_z88_binary_path->setBaseSize(QSize(0, 0));
        fc_z88_binary_path->setProperty("prefEntry", QVariant(QByteArray("z88BinaryPath")));
        fc_z88_binary_path->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Z88")));

        gl_z88->addWidget(fc_z88_binary_path, 2, 2, 1, 1);


        verticalLayout->addLayout(gl_z88);


        verticalLayout_3->addWidget(gb_z88_param_binary);

        gb_z88_param_solver = new QGroupBox(FemGui__DlgSettingsFemZ88Imp);
        gb_z88_param_solver->setObjectName(QString::fromUtf8("gb_z88_param_solver"));
        sizePolicy.setHeightForWidth(gb_z88_param_solver->sizePolicy().hasHeightForWidth());
        gb_z88_param_solver->setSizePolicy(sizePolicy);
        gb_z88_param_solver->setLayoutDirection(Qt::LeftToRight);
        gb_z88_param_solver->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_2 = new QVBoxLayout(gb_z88_param_solver);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gl_z88_2 = new QGridLayout();
        gl_z88_2->setSpacing(6);
        gl_z88_2->setObjectName(QString::fromUtf8("gl_z88_2"));
        l_solver_method = new QLabel(gb_z88_param_solver);
        l_solver_method->setObjectName(QString::fromUtf8("l_solver_method"));

        gl_z88_2->addWidget(l_solver_method, 1, 0, 1, 1);

        cmb_solver = new Gui::PrefComboBox(gb_z88_param_solver);
        cmb_solver->addItem(QString());
        cmb_solver->addItem(QString());
        cmb_solver->addItem(QString());
        cmb_solver->setObjectName(QString::fromUtf8("cmb_solver"));
        cmb_solver->setEnabled(true);
        cmb_solver->setMinimumSize(QSize(0, 20));
        cmb_solver->setEditable(false);
        cmb_solver->setProperty("prefEntry", QVariant(QByteArray("Solver")));
        cmb_solver->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Z88")));

        gl_z88_2->addWidget(cmb_solver, 1, 2, 1, 1);

        l_max_stiffness = new QLabel(gb_z88_param_solver);
        l_max_stiffness->setObjectName(QString::fromUtf8("l_max_stiffness"));

        gl_z88_2->addWidget(l_max_stiffness, 2, 0, 1, 1);

        sb_Z88_MaxGS = new Gui::PrefSpinBox(gb_z88_param_solver);
        sb_Z88_MaxGS->setObjectName(QString::fromUtf8("sb_Z88_MaxGS"));
        sb_Z88_MaxGS->setMinimumSize(QSize(0, 20));
        sb_Z88_MaxGS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sb_Z88_MaxGS->setMinimum(6000000);
        sb_Z88_MaxGS->setMaximum(2147483647);
        sb_Z88_MaxGS->setSingleStep(10000000);
        sb_Z88_MaxGS->setValue(100000000);
        sb_Z88_MaxGS->setProperty("prefEntry", QVariant(QByteArray("MaxGS")));
        sb_Z88_MaxGS->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Z88")));

        gl_z88_2->addWidget(sb_Z88_MaxGS, 2, 2, 1, 1);

        l_max_coincidence = new QLabel(gb_z88_param_solver);
        l_max_coincidence->setObjectName(QString::fromUtf8("l_max_coincidence"));

        gl_z88_2->addWidget(l_max_coincidence, 3, 0, 1, 1);

        sb_Z88_MaxKOI = new Gui::PrefSpinBox(gb_z88_param_solver);
        sb_Z88_MaxKOI->setObjectName(QString::fromUtf8("sb_Z88_MaxKOI"));
        sb_Z88_MaxKOI->setMinimumSize(QSize(0, 20));
        sb_Z88_MaxKOI->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sb_Z88_MaxKOI->setMinimum(50000);
        sb_Z88_MaxKOI->setMaximum(2147483647);
        sb_Z88_MaxKOI->setSingleStep(100000);
        sb_Z88_MaxKOI->setValue(2800000);
        sb_Z88_MaxKOI->setProperty("prefEntry", QVariant(QByteArray("MaxKOI")));
        sb_Z88_MaxKOI->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Z88")));

        gl_z88_2->addWidget(sb_Z88_MaxKOI, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gl_z88_2);


        verticalLayout_3->addWidget(gb_z88_param_solver);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(FemGui__DlgSettingsFemZ88Imp);
        QObject::connect(cb_z88_binary_std, SIGNAL(toggled(bool)), l_z88_binary_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_z88_binary_std, SIGNAL(toggled(bool)), fc_z88_binary_path, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemZ88Imp);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemZ88Imp)
    {
        FemGui__DlgSettingsFemZ88Imp->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Z88", nullptr));
        gb_z88_param_binary->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Z88 binary", nullptr));
        cb_z88_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Search in known binary directories", nullptr));
        l_z88_binary_path->setText(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "z88r binary path", nullptr));
#if QT_CONFIG(tooltip)
        fc_z88_binary_path->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Leave blank to use default Z88, z88r binary file", nullptr));
#endif // QT_CONFIG(tooltip)
        gb_z88_param_solver->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Solver settings", nullptr));
        l_solver_method->setText(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Solver method", nullptr));
        cmb_solver->setItemText(0, QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Iteration solver with SOR preconditioning (-sorcg)", nullptr));
        cmb_solver->setItemText(1, QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Iteration solver with SIC preconditioning (-siccg)", nullptr));
        cmb_solver->setItemText(2, QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Simple Cholesky solver (-choly)", nullptr));

#if QT_CONFIG(tooltip)
        cmb_solver->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Solver method to be used", nullptr));
#endif // QT_CONFIG(tooltip)
        l_max_stiffness->setText(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Max places in stiffness matrix", nullptr));
#if QT_CONFIG(tooltip)
        sb_Z88_MaxGS->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Maximal places in stiffnes matrix.\n"
"You might need to increase this when using the\n"
"Cholesky solver and you get the error message\n"
"that \"MAXGS\" needs to be increased.", nullptr));
#endif // QT_CONFIG(tooltip)
        l_max_coincidence->setText(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Max places in coincidence vector", nullptr));
#if QT_CONFIG(tooltip)
        sb_Z88_MaxKOI->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemZ88Imp", "Maximal places in coincidence vector.\n"
"(number of knots per element times\n"
" number of finite elements)\n"
"\n"
"You might need to increase this when using an\n"
"iterative solver and you get the error message\n"
"that \"MAXKOI\" needs to be increased.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemZ88Imp: public Ui_DlgSettingsFemZ88Imp {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMZ88_H
