/********************************************************************************
** Form generated from reading UI file 'TaskCenterLine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCENTERLINE_H
#define UI_TASKCENTERLINE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskCenterLine
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *leBaseView;
    QLabel *label_2;
    QListWidget *lstSubList;
    QGroupBox *gbOrientation;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbVertical;
    QRadioButton *rbHorizontal;
    QRadioButton *rbAligned;
    QGridLayout *gridLayout_3;
    QLabel *label;
    Gui::QuantitySpinBox *dsbWeight;
    Gui::ColorButton *cpLineColor;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *cboxStyle;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    Gui::QuantitySpinBox *qsbVertShift;
    Gui::QuantitySpinBox *qsbHorizShift;
    QLabel *label_8;
    QLabel *label_9;
    Gui::QuantitySpinBox *qsbRotate;
    QLabel *label_3;
    Gui::QuantitySpinBox *qsbExtend;
    QSpacerItem *verticalSpacer;
    QButtonGroup *bgOrientation;

    void setupUi(QWidget *TechDrawGui__TaskCenterLine)
    {
        if (TechDrawGui__TaskCenterLine->objectName().isEmpty())
            TechDrawGui__TaskCenterLine->setObjectName(QString::fromUtf8("TechDrawGui__TaskCenterLine"));
        TechDrawGui__TaskCenterLine->setEnabled(true);
        TechDrawGui__TaskCenterLine->resize(300, 390);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_FaceCenterLine.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TechDrawGui__TaskCenterLine->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskCenterLine);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(TechDrawGui__TaskCenterLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        leBaseView = new QLineEdit(TechDrawGui__TaskCenterLine);
        leBaseView->setObjectName(QString::fromUtf8("leBaseView"));
        leBaseView->setEnabled(false);
        leBaseView->setMouseTracking(false);
        leBaseView->setFocusPolicy(Qt::NoFocus);
        leBaseView->setAcceptDrops(false);

        gridLayout->addWidget(leBaseView, 0, 1, 1, 1);

        label_2 = new QLabel(TechDrawGui__TaskCenterLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lstSubList = new QListWidget(TechDrawGui__TaskCenterLine);
        lstSubList->setObjectName(QString::fromUtf8("lstSubList"));
        lstSubList->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lstSubList->sizePolicy().hasHeightForWidth());
        lstSubList->setSizePolicy(sizePolicy);
        lstSubList->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(lstSubList, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gbOrientation = new QGroupBox(TechDrawGui__TaskCenterLine);
        gbOrientation->setObjectName(QString::fromUtf8("gbOrientation"));
        horizontalLayout = new QHBoxLayout(gbOrientation);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbVertical = new QRadioButton(gbOrientation);
        bgOrientation = new QButtonGroup(TechDrawGui__TaskCenterLine);
        bgOrientation->setObjectName(QString::fromUtf8("bgOrientation"));
        bgOrientation->setExclusive(true);
        bgOrientation->addButton(rbVertical);
        rbVertical->setObjectName(QString::fromUtf8("rbVertical"));
        rbVertical->setChecked(true);

        horizontalLayout->addWidget(rbVertical);

        rbHorizontal = new QRadioButton(gbOrientation);
        bgOrientation->addButton(rbHorizontal);
        rbHorizontal->setObjectName(QString::fromUtf8("rbHorizontal"));
        rbHorizontal->setEnabled(true);

        horizontalLayout->addWidget(rbHorizontal);

        rbAligned = new QRadioButton(gbOrientation);
        bgOrientation->addButton(rbAligned);
        rbAligned->setObjectName(QString::fromUtf8("rbAligned"));
        rbAligned->setEnabled(true);

        horizontalLayout->addWidget(rbAligned);


        verticalLayout->addWidget(gbOrientation);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(TechDrawGui__TaskCenterLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        dsbWeight = new Gui::QuantitySpinBox(TechDrawGui__TaskCenterLine);
        dsbWeight->setObjectName(QString::fromUtf8("dsbWeight"));
        dsbWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbWeight->setSingleStep(0.100000000000000);
        dsbWeight->setValue(0.500000000000000);

        gridLayout_3->addWidget(dsbWeight, 3, 1, 1, 1);

        cpLineColor = new Gui::ColorButton(TechDrawGui__TaskCenterLine);
        cpLineColor->setObjectName(QString::fromUtf8("cpLineColor"));
        cpLineColor->setColor(QColor(0, 0, 0));

        gridLayout_3->addWidget(cpLineColor, 2, 1, 1, 1);

        label_5 = new QLabel(TechDrawGui__TaskCenterLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(TechDrawGui__TaskCenterLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        cboxStyle = new QComboBox(TechDrawGui__TaskCenterLine);
        cboxStyle->setObjectName(QString::fromUtf8("cboxStyle"));

        gridLayout_3->addWidget(cboxStyle, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        line = new QFrame(TechDrawGui__TaskCenterLine);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(TechDrawGui__TaskCenterLine);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        qsbVertShift = new Gui::QuantitySpinBox(TechDrawGui__TaskCenterLine);
        qsbVertShift->setObjectName(QString::fromUtf8("qsbVertShift"));
        qsbVertShift->setMinimumSize(QSize(0, 20));
        qsbVertShift->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbVertShift->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(qsbVertShift, 1, 1, 1, 1);

        qsbHorizShift = new Gui::QuantitySpinBox(TechDrawGui__TaskCenterLine);
        qsbHorizShift->setObjectName(QString::fromUtf8("qsbHorizShift"));
        qsbHorizShift->setMinimumSize(QSize(0, 20));
        qsbHorizShift->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbHorizShift->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(qsbHorizShift, 0, 1, 1, 1);

        label_8 = new QLabel(TechDrawGui__TaskCenterLine);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(TechDrawGui__TaskCenterLine);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        qsbRotate = new Gui::QuantitySpinBox(TechDrawGui__TaskCenterLine);
        qsbRotate->setObjectName(QString::fromUtf8("qsbRotate"));
        qsbRotate->setMinimumSize(QSize(0, 20));
        qsbRotate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbRotate->setMinimum(-360.000000000000000);
        qsbRotate->setMaximum(360.000000000000000);

        gridLayout_2->addWidget(qsbRotate, 2, 1, 1, 1);

        label_3 = new QLabel(TechDrawGui__TaskCenterLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        qsbExtend = new Gui::QuantitySpinBox(TechDrawGui__TaskCenterLine);
        qsbExtend->setObjectName(QString::fromUtf8("qsbExtend"));
        qsbExtend->setMinimumSize(QSize(0, 20));
        qsbExtend->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbExtend->setValue(3.000000000000000);

        gridLayout_2->addWidget(qsbExtend, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TechDrawGui__TaskCenterLine);

        cboxStyle->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TechDrawGui__TaskCenterLine);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskCenterLine)
    {
        TechDrawGui__TaskCenterLine->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Center Line", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Base View", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Elements", nullptr));
#if QT_CONFIG(tooltip)
        gbOrientation->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gbOrientation->setTitle(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Orientation", nullptr));
#if QT_CONFIG(tooltip)
        rbVertical->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Top to Bottom line", nullptr));
#endif // QT_CONFIG(tooltip)
        rbVertical->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Vertical", nullptr));
#if QT_CONFIG(tooltip)
        rbHorizontal->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Left to Right line", nullptr));
#endif // QT_CONFIG(tooltip)
        rbHorizontal->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Horizontal", nullptr));
#if QT_CONFIG(tooltip)
        rbAligned->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "centerline between\n"
"- lines: in equal distance to the lines and with\n"
"  half of the angle the lines have to each other\n"
"- points: in equal distance to the points", nullptr));
#endif // QT_CONFIG(tooltip)
        rbAligned->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Aligned", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Color", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Weight", nullptr));
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Style", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Shift Horizontal", nullptr));
#if QT_CONFIG(tooltip)
        qsbVertShift->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Move line +Up or -Down", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qsbHorizShift->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Move line -Left or +Right", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Shift Vertical", nullptr));
        label_9->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Rotate", nullptr));
#if QT_CONFIG(tooltip)
        qsbRotate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Rotate line +CCW or -CW", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Extend By", nullptr));
#if QT_CONFIG(tooltip)
        qsbExtend->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "Make the line a little longer.", nullptr));
#endif // QT_CONFIG(tooltip)
        qsbExtend->setProperty("unit", QVariant(QCoreApplication::translate("TechDrawGui::TaskCenterLine", "mm", nullptr)));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskCenterLine: public Ui_TaskCenterLine {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKCENTERLINE_H
