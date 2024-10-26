/********************************************************************************
** Form generated from reading UI file 'DlgExpressionInput.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEXPRESSIONINPUT_H
#define UI_DLGEXPRESSIONINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ExpressionCompleter.h"

QT_BEGIN_NAMESPACE

class Ui_DlgExpressionInput
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxVarSets;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayoutVarSets;
    QLineEdit *lineEditGroup;
    QLabel *labelGroup;
    QLabel *labelInfoActive;
    QLabel *labelVarSet;
    QComboBox *comboBoxVarSet;
    QLabel *labelInfo;
    QLabel *LabelPropNew;
    QLineEdit *lineEditPropNew;
    QCheckBox *checkBoxVarSets;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *ctrlArea;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *msg;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    Gui::ExpressionLineEdit *expression;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *discardBtn;
    QPushButton *okBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DlgExpressionInput)
    {
        if (DlgExpressionInput->objectName().isEmpty())
            DlgExpressionInput->setObjectName(QString::fromUtf8("DlgExpressionInput"));
        DlgExpressionInput->resize(414, 272);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DlgExpressionInput->sizePolicy().hasHeightForWidth());
        DlgExpressionInput->setSizePolicy(sizePolicy);
        DlgExpressionInput->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(DlgExpressionInput);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxVarSets = new QGroupBox(DlgExpressionInput);
        groupBoxVarSets->setObjectName(QString::fromUtf8("groupBoxVarSets"));
        horizontalLayout_8 = new QHBoxLayout(groupBoxVarSets);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        gridLayoutVarSets = new QGridLayout();
        gridLayoutVarSets->setObjectName(QString::fromUtf8("gridLayoutVarSets"));
        lineEditGroup = new QLineEdit(groupBoxVarSets);
        lineEditGroup->setObjectName(QString::fromUtf8("lineEditGroup"));

        gridLayoutVarSets->addWidget(lineEditGroup, 1, 2, 1, 1);

        labelGroup = new QLabel(groupBoxVarSets);
        labelGroup->setObjectName(QString::fromUtf8("labelGroup"));

        gridLayoutVarSets->addWidget(labelGroup, 1, 0, 1, 1);

        labelInfoActive = new QLabel(groupBoxVarSets);
        labelInfoActive->setObjectName(QString::fromUtf8("labelInfoActive"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelInfoActive->sizePolicy().hasHeightForWidth());
        labelInfoActive->setSizePolicy(sizePolicy1);
        labelInfoActive->setMinimumSize(QSize(0, 70));

        gridLayoutVarSets->addWidget(labelInfoActive, 3, 2, 1, 1);

        labelVarSet = new QLabel(groupBoxVarSets);
        labelVarSet->setObjectName(QString::fromUtf8("labelVarSet"));

        gridLayoutVarSets->addWidget(labelVarSet, 0, 0, 1, 1);

        comboBoxVarSet = new QComboBox(groupBoxVarSets);
        comboBoxVarSet->setObjectName(QString::fromUtf8("comboBoxVarSet"));

        gridLayoutVarSets->addWidget(comboBoxVarSet, 0, 2, 1, 1);

        labelInfo = new QLabel(groupBoxVarSets);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        gridLayoutVarSets->addWidget(labelInfo, 3, 0, 1, 1);

        LabelPropNew = new QLabel(groupBoxVarSets);
        LabelPropNew->setObjectName(QString::fromUtf8("LabelPropNew"));

        gridLayoutVarSets->addWidget(LabelPropNew, 2, 0, 1, 1);

        lineEditPropNew = new QLineEdit(groupBoxVarSets);
        lineEditPropNew->setObjectName(QString::fromUtf8("lineEditPropNew"));
        sizePolicy.setHeightForWidth(lineEditPropNew->sizePolicy().hasHeightForWidth());
        lineEditPropNew->setSizePolicy(sizePolicy);

        gridLayoutVarSets->addWidget(lineEditPropNew, 2, 2, 1, 1);


        horizontalLayout_8->addLayout(gridLayoutVarSets);


        verticalLayout->addWidget(groupBoxVarSets);

        checkBoxVarSets = new QCheckBox(DlgExpressionInput);
        checkBoxVarSets->setObjectName(QString::fromUtf8("checkBoxVarSets"));

        verticalLayout->addWidget(checkBoxVarSets);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
#ifndef Q_OS_MAC
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
#endif
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ctrlArea = new QFrame(DlgExpressionInput);
        ctrlArea->setObjectName(QString::fromUtf8("ctrlArea"));
        ctrlArea->setAutoFillBackground(true);
        ctrlArea->setFrameShape(QFrame::StyledPanel);
        ctrlArea->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(ctrlArea);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(ctrlArea);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        msg = new QLabel(ctrlArea);
        msg->setObjectName(QString::fromUtf8("msg"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        msg->setPalette(palette);

        horizontalLayout_4->addWidget(msg);


        verticalLayout_2->addWidget(ctrlArea);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        expression = new Gui::ExpressionLineEdit(DlgExpressionInput);
        expression->setObjectName(QString::fromUtf8("expression"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(expression->sizePolicy().hasHeightForWidth());
        expression->setSizePolicy(sizePolicy2);
        expression->setMinimumSize(QSize(10, 10));

        horizontalLayout_5->addWidget(expression);

        horizontalSpacer_3 = new QSpacerItem(0, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        discardBtn = new QPushButton(DlgExpressionInput);
        discardBtn->setObjectName(QString::fromUtf8("discardBtn"));
        discardBtn->setAutoDefault(true);

        horizontalLayout->addWidget(discardBtn);

        okBtn = new QPushButton(DlgExpressionInput);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setAutoDefault(true);

        horizontalLayout->addWidget(okBtn);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(expression, okBtn);
        QWidget::setTabOrder(okBtn, discardBtn);
        QWidget::setTabOrder(discardBtn, checkBoxVarSets);

        retranslateUi(DlgExpressionInput);
        QObject::connect(okBtn, SIGNAL(clicked()), DlgExpressionInput, SLOT(accept()));

        discardBtn->setDefault(false);
        okBtn->setDefault(true);


        QMetaObject::connectSlotsByName(DlgExpressionInput);
    } // setupUi

    void retranslateUi(QDialog *DlgExpressionInput)
    {
        DlgExpressionInput->setWindowTitle(QCoreApplication::translate("DlgExpressionInput", "Expression editor", nullptr));
        groupBoxVarSets->setTitle(QCoreApplication::translate("DlgExpressionInput", "Variable Sets", nullptr));
        labelGroup->setText(QCoreApplication::translate("DlgExpressionInput", "Group:", nullptr));
        labelInfoActive->setText(QString());
        labelVarSet->setText(QCoreApplication::translate("DlgExpressionInput", "Variable Set:", nullptr));
        labelInfo->setText(QCoreApplication::translate("DlgExpressionInput", "Info:", nullptr));
        LabelPropNew->setText(QCoreApplication::translate("DlgExpressionInput", "New Property:", nullptr));
        checkBoxVarSets->setText(QCoreApplication::translate("DlgExpressionInput", "Show variable sets", nullptr));
        label->setText(QCoreApplication::translate("DlgExpressionInput", "Result:", nullptr));
        msg->setText(QString());
#if QT_CONFIG(tooltip)
        discardBtn->setToolTip(QCoreApplication::translate("DlgExpressionInput", "Revert to last calculated value (as constant)", nullptr));
#endif // QT_CONFIG(tooltip)
        discardBtn->setText(QCoreApplication::translate("DlgExpressionInput", "&Clear", nullptr));
        okBtn->setText(QCoreApplication::translate("DlgExpressionInput", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgExpressionInput: public Ui_DlgExpressionInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGEXPRESSIONINPUT_H
