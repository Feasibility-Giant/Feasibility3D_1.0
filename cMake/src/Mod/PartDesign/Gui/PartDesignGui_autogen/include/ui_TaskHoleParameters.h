/********************************************************************************
** Form generated from reading UI file 'TaskHoleParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKHOLEPARAMETERS_H
#define UI_TASKHOLEPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskHoleParameters
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QComboBox *ThreadType;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QComboBox *ThreadSize;
    QHBoxLayout *horizontalLayout;
    QLabel *labelThreadClearance;
    QComboBox *ThreadFit;
    QLabel *label_7;
    Gui::PrefQuantitySpinBox *Diameter;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QComboBox *DepthType;
    Gui::PrefQuantitySpinBox *Depth;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *Reversed;
    QCheckBox *Tapered;
    Gui::PrefQuantitySpinBox *TaperedAngle;
    QGroupBox *ThreadGroupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *Threaded;
    QLabel *label_5;
    QComboBox *ThreadClass;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelThreadDepth;
    QComboBox *ThreadDepthType;
    Gui::PrefQuantitySpinBox *ThreadDepth;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QRadioButton *directionLeftHand;
    QRadioButton *directionRightHand;
    QCheckBox *ModelThread;
    QCheckBox *UpdateView;
    QCheckBox *UseCustomThreadClearance;
    Gui::PrefQuantitySpinBox *CustomThreadClearance;
    QGroupBox *CutGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QComboBox *HoleCutType;
    QLabel *label_11;
    Gui::PrefQuantitySpinBox *HoleCutDiameter;
    QLabel *label_12;
    Gui::PrefQuantitySpinBox *HoleCutDepth;
    QLabel *label_10;
    Gui::PrefQuantitySpinBox *HoleCutCountersinkAngle;
    QCheckBox *HoleCutCustomValues;
    QGroupBox *DrillGroupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_7;
    QLabel *label_3;
    QRadioButton *drillPointFlat;
    QRadioButton *drillPointAngled;
    Gui::PrefQuantitySpinBox *DrillPointAngle;
    QCheckBox *DrillForDepth;
    QButtonGroup *directionButtonGroup;
    QButtonGroup *drillPointButtonGroup;

    void setupUi(QWidget *TaskHoleParameters)
    {
        if (TaskHoleParameters->objectName().isEmpty())
            TaskHoleParameters->setObjectName(QString::fromUtf8("TaskHoleParameters"));
        TaskHoleParameters->resize(394, 702);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskHoleParameters->sizePolicy().hasHeightForWidth());
        TaskHoleParameters->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(TaskHoleParameters);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_2 = new QLabel(TaskHoleParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(label_2);

        ThreadType = new QComboBox(TaskHoleParameters);
        ThreadType->setObjectName(QString::fromUtf8("ThreadType"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ThreadType->sizePolicy().hasHeightForWidth());
        ThreadType->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(ThreadType);


        gridLayout->addLayout(horizontalLayout_10, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(TaskHoleParameters);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(label_4);

        ThreadSize = new QComboBox(TaskHoleParameters);
        ThreadSize->setObjectName(QString::fromUtf8("ThreadSize"));
        sizePolicy2.setHeightForWidth(ThreadSize->sizePolicy().hasHeightForWidth());
        ThreadSize->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(ThreadSize);


        gridLayout_2->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelThreadClearance = new QLabel(TaskHoleParameters);
        labelThreadClearance->setObjectName(QString::fromUtf8("labelThreadClearance"));
        sizePolicy3.setHeightForWidth(labelThreadClearance->sizePolicy().hasHeightForWidth());
        labelThreadClearance->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(labelThreadClearance);

        ThreadFit = new QComboBox(TaskHoleParameters);
        ThreadFit->addItem(QString());
        ThreadFit->addItem(QString());
        ThreadFit->addItem(QString());
        ThreadFit->setObjectName(QString::fromUtf8("ThreadFit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ThreadFit->sizePolicy().hasHeightForWidth());
        ThreadFit->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(ThreadFit);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);

        label_7 = new QLabel(TaskHoleParameters);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        Diameter = new Gui::PrefQuantitySpinBox(TaskHoleParameters);
        Diameter->setObjectName(QString::fromUtf8("Diameter"));
        sizePolicy2.setHeightForWidth(Diameter->sizePolicy().hasHeightForWidth());
        Diameter->setSizePolicy(sizePolicy2);
        Diameter->setKeyboardTracking(false);
        Diameter->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        Diameter->setMinimum(0.000000000000000);

        gridLayout_2->addWidget(Diameter, 2, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(TaskHoleParameters);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(label_6);

        DepthType = new QComboBox(TaskHoleParameters);
        DepthType->addItem(QString());
        DepthType->addItem(QString());
        DepthType->setObjectName(QString::fromUtf8("DepthType"));
        sizePolicy4.setHeightForWidth(DepthType->sizePolicy().hasHeightForWidth());
        DepthType->setSizePolicy(sizePolicy4);

        horizontalLayout_8->addWidget(DepthType);


        gridLayout_2->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        Depth = new Gui::PrefQuantitySpinBox(TaskHoleParameters);
        Depth->setObjectName(QString::fromUtf8("Depth"));
        sizePolicy2.setHeightForWidth(Depth->sizePolicy().hasHeightForWidth());
        Depth->setSizePolicy(sizePolicy2);
        Depth->setKeyboardTracking(false);
        Depth->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        gridLayout_2->addWidget(Depth, 3, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Reversed = new QCheckBox(TaskHoleParameters);
        Reversed->setObjectName(QString::fromUtf8("Reversed"));
        sizePolicy2.setHeightForWidth(Reversed->sizePolicy().hasHeightForWidth());
        Reversed->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(Reversed);

        Tapered = new QCheckBox(TaskHoleParameters);
        Tapered->setObjectName(QString::fromUtf8("Tapered"));
        sizePolicy4.setHeightForWidth(Tapered->sizePolicy().hasHeightForWidth());
        Tapered->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(Tapered);


        gridLayout_2->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        TaperedAngle = new Gui::PrefQuantitySpinBox(TaskHoleParameters);
        TaperedAngle->setObjectName(QString::fromUtf8("TaperedAngle"));
        sizePolicy2.setHeightForWidth(TaperedAngle->sizePolicy().hasHeightForWidth());
        TaperedAngle->setSizePolicy(sizePolicy2);
        TaperedAngle->setKeyboardTracking(false);
        TaperedAngle->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        TaperedAngle->setMinimum(0.000000000000000);

        gridLayout_2->addWidget(TaperedAngle, 4, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        ThreadGroupBox = new QGroupBox(TaskHoleParameters);
        ThreadGroupBox->setObjectName(QString::fromUtf8("ThreadGroupBox"));
        gridLayout_3 = new QGridLayout(ThreadGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Threaded = new QCheckBox(ThreadGroupBox);
        Threaded->setObjectName(QString::fromUtf8("Threaded"));
        sizePolicy2.setHeightForWidth(Threaded->sizePolicy().hasHeightForWidth());
        Threaded->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(Threaded);

        label_5 = new QLabel(ThreadGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_5);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        ThreadClass = new QComboBox(ThreadGroupBox);
        ThreadClass->setObjectName(QString::fromUtf8("ThreadClass"));
        sizePolicy2.setHeightForWidth(ThreadClass->sizePolicy().hasHeightForWidth());
        ThreadClass->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(ThreadClass, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelThreadDepth = new QLabel(ThreadGroupBox);
        labelThreadDepth->setObjectName(QString::fromUtf8("labelThreadDepth"));
        sizePolicy3.setHeightForWidth(labelThreadDepth->sizePolicy().hasHeightForWidth());
        labelThreadDepth->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(labelThreadDepth);

        ThreadDepthType = new QComboBox(ThreadGroupBox);
        ThreadDepthType->addItem(QString());
        ThreadDepthType->addItem(QString());
        ThreadDepthType->addItem(QString());
        ThreadDepthType->setObjectName(QString::fromUtf8("ThreadDepthType"));
        sizePolicy4.setHeightForWidth(ThreadDepthType->sizePolicy().hasHeightForWidth());
        ThreadDepthType->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(ThreadDepthType);


        gridLayout_3->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        ThreadDepth = new Gui::PrefQuantitySpinBox(ThreadGroupBox);
        ThreadDepth->setObjectName(QString::fromUtf8("ThreadDepth"));
        sizePolicy2.setHeightForWidth(ThreadDepth->sizePolicy().hasHeightForWidth());
        ThreadDepth->setSizePolicy(sizePolicy2);
        ThreadDepth->setKeyboardTracking(false);
        ThreadDepth->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        gridLayout_3->addWidget(ThreadDepth, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(ThreadGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(label_8);

        directionLeftHand = new QRadioButton(ThreadGroupBox);
        directionButtonGroup = new QButtonGroup(TaskHoleParameters);
        directionButtonGroup->setObjectName(QString::fromUtf8("directionButtonGroup"));
        directionButtonGroup->addButton(directionLeftHand);
        directionLeftHand->setObjectName(QString::fromUtf8("directionLeftHand"));
        sizePolicy4.setHeightForWidth(directionLeftHand->sizePolicy().hasHeightForWidth());
        directionLeftHand->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(directionLeftHand);


        gridLayout_3->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        directionRightHand = new QRadioButton(ThreadGroupBox);
        directionButtonGroup->addButton(directionRightHand);
        directionRightHand->setObjectName(QString::fromUtf8("directionRightHand"));
        sizePolicy2.setHeightForWidth(directionRightHand->sizePolicy().hasHeightForWidth());
        directionRightHand->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(directionRightHand, 4, 1, 1, 1);

        ModelThread = new QCheckBox(ThreadGroupBox);
        ModelThread->setObjectName(QString::fromUtf8("ModelThread"));
        sizePolicy2.setHeightForWidth(ModelThread->sizePolicy().hasHeightForWidth());
        ModelThread->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(ModelThread, 6, 0, 1, 1);

        UpdateView = new QCheckBox(ThreadGroupBox);
        UpdateView->setObjectName(QString::fromUtf8("UpdateView"));
        UpdateView->setEnabled(true);
        sizePolicy2.setHeightForWidth(UpdateView->sizePolicy().hasHeightForWidth());
        UpdateView->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(UpdateView, 6, 1, 1, 1);

        UseCustomThreadClearance = new QCheckBox(ThreadGroupBox);
        UseCustomThreadClearance->setObjectName(QString::fromUtf8("UseCustomThreadClearance"));
        sizePolicy2.setHeightForWidth(UseCustomThreadClearance->sizePolicy().hasHeightForWidth());
        UseCustomThreadClearance->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(UseCustomThreadClearance, 7, 0, 1, 1);

        CustomThreadClearance = new Gui::PrefQuantitySpinBox(ThreadGroupBox);
        CustomThreadClearance->setObjectName(QString::fromUtf8("CustomThreadClearance"));
        sizePolicy2.setHeightForWidth(CustomThreadClearance->sizePolicy().hasHeightForWidth());
        CustomThreadClearance->setSizePolicy(sizePolicy2);
        CustomThreadClearance->setKeyboardTracking(false);
        CustomThreadClearance->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        CustomThreadClearance->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(CustomThreadClearance, 7, 1, 1, 1);


        gridLayout->addWidget(ThreadGroupBox, 5, 0, 2, 1);

        CutGroupBox = new QGroupBox(TaskHoleParameters);
        CutGroupBox->setObjectName(QString::fromUtf8("CutGroupBox"));
        gridLayout_4 = new QGridLayout(CutGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(CutGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        HoleCutType = new QComboBox(CutGroupBox);
        HoleCutType->setObjectName(QString::fromUtf8("HoleCutType"));
        sizePolicy2.setHeightForWidth(HoleCutType->sizePolicy().hasHeightForWidth());
        HoleCutType->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(HoleCutType, 0, 1, 1, 1);

        label_11 = new QLabel(CutGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        HoleCutDiameter = new Gui::PrefQuantitySpinBox(CutGroupBox);
        HoleCutDiameter->setObjectName(QString::fromUtf8("HoleCutDiameter"));
        sizePolicy2.setHeightForWidth(HoleCutDiameter->sizePolicy().hasHeightForWidth());
        HoleCutDiameter->setSizePolicy(sizePolicy2);
        HoleCutDiameter->setContextMenuPolicy(Qt::NoContextMenu);
        HoleCutDiameter->setKeyboardTracking(false);
        HoleCutDiameter->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        HoleCutDiameter->setMinimum(0.000000000000000);
        HoleCutDiameter->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(HoleCutDiameter, 2, 1, 1, 1);

        label_12 = new QLabel(CutGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_12, 3, 0, 1, 1);

        HoleCutDepth = new Gui::PrefQuantitySpinBox(CutGroupBox);
        HoleCutDepth->setObjectName(QString::fromUtf8("HoleCutDepth"));
        sizePolicy2.setHeightForWidth(HoleCutDepth->sizePolicy().hasHeightForWidth());
        HoleCutDepth->setSizePolicy(sizePolicy2);
        HoleCutDepth->setKeyboardTracking(false);
        HoleCutDepth->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        HoleCutDepth->setMinimum(0.000000000000000);
        HoleCutDepth->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(HoleCutDepth, 3, 1, 1, 1);

        label_10 = new QLabel(CutGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_10, 4, 0, 1, 1);

        HoleCutCountersinkAngle = new Gui::PrefQuantitySpinBox(CutGroupBox);
        HoleCutCountersinkAngle->setObjectName(QString::fromUtf8("HoleCutCountersinkAngle"));
        sizePolicy2.setHeightForWidth(HoleCutCountersinkAngle->sizePolicy().hasHeightForWidth());
        HoleCutCountersinkAngle->setSizePolicy(sizePolicy2);
        HoleCutCountersinkAngle->setKeyboardTracking(false);
        HoleCutCountersinkAngle->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        HoleCutCountersinkAngle->setMinimum(0.000000000000000);

        gridLayout_4->addWidget(HoleCutCountersinkAngle, 4, 1, 1, 1);

        HoleCutCustomValues = new QCheckBox(CutGroupBox);
        HoleCutCustomValues->setObjectName(QString::fromUtf8("HoleCutCustomValues"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(HoleCutCustomValues->sizePolicy().hasHeightForWidth());
        HoleCutCustomValues->setSizePolicy(sizePolicy5);

        gridLayout_4->addWidget(HoleCutCustomValues, 5, 0, 1, 1);


        gridLayout->addWidget(CutGroupBox, 7, 0, 1, 1);

        DrillGroupBox = new QGroupBox(TaskHoleParameters);
        DrillGroupBox->setObjectName(QString::fromUtf8("DrillGroupBox"));
        verticalLayout = new QVBoxLayout(DrillGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_3 = new QLabel(DrillGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        drillPointFlat = new QRadioButton(DrillGroupBox);
        drillPointButtonGroup = new QButtonGroup(TaskHoleParameters);
        drillPointButtonGroup->setObjectName(QString::fromUtf8("drillPointButtonGroup"));
        drillPointButtonGroup->addButton(drillPointFlat);
        drillPointFlat->setObjectName(QString::fromUtf8("drillPointFlat"));
        sizePolicy4.setHeightForWidth(drillPointFlat->sizePolicy().hasHeightForWidth());
        drillPointFlat->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(drillPointFlat, 0, 1, 1, 1);

        drillPointAngled = new QRadioButton(DrillGroupBox);
        drillPointButtonGroup->addButton(drillPointAngled);
        drillPointAngled->setObjectName(QString::fromUtf8("drillPointAngled"));
        sizePolicy4.setHeightForWidth(drillPointAngled->sizePolicy().hasHeightForWidth());
        drillPointAngled->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(drillPointAngled, 1, 1, 1, 1);

        DrillPointAngle = new Gui::PrefQuantitySpinBox(DrillGroupBox);
        DrillPointAngle->setObjectName(QString::fromUtf8("DrillPointAngle"));
        sizePolicy2.setHeightForWidth(DrillPointAngle->sizePolicy().hasHeightForWidth());
        DrillPointAngle->setSizePolicy(sizePolicy2);
        DrillPointAngle->setKeyboardTracking(false);
        DrillPointAngle->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        DrillPointAngle->setMinimum(0.000000000000000);

        gridLayout_7->addWidget(DrillPointAngle, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        DrillForDepth = new QCheckBox(DrillGroupBox);
        DrillForDepth->setObjectName(QString::fromUtf8("DrillForDepth"));
        sizePolicy2.setHeightForWidth(DrillForDepth->sizePolicy().hasHeightForWidth());
        DrillForDepth->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(DrillForDepth);


        gridLayout->addWidget(DrillGroupBox, 8, 0, 1, 1);


        retranslateUi(TaskHoleParameters);
        QObject::connect(Tapered, SIGNAL(toggled(bool)), TaperedAngle, SLOT(setEnabled(bool)));
        QObject::connect(Threaded, SIGNAL(toggled(bool)), ThreadClass, SLOT(setEnabled(bool)));
        QObject::connect(Threaded, SIGNAL(toggled(bool)), ThreadFit, SLOT(setDisabled(bool)));
        QObject::connect(Threaded, SIGNAL(toggled(bool)), directionLeftHand, SLOT(setEnabled(bool)));
        QObject::connect(Threaded, SIGNAL(toggled(bool)), directionRightHand, SLOT(setEnabled(bool)));
        QObject::connect(UseCustomThreadClearance, SIGNAL(toggled(bool)), CustomThreadClearance, SLOT(setEnabled(bool)));
        QObject::connect(ModelThread, SIGNAL(toggled(bool)), UseCustomThreadClearance, SLOT(setVisible(bool)));
        QObject::connect(ModelThread, SIGNAL(toggled(bool)), CustomThreadClearance, SLOT(setVisible(bool)));
        QObject::connect(ModelThread, SIGNAL(toggled(bool)), UpdateView, SLOT(setVisible(bool)));
        QObject::connect(Threaded, SIGNAL(toggled(bool)), ThreadDepthType, SLOT(setEnabled(bool)));
        QObject::connect(Threaded, SIGNAL(toggled(bool)), ThreadDepth, SLOT(setEnabled(bool)));
        QObject::connect(Threaded, SIGNAL(toggled(bool)), ModelThread, SLOT(setEnabled(bool)));
        QObject::connect(drillPointAngled, SIGNAL(toggled(bool)), DrillForDepth, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(TaskHoleParameters);
    } // setupUi

    void retranslateUi(QWidget *TaskHoleParameters)
    {
        TaskHoleParameters->setWindowTitle(QCoreApplication::translate("TaskHoleParameters", "Task Hole Parameters", nullptr));
        label_2->setText(QCoreApplication::translate("TaskHoleParameters", "Profile", nullptr));
        label_4->setText(QCoreApplication::translate("TaskHoleParameters", "Size", nullptr));
        labelThreadClearance->setText(QCoreApplication::translate("TaskHoleParameters", "Clearance", nullptr));
        ThreadFit->setItemText(0, QCoreApplication::translate("TaskHoleParameters", "Standard", nullptr));
        ThreadFit->setItemText(1, QCoreApplication::translate("TaskHoleParameters", "Close", nullptr));
        ThreadFit->setItemText(2, QCoreApplication::translate("TaskHoleParameters", "Wide", nullptr));

#if QT_CONFIG(tooltip)
        ThreadFit->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Hole clearance\n"
"Only available for holes without thread", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("TaskHoleParameters", "Diameter", nullptr));
#if QT_CONFIG(tooltip)
        Diameter->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Hole diameter", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TaskHoleParameters", "Depth", nullptr));
        DepthType->setItemText(0, QCoreApplication::translate("TaskHoleParameters", "Dimension", nullptr));
        DepthType->setItemText(1, QCoreApplication::translate("TaskHoleParameters", "Through all", nullptr));

#if QT_CONFIG(tooltip)
        Reversed->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Reverses the hole direction", nullptr));
#endif // QT_CONFIG(tooltip)
        Reversed->setText(QCoreApplication::translate("TaskHoleParameters", "Reversed", nullptr));
        Tapered->setText(QCoreApplication::translate("TaskHoleParameters", "Tapered", nullptr));
#if QT_CONFIG(tooltip)
        TaperedAngle->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Taper angle for the hole\n"
"90 degree: straight hole\n"
"under 90: smaller hole radius at the bottom\n"
"over 90: larger hole radius at the bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        ThreadGroupBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        Threaded->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Whether the hole gets a thread", nullptr));
#endif // QT_CONFIG(tooltip)
        Threaded->setText(QCoreApplication::translate("TaskHoleParameters", "Threaded", nullptr));
        label_5->setText(QCoreApplication::translate("TaskHoleParameters", "Class", nullptr));
#if QT_CONFIG(tooltip)
        ThreadClass->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Tolerance class for threaded holes according to hole profile", nullptr));
#endif // QT_CONFIG(tooltip)
        labelThreadDepth->setText(QCoreApplication::translate("TaskHoleParameters", "Depth", nullptr));
        ThreadDepthType->setItemText(0, QCoreApplication::translate("TaskHoleParameters", "Hole depth", nullptr));
        ThreadDepthType->setItemText(1, QCoreApplication::translate("TaskHoleParameters", "Dimension", nullptr));
        ThreadDepthType->setItemText(2, QCoreApplication::translate("TaskHoleParameters", "Tapped (DIN76)", nullptr));

        label_8->setText(QCoreApplication::translate("TaskHoleParameters", "Direction", nullptr));
        directionLeftHand->setText(QCoreApplication::translate("TaskHoleParameters", "Left hand", nullptr));
#if QT_CONFIG(tooltip)
        directionRightHand->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        directionRightHand->setText(QCoreApplication::translate("TaskHoleParameters", "Right hand", nullptr));
#if QT_CONFIG(tooltip)
        ModelThread->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Whether the hole gets a modelled thread", nullptr));
#endif // QT_CONFIG(tooltip)
        ModelThread->setText(QCoreApplication::translate("TaskHoleParameters", "Model Thread", nullptr));
#if QT_CONFIG(tooltip)
        UpdateView->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Live update of changes to the thread\n"
"Note that the calculation can take some time", nullptr));
#endif // QT_CONFIG(tooltip)
        UpdateView->setText(QCoreApplication::translate("TaskHoleParameters", "Update thread view", nullptr));
#if QT_CONFIG(tooltip)
        UseCustomThreadClearance->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Customize thread clearance", nullptr));
#endif // QT_CONFIG(tooltip)
        UseCustomThreadClearance->setText(QCoreApplication::translate("TaskHoleParameters", "Custom Clearance", nullptr));
#if QT_CONFIG(tooltip)
        CustomThreadClearance->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Custom Thread clearance value", nullptr));
#endif // QT_CONFIG(tooltip)
        CutGroupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("TaskHoleParameters", "Hole Cut Type", nullptr));
#if QT_CONFIG(tooltip)
        HoleCutType->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Cut type for screw heads", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("TaskHoleParameters", "Diameter", nullptr));
        label_12->setText(QCoreApplication::translate("TaskHoleParameters", "Depth", nullptr));
#if QT_CONFIG(tooltip)
        HoleCutDepth->setToolTip(QCoreApplication::translate("TaskHoleParameters", "For countersinks this is the depth of\n"
"the screw's top below the surface", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("TaskHoleParameters", "Countersink angle", nullptr));
#if QT_CONFIG(tooltip)
        HoleCutCustomValues->setToolTip(QCoreApplication::translate("TaskHoleParameters", "Check to override the values predefined by the 'Type'", nullptr));
#endif // QT_CONFIG(tooltip)
        HoleCutCustomValues->setText(QCoreApplication::translate("TaskHoleParameters", "Custom values", nullptr));
        DrillGroupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("TaskHoleParameters", "Drill Point", nullptr));
        drillPointFlat->setText(QCoreApplication::translate("TaskHoleParameters", "Flat", nullptr));
        drillPointAngled->setText(QCoreApplication::translate("TaskHoleParameters", "Angled", nullptr));
#if QT_CONFIG(tooltip)
        DrillForDepth->setToolTip(QCoreApplication::translate("TaskHoleParameters", "The size of the drill point will be taken into\n"
"account for the depth of blind holes", nullptr));
#endif // QT_CONFIG(tooltip)
        DrillForDepth->setText(QCoreApplication::translate("TaskHoleParameters", "Take into account for depth", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskHoleParameters: public Ui_TaskHoleParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKHOLEPARAMETERS_H
