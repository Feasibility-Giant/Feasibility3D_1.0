/********************************************************************************
** Form generated from reading UI file 'TaskPostDataAtPoint.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTDATAATPOINT_H
#define UI_TASKPOSTDATAATPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskPostDataAtPoint
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    Gui::PrefQuantitySpinBox *centerX;
    QLabel *label_3;
    Gui::PrefQuantitySpinBox *centerY;
    QLabel *label_5;
    Gui::PrefQuantitySpinBox *centerZ;
    QPushButton *SelectPoint;
    QGridLayout *gridLayout_2;
    QLabel *ValueAtPointLabel;
    QLineEdit *ValueAtPoint;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QComboBox *Field;

    void setupUi(QWidget *TaskPostDataAtPoint)
    {
        if (TaskPostDataAtPoint->objectName().isEmpty())
            TaskPostDataAtPoint->setObjectName(QString::fromUtf8("TaskPostDataAtPoint"));
        TaskPostDataAtPoint->resize(224, 291);
        verticalLayout = new QVBoxLayout(TaskPostDataAtPoint);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TaskPostDataAtPoint);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        centerX = new Gui::PrefQuantitySpinBox(groupBox);
        centerX->setObjectName(QString::fromUtf8("centerX"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centerX->sizePolicy().hasHeightForWidth());
        centerX->setSizePolicy(sizePolicy1);
        centerX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerX->setKeyboardTracking(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, centerX);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        centerY = new Gui::PrefQuantitySpinBox(groupBox);
        centerY->setObjectName(QString::fromUtf8("centerY"));
        sizePolicy1.setHeightForWidth(centerY->sizePolicy().hasHeightForWidth());
        centerY->setSizePolicy(sizePolicy1);
        centerY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerY->setKeyboardTracking(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, centerY);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        centerZ = new Gui::PrefQuantitySpinBox(groupBox);
        centerZ->setObjectName(QString::fromUtf8("centerZ"));
        sizePolicy1.setHeightForWidth(centerZ->sizePolicy().hasHeightForWidth());
        centerZ->setSizePolicy(sizePolicy1);
        centerZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        centerZ->setKeyboardTracking(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, centerZ);


        verticalLayout->addWidget(groupBox);

        SelectPoint = new QPushButton(TaskPostDataAtPoint);
        SelectPoint->setObjectName(QString::fromUtf8("SelectPoint"));

        verticalLayout->addWidget(SelectPoint);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ValueAtPointLabel = new QLabel(TaskPostDataAtPoint);
        ValueAtPointLabel->setObjectName(QString::fromUtf8("ValueAtPointLabel"));

        gridLayout_2->addWidget(ValueAtPointLabel, 0, 0, 1, 1);

        ValueAtPoint = new QLineEdit(TaskPostDataAtPoint);
        ValueAtPoint->setObjectName(QString::fromUtf8("ValueAtPoint"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ValueAtPoint->sizePolicy().hasHeightForWidth());
        ValueAtPoint->setSizePolicy(sizePolicy2);
        ValueAtPoint->setReadOnly(true);

        gridLayout_2->addWidget(ValueAtPoint, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        line_2 = new QFrame(TaskPostDataAtPoint);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_4 = new QLabel(TaskPostDataAtPoint);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        Field = new QComboBox(TaskPostDataAtPoint);
        Field->setObjectName(QString::fromUtf8("Field"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, Field);


        verticalLayout->addLayout(formLayout_4);


        retranslateUi(TaskPostDataAtPoint);

        QMetaObject::connectSlotsByName(TaskPostDataAtPoint);
    } // setupUi

    void retranslateUi(QWidget *TaskPostDataAtPoint)
    {
        groupBox->setTitle(QCoreApplication::translate("TaskPostDataAtPoint", "Center", nullptr));
        label_2->setText(QCoreApplication::translate("TaskPostDataAtPoint", "x", nullptr));
        label_3->setText(QCoreApplication::translate("TaskPostDataAtPoint", "y", nullptr));
        label_5->setText(QCoreApplication::translate("TaskPostDataAtPoint", "z", nullptr));
        SelectPoint->setText(QCoreApplication::translate("TaskPostDataAtPoint", "Select Point", nullptr));
        ValueAtPointLabel->setText(QCoreApplication::translate("TaskPostDataAtPoint", "Value:", nullptr));
        label_4->setText(QCoreApplication::translate("TaskPostDataAtPoint", "Field", nullptr));
        (void)TaskPostDataAtPoint;
    } // retranslateUi

};

namespace Ui {
    class TaskPostDataAtPoint: public Ui_TaskPostDataAtPoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTDATAATPOINT_H
