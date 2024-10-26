/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintRigidBody.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTRIGIDBODY_H
#define UI_TASKFEMCONSTRAINTRIGIDBODY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/SpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintRigidBody
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_info;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gpb_ref_mode;
    QFormLayout *f_layout_ref_node;
    QLabel *lbl_ref_node_x;
    Gui::QuantitySpinBox *qsb_ref_node_x;
    QLabel *lbl_ref_node_y;
    Gui::QuantitySpinBox *qsb_ref_node_y;
    QLabel *lbl_ref_node_z;
    Gui::QuantitySpinBox *qsb_ref_node_z;
    QSpacerItem *verticalSpacer;
    QGroupBox *gpb_trans_parameter;
    QFormLayout *f_layout_trans_mode;
    QLabel *lbl_trans_x_mode;
    QLabel *lbl_trans_y_mode;
    QLabel *lbl_trans_z_mode;
    QComboBox *cb_x_trans_mode;
    QComboBox *cb_y_trans_mode;
    QComboBox *cb_z_trans_mode;
    QGroupBox *gpb_trans_disp;
    QFormLayout *f_layout_trans_disp;
    QLabel *lbl_trans_x_disp;
    QLabel *lbl_trans_y_disp;
    QLabel *lbl_trans_z_disp;
    Gui::QuantitySpinBox *qsb_disp_x;
    Gui::QuantitySpinBox *qsb_disp_y;
    Gui::QuantitySpinBox *qsb_disp_z;
    QGroupBox *gpb_trans_force;
    QFormLayout *f_layout_trans_force;
    QLabel *lbl_trans_x_force;
    QLabel *lbl_trans_y_force;
    QLabel *lbl_trans_z_force;
    Gui::QuantitySpinBox *qsb_force_x;
    Gui::QuantitySpinBox *qsb_force_y;
    Gui::QuantitySpinBox *qsb_force_z;
    QSpacerItem *verticalSpacer1;
    QGroupBox *gpb_rot_mode;
    QFormLayout *f_layout_rot_mode;
    QLabel *lbl_rot_x_mode;
    QLabel *lbl_rot_y_mode;
    QLabel *lbl_rot_z_mode;
    QComboBox *cb_x_rot_mode;
    QComboBox *cb_y_rot_mode;
    QComboBox *cb_z_rot_mode;
    QGroupBox *gpb_rot_rot;
    QFormLayout *f_layout_rot_rot;
    QLabel *lbl_rot_x_axis;
    QLabel *lbl_rot_y_axis;
    QLabel *lbl_rot_z_axis;
    Gui::DoubleSpinBox *spb_rot_axis_x;
    Gui::DoubleSpinBox *spb_rot_axis_y;
    Gui::DoubleSpinBox *spb_rot_axis_z;
    QLabel *lbl_rot_angle;
    Gui::QuantitySpinBox *qsb_rot_angle;
    QGroupBox *gpb_rot_moment;
    QFormLayout *f_layout_rot_moment;
    QLabel *lbl_rot_x_moment;
    QLabel *lbl_rot_y_moment;
    QLabel *lbl_rot_z_rot;
    Gui::QuantitySpinBox *qsb_moment_x;
    Gui::QuantitySpinBox *qsb_moment_y;
    Gui::QuantitySpinBox *qsb_moment_z;

    void setupUi(QWidget *TaskFemConstraintRigidBody)
    {
        if (TaskFemConstraintRigidBody->objectName().isEmpty())
            TaskFemConstraintRigidBody->setObjectName(QString::fromUtf8("TaskFemConstraintRigidBody"));
        TaskFemConstraintRigidBody->resize(296, 587);
        verticalLayout = new QVBoxLayout(TaskFemConstraintRigidBody);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_info = new QLabel(TaskFemConstraintRigidBody);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));

        verticalLayout->addWidget(lbl_info);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintRigidBody);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintRigidBody);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout->addLayout(hLayout1);

        lw_references = new QListWidget(TaskFemConstraintRigidBody);
        lw_references->setObjectName(QString::fromUtf8("lw_references"));

        verticalLayout->addWidget(lw_references);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gpb_ref_mode = new QGroupBox(TaskFemConstraintRigidBody);
        gpb_ref_mode->setObjectName(QString::fromUtf8("gpb_ref_mode"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gpb_ref_mode->sizePolicy().hasHeightForWidth());
        gpb_ref_mode->setSizePolicy(sizePolicy1);
        f_layout_ref_node = new QFormLayout(gpb_ref_mode);
        f_layout_ref_node->setObjectName(QString::fromUtf8("f_layout_ref_node"));
        lbl_ref_node_x = new QLabel(gpb_ref_mode);
        lbl_ref_node_x->setObjectName(QString::fromUtf8("lbl_ref_node_x"));

        f_layout_ref_node->setWidget(0, QFormLayout::LabelRole, lbl_ref_node_x);

        qsb_ref_node_x = new Gui::QuantitySpinBox(gpb_ref_mode);
        qsb_ref_node_x->setObjectName(QString::fromUtf8("qsb_ref_node_x"));
        qsb_ref_node_x->setSingleStep(1.000000000000000);
        qsb_ref_node_x->setMaximum(1000000000.000000000000000);
        qsb_ref_node_x->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        qsb_ref_node_x->setProperty("value", QVariant(0.000000000000000));

        f_layout_ref_node->setWidget(0, QFormLayout::FieldRole, qsb_ref_node_x);

        lbl_ref_node_y = new QLabel(gpb_ref_mode);
        lbl_ref_node_y->setObjectName(QString::fromUtf8("lbl_ref_node_y"));

        f_layout_ref_node->setWidget(1, QFormLayout::LabelRole, lbl_ref_node_y);

        qsb_ref_node_y = new Gui::QuantitySpinBox(gpb_ref_mode);
        qsb_ref_node_y->setObjectName(QString::fromUtf8("qsb_ref_node_y"));
        qsb_ref_node_y->setSingleStep(1.000000000000000);
        qsb_ref_node_y->setMaximum(1000000000.000000000000000);
        qsb_ref_node_y->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        qsb_ref_node_y->setProperty("value", QVariant(0.000000000000000));

        f_layout_ref_node->setWidget(1, QFormLayout::FieldRole, qsb_ref_node_y);

        lbl_ref_node_z = new QLabel(gpb_ref_mode);
        lbl_ref_node_z->setObjectName(QString::fromUtf8("lbl_ref_node_z"));

        f_layout_ref_node->setWidget(2, QFormLayout::LabelRole, lbl_ref_node_z);

        qsb_ref_node_z = new Gui::QuantitySpinBox(gpb_ref_mode);
        qsb_ref_node_z->setObjectName(QString::fromUtf8("qsb_ref_node_z"));
        qsb_ref_node_z->setSingleStep(1.000000000000000);
        qsb_ref_node_z->setMaximum(1000000000.000000000000000);
        qsb_ref_node_z->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        qsb_ref_node_z->setProperty("value", QVariant(0.000000000000000));

        f_layout_ref_node->setWidget(2, QFormLayout::FieldRole, qsb_ref_node_z);


        verticalLayout_2->addWidget(gpb_ref_mode);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        gpb_trans_parameter = new QGroupBox(TaskFemConstraintRigidBody);
        gpb_trans_parameter->setObjectName(QString::fromUtf8("gpb_trans_parameter"));
        sizePolicy1.setHeightForWidth(gpb_trans_parameter->sizePolicy().hasHeightForWidth());
        gpb_trans_parameter->setSizePolicy(sizePolicy1);
        f_layout_trans_mode = new QFormLayout(gpb_trans_parameter);
        f_layout_trans_mode->setObjectName(QString::fromUtf8("f_layout_trans_mode"));
        lbl_trans_x_mode = new QLabel(gpb_trans_parameter);
        lbl_trans_x_mode->setObjectName(QString::fromUtf8("lbl_trans_x_mode"));

        f_layout_trans_mode->setWidget(0, QFormLayout::LabelRole, lbl_trans_x_mode);

        lbl_trans_y_mode = new QLabel(gpb_trans_parameter);
        lbl_trans_y_mode->setObjectName(QString::fromUtf8("lbl_trans_y_mode"));

        f_layout_trans_mode->setWidget(1, QFormLayout::LabelRole, lbl_trans_y_mode);

        lbl_trans_z_mode = new QLabel(gpb_trans_parameter);
        lbl_trans_z_mode->setObjectName(QString::fromUtf8("lbl_trans_z_mode"));

        f_layout_trans_mode->setWidget(2, QFormLayout::LabelRole, lbl_trans_z_mode);

        cb_x_trans_mode = new QComboBox(gpb_trans_parameter);
        cb_x_trans_mode->setObjectName(QString::fromUtf8("cb_x_trans_mode"));

        f_layout_trans_mode->setWidget(0, QFormLayout::FieldRole, cb_x_trans_mode);

        cb_y_trans_mode = new QComboBox(gpb_trans_parameter);
        cb_y_trans_mode->setObjectName(QString::fromUtf8("cb_y_trans_mode"));

        f_layout_trans_mode->setWidget(1, QFormLayout::FieldRole, cb_y_trans_mode);

        cb_z_trans_mode = new QComboBox(gpb_trans_parameter);
        cb_z_trans_mode->setObjectName(QString::fromUtf8("cb_z_trans_mode"));

        f_layout_trans_mode->setWidget(2, QFormLayout::FieldRole, cb_z_trans_mode);


        verticalLayout_2->addWidget(gpb_trans_parameter);

        gpb_trans_disp = new QGroupBox(TaskFemConstraintRigidBody);
        gpb_trans_disp->setObjectName(QString::fromUtf8("gpb_trans_disp"));
        sizePolicy1.setHeightForWidth(gpb_trans_disp->sizePolicy().hasHeightForWidth());
        gpb_trans_disp->setSizePolicy(sizePolicy1);
        f_layout_trans_disp = new QFormLayout(gpb_trans_disp);
        f_layout_trans_disp->setObjectName(QString::fromUtf8("f_layout_trans_disp"));
        lbl_trans_x_disp = new QLabel(gpb_trans_disp);
        lbl_trans_x_disp->setObjectName(QString::fromUtf8("lbl_trans_x_disp"));

        f_layout_trans_disp->setWidget(0, QFormLayout::LabelRole, lbl_trans_x_disp);

        lbl_trans_y_disp = new QLabel(gpb_trans_disp);
        lbl_trans_y_disp->setObjectName(QString::fromUtf8("lbl_trans_y_disp"));

        f_layout_trans_disp->setWidget(1, QFormLayout::LabelRole, lbl_trans_y_disp);

        lbl_trans_z_disp = new QLabel(gpb_trans_disp);
        lbl_trans_z_disp->setObjectName(QString::fromUtf8("lbl_trans_z_disp"));

        f_layout_trans_disp->setWidget(2, QFormLayout::LabelRole, lbl_trans_z_disp);

        qsb_disp_x = new Gui::QuantitySpinBox(gpb_trans_disp);
        qsb_disp_x->setObjectName(QString::fromUtf8("qsb_disp_x"));
        qsb_disp_x->setKeyboardTracking(false);
        qsb_disp_x->setSingleStep(1.000000000000000);
        qsb_disp_x->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        f_layout_trans_disp->setWidget(0, QFormLayout::FieldRole, qsb_disp_x);

        qsb_disp_y = new Gui::QuantitySpinBox(gpb_trans_disp);
        qsb_disp_y->setObjectName(QString::fromUtf8("qsb_disp_y"));
        qsb_disp_y->setKeyboardTracking(false);
        qsb_disp_y->setSingleStep(1.000000000000000);
        qsb_disp_y->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        f_layout_trans_disp->setWidget(1, QFormLayout::FieldRole, qsb_disp_y);

        qsb_disp_z = new Gui::QuantitySpinBox(gpb_trans_disp);
        qsb_disp_z->setObjectName(QString::fromUtf8("qsb_disp_z"));
        qsb_disp_z->setKeyboardTracking(false);
        qsb_disp_z->setSingleStep(1.000000000000000);
        qsb_disp_z->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        f_layout_trans_disp->setWidget(2, QFormLayout::FieldRole, qsb_disp_z);


        verticalLayout_2->addWidget(gpb_trans_disp);

        gpb_trans_force = new QGroupBox(TaskFemConstraintRigidBody);
        gpb_trans_force->setObjectName(QString::fromUtf8("gpb_trans_force"));
        sizePolicy1.setHeightForWidth(gpb_trans_force->sizePolicy().hasHeightForWidth());
        gpb_trans_force->setSizePolicy(sizePolicy1);
        f_layout_trans_force = new QFormLayout(gpb_trans_force);
        f_layout_trans_force->setObjectName(QString::fromUtf8("f_layout_trans_force"));
        lbl_trans_x_force = new QLabel(gpb_trans_force);
        lbl_trans_x_force->setObjectName(QString::fromUtf8("lbl_trans_x_force"));

        f_layout_trans_force->setWidget(0, QFormLayout::LabelRole, lbl_trans_x_force);

        lbl_trans_y_force = new QLabel(gpb_trans_force);
        lbl_trans_y_force->setObjectName(QString::fromUtf8("lbl_trans_y_force"));

        f_layout_trans_force->setWidget(1, QFormLayout::LabelRole, lbl_trans_y_force);

        lbl_trans_z_force = new QLabel(gpb_trans_force);
        lbl_trans_z_force->setObjectName(QString::fromUtf8("lbl_trans_z_force"));

        f_layout_trans_force->setWidget(2, QFormLayout::LabelRole, lbl_trans_z_force);

        qsb_force_x = new Gui::QuantitySpinBox(gpb_trans_force);
        qsb_force_x->setObjectName(QString::fromUtf8("qsb_force_x"));
        qsb_force_x->setKeyboardTracking(false);
        qsb_force_x->setSingleStep(1.000000000000000);
        qsb_force_x->setProperty("unit", QVariant(QString::fromUtf8("N")));

        f_layout_trans_force->setWidget(0, QFormLayout::FieldRole, qsb_force_x);

        qsb_force_y = new Gui::QuantitySpinBox(gpb_trans_force);
        qsb_force_y->setObjectName(QString::fromUtf8("qsb_force_y"));
        qsb_force_y->setKeyboardTracking(false);
        qsb_force_y->setSingleStep(1.000000000000000);
        qsb_force_y->setProperty("unit", QVariant(QString::fromUtf8("N")));

        f_layout_trans_force->setWidget(1, QFormLayout::FieldRole, qsb_force_y);

        qsb_force_z = new Gui::QuantitySpinBox(gpb_trans_force);
        qsb_force_z->setObjectName(QString::fromUtf8("qsb_force_z"));
        qsb_force_z->setKeyboardTracking(false);
        qsb_force_z->setSingleStep(1.000000000000000);
        qsb_force_z->setProperty("unit", QVariant(QString::fromUtf8("N")));

        f_layout_trans_force->setWidget(2, QFormLayout::FieldRole, qsb_force_z);


        verticalLayout_2->addWidget(gpb_trans_force);

        verticalSpacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer1);

        gpb_rot_mode = new QGroupBox(TaskFemConstraintRigidBody);
        gpb_rot_mode->setObjectName(QString::fromUtf8("gpb_rot_mode"));
        sizePolicy1.setHeightForWidth(gpb_rot_mode->sizePolicy().hasHeightForWidth());
        gpb_rot_mode->setSizePolicy(sizePolicy1);
        f_layout_rot_mode = new QFormLayout(gpb_rot_mode);
        f_layout_rot_mode->setObjectName(QString::fromUtf8("f_layout_rot_mode"));
        lbl_rot_x_mode = new QLabel(gpb_rot_mode);
        lbl_rot_x_mode->setObjectName(QString::fromUtf8("lbl_rot_x_mode"));

        f_layout_rot_mode->setWidget(0, QFormLayout::LabelRole, lbl_rot_x_mode);

        lbl_rot_y_mode = new QLabel(gpb_rot_mode);
        lbl_rot_y_mode->setObjectName(QString::fromUtf8("lbl_rot_y_mode"));

        f_layout_rot_mode->setWidget(1, QFormLayout::LabelRole, lbl_rot_y_mode);

        lbl_rot_z_mode = new QLabel(gpb_rot_mode);
        lbl_rot_z_mode->setObjectName(QString::fromUtf8("lbl_rot_z_mode"));

        f_layout_rot_mode->setWidget(2, QFormLayout::LabelRole, lbl_rot_z_mode);

        cb_x_rot_mode = new QComboBox(gpb_rot_mode);
        cb_x_rot_mode->setObjectName(QString::fromUtf8("cb_x_rot_mode"));

        f_layout_rot_mode->setWidget(0, QFormLayout::FieldRole, cb_x_rot_mode);

        cb_y_rot_mode = new QComboBox(gpb_rot_mode);
        cb_y_rot_mode->setObjectName(QString::fromUtf8("cb_y_rot_mode"));

        f_layout_rot_mode->setWidget(1, QFormLayout::FieldRole, cb_y_rot_mode);

        cb_z_rot_mode = new QComboBox(gpb_rot_mode);
        cb_z_rot_mode->setObjectName(QString::fromUtf8("cb_z_rot_mode"));

        f_layout_rot_mode->setWidget(2, QFormLayout::FieldRole, cb_z_rot_mode);


        verticalLayout_2->addWidget(gpb_rot_mode);

        gpb_rot_rot = new QGroupBox(TaskFemConstraintRigidBody);
        gpb_rot_rot->setObjectName(QString::fromUtf8("gpb_rot_rot"));
        sizePolicy1.setHeightForWidth(gpb_rot_rot->sizePolicy().hasHeightForWidth());
        gpb_rot_rot->setSizePolicy(sizePolicy1);
        f_layout_rot_rot = new QFormLayout(gpb_rot_rot);
        f_layout_rot_rot->setObjectName(QString::fromUtf8("f_layout_rot_rot"));
        lbl_rot_x_axis = new QLabel(gpb_rot_rot);
        lbl_rot_x_axis->setObjectName(QString::fromUtf8("lbl_rot_x_axis"));

        f_layout_rot_rot->setWidget(0, QFormLayout::LabelRole, lbl_rot_x_axis);

        lbl_rot_y_axis = new QLabel(gpb_rot_rot);
        lbl_rot_y_axis->setObjectName(QString::fromUtf8("lbl_rot_y_axis"));

        f_layout_rot_rot->setWidget(1, QFormLayout::LabelRole, lbl_rot_y_axis);

        lbl_rot_z_axis = new QLabel(gpb_rot_rot);
        lbl_rot_z_axis->setObjectName(QString::fromUtf8("lbl_rot_z_axis"));

        f_layout_rot_rot->setWidget(2, QFormLayout::LabelRole, lbl_rot_z_axis);

        spb_rot_axis_x = new Gui::DoubleSpinBox(gpb_rot_rot);
        spb_rot_axis_x->setObjectName(QString::fromUtf8("spb_rot_axis_x"));
        spb_rot_axis_x->setKeyboardTracking(false);
        spb_rot_axis_x->setSingleStep(0.100000000000000);

        f_layout_rot_rot->setWidget(0, QFormLayout::FieldRole, spb_rot_axis_x);

        spb_rot_axis_y = new Gui::DoubleSpinBox(gpb_rot_rot);
        spb_rot_axis_y->setObjectName(QString::fromUtf8("spb_rot_axis_y"));
        spb_rot_axis_y->setKeyboardTracking(false);
        spb_rot_axis_y->setSingleStep(0.100000000000000);

        f_layout_rot_rot->setWidget(1, QFormLayout::FieldRole, spb_rot_axis_y);

        spb_rot_axis_z = new Gui::DoubleSpinBox(gpb_rot_rot);
        spb_rot_axis_z->setObjectName(QString::fromUtf8("spb_rot_axis_z"));
        spb_rot_axis_z->setKeyboardTracking(false);
        spb_rot_axis_z->setSingleStep(0.100000000000000);

        f_layout_rot_rot->setWidget(2, QFormLayout::FieldRole, spb_rot_axis_z);

        lbl_rot_angle = new QLabel(gpb_rot_rot);
        lbl_rot_angle->setObjectName(QString::fromUtf8("lbl_rot_angle"));

        f_layout_rot_rot->setWidget(3, QFormLayout::LabelRole, lbl_rot_angle);

        qsb_rot_angle = new Gui::QuantitySpinBox(gpb_rot_rot);
        qsb_rot_angle->setObjectName(QString::fromUtf8("qsb_rot_angle"));
        qsb_rot_angle->setKeyboardTracking(false);
        qsb_rot_angle->setSingleStep(1.000000000000000);
        qsb_rot_angle->setProperty("unit", QVariant(QString::fromUtf8("deg")));

        f_layout_rot_rot->setWidget(3, QFormLayout::FieldRole, qsb_rot_angle);


        verticalLayout_2->addWidget(gpb_rot_rot);

        gpb_rot_moment = new QGroupBox(TaskFemConstraintRigidBody);
        gpb_rot_moment->setObjectName(QString::fromUtf8("gpb_rot_moment"));
        sizePolicy1.setHeightForWidth(gpb_rot_moment->sizePolicy().hasHeightForWidth());
        gpb_rot_moment->setSizePolicy(sizePolicy1);
        f_layout_rot_moment = new QFormLayout(gpb_rot_moment);
        f_layout_rot_moment->setObjectName(QString::fromUtf8("f_layout_rot_moment"));
        lbl_rot_x_moment = new QLabel(gpb_rot_moment);
        lbl_rot_x_moment->setObjectName(QString::fromUtf8("lbl_rot_x_moment"));

        f_layout_rot_moment->setWidget(0, QFormLayout::LabelRole, lbl_rot_x_moment);

        lbl_rot_y_moment = new QLabel(gpb_rot_moment);
        lbl_rot_y_moment->setObjectName(QString::fromUtf8("lbl_rot_y_moment"));

        f_layout_rot_moment->setWidget(1, QFormLayout::LabelRole, lbl_rot_y_moment);

        lbl_rot_z_rot = new QLabel(gpb_rot_moment);
        lbl_rot_z_rot->setObjectName(QString::fromUtf8("lbl_rot_z_rot"));

        f_layout_rot_moment->setWidget(2, QFormLayout::LabelRole, lbl_rot_z_rot);

        qsb_moment_x = new Gui::QuantitySpinBox(gpb_rot_moment);
        qsb_moment_x->setObjectName(QString::fromUtf8("qsb_moment_x"));
        qsb_moment_x->setKeyboardTracking(false);
        qsb_moment_x->setSingleStep(1.000000000000000);
        qsb_moment_x->setProperty("unit", QVariant(QString::fromUtf8("N*m")));

        f_layout_rot_moment->setWidget(0, QFormLayout::FieldRole, qsb_moment_x);

        qsb_moment_y = new Gui::QuantitySpinBox(gpb_rot_moment);
        qsb_moment_y->setObjectName(QString::fromUtf8("qsb_moment_y"));
        qsb_moment_y->setKeyboardTracking(false);
        qsb_moment_y->setSingleStep(1.000000000000000);
        qsb_moment_y->setProperty("unit", QVariant(QString::fromUtf8("N*m")));

        f_layout_rot_moment->setWidget(1, QFormLayout::FieldRole, qsb_moment_y);

        qsb_moment_z = new Gui::QuantitySpinBox(gpb_rot_moment);
        qsb_moment_z->setObjectName(QString::fromUtf8("qsb_moment_z"));
        qsb_moment_z->setKeyboardTracking(false);
        qsb_moment_z->setSingleStep(1.000000000000000);
        qsb_moment_z->setProperty("unit", QVariant(QString::fromUtf8("N*m")));

        f_layout_rot_moment->setWidget(2, QFormLayout::FieldRole, qsb_moment_z);


        verticalLayout_2->addWidget(gpb_rot_moment);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(TaskFemConstraintRigidBody);

        QMetaObject::connectSlotsByName(TaskFemConstraintRigidBody);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintRigidBody)
    {
        TaskFemConstraintRigidBody->setWindowTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Form", nullptr));
        lbl_info->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Click Add or Remove and select geometric element(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        gpb_ref_mode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpb_ref_mode->setTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Reference Node", nullptr));
        lbl_ref_node_x->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "X:", nullptr));
        lbl_ref_node_y->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Y:", nullptr));
        lbl_ref_node_z->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Z:", nullptr));
#if QT_CONFIG(tooltip)
        gpb_trans_parameter->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpb_trans_parameter->setTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Translational Mode", nullptr));
        lbl_trans_x_mode->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "X:", nullptr));
        lbl_trans_y_mode->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Y:", nullptr));
        lbl_trans_z_mode->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Z:", nullptr));
#if QT_CONFIG(tooltip)
        gpb_trans_disp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpb_trans_disp->setTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Displacement", nullptr));
        lbl_trans_x_disp->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "X:", nullptr));
        lbl_trans_y_disp->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Y:", nullptr));
        lbl_trans_z_disp->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Z:", nullptr));
#if QT_CONFIG(tooltip)
        gpb_trans_force->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpb_trans_force->setTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Force", nullptr));
        lbl_trans_x_force->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "X:", nullptr));
        lbl_trans_y_force->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Y:", nullptr));
        lbl_trans_z_force->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Z:", nullptr));
#if QT_CONFIG(tooltip)
        gpb_rot_mode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpb_rot_mode->setTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Rotational Mode", nullptr));
        lbl_rot_x_mode->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "X:", nullptr));
        lbl_rot_y_mode->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Y:", nullptr));
        lbl_rot_z_mode->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Z:", nullptr));
#if QT_CONFIG(tooltip)
        gpb_rot_rot->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpb_rot_rot->setTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Rotation", nullptr));
        lbl_rot_x_axis->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "X:", nullptr));
        lbl_rot_y_axis->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Y:", nullptr));
        lbl_rot_z_axis->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Z:", nullptr));
        lbl_rot_angle->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Angle:", nullptr));
#if QT_CONFIG(tooltip)
        gpb_rot_moment->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gpb_rot_moment->setTitle(QCoreApplication::translate("TaskFemConstraintRigidBody", "Moment", nullptr));
        lbl_rot_x_moment->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "X:", nullptr));
        lbl_rot_y_moment->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Y:", nullptr));
        lbl_rot_z_rot->setText(QCoreApplication::translate("TaskFemConstraintRigidBody", "Z:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintRigidBody: public Ui_TaskFemConstraintRigidBody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTRIGIDBODY_H
