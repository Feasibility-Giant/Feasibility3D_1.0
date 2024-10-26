/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintDisplacement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTDISPLACEMENT_H
#define UI_TASKFEMCONSTRAINTDISPLACEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintDisplacement
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QGridLayout *gridLayout_7;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;
    QGroupBox *DisplacementXGB;
    QGridLayout *gridLayout;
    QLineEdit *DisplacementXFormulaLE;
    QCheckBox *DisplacementXFormulaCB;
    Gui::QuantitySpinBox *spinxDisplacement;
    QGroupBox *DisplacementYGB;
    QGridLayout *gridLayout_2;
    QLineEdit *DisplacementYFormulaLE;
    QCheckBox *DisplacementYFormulaCB;
    Gui::QuantitySpinBox *spinyDisplacement;
    QGroupBox *DisplacementZGB;
    QGridLayout *gridLayout_3;
    QLineEdit *DisplacementZFormulaLE;
    QCheckBox *DisplacementZFormulaCB;
    Gui::QuantitySpinBox *spinzDisplacement;
    QCheckBox *FlowForceCB;
    QFrame *line;
    QLabel *label;
    QGroupBox *RotationXGB;
    QGridLayout *gridLayout_6;
    Gui::QuantitySpinBox *spinxRotation;
    QGroupBox *RotationYGB;
    QGridLayout *gridLayout_5;
    Gui::QuantitySpinBox *spinyRotation;
    QGroupBox *RotationZGB;
    QGridLayout *gridLayout_4;
    Gui::QuantitySpinBox *spinzRotation;

    void setupUi(QWidget *TaskFemConstraintDisplacement)
    {
        if (TaskFemConstraintDisplacement->objectName().isEmpty())
            TaskFemConstraintDisplacement->setObjectName(QString::fromUtf8("TaskFemConstraintDisplacement"));
        TaskFemConstraintDisplacement->setEnabled(true);
        TaskFemConstraintDisplacement->resize(300, 649);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskFemConstraintDisplacement->sizePolicy().hasHeightForWidth());
        TaskFemConstraintDisplacement->setSizePolicy(sizePolicy);
        TaskFemConstraintDisplacement->setMinimumSize(QSize(0, 0));
        TaskFemConstraintDisplacement->setBaseSize(QSize(400, 800));
        verticalLayout = new QVBoxLayout(TaskFemConstraintDisplacement);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info = new QLabel(TaskFemConstraintDisplacement);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintDisplacement);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy1);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintDisplacement);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy1.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy1);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        gridLayout_7->addLayout(hLayout1, 0, 0, 1, 1);

        lw_references = new QListWidget(TaskFemConstraintDisplacement);
        lw_references->setObjectName(QString::fromUtf8("lw_references"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lw_references->sizePolicy().hasHeightForWidth());
        lw_references->setSizePolicy(sizePolicy2);
        lw_references->setMaximumSize(QSize(16777215, 100));
        lw_references->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_7->addWidget(lw_references, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        DisplacementXGB = new QGroupBox(TaskFemConstraintDisplacement);
        DisplacementXGB->setObjectName(QString::fromUtf8("DisplacementXGB"));
        DisplacementXGB->setCheckable(true);
        gridLayout = new QGridLayout(DisplacementXGB);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        DisplacementXFormulaLE = new QLineEdit(DisplacementXGB);
        DisplacementXFormulaLE->setObjectName(QString::fromUtf8("DisplacementXFormulaLE"));

        gridLayout->addWidget(DisplacementXFormulaLE, 1, 0, 1, 1);

        DisplacementXFormulaCB = new QCheckBox(DisplacementXGB);
        DisplacementXFormulaCB->setObjectName(QString::fromUtf8("DisplacementXFormulaCB"));

        gridLayout->addWidget(DisplacementXFormulaCB, 1, 1, 1, 1);

        spinxDisplacement = new Gui::QuantitySpinBox(DisplacementXGB);
        spinxDisplacement->setObjectName(QString::fromUtf8("spinxDisplacement"));
        spinxDisplacement->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        gridLayout->addWidget(spinxDisplacement, 0, 0, 1, 1);


        verticalLayout->addWidget(DisplacementXGB);

        DisplacementYGB = new QGroupBox(TaskFemConstraintDisplacement);
        DisplacementYGB->setObjectName(QString::fromUtf8("DisplacementYGB"));
        DisplacementYGB->setCheckable(true);
        gridLayout_2 = new QGridLayout(DisplacementYGB);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        DisplacementYFormulaLE = new QLineEdit(DisplacementYGB);
        DisplacementYFormulaLE->setObjectName(QString::fromUtf8("DisplacementYFormulaLE"));

        gridLayout_2->addWidget(DisplacementYFormulaLE, 1, 0, 1, 1);

        DisplacementYFormulaCB = new QCheckBox(DisplacementYGB);
        DisplacementYFormulaCB->setObjectName(QString::fromUtf8("DisplacementYFormulaCB"));

        gridLayout_2->addWidget(DisplacementYFormulaCB, 1, 1, 1, 1);

        spinyDisplacement = new Gui::QuantitySpinBox(DisplacementYGB);
        spinyDisplacement->setObjectName(QString::fromUtf8("spinyDisplacement"));
        spinyDisplacement->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        gridLayout_2->addWidget(spinyDisplacement, 0, 0, 1, 1);


        verticalLayout->addWidget(DisplacementYGB);

        DisplacementZGB = new QGroupBox(TaskFemConstraintDisplacement);
        DisplacementZGB->setObjectName(QString::fromUtf8("DisplacementZGB"));
        DisplacementZGB->setCheckable(true);
        gridLayout_3 = new QGridLayout(DisplacementZGB);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        DisplacementZFormulaLE = new QLineEdit(DisplacementZGB);
        DisplacementZFormulaLE->setObjectName(QString::fromUtf8("DisplacementZFormulaLE"));

        gridLayout_3->addWidget(DisplacementZFormulaLE, 1, 0, 1, 1);

        DisplacementZFormulaCB = new QCheckBox(DisplacementZGB);
        DisplacementZFormulaCB->setObjectName(QString::fromUtf8("DisplacementZFormulaCB"));

        gridLayout_3->addWidget(DisplacementZFormulaCB, 1, 1, 1, 1);

        spinzDisplacement = new Gui::QuantitySpinBox(DisplacementZGB);
        spinzDisplacement->setObjectName(QString::fromUtf8("spinzDisplacement"));

        gridLayout_3->addWidget(spinzDisplacement, 0, 0, 1, 1);


        verticalLayout->addWidget(DisplacementZGB);

        FlowForceCB = new QCheckBox(TaskFemConstraintDisplacement);
        FlowForceCB->setObjectName(QString::fromUtf8("FlowForceCB"));

        verticalLayout->addWidget(FlowForceCB);

        line = new QFrame(TaskFemConstraintDisplacement);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label = new QLabel(TaskFemConstraintDisplacement);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(400, 16777215));
        label->setScaledContents(false);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        RotationXGB = new QGroupBox(TaskFemConstraintDisplacement);
        RotationXGB->setObjectName(QString::fromUtf8("RotationXGB"));
        RotationXGB->setCheckable(true);
        gridLayout_6 = new QGridLayout(RotationXGB);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        spinxRotation = new Gui::QuantitySpinBox(RotationXGB);
        spinxRotation->setObjectName(QString::fromUtf8("spinxRotation"));
        spinxRotation->setProperty("unit", QVariant(QString::fromUtf8("deg")));

        gridLayout_6->addWidget(spinxRotation, 0, 0, 1, 1);


        verticalLayout->addWidget(RotationXGB);

        RotationYGB = new QGroupBox(TaskFemConstraintDisplacement);
        RotationYGB->setObjectName(QString::fromUtf8("RotationYGB"));
        RotationYGB->setCheckable(true);
        gridLayout_5 = new QGridLayout(RotationYGB);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        spinyRotation = new Gui::QuantitySpinBox(RotationYGB);
        spinyRotation->setObjectName(QString::fromUtf8("spinyRotation"));
        spinyRotation->setProperty("unit", QVariant(QString::fromUtf8("deg")));

        gridLayout_5->addWidget(spinyRotation, 0, 0, 1, 1);


        verticalLayout->addWidget(RotationYGB);

        RotationZGB = new QGroupBox(TaskFemConstraintDisplacement);
        RotationZGB->setObjectName(QString::fromUtf8("RotationZGB"));
        RotationZGB->setCheckable(true);
        gridLayout_4 = new QGridLayout(RotationZGB);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        spinzRotation = new Gui::QuantitySpinBox(RotationZGB);
        spinzRotation->setObjectName(QString::fromUtf8("spinzRotation"));
        spinzRotation->setProperty("unit", QVariant(QString::fromUtf8("deg")));

        gridLayout_4->addWidget(spinzRotation, 0, 0, 1, 1);


        verticalLayout->addWidget(RotationZGB);


        retranslateUi(TaskFemConstraintDisplacement);
        QObject::connect(FlowForceCB, SIGNAL(toggled(bool)), RotationXGB, SLOT(setDisabled(bool)));
        QObject::connect(FlowForceCB, SIGNAL(toggled(bool)), DisplacementXGB, SLOT(setDisabled(bool)));
        QObject::connect(FlowForceCB, SIGNAL(toggled(bool)), DisplacementYGB, SLOT(setDisabled(bool)));
        QObject::connect(FlowForceCB, SIGNAL(toggled(bool)), DisplacementZGB, SLOT(setDisabled(bool)));
        QObject::connect(FlowForceCB, SIGNAL(toggled(bool)), RotationYGB, SLOT(setDisabled(bool)));
        QObject::connect(FlowForceCB, SIGNAL(toggled(bool)), RotationZGB, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(TaskFemConstraintDisplacement);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintDisplacement)
    {
        TaskFemConstraintDisplacement->setWindowTitle(QCoreApplication::translate("TaskFemConstraintDisplacement", "Prescribed Displacement", nullptr));
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Click Add or Remove and select geometric element(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Remove", nullptr));
        DisplacementXGB->setTitle(QCoreApplication::translate("TaskFemConstraintDisplacement", "Displacement x", nullptr));
#if QT_CONFIG(tooltip)
        DisplacementXFormulaCB->setToolTip(QCoreApplication::translate("TaskFemConstraintDisplacement", "Formulas are only valid\n"
"for the Elmer solver", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplacementXFormulaCB->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Formula", nullptr));
        DisplacementYGB->setTitle(QCoreApplication::translate("TaskFemConstraintDisplacement", "Displacement y", nullptr));
#if QT_CONFIG(tooltip)
        DisplacementYFormulaCB->setToolTip(QCoreApplication::translate("TaskFemConstraintDisplacement", "Formulas are only valid\n"
"for the Elmer solver", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplacementYFormulaCB->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Formula", nullptr));
        DisplacementZGB->setTitle(QCoreApplication::translate("TaskFemConstraintDisplacement", "Displacement z", nullptr));
#if QT_CONFIG(tooltip)
        DisplacementZFormulaCB->setToolTip(QCoreApplication::translate("TaskFemConstraintDisplacement", "Formulas are only valid\n"
"for the Elmer solver", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplacementZFormulaCB->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Formula", nullptr));
        spinzDisplacement->setProperty("unit", QVariant(QCoreApplication::translate("TaskFemConstraintDisplacement", "mm", nullptr)));
#if QT_CONFIG(tooltip)
        FlowForceCB->setToolTip(QCoreApplication::translate("TaskFemConstraintDisplacement", "Flow solution is used to determine\n"
"surface force (and thus displacement)\n"
"generated by the flow\n"
"(Option only applies for Elmer solver)", nullptr));
#endif // QT_CONFIG(tooltip)
        FlowForceCB->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Surface force by flow", nullptr));
        label->setText(QCoreApplication::translate("TaskFemConstraintDisplacement", "Rotations are only valid for Beam and Shell elements.", nullptr));
        RotationXGB->setTitle(QCoreApplication::translate("TaskFemConstraintDisplacement", "Rotation x", nullptr));
        RotationYGB->setTitle(QCoreApplication::translate("TaskFemConstraintDisplacement", "Rotation y", nullptr));
        RotationZGB->setTitle(QCoreApplication::translate("TaskFemConstraintDisplacement", "Rotation z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintDisplacement: public Ui_TaskFemConstraintDisplacement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTDISPLACEMENT_H
