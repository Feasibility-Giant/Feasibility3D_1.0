/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintTransform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTTRANSFORM_H
#define UI_TASKFEMCONSTRAINTTRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/SpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintTransform
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rb_rect;
    QRadioButton *rb_cylin;
    QLabel *lbl_info_2;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_Rect;
    QStackedWidget *sw_transform;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_0;
    QGridLayout *horizontalLayout_7;
    QLabel *label_4;
    Gui::DoubleSpinBox *spb_rot_axis_x;
    QLabel *label_10;
    Gui::DoubleSpinBox *spb_rot_axis_y;
    QLabel *label_11;
    Gui::DoubleSpinBox *spb_rot_axis_z;
    QLabel *lb_angle;
    Gui::QuantitySpinBox *qsb_rot_angle;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *lw_displobj_rect;
    QListWidget *lw_dis_rect;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *lw_displobj_cylin;
    QListWidget *lw_dis_cylin;

    void setupUi(QWidget *TaskFemConstraintTransform)
    {
        if (TaskFemConstraintTransform->objectName().isEmpty())
            TaskFemConstraintTransform->setObjectName(QString::fromUtf8("TaskFemConstraintTransform"));
        TaskFemConstraintTransform->resize(350, 334);
        TaskFemConstraintTransform->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(TaskFemConstraintTransform);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rb_rect = new QRadioButton(TaskFemConstraintTransform);
        rb_rect->setObjectName(QString::fromUtf8("rb_rect"));
        rb_rect->setAutoExclusive(true);

        horizontalLayout_2->addWidget(rb_rect);

        rb_cylin = new QRadioButton(TaskFemConstraintTransform);
        rb_cylin->setObjectName(QString::fromUtf8("rb_cylin"));
        rb_cylin->setAutoExclusive(true);

        horizontalLayout_2->addWidget(rb_cylin);


        verticalLayout_3->addLayout(horizontalLayout_2);

        lbl_info_2 = new QLabel(TaskFemConstraintTransform);
        lbl_info_2->setObjectName(QString::fromUtf8("lbl_info_2"));

        verticalLayout_3->addWidget(lbl_info_2);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintTransform);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintTransform);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout_3->addLayout(hLayout1);

        lw_Rect = new QListWidget(TaskFemConstraintTransform);
        lw_Rect->setObjectName(QString::fromUtf8("lw_Rect"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lw_Rect->sizePolicy().hasHeightForWidth());
        lw_Rect->setSizePolicy(sizePolicy1);
        lw_Rect->setMaximumSize(QSize(16777215, 31));

        verticalLayout_3->addWidget(lw_Rect);

        sw_transform = new QStackedWidget(TaskFemConstraintTransform);
        sw_transform->setObjectName(QString::fromUtf8("sw_transform"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_0 = new QGroupBox(page);
        groupBox_0->setObjectName(QString::fromUtf8("groupBox_0"));
        horizontalLayout_7 = new QGridLayout(groupBox_0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(groupBox_0);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4, 0, 0, 1, 1);

        spb_rot_axis_x = new Gui::DoubleSpinBox(groupBox_0);
        spb_rot_axis_x->setObjectName(QString::fromUtf8("spb_rot_axis_x"));
        spb_rot_axis_x->setKeyboardTracking(false);
        spb_rot_axis_x->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(spb_rot_axis_x, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_0);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10, 1, 0, 1, 1);

        spb_rot_axis_y = new Gui::DoubleSpinBox(groupBox_0);
        spb_rot_axis_y->setObjectName(QString::fromUtf8("spb_rot_axis_y"));
        spb_rot_axis_y->setKeyboardTracking(false);
        spb_rot_axis_y->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(spb_rot_axis_y, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox_0);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11, 2, 0, 1, 1);

        spb_rot_axis_z = new Gui::DoubleSpinBox(groupBox_0);
        spb_rot_axis_z->setObjectName(QString::fromUtf8("spb_rot_axis_z"));
        spb_rot_axis_z->setKeyboardTracking(false);
        spb_rot_axis_z->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(spb_rot_axis_z, 2, 1, 1, 1);

        lb_angle = new QLabel(groupBox_0);
        lb_angle->setObjectName(QString::fromUtf8("lb_angle"));

        horizontalLayout_7->addWidget(lb_angle, 3, 0, 1, 1);

        qsb_rot_angle = new Gui::QuantitySpinBox(groupBox_0);
        qsb_rot_angle->setObjectName(QString::fromUtf8("qsb_rot_angle"));
        qsb_rot_angle->setProperty("unit", QVariant(QString::fromUtf8("deg")));
        qsb_rot_angle->setMinimum(-360.000000000000000);
        qsb_rot_angle->setMaximum(360.000000000000000);

        horizontalLayout_7->addWidget(qsb_rot_angle, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_0);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lw_displobj_rect = new QListWidget(groupBox);
        lw_displobj_rect->setObjectName(QString::fromUtf8("lw_displobj_rect"));

        horizontalLayout->addWidget(lw_displobj_rect);

        lw_dis_rect = new QListWidget(groupBox);
        lw_dis_rect->setObjectName(QString::fromUtf8("lw_dis_rect"));

        horizontalLayout->addWidget(lw_dis_rect);


        verticalLayout->addWidget(groupBox);

        sw_transform->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lw_displobj_cylin = new QListWidget(groupBox_2);
        lw_displobj_cylin->setObjectName(QString::fromUtf8("lw_displobj_cylin"));

        horizontalLayout_3->addWidget(lw_displobj_cylin);

        lw_dis_cylin = new QListWidget(groupBox_2);
        lw_dis_cylin->setObjectName(QString::fromUtf8("lw_dis_cylin"));

        horizontalLayout_3->addWidget(lw_dis_cylin);


        verticalLayout_2->addWidget(groupBox_2);

        sw_transform->addWidget(page_2);

        verticalLayout_3->addWidget(sw_transform);


        retranslateUi(TaskFemConstraintTransform);

        sw_transform->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TaskFemConstraintTransform);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintTransform)
    {
        rb_rect->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Rectangular transform", nullptr));
        rb_cylin->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Cylindrical transform", nullptr));
        lbl_info_2->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Select a face, click Add or Remove", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Remove", nullptr));
        groupBox_0->setTitle(QCoreApplication::translate("TaskFemConstraintTransform", "System Rotation", nullptr));
        label_4->setText(QCoreApplication::translate("TaskFemConstraintTransform", "X:", nullptr));
        label_10->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Y:", nullptr));
        label_11->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Z:", nullptr));
        lb_angle->setText(QCoreApplication::translate("TaskFemConstraintTransform", "Angle:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TaskFemConstraintTransform", "Transformable surfaces", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TaskFemConstraintTransform", "Transformable surfaces", nullptr));
        (void)TaskFemConstraintTransform;
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintTransform: public Ui_TaskFemConstraintTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTTRANSFORM_H
