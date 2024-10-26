/********************************************************************************
** Form generated from reading UI file 'TaskFemConstraintHeatflux.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEMCONSTRAINTHEATFLUX_H
#define UI_TASKFEMCONSTRAINTHEATFLUX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/InputField.h"

QT_BEGIN_NAMESPACE

class Ui_TaskFemConstraintHeatflux
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_references;
    QHBoxLayout *hLayout1;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QListWidget *lw_references;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_convection;
    QRadioButton *rb_radiation;
    QRadioButton *rb_dflux;
    QStackedWidget *sw_heatflux;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layoutFilmCoef;
    QLabel *lbl_filmcoef;
    Gui::InputField *if_filmcoef;
    QHBoxLayout *layoutAmbientTempCov;
    QLabel *lbl_ambienttemp_conv;
    Gui::InputField *if_ambienttemp_conv;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *layoutEmissivity;
    QLabel *lbl_emissivity;
    Gui::InputField *if_emissivity;
    QHBoxLayout *layoutAmbientTempRad;
    QLabel *lbl_ambienttemp_rad;
    Gui::InputField *if_ambienttemp_rad;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    Gui::InputField *if_heatflux;

    void setupUi(QWidget *TaskFemConstraintHeatflux)
    {
        if (TaskFemConstraintHeatflux->objectName().isEmpty())
            TaskFemConstraintHeatflux->setObjectName(QString::fromUtf8("TaskFemConstraintHeatflux"));
        TaskFemConstraintHeatflux->resize(300, 238);
        verticalLayout_2 = new QVBoxLayout(TaskFemConstraintHeatflux);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbl_references = new QLabel(TaskFemConstraintHeatflux);
        lbl_references->setObjectName(QString::fromUtf8("lbl_references"));

        verticalLayout_2->addWidget(lbl_references);

        hLayout1 = new QHBoxLayout();
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        btnAdd = new QToolButton(TaskFemConstraintHeatflux);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setCheckable(true);

        hLayout1->addWidget(btnAdd);

        btnRemove = new QToolButton(TaskFemConstraintHeatflux);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setCheckable(true);

        hLayout1->addWidget(btnRemove);


        verticalLayout_2->addLayout(hLayout1);

        lw_references = new QListWidget(TaskFemConstraintHeatflux);
        lw_references->setObjectName(QString::fromUtf8("lw_references"));

        verticalLayout_2->addWidget(lw_references);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rb_convection = new QRadioButton(TaskFemConstraintHeatflux);
        rb_convection->setObjectName(QString::fromUtf8("rb_convection"));

        horizontalLayout->addWidget(rb_convection);

        rb_radiation = new QRadioButton(TaskFemConstraintHeatflux);
        rb_radiation->setObjectName(QString::fromUtf8("rb_radiation"));

        horizontalLayout->addWidget(rb_radiation);

        rb_dflux = new QRadioButton(TaskFemConstraintHeatflux);
        rb_dflux->setObjectName(QString::fromUtf8("rb_dflux"));

        horizontalLayout->addWidget(rb_dflux);


        verticalLayout_2->addLayout(horizontalLayout);

        sw_heatflux = new QStackedWidget(TaskFemConstraintHeatflux);
        sw_heatflux->setObjectName(QString::fromUtf8("sw_heatflux"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutFilmCoef = new QHBoxLayout();
        layoutFilmCoef->setObjectName(QString::fromUtf8("layoutFilmCoef"));
        lbl_filmcoef = new QLabel(page);
        lbl_filmcoef->setObjectName(QString::fromUtf8("lbl_filmcoef"));

        layoutFilmCoef->addWidget(lbl_filmcoef);

        if_filmcoef = new Gui::InputField(page);
        if_filmcoef->setObjectName(QString::fromUtf8("if_filmcoef"));
        if_filmcoef->setProperty("unit", QVariant(QString::fromUtf8("W/m^2/K")));
        if_filmcoef->setProperty("quantity", QVariant(1.000000000000000));

        layoutFilmCoef->addWidget(if_filmcoef);


        verticalLayout->addLayout(layoutFilmCoef);

        layoutAmbientTempCov = new QHBoxLayout();
        layoutAmbientTempCov->setObjectName(QString::fromUtf8("layoutAmbientTempCov"));
        lbl_ambienttemp_conv = new QLabel(page);
        lbl_ambienttemp_conv->setObjectName(QString::fromUtf8("lbl_ambienttemp_conv"));

        layoutAmbientTempCov->addWidget(lbl_ambienttemp_conv);

        if_ambienttemp_conv = new Gui::InputField(page);
        if_ambienttemp_conv->setObjectName(QString::fromUtf8("if_ambienttemp_conv"));
        if_ambienttemp_conv->setProperty("unit", QVariant(QString::fromUtf8("K")));
        if_ambienttemp_conv->setProperty("quantity", QVariant(300.000000000000000));

        layoutAmbientTempCov->addWidget(if_ambienttemp_conv);


        verticalLayout->addLayout(layoutAmbientTempCov);


        verticalLayout_4->addLayout(verticalLayout);

        sw_heatflux->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        verticalLayout_5 = new QVBoxLayout(page_1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        layoutEmissivity = new QHBoxLayout();
        layoutEmissivity->setObjectName(QString::fromUtf8("layoutEmissivity"));
        lbl_emissivity = new QLabel(page_1);
        lbl_emissivity->setObjectName(QString::fromUtf8("lbl_emissivity"));

        layoutEmissivity->addWidget(lbl_emissivity);

        if_emissivity = new Gui::InputField(page_1);
        if_emissivity->setObjectName(QString::fromUtf8("if_emissivity"));
        if_emissivity->setProperty("quantity", QVariant(1.000000000000000));

        layoutEmissivity->addWidget(if_emissivity);


        verticalLayout_6->addLayout(layoutEmissivity);

        layoutAmbientTempRad = new QHBoxLayout();
        layoutAmbientTempRad->setObjectName(QString::fromUtf8("layoutAmbientTempRad"));
        lbl_ambienttemp_rad = new QLabel(page_1);
        lbl_ambienttemp_rad->setObjectName(QString::fromUtf8("lbl_ambienttemp_rad"));

        layoutAmbientTempRad->addWidget(lbl_ambienttemp_rad);

        if_ambienttemp_rad = new Gui::InputField(page_1);
        if_ambienttemp_rad->setObjectName(QString::fromUtf8("if_ambienttemp_rad"));
        if_ambienttemp_rad->setProperty("unit", QVariant(QString::fromUtf8("K")));
        if_ambienttemp_rad->setProperty("quantity", QVariant(300.000000000000000));

        layoutAmbientTempRad->addWidget(if_ambienttemp_rad);


        verticalLayout_6->addLayout(layoutAmbientTempRad);


        verticalLayout_5->addLayout(verticalLayout_6);

        sw_heatflux->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        if_heatflux = new Gui::InputField(page_2);
        if_heatflux->setObjectName(QString::fromUtf8("if_heatflux"));
        if_heatflux->setProperty("unit", QVariant(QString::fromUtf8("W/m^2/K")));
        if_heatflux->setProperty("quantity", QVariant(1.000000000000000));

        horizontalLayout_2->addWidget(if_heatflux);


        verticalLayout_3->addLayout(horizontalLayout_2);

        sw_heatflux->addWidget(page_2);

        verticalLayout_2->addWidget(sw_heatflux);


        retranslateUi(TaskFemConstraintHeatflux);

        sw_heatflux->setCurrentIndex(0);
        sw_heatflux->setCurrentIndex(1);
        sw_heatflux->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TaskFemConstraintHeatflux);
    } // setupUi

    void retranslateUi(QWidget *TaskFemConstraintHeatflux)
    {
        TaskFemConstraintHeatflux->setWindowTitle(QCoreApplication::translate("TaskFemConstraintHeatflux", "Task Fem Heat flux Load", nullptr));
        lbl_references->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Click Add or Remove and select face(s)", nullptr));
        btnAdd->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Remove", nullptr));
        rb_convection->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Surface Convection", nullptr));
        rb_radiation->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Surface Radiation", nullptr));
        rb_dflux->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Surface heat flux", nullptr));
        lbl_filmcoef->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Film coefficient", nullptr));
        if_filmcoef->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "1 W/m^2/K", nullptr));
        lbl_ambienttemp_conv->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Ambient Temperature", nullptr));
        if_ambienttemp_conv->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "300 K", nullptr));
        lbl_emissivity->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Emissivity", nullptr));
        if_emissivity->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "1 ", nullptr));
        lbl_ambienttemp_rad->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Ambient Temperature", nullptr));
        if_ambienttemp_rad->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "300 K", nullptr));
        label->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "Surface heat flux", nullptr));
        if_heatflux->setText(QCoreApplication::translate("TaskFemConstraintHeatflux", "1 W/m^2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskFemConstraintHeatflux: public Ui_TaskFemConstraintHeatflux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFEMCONSTRAINTHEATFLUX_H
