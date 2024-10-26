/********************************************************************************
** Form generated from reading UI file 'TaskPostWarpVector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTWARPVECTOR_H
#define UI_TASKPOSTWARPVECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskPostWarpVector
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *Vector;
    QFrame *line;
    QSlider *Slider;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *Min;
    QDoubleSpinBox *Value;
    QDoubleSpinBox *Max;
    QFrame *line_2;

    void setupUi(QWidget *TaskPostWarpVector)
    {
        if (TaskPostWarpVector->objectName().isEmpty())
            TaskPostWarpVector->setObjectName(QString::fromUtf8("TaskPostWarpVector"));
        TaskPostWarpVector->resize(295, 176);
        TaskPostWarpVector->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskPostWarpVector);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TaskPostWarpVector);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        Vector = new QComboBox(TaskPostWarpVector);
        Vector->addItem(QString());
        Vector->setObjectName(QString::fromUtf8("Vector"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Vector->sizePolicy().hasHeightForWidth());
        Vector->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Vector);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TaskPostWarpVector);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Slider = new QSlider(TaskPostWarpVector);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Slider->sizePolicy().hasHeightForWidth());
        Slider->setSizePolicy(sizePolicy2);
        Slider->setMinimumSize(QSize(100, 0));
        Slider->setMaximum(100);
        Slider->setOrientation(Qt::Horizontal);
        Slider->setInvertedAppearance(false);
        Slider->setInvertedControls(false);
        Slider->setTickPosition(QSlider::NoTicks);

        verticalLayout->addWidget(Slider);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(TaskPostWarpVector);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(TaskPostWarpVector);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(TaskPostWarpVector);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Min = new QDoubleSpinBox(TaskPostWarpVector);
        Min->setObjectName(QString::fromUtf8("Min"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Min->sizePolicy().hasHeightForWidth());
        Min->setSizePolicy(sizePolicy3);
        Min->setMinimumSize(QSize(20, 0));
        Min->setDecimals(4);
        Min->setMaximum(99999.000000000000000);

        horizontalLayout_2->addWidget(Min);

        Value = new QDoubleSpinBox(TaskPostWarpVector);
        Value->setObjectName(QString::fromUtf8("Value"));
        sizePolicy2.setHeightForWidth(Value->sizePolicy().hasHeightForWidth());
        Value->setSizePolicy(sizePolicy2);
        Value->setDecimals(4);
        Value->setMaximum(9999999.000000000000000);

        horizontalLayout_2->addWidget(Value);

        Max = new QDoubleSpinBox(TaskPostWarpVector);
        Max->setObjectName(QString::fromUtf8("Max"));
        sizePolicy3.setHeightForWidth(Max->sizePolicy().hasHeightForWidth());
        Max->setSizePolicy(sizePolicy3);
        Max->setMinimumSize(QSize(20, 0));
        Max->setDecimals(4);
        Max->setMaximum(1000000.000000000000000);

        horizontalLayout_2->addWidget(Max);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(TaskPostWarpVector);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);


        retranslateUi(TaskPostWarpVector);

        QMetaObject::connectSlotsByName(TaskPostWarpVector);
    } // setupUi

    void retranslateUi(QWidget *TaskPostWarpVector)
    {
        label->setText(QCoreApplication::translate("TaskPostWarpVector", "Vector", nullptr));
        Vector->setItemText(0, QCoreApplication::translate("TaskPostWarpVector", "warp vectors", nullptr));

        label_2->setText(QCoreApplication::translate("TaskPostWarpVector", "Min warp", nullptr));
        label_3->setText(QCoreApplication::translate("TaskPostWarpVector", "Warp factor", nullptr));
        label_4->setText(QCoreApplication::translate("TaskPostWarpVector", "Max warp", nullptr));
        (void)TaskPostWarpVector;
    } // retranslateUi

};

namespace Ui {
    class TaskPostWarpVector: public Ui_TaskPostWarpVector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTWARPVECTOR_H
