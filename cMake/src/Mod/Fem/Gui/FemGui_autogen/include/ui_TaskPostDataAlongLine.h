/********************************************************************************
** Form generated from reading UI file 'TaskPostDataAlongLine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTDATAALONGLINE_H
#define UI_TASKPOSTDATAALONGLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_TaskPostDataAlongLine
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    Gui::PrefQuantitySpinBox *point1X;
    Gui::PrefQuantitySpinBox *point2X;
    QLabel *label_8;
    Gui::PrefQuantitySpinBox *point1Y;
    Gui::PrefQuantitySpinBox *point2Y;
    QLabel *label_9;
    Gui::PrefQuantitySpinBox *point1Z;
    Gui::PrefQuantitySpinBox *point2Z;
    QPushButton *SelectPoints;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QSpinBox *resolution;
    QFrame *line_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QComboBox *Representation;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QComboBox *Field;
    QLabel *label_5;
    QComboBox *VectorMode;
    QFrame *line_3;
    QPushButton *CreatePlot;

    void setupUi(QWidget *TaskPostDataAlongLine)
    {
        if (TaskPostDataAlongLine->objectName().isEmpty())
            TaskPostDataAlongLine->setObjectName(QString::fromUtf8("TaskPostDataAlongLine"));
        TaskPostDataAlongLine->resize(413, 442);
        TaskPostDataAlongLine->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskPostDataAlongLine);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TaskPostDataAlongLine);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        point1X = new Gui::PrefQuantitySpinBox(groupBox);
        point1X->setObjectName(QString::fromUtf8("point1X"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(point1X->sizePolicy().hasHeightForWidth());
        point1X->setSizePolicy(sizePolicy1);
        point1X->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        point1X->setKeyboardTracking(false);

        gridLayout->addWidget(point1X, 2, 1, 1, 1);

        point2X = new Gui::PrefQuantitySpinBox(groupBox);
        point2X->setObjectName(QString::fromUtf8("point2X"));
        sizePolicy1.setHeightForWidth(point2X->sizePolicy().hasHeightForWidth());
        point2X->setSizePolicy(sizePolicy1);
        point2X->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        point2X->setKeyboardTracking(false);

        gridLayout->addWidget(point2X, 2, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        point1Y = new Gui::PrefQuantitySpinBox(groupBox);
        point1Y->setObjectName(QString::fromUtf8("point1Y"));
        sizePolicy1.setHeightForWidth(point1Y->sizePolicy().hasHeightForWidth());
        point1Y->setSizePolicy(sizePolicy1);
        point1Y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        point1Y->setKeyboardTracking(false);

        gridLayout->addWidget(point1Y, 3, 1, 1, 1);

        point2Y = new Gui::PrefQuantitySpinBox(groupBox);
        point2Y->setObjectName(QString::fromUtf8("point2Y"));
        sizePolicy1.setHeightForWidth(point2Y->sizePolicy().hasHeightForWidth());
        point2Y->setSizePolicy(sizePolicy1);
        point2Y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        point2Y->setKeyboardTracking(false);

        gridLayout->addWidget(point2Y, 3, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        point1Z = new Gui::PrefQuantitySpinBox(groupBox);
        point1Z->setObjectName(QString::fromUtf8("point1Z"));
        sizePolicy1.setHeightForWidth(point1Z->sizePolicy().hasHeightForWidth());
        point1Z->setSizePolicy(sizePolicy1);
        point1Z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        point1Z->setKeyboardTracking(false);

        gridLayout->addWidget(point1Z, 4, 1, 1, 1);

        point2Z = new Gui::PrefQuantitySpinBox(groupBox);
        point2Z->setObjectName(QString::fromUtf8("point2Z"));
        sizePolicy1.setHeightForWidth(point2Z->sizePolicy().hasHeightForWidth());
        point2Z->setSizePolicy(sizePolicy1);
        point2Z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        point2Z->setKeyboardTracking(false);

        gridLayout->addWidget(point2Z, 4, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        SelectPoints = new QPushButton(TaskPostDataAlongLine);
        SelectPoints->setObjectName(QString::fromUtf8("SelectPoints"));

        verticalLayout->addWidget(SelectPoints);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(TaskPostDataAlongLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        resolution = new QSpinBox(TaskPostDataAlongLine);
        resolution->setObjectName(QString::fromUtf8("resolution"));
        sizePolicy1.setHeightForWidth(resolution->sizePolicy().hasHeightForWidth());
        resolution->setSizePolicy(sizePolicy1);
        resolution->setKeyboardTracking(false);
        resolution->setMinimum(1);
        resolution->setMaximum(999999999);

        horizontalLayout->addWidget(resolution);


        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QFrame(TaskPostDataAlongLine);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(TaskPostDataAlongLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        Representation = new QComboBox(TaskPostDataAlongLine);
        Representation->setObjectName(QString::fromUtf8("Representation"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Representation->sizePolicy().hasHeightForWidth());
        Representation->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(Representation, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(TaskPostDataAlongLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        Field = new QComboBox(TaskPostDataAlongLine);
        Field->setObjectName(QString::fromUtf8("Field"));

        gridLayout_2->addWidget(Field, 0, 1, 1, 1);

        label_5 = new QLabel(TaskPostDataAlongLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        VectorMode = new QComboBox(TaskPostDataAlongLine);
        VectorMode->setObjectName(QString::fromUtf8("VectorMode"));

        gridLayout_2->addWidget(VectorMode, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        line_3 = new QFrame(TaskPostDataAlongLine);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        CreatePlot = new QPushButton(TaskPostDataAlongLine);
        CreatePlot->setObjectName(QString::fromUtf8("CreatePlot"));

        verticalLayout->addWidget(CreatePlot);


        retranslateUi(TaskPostDataAlongLine);

        QMetaObject::connectSlotsByName(TaskPostDataAlongLine);
    } // setupUi

    void retranslateUi(QWidget *TaskPostDataAlongLine)
    {
        groupBox->setTitle(QCoreApplication::translate("TaskPostDataAlongLine", "Coordinates", nullptr));
        label->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Point 1", nullptr));
        label_2->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Point 2", nullptr));
        label_7->setText(QCoreApplication::translate("TaskPostDataAlongLine", "x", nullptr));
        label_8->setText(QCoreApplication::translate("TaskPostDataAlongLine", "y", nullptr));
        label_9->setText(QCoreApplication::translate("TaskPostDataAlongLine", "z", nullptr));
        SelectPoints->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Select Points", nullptr));
        label_6->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Resolution", nullptr));
        label_3->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Mode", nullptr));
        label_4->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Field", nullptr));
        label_5->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Vector", nullptr));
        CreatePlot->setText(QCoreApplication::translate("TaskPostDataAlongLine", "Create Plot", nullptr));
        (void)TaskPostDataAlongLine;
    } // retranslateUi

};

namespace Ui {
    class TaskPostDataAlongLine: public Ui_TaskPostDataAlongLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTDATAALONGLINE_H
