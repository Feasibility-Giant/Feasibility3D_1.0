/********************************************************************************
** Form generated from reading UI file 'TaskProjection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPROJECTION_H
#define UI_TASKPROJECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace TechDrawGui {

class Ui_TaskProjection
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbVisSharp;
    QCheckBox *cbVisSmooth;
    QCheckBox *cbVisSewn;
    QCheckBox *cbVisOutline;
    QCheckBox *cbVisIso;
    QCheckBox *cbHidSharp;
    QCheckBox *cbHidSmooth;
    QCheckBox *cbHidSewn;
    QCheckBox *cbHidOutline;
    QCheckBox *cbHidIso;

    void setupUi(QWidget *TechDrawGui__TaskProjection)
    {
        if (TechDrawGui__TaskProjection->objectName().isEmpty())
            TechDrawGui__TaskProjection->setObjectName(QString::fromUtf8("TechDrawGui__TaskProjection"));
        TechDrawGui__TaskProjection->resize(353, 300);
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__TaskProjection);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbVisSharp = new QCheckBox(TechDrawGui__TaskProjection);
        cbVisSharp->setObjectName(QString::fromUtf8("cbVisSharp"));
        cbVisSharp->setChecked(true);

        verticalLayout->addWidget(cbVisSharp);

        cbVisSmooth = new QCheckBox(TechDrawGui__TaskProjection);
        cbVisSmooth->setObjectName(QString::fromUtf8("cbVisSmooth"));
        cbVisSmooth->setChecked(true);

        verticalLayout->addWidget(cbVisSmooth);

        cbVisSewn = new QCheckBox(TechDrawGui__TaskProjection);
        cbVisSewn->setObjectName(QString::fromUtf8("cbVisSewn"));
        cbVisSewn->setChecked(true);

        verticalLayout->addWidget(cbVisSewn);

        cbVisOutline = new QCheckBox(TechDrawGui__TaskProjection);
        cbVisOutline->setObjectName(QString::fromUtf8("cbVisOutline"));
        cbVisOutline->setChecked(true);

        verticalLayout->addWidget(cbVisOutline);

        cbVisIso = new QCheckBox(TechDrawGui__TaskProjection);
        cbVisIso->setObjectName(QString::fromUtf8("cbVisIso"));
        cbVisIso->setChecked(true);

        verticalLayout->addWidget(cbVisIso);

        cbHidSharp = new QCheckBox(TechDrawGui__TaskProjection);
        cbHidSharp->setObjectName(QString::fromUtf8("cbHidSharp"));

        verticalLayout->addWidget(cbHidSharp);

        cbHidSmooth = new QCheckBox(TechDrawGui__TaskProjection);
        cbHidSmooth->setObjectName(QString::fromUtf8("cbHidSmooth"));

        verticalLayout->addWidget(cbHidSmooth);

        cbHidSewn = new QCheckBox(TechDrawGui__TaskProjection);
        cbHidSewn->setObjectName(QString::fromUtf8("cbHidSewn"));

        verticalLayout->addWidget(cbHidSewn);

        cbHidOutline = new QCheckBox(TechDrawGui__TaskProjection);
        cbHidOutline->setObjectName(QString::fromUtf8("cbHidOutline"));

        verticalLayout->addWidget(cbHidOutline);

        cbHidIso = new QCheckBox(TechDrawGui__TaskProjection);
        cbHidIso->setObjectName(QString::fromUtf8("cbHidIso"));

        verticalLayout->addWidget(cbHidIso);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(TechDrawGui__TaskProjection);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskProjection);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskProjection)
    {
        TechDrawGui__TaskProjection->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskProjection", "Project shapes", nullptr));
        cbVisSharp->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Visible sharp edges", nullptr));
        cbVisSmooth->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Visible smooth edges", nullptr));
        cbVisSewn->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Visible sewn edges", nullptr));
        cbVisOutline->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Visible outline edges", nullptr));
        cbVisIso->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Visible isoparameters", nullptr));
        cbHidSharp->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Hidden sharp edges", nullptr));
        cbHidSmooth->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Hidden smooth edges", nullptr));
        cbHidSewn->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Hidden sewn edges", nullptr));
        cbHidOutline->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Hidden outline edges", nullptr));
        cbHidIso->setText(QCoreApplication::translate("TechDrawGui::TaskProjection", "Hidden isoparameters", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskProjection: public Ui_TaskProjection {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKPROJECTION_H
