/********************************************************************************
** Form generated from reading UI file 'Poisson.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POISSON_H
#define UI_POISSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace ReenGui {

class Ui_PoissonWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelOctree;
    QSpinBox *octreeDepth;
    QLabel *labelSolver;
    QSpinBox *solverDivide;
    QLabel *labelSamples;
    QDoubleSpinBox *samplesPerNode;

    void setupUi(QWidget *ReenGui__PoissonWidget)
    {
        if (ReenGui__PoissonWidget->objectName().isEmpty())
            ReenGui__PoissonWidget->setObjectName(QString::fromUtf8("ReenGui__PoissonWidget"));
        ReenGui__PoissonWidget->resize(244, 146);
        gridLayout_2 = new QGridLayout(ReenGui__PoissonWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(ReenGui__PoissonWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelOctree = new QLabel(groupBox);
        labelOctree->setObjectName(QString::fromUtf8("labelOctree"));

        gridLayout->addWidget(labelOctree, 0, 0, 1, 1);

        octreeDepth = new QSpinBox(groupBox);
        octreeDepth->setObjectName(QString::fromUtf8("octreeDepth"));
        octreeDepth->setMinimum(4);
        octreeDepth->setMaximum(10);
        octreeDepth->setValue(8);

        gridLayout->addWidget(octreeDepth, 0, 1, 1, 1);

        labelSolver = new QLabel(groupBox);
        labelSolver->setObjectName(QString::fromUtf8("labelSolver"));

        gridLayout->addWidget(labelSolver, 1, 0, 1, 1);

        solverDivide = new QSpinBox(groupBox);
        solverDivide->setObjectName(QString::fromUtf8("solverDivide"));
        solverDivide->setMinimum(1);
        solverDivide->setMaximum(20);
        solverDivide->setValue(8);

        gridLayout->addWidget(solverDivide, 1, 1, 1, 1);

        labelSamples = new QLabel(groupBox);
        labelSamples->setObjectName(QString::fromUtf8("labelSamples"));

        gridLayout->addWidget(labelSamples, 2, 0, 1, 1);

        samplesPerNode = new QDoubleSpinBox(groupBox);
        samplesPerNode->setObjectName(QString::fromUtf8("samplesPerNode"));
        samplesPerNode->setDecimals(1);
        samplesPerNode->setMinimum(1.000000000000000);
        samplesPerNode->setMaximum(50.000000000000000);

        gridLayout->addWidget(samplesPerNode, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(ReenGui__PoissonWidget);

        QMetaObject::connectSlotsByName(ReenGui__PoissonWidget);
    } // setupUi

    void retranslateUi(QWidget *ReenGui__PoissonWidget)
    {
        ReenGui__PoissonWidget->setWindowTitle(QCoreApplication::translate("ReenGui::PoissonWidget", "Poisson", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReenGui::PoissonWidget", "Parameters", nullptr));
        labelOctree->setText(QCoreApplication::translate("ReenGui::PoissonWidget", "Octree depth", nullptr));
        labelSolver->setText(QCoreApplication::translate("ReenGui::PoissonWidget", "Solver divide", nullptr));
        labelSamples->setText(QCoreApplication::translate("ReenGui::PoissonWidget", "Samples per node", nullptr));
    } // retranslateUi

};

} // namespace ReenGui

namespace ReenGui {
namespace Ui {
    class PoissonWidget: public Ui_PoissonWidget {};
} // namespace Ui
} // namespace ReenGui

#endif // UI_POISSON_H
