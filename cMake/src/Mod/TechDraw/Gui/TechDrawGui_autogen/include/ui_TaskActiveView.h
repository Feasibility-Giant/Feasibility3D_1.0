/********************************************************************************
** Form generated from reading UI file 'TaskActiveView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKACTIVEVIEW_H
#define UI_TASKACTIVEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

QT_BEGIN_NAMESPACE

class Ui_TaskActiveView
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    Gui::QuantitySpinBox *qsbWidth;
    Gui::ColorButton *ccBgColor;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QCheckBox *cbUse3d;
    Gui::QuantitySpinBox *qsbHeight;
    QCheckBox *cbbg;
    QCheckBox *cbNoBG;
    QLabel *label_2;
    QCheckBox *cbCrop;

    void setupUi(QWidget *TaskActiveView)
    {
        if (TaskActiveView->objectName().isEmpty())
            TaskActiveView->setObjectName(QString::fromUtf8("TaskActiveView"));
        TaskActiveView->resize(375, 191);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskActiveView->sizePolicy().hasHeightForWidth());
        TaskActiveView->setSizePolicy(sizePolicy);
        TaskActiveView->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_ActiveView.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TaskActiveView->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TaskActiveView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qsbWidth = new Gui::QuantitySpinBox(TaskActiveView);
        qsbWidth->setObjectName(QString::fromUtf8("qsbWidth"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qsbWidth->sizePolicy().hasHeightForWidth());
        qsbWidth->setSizePolicy(sizePolicy1);
        qsbWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbWidth->setProperty("unit", QVariant(QString::fromUtf8("")));
        qsbWidth->setMinimum(0.000000000000000);
        qsbWidth->setValue(100.000000000000000);

        gridLayout->addWidget(qsbWidth, 1, 2, 1, 1);

        ccBgColor = new Gui::ColorButton(TaskActiveView);
        ccBgColor->setObjectName(QString::fromUtf8("ccBgColor"));
        ccBgColor->setEnabled(false);
        sizePolicy1.setHeightForWidth(ccBgColor->sizePolicy().hasHeightForWidth());
        ccBgColor->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(ccBgColor, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        label_3 = new QLabel(TaskActiveView);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        cbUse3d = new QCheckBox(TaskActiveView);
        cbUse3d->setObjectName(QString::fromUtf8("cbUse3d"));
        cbUse3d->setAutoExclusive(true);

        gridLayout->addWidget(cbUse3d, 5, 0, 1, 1);

        qsbHeight = new Gui::QuantitySpinBox(TaskActiveView);
        qsbHeight->setObjectName(QString::fromUtf8("qsbHeight"));
        sizePolicy1.setHeightForWidth(qsbHeight->sizePolicy().hasHeightForWidth());
        qsbHeight->setSizePolicy(sizePolicy1);
        qsbHeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbHeight->setProperty("unit", QVariant(QString::fromUtf8("")));
        qsbHeight->setMinimum(0.000000000000000);
        qsbHeight->setValue(100.000000000000000);

        gridLayout->addWidget(qsbHeight, 2, 2, 1, 1);

        cbbg = new QCheckBox(TaskActiveView);
        cbbg->setObjectName(QString::fromUtf8("cbbg"));
        cbbg->setAutoExclusive(true);

        gridLayout->addWidget(cbbg, 4, 0, 1, 1);

        cbNoBG = new QCheckBox(TaskActiveView);
        cbNoBG->setObjectName(QString::fromUtf8("cbNoBG"));
        cbNoBG->setChecked(true);
        cbNoBG->setAutoExclusive(true);

        gridLayout->addWidget(cbNoBG, 3, 0, 1, 1);

        label_2 = new QLabel(TaskActiveView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cbCrop = new QCheckBox(TaskActiveView);
        cbCrop->setObjectName(QString::fromUtf8("cbCrop"));

        gridLayout->addWidget(cbCrop, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout);


        retranslateUi(TaskActiveView);
        QObject::connect(cbbg, SIGNAL(toggled(bool)), ccBgColor, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(TaskActiveView);
    } // setupUi

    void retranslateUi(QWidget *TaskActiveView)
    {
        TaskActiveView->setWindowTitle(QCoreApplication::translate("TaskActiveView", "ActiveView to TD View", nullptr));
#if QT_CONFIG(tooltip)
        qsbWidth->setToolTip(QCoreApplication::translate("TaskActiveView", "If Crop Image is checked, crop captured image to this width.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ccBgColor->setToolTip(QCoreApplication::translate("TaskActiveView", "Select a color for solid background", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TaskActiveView", "Crop To Height", nullptr));
        cbUse3d->setText(QCoreApplication::translate("TaskActiveView", "Use 3d Background", nullptr));
#if QT_CONFIG(tooltip)
        qsbHeight->setToolTip(QCoreApplication::translate("TaskActiveView", "If Crop Image is checked, crop captured image to this height.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbbg->setToolTip(QCoreApplication::translate("TaskActiveView", "Paint background yes/no", nullptr));
#endif // QT_CONFIG(tooltip)
        cbbg->setText(QCoreApplication::translate("TaskActiveView", "Solid Background", nullptr));
        cbNoBG->setText(QCoreApplication::translate("TaskActiveView", "No Background", nullptr));
        label_2->setText(QCoreApplication::translate("TaskActiveView", "Crop To Width", nullptr));
        cbCrop->setText(QCoreApplication::translate("TaskActiveView", "Crop Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskActiveView: public Ui_TaskActiveView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKACTIVEVIEW_H
