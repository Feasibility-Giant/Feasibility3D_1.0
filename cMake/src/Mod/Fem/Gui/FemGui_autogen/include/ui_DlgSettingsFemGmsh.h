/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemGmsh.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMGMSH_H
#define UI_DLGSETTINGSFEMGMSH_H

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

class Ui_DlgSettingsFemGmshImp
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_gmsh_param;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *cb_gmsh_binary_std;
    QLabel *l_gmsh_binary_path;
    Gui::PrefFileChooser *fc_gmsh_binary_path;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__DlgSettingsFemGmshImp)
    {
        if (FemGui__DlgSettingsFemGmshImp->objectName().isEmpty())
            FemGui__DlgSettingsFemGmshImp->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemGmshImp"));
        FemGui__DlgSettingsFemGmshImp->resize(400, 105);
        verticalLayout_2 = new QVBoxLayout(FemGui__DlgSettingsFemGmshImp);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gb_gmsh_param = new QGroupBox(FemGui__DlgSettingsFemGmshImp);
        gb_gmsh_param->setObjectName(QString::fromUtf8("gb_gmsh_param"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_gmsh_param->sizePolicy().hasHeightForWidth());
        gb_gmsh_param->setSizePolicy(sizePolicy);
        gb_gmsh_param->setLayoutDirection(Qt::LeftToRight);
        gb_gmsh_param->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout = new QVBoxLayout(gb_gmsh_param);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cb_gmsh_binary_std = new Gui::PrefCheckBox(gb_gmsh_param);
        cb_gmsh_binary_std->setObjectName(QString::fromUtf8("cb_gmsh_binary_std"));
        cb_gmsh_binary_std->setChecked(true);
        cb_gmsh_binary_std->setProperty("prefEntry", QVariant(QByteArray("UseStandardGmshLocation")));
        cb_gmsh_binary_std->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Gmsh")));

        gridLayout->addWidget(cb_gmsh_binary_std, 0, 1, 1, 1);

        l_gmsh_binary_path = new QLabel(gb_gmsh_param);
        l_gmsh_binary_path->setObjectName(QString::fromUtf8("l_gmsh_binary_path"));
        l_gmsh_binary_path->setEnabled(false);
        l_gmsh_binary_path->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(l_gmsh_binary_path, 1, 0, 1, 1);

        fc_gmsh_binary_path = new Gui::PrefFileChooser(gb_gmsh_param);
        fc_gmsh_binary_path->setObjectName(QString::fromUtf8("fc_gmsh_binary_path"));
        fc_gmsh_binary_path->setEnabled(false);
        sizePolicy.setHeightForWidth(fc_gmsh_binary_path->sizePolicy().hasHeightForWidth());
        fc_gmsh_binary_path->setSizePolicy(sizePolicy);
        fc_gmsh_binary_path->setMinimumSize(QSize(0, 0));
        fc_gmsh_binary_path->setSizeIncrement(QSize(0, 0));
        fc_gmsh_binary_path->setBaseSize(QSize(0, 0));
        fc_gmsh_binary_path->setProperty("prefEntry", QVariant(QByteArray("gmshBinaryPath")));
        fc_gmsh_binary_path->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Gmsh")));

        gridLayout->addWidget(fc_gmsh_binary_path, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(gb_gmsh_param);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(FemGui__DlgSettingsFemGmshImp);
        QObject::connect(cb_gmsh_binary_std, SIGNAL(toggled(bool)), l_gmsh_binary_path, SLOT(setEnabled(bool)));
        QObject::connect(cb_gmsh_binary_std, SIGNAL(toggled(bool)), fc_gmsh_binary_path, SLOT(setEnabled(bool)));
        QObject::connect(cb_gmsh_binary_std, SIGNAL(toggled(bool)), l_gmsh_binary_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_gmsh_binary_std, SIGNAL(toggled(bool)), fc_gmsh_binary_path, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemGmshImp);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemGmshImp)
    {
        FemGui__DlgSettingsFemGmshImp->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemGmshImp", "Gmsh", nullptr));
        gb_gmsh_param->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemGmshImp", "Gmsh binary", nullptr));
        cb_gmsh_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGmshImp", "Search in known binary directories", nullptr));
        l_gmsh_binary_path->setText(QCoreApplication::translate("FemGui::DlgSettingsFemGmshImp", "Gmsh binary path", nullptr));
#if QT_CONFIG(tooltip)
        fc_gmsh_binary_path->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemGmshImp", "Leave blank to use default Gmsh binary file", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemGmshImp: public Ui_DlgSettingsFemGmshImp {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMGMSH_H
