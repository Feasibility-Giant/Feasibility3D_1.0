/********************************************************************************
** Form generated from reading UI file 'TaskComplexSection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCOMPLEXSECTION_H
#define UI_TASKCOMPLEXSECTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace TechDrawGui {

class Ui_TaskComplexSection
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QPushButton *pbSectionObjects;
    QLabel *label_9;
    QLineEdit *leProfileObject;
    QLineEdit *leSectionObjects;
    QPushButton *pbProfileObject;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QComboBox *cmbScaleType;
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *sbScale;
    QLabel *label_7;
    QComboBox *cmbStrategy;
    QLabel *label_2;
    QLineEdit *leSymbol;
    QLabel *label_5;
    QLineEdit *leBaseView;
    QGroupBox *gbOrientation;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *viewDirectionLayout;
    QGridLayout *gridLayout_3;
    QPushButton *pbUp;
    QPushButton *pbDown;
    QPushButton *pbLeft;
    QPushButton *pbRight;
    QVBoxLayout *compassLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QCheckBox *cbLiveUpdate;
    QPushButton *pbUpdateNow;
    QLabel *lPendingUpdates;

    void setupUi(QWidget *TechDrawGui__TaskComplexSection)
    {
        if (TechDrawGui__TaskComplexSection->objectName().isEmpty())
            TechDrawGui__TaskComplexSection->setObjectName(QString::fromUtf8("TechDrawGui__TaskComplexSection"));
        TechDrawGui__TaskComplexSection->resize(373, 612);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskComplexSection->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskComplexSection->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_ComplexSection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TechDrawGui__TaskComplexSection->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(TechDrawGui__TaskComplexSection);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(TechDrawGui__TaskComplexSection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        pbSectionObjects = new QPushButton(groupBox);
        pbSectionObjects->setObjectName(QString::fromUtf8("pbSectionObjects"));

        gridLayout_2->addWidget(pbSectionObjects, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        leProfileObject = new QLineEdit(groupBox);
        leProfileObject->setObjectName(QString::fromUtf8("leProfileObject"));
        leProfileObject->setReadOnly(true);

        gridLayout_2->addWidget(leProfileObject, 2, 1, 1, 1);

        leSectionObjects = new QLineEdit(groupBox);
        leSectionObjects->setObjectName(QString::fromUtf8("leSectionObjects"));
        leSectionObjects->setReadOnly(true);

        gridLayout_2->addWidget(leSectionObjects, 0, 1, 1, 1);

        pbProfileObject = new QPushButton(groupBox);
        pbProfileObject->setObjectName(QString::fromUtf8("pbProfileObject"));

        gridLayout_2->addWidget(pbProfileObject, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TechDrawGui__TaskComplexSection);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        cmbScaleType = new QComboBox(groupBox_2);
        cmbScaleType->addItem(QString());
        cmbScaleType->addItem(QString());
        cmbScaleType->addItem(QString());
        cmbScaleType->setObjectName(QString::fromUtf8("cmbScaleType"));
        cmbScaleType->setMinimumSize(QSize(0, 26));

        gridLayout_4->addWidget(cmbScaleType, 3, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 4, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 3, 0, 1, 1);

        sbScale = new QDoubleSpinBox(groupBox_2);
        sbScale->setObjectName(QString::fromUtf8("sbScale"));
        sbScale->setMinimumSize(QSize(0, 26));
        sbScale->setDecimals(6);
        sbScale->setMaximum(999.000000000000000);
        sbScale->setValue(1.000000000000000);

        gridLayout_4->addWidget(sbScale, 4, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        cmbStrategy = new QComboBox(groupBox_2);
        cmbStrategy->addItem(QString());
        cmbStrategy->addItem(QString());
        cmbStrategy->addItem(QString());
        cmbStrategy->setObjectName(QString::fromUtf8("cmbStrategy"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbStrategy->sizePolicy().hasHeightForWidth());
        cmbStrategy->setSizePolicy(sizePolicy1);
        cmbStrategy->setMinimumSize(QSize(0, 26));
        cmbStrategy->setBaseSize(QSize(0, 0));

        gridLayout_4->addWidget(cmbStrategy, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 2, 0, 1, 1);

        leSymbol = new QLineEdit(groupBox_2);
        leSymbol->setObjectName(QString::fromUtf8("leSymbol"));
        leSymbol->setMinimumSize(QSize(0, 26));

        gridLayout_4->addWidget(leSymbol, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        leBaseView = new QLineEdit(groupBox_2);
        leBaseView->setObjectName(QString::fromUtf8("leBaseView"));
        leBaseView->setEnabled(false);

        gridLayout_4->addWidget(leBaseView, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_2->addLayout(gridLayout_4);


        verticalLayout_3->addWidget(groupBox_2);

        gbOrientation = new QGroupBox(TechDrawGui__TaskComplexSection);
        gbOrientation->setObjectName(QString::fromUtf8("gbOrientation"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gbOrientation->sizePolicy().hasHeightForWidth());
        gbOrientation->setSizePolicy(sizePolicy2);
        verticalLayout_4 = new QVBoxLayout(gbOrientation);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        viewDirectionLayout = new QHBoxLayout();
        viewDirectionLayout->setObjectName(QString::fromUtf8("viewDirectionLayout"));

        verticalLayout_4->addLayout(viewDirectionLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pbUp = new QPushButton(gbOrientation);
        pbUp->setObjectName(QString::fromUtf8("pbUp"));
        pbUp->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/actions/section-up.svg"), QSize(), QIcon::Normal, QIcon::On);
        pbUp->setIcon(icon1);
        pbUp->setIconSize(QSize(48, 48));
        pbUp->setCheckable(false);

        gridLayout_3->addWidget(pbUp, 0, 0, 1, 1);

        pbDown = new QPushButton(gbOrientation);
        pbDown->setObjectName(QString::fromUtf8("pbDown"));
        pbDown->setMaximumSize(QSize(50, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/actions/section-down.svg"), QSize(), QIcon::Normal, QIcon::On);
        pbDown->setIcon(icon2);
        pbDown->setIconSize(QSize(48, 48));

        gridLayout_3->addWidget(pbDown, 0, 1, 1, 1);

        pbLeft = new QPushButton(gbOrientation);
        pbLeft->setObjectName(QString::fromUtf8("pbLeft"));
        pbLeft->setMaximumSize(QSize(50, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/actions/section-left.svg"), QSize(), QIcon::Normal, QIcon::On);
        pbLeft->setIcon(icon3);
        pbLeft->setIconSize(QSize(48, 48));

        gridLayout_3->addWidget(pbLeft, 0, 2, 1, 1);

        pbRight = new QPushButton(gbOrientation);
        pbRight->setObjectName(QString::fromUtf8("pbRight"));
        pbRight->setMaximumSize(QSize(50, 50));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/actions/section-right.svg"), QSize(), QIcon::Normal, QIcon::On);
        pbRight->setIcon(icon4);
        pbRight->setIconSize(QSize(48, 48));

        gridLayout_3->addWidget(pbRight, 0, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        compassLayout = new QVBoxLayout();
        compassLayout->setObjectName(QString::fromUtf8("compassLayout"));

        verticalLayout_4->addLayout(compassLayout);


        verticalLayout_3->addWidget(gbOrientation);

        groupBox_3 = new QGroupBox(TechDrawGui__TaskComplexSection);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbLiveUpdate = new QCheckBox(groupBox_3);
        cbLiveUpdate->setObjectName(QString::fromUtf8("cbLiveUpdate"));

        gridLayout->addWidget(cbLiveUpdate, 0, 0, 1, 1);

        pbUpdateNow = new QPushButton(groupBox_3);
        pbUpdateNow->setObjectName(QString::fromUtf8("pbUpdateNow"));

        gridLayout->addWidget(pbUpdateNow, 0, 1, 1, 1);

        lPendingUpdates = new QLabel(groupBox_3);
        lPendingUpdates->setObjectName(QString::fromUtf8("lPendingUpdates"));

        gridLayout->addWidget(lPendingUpdates, 1, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout_3->addWidget(groupBox_3);


        retranslateUi(TechDrawGui__TaskComplexSection);

        cmbStrategy->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TechDrawGui__TaskComplexSection);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskComplexSection)
    {
        TechDrawGui__TaskComplexSection->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Complex Section", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Object Selection", nullptr));
        label_8->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Objects to section", nullptr));
        pbSectionObjects->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Use Selection", nullptr));
        label_9->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Profile object", nullptr));
        pbProfileObject->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Use Selection", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Section Parameters", nullptr));
        cmbScaleType->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Page", nullptr));
        cmbScaleType->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Automatic", nullptr));
        cmbScaleType->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Custom", nullptr));

#if QT_CONFIG(tooltip)
        cmbScaleType->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Scale Page/Auto/Custom", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Scale", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Scale Type", nullptr));
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Projection Strategy", nullptr));
        cmbStrategy->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Offset", nullptr));
        cmbStrategy->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Aligned", nullptr));
        cmbStrategy->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskComplexSection", "NoParallel", nullptr));

        cmbStrategy->setCurrentText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Offset", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Identifier", nullptr));
#if QT_CONFIG(tooltip)
        leSymbol->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Identifier for this section", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "BaseView", nullptr));
        gbOrientation->setTitle(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Set View Direction", nullptr));
#if QT_CONFIG(tooltip)
        pbUp->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Preset view direction looking up.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbUp->setText(QString());
#if QT_CONFIG(tooltip)
        pbDown->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Preset view direction looking down.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDown->setText(QString());
#if QT_CONFIG(tooltip)
        pbLeft->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Preset view direction looking left.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbLeft->setText(QString());
#if QT_CONFIG(tooltip)
        pbRight->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Preset view direction looking right.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRight->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Preview", nullptr));
#if QT_CONFIG(tooltip)
        cbLiveUpdate->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Check to update display after every property change.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbLiveUpdate->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Live Update", nullptr));
#if QT_CONFIG(tooltip)
        pbUpdateNow->setToolTip(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Rebuild display now. May be slow for complex models.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbUpdateNow->setText(QCoreApplication::translate("TechDrawGui::TaskComplexSection", "Update Now", nullptr));
        lPendingUpdates->setText(QString());
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskComplexSection: public Ui_TaskComplexSection {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKCOMPLEXSECTION_H
