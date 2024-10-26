/********************************************************************************
** Form generated from reading UI file 'TaskDimRepair.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDIMREPAIR_H
#define UI_TASKDIMREPAIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskDimRepair
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbDimension;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leName;
    QLineEdit *leLabel;
    QPushButton *pbSelection;
    QGroupBox *gbReferences2D;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *leObject2d;
    QLabel *label_6;
    QListWidget *lwGeometry2d;
    QGroupBox *gbReferences3d;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *twReferences3d;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TaskDimRepair)
    {
        if (TaskDimRepair->objectName().isEmpty())
            TaskDimRepair->setObjectName(QString::fromUtf8("TaskDimRepair"));
        TaskDimRepair->resize(355, 512);
        verticalLayout = new QVBoxLayout(TaskDimRepair);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gbDimension = new QGroupBox(TaskDimRepair);
        gbDimension->setObjectName(QString::fromUtf8("gbDimension"));
        verticalLayout_2 = new QVBoxLayout(gbDimension);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(gbDimension);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(gbDimension);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leName = new QLineEdit(gbDimension);
        leName->setObjectName(QString::fromUtf8("leName"));
        leName->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leName->sizePolicy().hasHeightForWidth());
        leName->setSizePolicy(sizePolicy);
        leName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leName->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leName);

        leLabel = new QLineEdit(gbDimension);
        leLabel->setObjectName(QString::fromUtf8("leLabel"));
        leLabel->setEnabled(true);
        sizePolicy.setHeightForWidth(leLabel->sizePolicy().hasHeightForWidth());
        leLabel->setSizePolicy(sizePolicy);
        leLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leLabel->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, leLabel);

        pbSelection = new QPushButton(gbDimension);
        pbSelection->setObjectName(QString::fromUtf8("pbSelection"));
        sizePolicy.setHeightForWidth(pbSelection->sizePolicy().hasHeightForWidth());
        pbSelection->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, pbSelection);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(gbDimension);

        gbReferences2D = new QGroupBox(TaskDimRepair);
        gbReferences2D->setObjectName(QString::fromUtf8("gbReferences2D"));
        verticalLayout_3 = new QVBoxLayout(gbReferences2D);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(gbReferences2D);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        leObject2d = new QLineEdit(gbReferences2D);
        leObject2d->setObjectName(QString::fromUtf8("leObject2d"));
        sizePolicy.setHeightForWidth(leObject2d->sizePolicy().hasHeightForWidth());
        leObject2d->setSizePolicy(sizePolicy);
        leObject2d->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leObject2d->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leObject2d);

        label_6 = new QLabel(gbReferences2D);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 90));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        lwGeometry2d = new QListWidget(gbReferences2D);
        lwGeometry2d->setObjectName(QString::fromUtf8("lwGeometry2d"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lwGeometry2d->sizePolicy().hasHeightForWidth());
        lwGeometry2d->setSizePolicy(sizePolicy1);
        lwGeometry2d->setMinimumSize(QSize(0, 64));
        lwGeometry2d->setMaximumSize(QSize(16777215, 90));
        lwGeometry2d->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lwGeometry2d->setAlternatingRowColors(true);
        lwGeometry2d->setResizeMode(QListView::Adjust);
        lwGeometry2d->setItemAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lwGeometry2d);


        verticalLayout_3->addLayout(formLayout_2);


        verticalLayout->addWidget(gbReferences2D);

        gbReferences3d = new QGroupBox(TaskDimRepair);
        gbReferences3d->setObjectName(QString::fromUtf8("gbReferences3d"));
        verticalLayout_4 = new QVBoxLayout(gbReferences3d);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        twReferences3d = new QTableWidget(gbReferences3d);
        if (twReferences3d->columnCount() < 3)
            twReferences3d->setColumnCount(3);
        twReferences3d->setObjectName(QString::fromUtf8("twReferences3d"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(twReferences3d->sizePolicy().hasHeightForWidth());
        twReferences3d->setSizePolicy(sizePolicy2);
        twReferences3d->setAlternatingRowColors(true);
        twReferences3d->setSelectionMode(QAbstractItemView::NoSelection);
        twReferences3d->setSelectionBehavior(QAbstractItemView::SelectRows);
        twReferences3d->setColumnCount(3);
        twReferences3d->horizontalHeader()->setStretchLastSection(true);
        twReferences3d->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(twReferences3d);


        verticalLayout->addWidget(gbReferences3d);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TaskDimRepair);

        QMetaObject::connectSlotsByName(TaskDimRepair);
    } // setupUi

    void retranslateUi(QWidget *TaskDimRepair)
    {
        TaskDimRepair->setWindowTitle(QCoreApplication::translate("TaskDimRepair", "Dimension Repair", nullptr));
        gbDimension->setTitle(QCoreApplication::translate("TaskDimRepair", "Dimension", nullptr));
        label->setText(QCoreApplication::translate("TaskDimRepair", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("TaskDimRepair", "Label", nullptr));
        pbSelection->setText(QCoreApplication::translate("TaskDimRepair", "Replace References with Current Selection", nullptr));
        gbReferences2D->setTitle(QCoreApplication::translate("TaskDimRepair", "References 2D", nullptr));
        label_5->setText(QCoreApplication::translate("TaskDimRepair", "Object", nullptr));
#if QT_CONFIG(tooltip)
        leObject2d->setToolTip(QCoreApplication::translate("TaskDimRepair", "The View that owns this Dimension", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TaskDimRepair", "Geometry", nullptr));
#if QT_CONFIG(tooltip)
        lwGeometry2d->setToolTip(QCoreApplication::translate("TaskDimRepair", "The subelements of the View that define the geometry for this Dimension", nullptr));
#endif // QT_CONFIG(tooltip)
        gbReferences3d->setTitle(QCoreApplication::translate("TaskDimRepair", "References 3D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskDimRepair: public Ui_TaskDimRepair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDIMREPAIR_H
