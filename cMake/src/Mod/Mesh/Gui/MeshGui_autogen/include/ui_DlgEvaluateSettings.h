/********************************************************************************
** Form generated from reading UI file 'DlgEvaluateSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEVALUATESETTINGS_H
#define UI_DLGEVALUATESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>

namespace MeshGui {

class Ui_DlgEvaluateSettings
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkNonmanifoldPoints;
    QCheckBox *checkFolds;
    QCheckBox *checkDegenerated;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MeshGui__DlgEvaluateSettings)
    {
        if (MeshGui__DlgEvaluateSettings->objectName().isEmpty())
            MeshGui__DlgEvaluateSettings->setObjectName(QString::fromUtf8("MeshGui__DlgEvaluateSettings"));
        MeshGui__DlgEvaluateSettings->resize(344, 149);
        gridLayout_2 = new QGridLayout(MeshGui__DlgEvaluateSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(MeshGui__DlgEvaluateSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkNonmanifoldPoints = new QCheckBox(groupBox);
        checkNonmanifoldPoints->setObjectName(QString::fromUtf8("checkNonmanifoldPoints"));

        gridLayout->addWidget(checkNonmanifoldPoints, 0, 0, 1, 1);

        checkFolds = new QCheckBox(groupBox);
        checkFolds->setObjectName(QString::fromUtf8("checkFolds"));

        gridLayout->addWidget(checkFolds, 1, 0, 1, 1);

        checkDegenerated = new QCheckBox(groupBox);
        checkDegenerated->setObjectName(QString::fromUtf8("checkDegenerated"));
        checkDegenerated->setChecked(true);

        gridLayout->addWidget(checkDegenerated, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MeshGui__DlgEvaluateSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(MeshGui__DlgEvaluateSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), MeshGui__DlgEvaluateSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MeshGui__DlgEvaluateSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(MeshGui__DlgEvaluateSettings);
    } // setupUi

    void retranslateUi(QDialog *MeshGui__DlgEvaluateSettings)
    {
        MeshGui__DlgEvaluateSettings->setWindowTitle(QCoreApplication::translate("MeshGui::DlgEvaluateSettings", "Evaluation settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MeshGui::DlgEvaluateSettings", "Settings", nullptr));
        checkNonmanifoldPoints->setText(QCoreApplication::translate("MeshGui::DlgEvaluateSettings", "Check for non-manifold points", nullptr));
        checkFolds->setText(QCoreApplication::translate("MeshGui::DlgEvaluateSettings", "Enable check for folds on surface", nullptr));
        checkDegenerated->setText(QCoreApplication::translate("MeshGui::DlgEvaluateSettings", "Only consider zero area faces as degenerated", nullptr));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class DlgEvaluateSettings: public Ui_DlgEvaluateSettings {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_DLGEVALUATESETTINGS_H
