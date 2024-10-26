/********************************************************************************
** Form generated from reading UI file 'BoxWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXWIDGET_H
#define UI_BOXWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_BoxWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *xLabel;
    Gui::PrefQuantitySpinBox *centerX;
    QLabel *yLabel;
    Gui::PrefQuantitySpinBox *centerY;
    QLabel *zLabel;
    Gui::PrefQuantitySpinBox *centerZ;
    QGridLayout *gridLayout;
    QLabel *lengthLabel;
    Gui::PrefQuantitySpinBox *length;
    QLabel *widthLabel;
    Gui::PrefQuantitySpinBox *width;
    QLabel *heightLabel;
    Gui::PrefQuantitySpinBox *height;

    void setupUi(QWidget *BoxWidget)
    {
        if (BoxWidget->objectName().isEmpty())
            BoxWidget->setObjectName(QString::fromUtf8("BoxWidget"));
        BoxWidget->resize(246, 278);
        BoxWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(BoxWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(BoxWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        xLabel = new QLabel(groupBox);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xLabel->sizePolicy().hasHeightForWidth());
        xLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(xLabel, 0, 0, 1, 1);

        centerX = new Gui::PrefQuantitySpinBox(groupBox);
        centerX->setObjectName(QString::fromUtf8("centerX"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centerX->sizePolicy().hasHeightForWidth());
        centerX->setSizePolicy(sizePolicy1);
        centerX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerX->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerX, 0, 1, 1, 1);

        yLabel = new QLabel(groupBox);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(yLabel->sizePolicy().hasHeightForWidth());
        yLabel->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(yLabel, 1, 0, 1, 1);

        centerY = new Gui::PrefQuantitySpinBox(groupBox);
        centerY->setObjectName(QString::fromUtf8("centerY"));
        sizePolicy1.setHeightForWidth(centerY->sizePolicy().hasHeightForWidth());
        centerY->setSizePolicy(sizePolicy1);
        centerY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerY->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerY, 1, 1, 1, 1);

        zLabel = new QLabel(groupBox);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));

        gridLayout_2->addWidget(zLabel, 2, 0, 1, 1);

        centerZ = new Gui::PrefQuantitySpinBox(groupBox);
        centerZ->setObjectName(QString::fromUtf8("centerZ"));
        sizePolicy1.setHeightForWidth(centerZ->sizePolicy().hasHeightForWidth());
        centerZ->setSizePolicy(sizePolicy1);
        centerZ->setMinimumSize(QSize(0, 0));
        centerZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerZ->setKeyboardTracking(false);

        gridLayout_2->addWidget(centerZ, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lengthLabel = new QLabel(BoxWidget);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));
        sizePolicy.setHeightForWidth(lengthLabel->sizePolicy().hasHeightForWidth());
        lengthLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lengthLabel, 0, 0, 1, 1);

        length = new Gui::PrefQuantitySpinBox(BoxWidget);
        length->setObjectName(QString::fromUtf8("length"));
        sizePolicy1.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy1);
        length->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        length->setKeyboardTracking(false);

        gridLayout->addWidget(length, 0, 1, 1, 1);

        widthLabel = new QLabel(BoxWidget);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        sizePolicy2.setHeightForWidth(widthLabel->sizePolicy().hasHeightForWidth());
        widthLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(widthLabel, 1, 0, 1, 1);

        width = new Gui::PrefQuantitySpinBox(BoxWidget);
        width->setObjectName(QString::fromUtf8("width"));
        sizePolicy1.setHeightForWidth(width->sizePolicy().hasHeightForWidth());
        width->setSizePolicy(sizePolicy1);
        width->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        width->setKeyboardTracking(false);

        gridLayout->addWidget(width, 1, 1, 1, 1);

        heightLabel = new QLabel(BoxWidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        sizePolicy2.setHeightForWidth(heightLabel->sizePolicy().hasHeightForWidth());
        heightLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(heightLabel, 2, 0, 1, 1);

        height = new Gui::PrefQuantitySpinBox(BoxWidget);
        height->setObjectName(QString::fromUtf8("height"));
        sizePolicy1.setHeightForWidth(height->sizePolicy().hasHeightForWidth());
        height->setSizePolicy(sizePolicy1);
        height->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        height->setKeyboardTracking(false);

        gridLayout->addWidget(height, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(BoxWidget);

        QMetaObject::connectSlotsByName(BoxWidget);
    } // setupUi

    void retranslateUi(QWidget *BoxWidget)
    {
        groupBox->setTitle(QCoreApplication::translate("BoxWidget", "Center", nullptr));
        xLabel->setText(QCoreApplication::translate("BoxWidget", "x", nullptr));
        yLabel->setText(QCoreApplication::translate("BoxWidget", "y", nullptr));
        zLabel->setText(QCoreApplication::translate("BoxWidget", "z", nullptr));
        lengthLabel->setText(QCoreApplication::translate("BoxWidget", "Length", nullptr));
        widthLabel->setText(QCoreApplication::translate("BoxWidget", "Width", nullptr));
        heightLabel->setText(QCoreApplication::translate("BoxWidget", "Height", nullptr));
        (void)BoxWidget;
    } // retranslateUi

};

namespace Ui {
    class BoxWidget: public Ui_BoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXWIDGET_H
