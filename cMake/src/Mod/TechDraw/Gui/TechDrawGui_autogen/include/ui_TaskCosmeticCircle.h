/********************************************************************************
** Form generated from reading UI file 'TaskCosmeticCircle.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCOSMETICCIRCLE_H
#define UI_TASKCOSMETICCIRCLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_TaskCosmeticCircle
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *le_View;
    QGridLayout *gridLayout_2;
    QRadioButton *rb2d1;
    QRadioButton *rb3d1;
    QLabel *label_8;
    QGridLayout *gridLayout_3;
    QLabel *label;
    Gui::QuantitySpinBox *qsbCenterX;
    QLabel *label_2;
    Gui::QuantitySpinBox *qsbCenterY;
    QLabel *label_3;
    Gui::QuantitySpinBox *qsbCenterZ;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    Gui::QuantitySpinBox *qsbRadius;
    QGridLayout *gridLayout_5;
    Gui::QuantitySpinBox *qsbStartAngle;
    QLabel *label_7;
    QLabel *label_6;
    Gui::QuantitySpinBox *qsbEndAngle;
    QLabel *label_5;
    QCheckBox *cbClockwise;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TechDrawGui__TaskCosmeticCircle)
    {
        if (TechDrawGui__TaskCosmeticCircle->objectName().isEmpty())
            TechDrawGui__TaskCosmeticCircle->setObjectName(QString::fromUtf8("TechDrawGui__TaskCosmeticCircle"));
        TechDrawGui__TaskCosmeticCircle->resize(350, 390);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskCosmeticCircle->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskCosmeticCircle->setSizePolicy(sizePolicy);
        TechDrawGui__TaskCosmeticCircle->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskCosmeticCircle);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        le_View = new QLineEdit(TechDrawGui__TaskCosmeticCircle);
        le_View->setObjectName(QString::fromUtf8("le_View"));
        le_View->setEnabled(false);
        le_View->setMouseTracking(false);
        le_View->setFocusPolicy(Qt::NoFocus);
        le_View->setAcceptDrops(false);

        gridLayout->addWidget(le_View, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rb2d1 = new QRadioButton(TechDrawGui__TaskCosmeticCircle);
        rb2d1->setObjectName(QString::fromUtf8("rb2d1"));
        rb2d1->setChecked(true);
        rb2d1->setAutoExclusive(true);

        gridLayout_2->addWidget(rb2d1, 1, 0, 1, 1);

        rb3d1 = new QRadioButton(TechDrawGui__TaskCosmeticCircle);
        rb3d1->setObjectName(QString::fromUtf8("rb3d1"));
        rb3d1->setAutoExclusive(true);

        gridLayout_2->addWidget(rb3d1, 1, 1, 1, 1);

        label_8 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        qsbCenterX = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticCircle);
        qsbCenterX->setObjectName(QString::fromUtf8("qsbCenterX"));
        qsbCenterX->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_3->addWidget(qsbCenterX, 0, 1, 1, 1);

        label_2 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        qsbCenterY = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticCircle);
        qsbCenterY->setObjectName(QString::fromUtf8("qsbCenterY"));
        qsbCenterY->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_3->addWidget(qsbCenterY, 1, 1, 1, 1);

        label_3 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        qsbCenterZ = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticCircle);
        qsbCenterZ->setObjectName(QString::fromUtf8("qsbCenterZ"));
        qsbCenterZ->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_3->addWidget(qsbCenterZ, 2, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 4);

        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        qsbRadius = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticCircle);
        qsbRadius->setObjectName(QString::fromUtf8("qsbRadius"));
        qsbRadius->setProperty("unit", QVariant(QString::fromUtf8("")));
        qsbRadius->setMinimum(0.000000000000000);
        qsbRadius->setValue(10.000000000000000);

        gridLayout_4->addWidget(qsbRadius, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 4);

        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        qsbStartAngle = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticCircle);
        qsbStartAngle->setObjectName(QString::fromUtf8("qsbStartAngle"));
        qsbStartAngle->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_5->addWidget(qsbStartAngle, 1, 1, 1, 1);

        label_7 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        label_6 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 2, 0, 1, 1);

        qsbEndAngle = new Gui::QuantitySpinBox(TechDrawGui__TaskCosmeticCircle);
        qsbEndAngle->setObjectName(QString::fromUtf8("qsbEndAngle"));
        qsbEndAngle->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_5->addWidget(qsbEndAngle, 2, 1, 1, 1);

        label_5 = new QLabel(TechDrawGui__TaskCosmeticCircle);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 1, 0, 1, 1);

        cbClockwise = new QCheckBox(TechDrawGui__TaskCosmeticCircle);
        cbClockwise->setObjectName(QString::fromUtf8("cbClockwise"));

        gridLayout_5->addWidget(cbClockwise, 3, 0, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);

        verticalLayout->addLayout(gridLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__TaskCosmeticCircle);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskCosmeticCircle);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskCosmeticCircle)
    {
        TechDrawGui__TaskCosmeticCircle->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Cosmetic Circle", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "View", nullptr));
#if QT_CONFIG(tooltip)
        rb2d1->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Treat the center point as a 2d point within the parent View.  Z coordinate is ignored.", nullptr));
#endif // QT_CONFIG(tooltip)
        rb2d1->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "2d Point", nullptr));
#if QT_CONFIG(tooltip)
        rb3d1->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Treat the center point as a 3d point and project it onto the parent View.", nullptr));
#endif // QT_CONFIG(tooltip)
        rb3d1->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "3d Point", nullptr));
        label_8->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Circle Center", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Y:", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Z:", nullptr));
        label_9->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Radius:", nullptr));
#if QT_CONFIG(tooltip)
        qsbStartAngle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Start angle (conventional) of arc in degrees.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Arc of Circle", nullptr));
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "End Angle:", nullptr));
#if QT_CONFIG(tooltip)
        qsbEndAngle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "End angle (conventional) of arc in degrees.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Start Angle:", nullptr));
#if QT_CONFIG(tooltip)
        cbClockwise->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Check this box to make an arc from start angle to end angle in a clockwise direction.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbClockwise->setText(QCoreApplication::translate("TechDrawGui::TaskCosmeticCircle", "Clockwise Angle", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskCosmeticCircle: public Ui_TaskCosmeticCircle {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKCOSMETICCIRCLE_H
