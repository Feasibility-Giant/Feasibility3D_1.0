/********************************************************************************
** Form generated from reading UI file 'CylinderWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYLINDERWIDGET_H
#define UI_CYLINDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_CylinderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    Gui::PrefQuantitySpinBox *centerX;
    QLabel *label_8;
    Gui::PrefQuantitySpinBox *centerY;
    QLabel *label_9;
    Gui::PrefQuantitySpinBox *centerZ;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    Gui::PrefQuantitySpinBox *axisX;
    QLabel *label_5;
    Gui::PrefQuantitySpinBox *axisY;
    QLabel *label_6;
    Gui::PrefQuantitySpinBox *axisZ;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Gui::PrefQuantitySpinBox *radius;

    void setupUi(QWidget *CylinderWidget)
    {
        if (CylinderWidget->objectName().isEmpty())
            CylinderWidget->setObjectName(QString::fromUtf8("CylinderWidget"));
        CylinderWidget->resize(244, 358);
        CylinderWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(CylinderWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(CylinderWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        centerX = new Gui::PrefQuantitySpinBox(groupBox);
        centerX->setObjectName(QString::fromUtf8("centerX"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centerX->sizePolicy().hasHeightForWidth());
        centerX->setSizePolicy(sizePolicy);
        centerX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerX->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerX, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        centerY = new Gui::PrefQuantitySpinBox(groupBox);
        centerY->setObjectName(QString::fromUtf8("centerY"));
        sizePolicy.setHeightForWidth(centerY->sizePolicy().hasHeightForWidth());
        centerY->setSizePolicy(sizePolicy);
        centerY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerY->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerY, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        centerZ = new Gui::PrefQuantitySpinBox(groupBox);
        centerZ->setObjectName(QString::fromUtf8("centerZ"));
        sizePolicy.setHeightForWidth(centerZ->sizePolicy().hasHeightForWidth());
        centerZ->setSizePolicy(sizePolicy);
        centerZ->setMinimumSize(QSize(0, 0));
        centerZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerZ->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerZ, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CylinderWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        axisX = new Gui::PrefQuantitySpinBox(groupBox_2);
        axisX->setObjectName(QString::fromUtf8("axisX"));
        sizePolicy.setHeightForWidth(axisX->sizePolicy().hasHeightForWidth());
        axisX->setSizePolicy(sizePolicy);
        axisX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        axisX->setKeyboardTracking(false);

        gridLayout_3->addWidget(axisX, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        axisY = new Gui::PrefQuantitySpinBox(groupBox_2);
        axisY->setObjectName(QString::fromUtf8("axisY"));
        sizePolicy.setHeightForWidth(axisY->sizePolicy().hasHeightForWidth());
        axisY->setSizePolicy(sizePolicy);
        axisY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        axisY->setKeyboardTracking(false);

        gridLayout_3->addWidget(axisY, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        axisZ = new Gui::PrefQuantitySpinBox(groupBox_2);
        axisZ->setObjectName(QString::fromUtf8("axisZ"));
        sizePolicy.setHeightForWidth(axisZ->sizePolicy().hasHeightForWidth());
        axisZ->setSizePolicy(sizePolicy);
        axisZ->setMinimumSize(QSize(0, 0));
        axisZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        axisZ->setKeyboardTracking(false);

        gridLayout_3->addWidget(axisZ, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CylinderWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        radius = new Gui::PrefQuantitySpinBox(CylinderWidget);
        radius->setObjectName(QString::fromUtf8("radius"));
        sizePolicy.setHeightForWidth(radius->sizePolicy().hasHeightForWidth());
        radius->setSizePolicy(sizePolicy);
        radius->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        radius->setKeyboardTracking(false);

        horizontalLayout->addWidget(radius);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CylinderWidget);

        QMetaObject::connectSlotsByName(CylinderWidget);
    } // setupUi

    void retranslateUi(QWidget *CylinderWidget)
    {
        groupBox->setTitle(QCoreApplication::translate("CylinderWidget", "Center", nullptr));
        label_7->setText(QCoreApplication::translate("CylinderWidget", "x", nullptr));
        label_8->setText(QCoreApplication::translate("CylinderWidget", "y", nullptr));
        label_9->setText(QCoreApplication::translate("CylinderWidget", "z", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CylinderWidget", "Axis", nullptr));
        label_4->setText(QCoreApplication::translate("CylinderWidget", "x", nullptr));
        label_5->setText(QCoreApplication::translate("CylinderWidget", "y", nullptr));
        label_6->setText(QCoreApplication::translate("CylinderWidget", "z", nullptr));
        label->setText(QCoreApplication::translate("CylinderWidget", "Radius", nullptr));
        (void)CylinderWidget;
    } // retranslateUi

};

namespace Ui {
    class CylinderWidget: public Ui_CylinderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYLINDERWIDGET_H
