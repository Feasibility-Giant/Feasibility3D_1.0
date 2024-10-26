/********************************************************************************
** Form generated from reading UI file 'DlgSettingsFemMystran.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSFEMMYSTRAN_H
#define UI_DLGSETTINGSFEMMYSTRAN_H

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

class Ui_DlgSettingsFemMystranImp
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_mystran_param;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *cb_mystran_binary_std;
    QLabel *l_mystran_binary_path;
    Gui::PrefFileChooser *fc_mystran_binary_path;
    QLabel *l_mystran_write_comments;
    Gui::PrefCheckBox *cb_mystran_write_comments;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__DlgSettingsFemMystranImp)
    {
        if (FemGui__DlgSettingsFemMystranImp->objectName().isEmpty())
            FemGui__DlgSettingsFemMystranImp->setObjectName(QString::fromUtf8("FemGui__DlgSettingsFemMystranImp"));
        FemGui__DlgSettingsFemMystranImp->resize(400, 128);
        verticalLayout_2 = new QVBoxLayout(FemGui__DlgSettingsFemMystranImp);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gb_mystran_param = new QGroupBox(FemGui__DlgSettingsFemMystranImp);
        gb_mystran_param->setObjectName(QString::fromUtf8("gb_mystran_param"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_mystran_param->sizePolicy().hasHeightForWidth());
        gb_mystran_param->setSizePolicy(sizePolicy);
        gb_mystran_param->setLayoutDirection(Qt::LeftToRight);
        gb_mystran_param->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout = new QVBoxLayout(gb_mystran_param);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cb_mystran_binary_std = new Gui::PrefCheckBox(gb_mystran_param);
        cb_mystran_binary_std->setObjectName(QString::fromUtf8("cb_mystran_binary_std"));
        cb_mystran_binary_std->setChecked(true);
        cb_mystran_binary_std->setProperty("prefEntry", QVariant(QByteArray("UseStandardMystranLocation")));
        cb_mystran_binary_std->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Mystran")));

        gridLayout->addWidget(cb_mystran_binary_std, 0, 1, 1, 1);

        l_mystran_binary_path = new QLabel(gb_mystran_param);
        l_mystran_binary_path->setObjectName(QString::fromUtf8("l_mystran_binary_path"));
        l_mystran_binary_path->setEnabled(false);
        l_mystran_binary_path->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(l_mystran_binary_path, 1, 0, 1, 1);

        fc_mystran_binary_path = new Gui::PrefFileChooser(gb_mystran_param);
        fc_mystran_binary_path->setObjectName(QString::fromUtf8("fc_mystran_binary_path"));
        fc_mystran_binary_path->setEnabled(false);
        sizePolicy.setHeightForWidth(fc_mystran_binary_path->sizePolicy().hasHeightForWidth());
        fc_mystran_binary_path->setSizePolicy(sizePolicy);
        fc_mystran_binary_path->setMinimumSize(QSize(0, 0));
        fc_mystran_binary_path->setSizeIncrement(QSize(0, 0));
        fc_mystran_binary_path->setBaseSize(QSize(0, 0));
        fc_mystran_binary_path->setProperty("prefEntry", QVariant(QByteArray("mystranBinaryPath")));
        fc_mystran_binary_path->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Mystran")));

        gridLayout->addWidget(fc_mystran_binary_path, 1, 1, 1, 1);

        l_mystran_write_comments = new QLabel(gb_mystran_param);
        l_mystran_write_comments->setObjectName(QString::fromUtf8("l_mystran_write_comments"));

        gridLayout->addWidget(l_mystran_write_comments, 2, 0, 1, 1);

        cb_mystran_write_comments = new Gui::PrefCheckBox(gb_mystran_param);
        cb_mystran_write_comments->setObjectName(QString::fromUtf8("cb_mystran_write_comments"));
        cb_mystran_write_comments->setChecked(true);
        cb_mystran_write_comments->setProperty("prefEntry", QVariant(QByteArray("writeCommentsToInputFile")));
        cb_mystran_write_comments->setProperty("prefPath", QVariant(QByteArray("Mod/Fem/Mystran")));

        gridLayout->addWidget(cb_mystran_write_comments, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(gb_mystran_param);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(FemGui__DlgSettingsFemMystranImp);
        QObject::connect(cb_mystran_binary_std, SIGNAL(toggled(bool)), l_mystran_binary_path, SLOT(setDisabled(bool)));
        QObject::connect(cb_mystran_binary_std, SIGNAL(toggled(bool)), fc_mystran_binary_path, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(FemGui__DlgSettingsFemMystranImp);
    } // setupUi

    void retranslateUi(QWidget *FemGui__DlgSettingsFemMystranImp)
    {
        FemGui__DlgSettingsFemMystranImp->setWindowTitle(QCoreApplication::translate("FemGui::DlgSettingsFemMystranImp", "Mystran", nullptr));
        gb_mystran_param->setTitle(QCoreApplication::translate("FemGui::DlgSettingsFemMystranImp", "Mystran binary", nullptr));
        cb_mystran_binary_std->setText(QCoreApplication::translate("FemGui::DlgSettingsFemMystranImp", "Search in known binary directories", nullptr));
        l_mystran_binary_path->setText(QCoreApplication::translate("FemGui::DlgSettingsFemMystranImp", "Mystran binary path", nullptr));
#if QT_CONFIG(tooltip)
        fc_mystran_binary_path->setToolTip(QCoreApplication::translate("FemGui::DlgSettingsFemMystranImp", "Leave blank to use default Mystran binary file location", nullptr));
#endif // QT_CONFIG(tooltip)
        l_mystran_write_comments->setText(QCoreApplication::translate("FemGui::DlgSettingsFemMystranImp", "Comments", nullptr));
        cb_mystran_write_comments->setText(QCoreApplication::translate("FemGui::DlgSettingsFemMystranImp", "Write comments to input file", nullptr));
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class DlgSettingsFemMystranImp: public Ui_DlgSettingsFemMystranImp {};
} // namespace Ui
} // namespace FemGui

#endif // UI_DLGSETTINGSFEMMYSTRAN_H
