/********************************************************************************
** Form generated from reading UI file 'VisualInspection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALINSPECTION_H
#define UI_VISUALINSPECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include "Gui/QuantitySpinBox.h"

namespace InspectionGui {

class Ui_VisualInspection
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QTreeWidget *treeWidgetActual;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QTreeWidget *treeWidgetNominal;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout3;
    QGridLayout *gridLayout4;
    QLabel *textLabel1;
    QSpacerItem *spacerItem;
    Gui::QuantitySpinBox *searchRadius;
    QLabel *textLabel2;
    QSpacerItem *spacerItem1;
    Gui::QuantitySpinBox *thickness;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InspectionGui__VisualInspection)
    {
        if (InspectionGui__VisualInspection->objectName().isEmpty())
            InspectionGui__VisualInspection->setObjectName(QString::fromUtf8("InspectionGui__VisualInspection"));
        InspectionGui__VisualInspection->resize(568, 406);
        InspectionGui__VisualInspection->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(InspectionGui__VisualInspection);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(InspectionGui__VisualInspection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        treeWidgetActual = new QTreeWidget(groupBox);
        treeWidgetActual->setObjectName(QString::fromUtf8("treeWidgetActual"));
        treeWidgetActual->setRootIsDecorated(false);

        gridLayout1->addWidget(treeWidgetActual, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(InspectionGui__VisualInspection);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        treeWidgetNominal = new QTreeWidget(groupBox_2);
        treeWidgetNominal->setObjectName(QString::fromUtf8("treeWidgetNominal"));
        treeWidgetNominal->setRootIsDecorated(false);

        gridLayout2->addWidget(treeWidgetNominal, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(InspectionGui__VisualInspection);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout3 = new QGridLayout(groupBox_3);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        textLabel1 = new QLabel(groupBox_3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout4->addWidget(textLabel1, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(91, 21, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem, 0, 1, 1, 1);

        searchRadius = new Gui::QuantitySpinBox(groupBox_3);
        searchRadius->setObjectName(QString::fromUtf8("searchRadius"));
        searchRadius->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        searchRadius->setSingleStep(0.100000000000000);
        searchRadius->setValue(0.050000000000000);
        searchRadius->setProperty("decimals", QVariant(3));
        searchRadius->setProperty("prefEntry", QVariant(QByteArray("SearchDistance")));
        searchRadius->setProperty("prefPath", QVariant(QByteArray("Mod/Inspection/Inspection")));

        gridLayout4->addWidget(searchRadius, 0, 2, 1, 1);

        textLabel2 = new QLabel(groupBox_3);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout4->addWidget(textLabel2, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(101, 21, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem1, 1, 1, 1, 1);

        thickness = new Gui::QuantitySpinBox(groupBox_3);
        thickness->setObjectName(QString::fromUtf8("thickness"));
        thickness->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        thickness->setSingleStep(0.100000000000000);
        thickness->setProperty("decimals", QVariant(3));
        thickness->setProperty("prefEntry", QVariant(QByteArray("Thickness")));
        thickness->setProperty("prefPath", QVariant(QByteArray("Mod/Inspection/Inspection")));

        gridLayout4->addWidget(thickness, 1, 2, 1, 1);


        gridLayout3->addLayout(gridLayout4, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(61, 54, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem2, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(InspectionGui__VisualInspection);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        QWidget::setTabOrder(searchRadius, thickness);

        retranslateUi(InspectionGui__VisualInspection);
        QObject::connect(buttonBox, SIGNAL(accepted()), InspectionGui__VisualInspection, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InspectionGui__VisualInspection, SLOT(reject()));

        QMetaObject::connectSlotsByName(InspectionGui__VisualInspection);
    } // setupUi

    void retranslateUi(QDialog *InspectionGui__VisualInspection)
    {
        InspectionGui__VisualInspection->setWindowTitle(QCoreApplication::translate("InspectionGui::VisualInspection", "Visual Inspection", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InspectionGui::VisualInspection", "Actual", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetActual->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("InspectionGui::VisualInspection", "Objects", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("InspectionGui::VisualInspection", "Nominal", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetNominal->headerItem();
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("InspectionGui::VisualInspection", "Objects", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("InspectionGui::VisualInspection", "Parameter", nullptr));
        textLabel1->setText(QCoreApplication::translate("InspectionGui::VisualInspection", "Search distance", nullptr));
        searchRadius->setProperty("suffix", QVariant(QCoreApplication::translate("InspectionGui::VisualInspection", " mm", nullptr)));
        textLabel2->setText(QCoreApplication::translate("InspectionGui::VisualInspection", "Thickness", nullptr));
        thickness->setProperty("suffix", QVariant(QCoreApplication::translate("InspectionGui::VisualInspection", " mm", nullptr)));
    } // retranslateUi

};

} // namespace InspectionGui

namespace InspectionGui {
namespace Ui {
    class VisualInspection: public Ui_VisualInspection {};
} // namespace Ui
} // namespace InspectionGui

#endif // UI_VISUALINSPECTION_H
