/********************************************************************************
** Form generated from reading UI file 'SphereWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPHEREWIDGET_H
#define UI_SPHEREWIDGET_H

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

class Ui_SphereWidget
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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Gui::PrefQuantitySpinBox *radius;

    void setupUi(QWidget *SphereWidget)
    {
        if (SphereWidget->objectName().isEmpty())
            SphereWidget->setObjectName(QString::fromUtf8("SphereWidget"));
        SphereWidget->resize(244, 202);
        SphereWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(SphereWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(SphereWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        centerX = new Gui::PrefQuantitySpinBox(groupBox);
        centerX->setObjectName(QString::fromUtf8("centerX"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centerX->sizePolicy().hasHeightForWidth());
        centerX->setSizePolicy(sizePolicy);
        centerX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerX->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerX, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        centerY = new Gui::PrefQuantitySpinBox(groupBox);
        centerY->setObjectName(QString::fromUtf8("centerY"));
        sizePolicy.setHeightForWidth(centerY->sizePolicy().hasHeightForWidth());
        centerY->setSizePolicy(sizePolicy);
        centerY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerY->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerY, 3, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 4, 0, 1, 1);

        centerZ = new Gui::PrefQuantitySpinBox(groupBox);
        centerZ->setObjectName(QString::fromUtf8("centerZ"));
        sizePolicy.setHeightForWidth(centerZ->sizePolicy().hasHeightForWidth());
        centerZ->setSizePolicy(sizePolicy);
        centerZ->setMinimumSize(QSize(0, 0));
        centerZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerZ->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerZ, 4, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SphereWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        radius = new Gui::PrefQuantitySpinBox(SphereWidget);
        radius->setObjectName(QString::fromUtf8("radius"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radius->sizePolicy().hasHeightForWidth());
        radius->setSizePolicy(sizePolicy2);
        radius->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        radius->setKeyboardTracking(false);

        horizontalLayout->addWidget(radius);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SphereWidget);

        QMetaObject::connectSlotsByName(SphereWidget);
    } // setupUi

    void retranslateUi(QWidget *SphereWidget)
    {
        groupBox->setTitle(QCoreApplication::translate("SphereWidget", "Center", nullptr));
        label_7->setText(QCoreApplication::translate("SphereWidget", "x", nullptr));
        label_8->setText(QCoreApplication::translate("SphereWidget", "y", nullptr));
        label_9->setText(QCoreApplication::translate("SphereWidget", "z", nullptr));
        label->setText(QCoreApplication::translate("SphereWidget", "Radius", nullptr));
        (void)SphereWidget;
    } // retranslateUi

};

namespace Ui {
    class SphereWidget: public Ui_SphereWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPHEREWIDGET_H
