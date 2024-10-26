/********************************************************************************
** Form generated from reading UI file 'TaskRestoreLines.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKRESTORELINES_H
#define UI_TASKRESTORELINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace TechDrawGui {

class Ui_TaskRestoreLines
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pb_All;
    QLabel *l_All;
    QPushButton *pb_Geometry;
    QLabel *l_Geometry;
    QPushButton *pb_Cosmetic;
    QLabel *l_Cosmetic;
    QPushButton *pb_Center;
    QLabel *l_Center;

    void setupUi(QWidget *TechDrawGui__TaskRestoreLines)
    {
        if (TechDrawGui__TaskRestoreLines->objectName().isEmpty())
            TechDrawGui__TaskRestoreLines->setObjectName(QString::fromUtf8("TechDrawGui__TaskRestoreLines"));
        TechDrawGui__TaskRestoreLines->resize(227, 130);
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskRestoreLines);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pb_All = new QPushButton(TechDrawGui__TaskRestoreLines);
        pb_All->setObjectName(QString::fromUtf8("pb_All"));

        gridLayout->addWidget(pb_All, 0, 0, 1, 1);

        l_All = new QLabel(TechDrawGui__TaskRestoreLines);
        l_All->setObjectName(QString::fromUtf8("l_All"));
        l_All->setText(QString::fromUtf8("0"));
        l_All->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_All, 0, 1, 1, 1);

        pb_Geometry = new QPushButton(TechDrawGui__TaskRestoreLines);
        pb_Geometry->setObjectName(QString::fromUtf8("pb_Geometry"));

        gridLayout->addWidget(pb_Geometry, 1, 0, 1, 1);

        l_Geometry = new QLabel(TechDrawGui__TaskRestoreLines);
        l_Geometry->setObjectName(QString::fromUtf8("l_Geometry"));
        l_Geometry->setText(QString::fromUtf8("0"));
        l_Geometry->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_Geometry, 1, 1, 1, 1);

        pb_Cosmetic = new QPushButton(TechDrawGui__TaskRestoreLines);
        pb_Cosmetic->setObjectName(QString::fromUtf8("pb_Cosmetic"));

        gridLayout->addWidget(pb_Cosmetic, 2, 0, 1, 1);

        l_Cosmetic = new QLabel(TechDrawGui__TaskRestoreLines);
        l_Cosmetic->setObjectName(QString::fromUtf8("l_Cosmetic"));
        l_Cosmetic->setText(QString::fromUtf8("0"));
        l_Cosmetic->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_Cosmetic, 2, 1, 1, 1);

        pb_Center = new QPushButton(TechDrawGui__TaskRestoreLines);
        pb_Center->setObjectName(QString::fromUtf8("pb_Center"));

        gridLayout->addWidget(pb_Center, 3, 0, 1, 1);

        l_Center = new QLabel(TechDrawGui__TaskRestoreLines);
        l_Center->setObjectName(QString::fromUtf8("l_Center"));
        l_Center->setText(QString::fromUtf8("0"));
        l_Center->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(l_Center, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(TechDrawGui__TaskRestoreLines);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskRestoreLines);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskRestoreLines)
    {
        TechDrawGui__TaskRestoreLines->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskRestoreLines", "Restore Invisible Lines", nullptr));
        pb_All->setText(QCoreApplication::translate("TechDrawGui::TaskRestoreLines", "All", nullptr));
        pb_Geometry->setText(QCoreApplication::translate("TechDrawGui::TaskRestoreLines", "Geometry", nullptr));
        pb_Cosmetic->setText(QCoreApplication::translate("TechDrawGui::TaskRestoreLines", "Cosmetic", nullptr));
        pb_Center->setText(QCoreApplication::translate("TechDrawGui::TaskRestoreLines", "CenterLine", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskRestoreLines: public Ui_TaskRestoreLines {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKRESTORELINES_H
