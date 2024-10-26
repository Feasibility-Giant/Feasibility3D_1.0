/********************************************************************************
** Form generated from reading UI file 'TaskProjGroup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPROJGROUP_H
#define UI_TASKPROJGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_TaskProjGroup
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QComboBox *cmbScaleType;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *sbScaleNum;
    QLabel *label_4;
    QSpinBox *sbScaleDen;
    QGroupBox *directionGroupbox;
    QGridLayout *gridLayout;
    QPushButton *butCWRotate;
    QPushButton *butTopRotate;
    QPushButton *butCCWRotate;
    QPushButton *butLeftRotate;
    QPushButton *lePrimary;
    QPushButton *butRightRotate;
    QPushButton *butFront;
    QPushButton *butDownRotate;
    QPushButton *butCam;
    QGroupBox *secondaryProjGroupbox;
    QGridLayout *gridLayout_2;
    QCheckBox *chkView0;
    QCheckBox *chkView1;
    QCheckBox *chkView2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkView3;
    QCheckBox *chkView4;
    QCheckBox *chkView5;
    QCheckBox *chkView6;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkView7;
    QCheckBox *chkView8;
    QCheckBox *chkView9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *projection;
    QCheckBox *cbAutoDistribute;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    Gui::QuantitySpinBox *sbXSpacing;
    QLabel *label_11;
    Gui::QuantitySpinBox *sbYSpacing;

    void setupUi(QWidget *TechDrawGui__TaskProjGroup)
    {
        if (TechDrawGui__TaskProjGroup->objectName().isEmpty())
            TechDrawGui__TaskProjGroup->setObjectName(QString::fromUtf8("TechDrawGui__TaskProjGroup"));
        TechDrawGui__TaskProjGroup->resize(250, 477);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskProjGroup->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskProjGroup->setSizePolicy(sizePolicy);
        TechDrawGui__TaskProjGroup->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskProjGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(TechDrawGui__TaskProjGroup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        cmbScaleType = new QComboBox(TechDrawGui__TaskProjGroup);
        cmbScaleType->addItem(QString());
        cmbScaleType->addItem(QString());
        cmbScaleType->addItem(QString());
        cmbScaleType->setObjectName(QString::fromUtf8("cmbScaleType"));

        horizontalLayout_5->addWidget(cmbScaleType);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        sbScaleNum = new QSpinBox(TechDrawGui__TaskProjGroup);
        sbScaleNum->setObjectName(QString::fromUtf8("sbScaleNum"));
        sbScaleNum->setKeyboardTracking(false);
        sbScaleNum->setMinimum(1);
        sbScaleNum->setValue(1);

        horizontalLayout_5->addWidget(sbScaleNum);

        label_4 = new QLabel(TechDrawGui__TaskProjGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setText(QString::fromUtf8(":"));

        horizontalLayout_5->addWidget(label_4);

        sbScaleDen = new QSpinBox(TechDrawGui__TaskProjGroup);
        sbScaleDen->setObjectName(QString::fromUtf8("sbScaleDen"));
        sbScaleDen->setKeyboardTracking(false);
        sbScaleDen->setMinimum(1);
        sbScaleDen->setMaximum(999);
        sbScaleDen->setValue(1);

        horizontalLayout_5->addWidget(sbScaleDen);


        verticalLayout->addLayout(horizontalLayout_5);

        directionGroupbox = new QGroupBox(TechDrawGui__TaskProjGroup);
        directionGroupbox->setObjectName(QString::fromUtf8("directionGroupbox"));
        gridLayout = new QGridLayout(directionGroupbox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        butCWRotate = new QPushButton(directionGroupbox);
        butCWRotate->setObjectName(QString::fromUtf8("butCWRotate"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/arrow-cw.svg"), QSize(), QIcon::Normal, QIcon::On);
        butCWRotate->setIcon(icon);
        butCWRotate->setIconSize(QSize(24, 24));

        gridLayout->addWidget(butCWRotate, 0, 0, 1, 1);

        butTopRotate = new QPushButton(directionGroupbox);
        butTopRotate->setObjectName(QString::fromUtf8("butTopRotate"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(butTopRotate->sizePolicy().hasHeightForWidth());
        butTopRotate->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/arrow-up.svg"), QSize(), QIcon::Normal, QIcon::On);
        butTopRotate->setIcon(icon1);
        butTopRotate->setIconSize(QSize(24, 24));

        gridLayout->addWidget(butTopRotate, 0, 1, 1, 1);

        butCCWRotate = new QPushButton(directionGroupbox);
        butCCWRotate->setObjectName(QString::fromUtf8("butCCWRotate"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/arrow-ccw.svg"), QSize(), QIcon::Normal, QIcon::On);
        butCCWRotate->setIcon(icon2);
        butCCWRotate->setIconSize(QSize(24, 24));

        gridLayout->addWidget(butCCWRotate, 0, 2, 1, 1);

        butLeftRotate = new QPushButton(directionGroupbox);
        butLeftRotate->setObjectName(QString::fromUtf8("butLeftRotate"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/arrow-left.svg"), QSize(), QIcon::Normal, QIcon::On);
        butLeftRotate->setIcon(icon3);
        butLeftRotate->setIconSize(QSize(24, 24));

        gridLayout->addWidget(butLeftRotate, 1, 0, 1, 1);

        lePrimary = new QPushButton(directionGroupbox);
        lePrimary->setObjectName(QString::fromUtf8("lePrimary"));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lePrimary->setFont(font);

        gridLayout->addWidget(lePrimary, 1, 1, 1, 1);

        butRightRotate = new QPushButton(directionGroupbox);
        butRightRotate->setObjectName(QString::fromUtf8("butRightRotate"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/arrow-right.svg"), QSize(), QIcon::Normal, QIcon::On);
        butRightRotate->setIcon(icon4);
        butRightRotate->setIconSize(QSize(24, 24));

        gridLayout->addWidget(butRightRotate, 1, 2, 1, 1);

        butFront = new QPushButton(directionGroupbox);
        butFront->setObjectName(QString::fromUtf8("butFront"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/TechDraw_ProjFront.svg"), QSize(), QIcon::Normal, QIcon::On);
        butFront->setIcon(icon5);
        butFront->setIconSize(QSize(24, 24));
        butFront->setCheckable(true);
        butFront->setChecked(true);
        butFront->setAutoExclusive(true);

        gridLayout->addWidget(butFront, 2, 0, 1, 1);

        butDownRotate = new QPushButton(directionGroupbox);
        butDownRotate->setObjectName(QString::fromUtf8("butDownRotate"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/arrow-down.svg"), QSize(), QIcon::Normal, QIcon::On);
        butDownRotate->setIcon(icon6);
        butDownRotate->setIconSize(QSize(24, 24));

        gridLayout->addWidget(butDownRotate, 2, 1, 1, 1);

        butCam = new QPushButton(directionGroupbox);
        butCam->setObjectName(QString::fromUtf8("butCam"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/TechDraw_CameraOrientation.svg"), QSize(), QIcon::Normal, QIcon::On);
        butCam->setIcon(icon7);
        butCam->setIconSize(QSize(24, 24));
        butCam->setCheckable(true);
        butCam->setAutoExclusive(true);

        gridLayout->addWidget(butCam, 2, 2, 1, 1);


        verticalLayout->addWidget(directionGroupbox);

        secondaryProjGroupbox = new QGroupBox(TechDrawGui__TaskProjGroup);
        secondaryProjGroupbox->setObjectName(QString::fromUtf8("secondaryProjGroupbox"));
        gridLayout_2 = new QGridLayout(secondaryProjGroupbox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chkView0 = new QCheckBox(secondaryProjGroupbox);
        chkView0->setObjectName(QString::fromUtf8("chkView0"));
        chkView0->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));
        chkView0->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(chkView0, 2, 1, 1, 1);

        chkView1 = new QCheckBox(secondaryProjGroupbox);
        chkView1->setObjectName(QString::fromUtf8("chkView1"));
        chkView1->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView1, 2, 2, 1, 1);

        chkView2 = new QCheckBox(secondaryProjGroupbox);
        chkView2->setObjectName(QString::fromUtf8("chkView2"));
        chkView2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView2, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        chkView3 = new QCheckBox(secondaryProjGroupbox);
        chkView3->setObjectName(QString::fromUtf8("chkView3"));
        chkView3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView3, 3, 1, 1, 1);

        chkView4 = new QCheckBox(secondaryProjGroupbox);
        chkView4->setObjectName(QString::fromUtf8("chkView4"));
        chkView4->setEnabled(false);
        chkView4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));
        chkView4->setChecked(true);

        gridLayout_2->addWidget(chkView4, 3, 2, 1, 1);

        chkView5 = new QCheckBox(secondaryProjGroupbox);
        chkView5->setObjectName(QString::fromUtf8("chkView5"));
        chkView5->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView5, 3, 3, 1, 1);

        chkView6 = new QCheckBox(secondaryProjGroupbox);
        chkView6->setObjectName(QString::fromUtf8("chkView6"));
        chkView6->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView6, 3, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 5, 1, 1);

        chkView7 = new QCheckBox(secondaryProjGroupbox);
        chkView7->setObjectName(QString::fromUtf8("chkView7"));
        chkView7->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView7, 5, 1, 1, 1);

        chkView8 = new QCheckBox(secondaryProjGroupbox);
        chkView8->setObjectName(QString::fromUtf8("chkView8"));
        chkView8->setEnabled(true);
        chkView8->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView8, 5, 2, 1, 1);

        chkView9 = new QCheckBox(secondaryProjGroupbox);
        chkView9->setObjectName(QString::fromUtf8("chkView9"));
        chkView9->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"width: 24px;\n"
"height: 24px;\n"
"}\n"
""));

        gridLayout_2->addWidget(chkView9, 5, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(secondaryProjGroupbox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        projection = new QComboBox(secondaryProjGroupbox);
        projection->addItem(QString());
        projection->addItem(QString());
        projection->addItem(QString());
        projection->setObjectName(QString::fromUtf8("projection"));

        horizontalLayout_3->addWidget(projection);


        gridLayout_2->addLayout(horizontalLayout_3, 6, 0, 1, 6);

        cbAutoDistribute = new QCheckBox(secondaryProjGroupbox);
        cbAutoDistribute->setObjectName(QString::fromUtf8("cbAutoDistribute"));

        gridLayout_2->addWidget(cbAutoDistribute, 7, 0, 1, 6);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_10 = new QLabel(secondaryProjGroupbox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        sbXSpacing = new Gui::QuantitySpinBox(secondaryProjGroupbox);
        sbXSpacing->setObjectName(QString::fromUtf8("sbXSpacing"));
        sizePolicy2.setHeightForWidth(sbXSpacing->sizePolicy().hasHeightForWidth());
        sbXSpacing->setSizePolicy(sizePolicy2);
        sbXSpacing->setMinimumSize(QSize(150, 22));
        sbXSpacing->setKeyboardTracking(false);
        sbXSpacing->setProperty("unit", QVariant(QString::fromUtf8("")));
        sbXSpacing->setMinimum(0.000000000000000);

        gridLayout_3->addWidget(sbXSpacing, 0, 2, 1, 1);

        label_11 = new QLabel(secondaryProjGroupbox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 2);

        sbYSpacing = new Gui::QuantitySpinBox(secondaryProjGroupbox);
        sbYSpacing->setObjectName(QString::fromUtf8("sbYSpacing"));
        sizePolicy2.setHeightForWidth(sbYSpacing->sizePolicy().hasHeightForWidth());
        sbYSpacing->setSizePolicy(sizePolicy2);
        sbYSpacing->setMinimumSize(QSize(150, 22));
        sbYSpacing->setKeyboardTracking(false);
        sbYSpacing->setProperty("unit", QVariant(QString::fromUtf8("")));
        sbYSpacing->setMinimum(0.000000000000000);

        gridLayout_3->addWidget(sbYSpacing, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 8, 0, 1, 6);


        verticalLayout->addWidget(secondaryProjGroupbox);


        retranslateUi(TechDrawGui__TaskProjGroup);
        QObject::connect(cbAutoDistribute, SIGNAL(clicked(bool)), sbXSpacing, SLOT(setEnabled(bool)));
        QObject::connect(cbAutoDistribute, SIGNAL(clicked(bool)), sbYSpacing, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(TechDrawGui__TaskProjGroup);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskProjGroup)
    {
        TechDrawGui__TaskProjGroup->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Projection Group", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Scale", nullptr));
        cmbScaleType->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Page", nullptr));
        cmbScaleType->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Automatic", nullptr));
        cmbScaleType->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Custom", nullptr));

#if QT_CONFIG(tooltip)
        cmbScaleType->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Scale Page/Auto/Custom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sbScaleNum->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Scale Numerator", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sbScaleDen->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Scale Denominator", nullptr));
#endif // QT_CONFIG(tooltip)
        directionGroupbox->setTitle(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Direction", nullptr));
#if QT_CONFIG(tooltip)
        butCWRotate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Spin clock wise", nullptr));
#endif // QT_CONFIG(tooltip)
        butCWRotate->setText(QString());
#if QT_CONFIG(tooltip)
        butTopRotate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Rotate up", nullptr));
#endif // QT_CONFIG(tooltip)
        butTopRotate->setText(QString());
#if QT_CONFIG(tooltip)
        butCCWRotate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Spin counter clock wise", nullptr));
#endif // QT_CONFIG(tooltip)
        butCCWRotate->setText(QString());
#if QT_CONFIG(tooltip)
        butLeftRotate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Rotate left", nullptr));
#endif // QT_CONFIG(tooltip)
        butLeftRotate->setText(QString());
#if QT_CONFIG(tooltip)
        lePrimary->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Current primary view direction", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        butRightRotate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Rotate right", nullptr));
#endif // QT_CONFIG(tooltip)
        butRightRotate->setText(QString());
#if QT_CONFIG(tooltip)
        butFront->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Set document front view as primary direction.", nullptr));
#endif // QT_CONFIG(tooltip)
        butFront->setText(QString());
#if QT_CONFIG(tooltip)
        butDownRotate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Rotate down", nullptr));
#endif // QT_CONFIG(tooltip)
        butDownRotate->setText(QString());
#if QT_CONFIG(tooltip)
        butCam->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Set direction of the camera, or selected face if any, as primary direction.", nullptr));
#endif // QT_CONFIG(tooltip)
        butCam->setText(QString());
        secondaryProjGroupbox->setTitle(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Secondary Projections", nullptr));
#if QT_CONFIG(tooltip)
        chkView0->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "LeftFrontTop", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView0->setText(QString());
#if QT_CONFIG(tooltip)
        chkView1->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Top", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView1->setText(QString());
#if QT_CONFIG(tooltip)
        chkView2->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "RightFrontTop", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView2->setText(QString());
#if QT_CONFIG(tooltip)
        chkView3->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Left", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView3->setText(QString());
#if QT_CONFIG(tooltip)
        chkView4->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Primary", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView4->setText(QString());
#if QT_CONFIG(tooltip)
        chkView5->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Right", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView5->setText(QString());
#if QT_CONFIG(tooltip)
        chkView6->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Rear", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView6->setText(QString());
#if QT_CONFIG(tooltip)
        chkView7->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "LeftFrontBottom", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView7->setText(QString());
#if QT_CONFIG(tooltip)
        chkView8->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView8->setText(QString());
#if QT_CONFIG(tooltip)
        chkView9->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "RightFrontBottom", nullptr));
#endif // QT_CONFIG(tooltip)
        chkView9->setText(QString());
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Projection", nullptr));
        projection->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskProjGroup", "First Angle", nullptr));
        projection->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Third Angle", nullptr));
        projection->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Page", nullptr));

#if QT_CONFIG(tooltip)
        projection->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "First or Third Angle", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbAutoDistribute->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Distributes projections automatically\n"
"using the given X/Y Spacing", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAutoDistribute->setText(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Auto Distribute", nullptr));
        label_10->setText(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "X Spacing", nullptr));
#if QT_CONFIG(tooltip)
        sbXSpacing->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Horizontal space between borders of projections", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Y Spacing", nullptr));
#if QT_CONFIG(tooltip)
        sbYSpacing->setToolTip(QCoreApplication::translate("TechDrawGui::TaskProjGroup", "Vertical space between borders of projections", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskProjGroup: public Ui_TaskProjGroup {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKPROJGROUP_H
