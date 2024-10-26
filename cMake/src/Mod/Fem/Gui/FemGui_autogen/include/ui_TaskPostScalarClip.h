/********************************************************************************
** Form generated from reading UI file 'TaskPostScalarClip.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTSCALARCLIP_H
#define UI_TASKPOSTSCALARCLIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskPostScalarClip
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *Scalar;
    QFrame *line;
    QSlider *Slider;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Minimum;
    QDoubleSpinBox *Value;
    QLabel *Maximum;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *InsideOut;

    void setupUi(QWidget *TaskPostScalarClip)
    {
        if (TaskPostScalarClip->objectName().isEmpty())
            TaskPostScalarClip->setObjectName(QString::fromUtf8("TaskPostScalarClip"));
        TaskPostScalarClip->resize(326, 210);
        TaskPostScalarClip->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskPostScalarClip);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TaskPostScalarClip);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        Scalar = new QComboBox(TaskPostScalarClip);
        Scalar->addItem(QString());
        Scalar->addItem(QString());
        Scalar->addItem(QString());
        Scalar->addItem(QString());
        Scalar->setObjectName(QString::fromUtf8("Scalar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Scalar->sizePolicy().hasHeightForWidth());
        Scalar->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Scalar);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TaskPostScalarClip);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Slider = new QSlider(TaskPostScalarClip);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setMaximum(100);
        Slider->setOrientation(Qt::Horizontal);
        Slider->setInvertedAppearance(false);
        Slider->setInvertedControls(false);
        Slider->setTickPosition(QSlider::NoTicks);

        verticalLayout->addWidget(Slider);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(TaskPostScalarClip);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(TaskPostScalarClip);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(TaskPostScalarClip);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Minimum = new QLabel(TaskPostScalarClip);
        Minimum->setObjectName(QString::fromUtf8("Minimum"));
        sizePolicy1.setHeightForWidth(Minimum->sizePolicy().hasHeightForWidth());
        Minimum->setSizePolicy(sizePolicy1);
        Minimum->setText(QString::fromUtf8("-100000"));

        horizontalLayout_2->addWidget(Minimum);

        Value = new QDoubleSpinBox(TaskPostScalarClip);
        Value->setObjectName(QString::fromUtf8("Value"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Value->sizePolicy().hasHeightForWidth());
        Value->setSizePolicy(sizePolicy2);
        Value->setMinimumSize(QSize(50, 0));
        Value->setKeyboardTracking(false);
        Value->setDecimals(3);
        Value->setMinimum(-999999999.000000000000000);
        Value->setMaximum(999999999.000000000000000);

        horizontalLayout_2->addWidget(Value);

        Maximum = new QLabel(TaskPostScalarClip);
        Maximum->setObjectName(QString::fromUtf8("Maximum"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Maximum->sizePolicy().hasHeightForWidth());
        Maximum->setSizePolicy(sizePolicy3);
        Maximum->setLayoutDirection(Qt::LeftToRight);
        Maximum->setText(QString::fromUtf8("0"));
        Maximum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(Maximum);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(TaskPostScalarClip);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        InsideOut = new QCheckBox(TaskPostScalarClip);
        InsideOut->setObjectName(QString::fromUtf8("InsideOut"));

        horizontalLayout_3->addWidget(InsideOut);


        verticalLayout->addLayout(horizontalLayout_3);

        Slider->raise();
        line->raise();
        line_2->raise();

        retranslateUi(TaskPostScalarClip);

        QMetaObject::connectSlotsByName(TaskPostScalarClip);
    } // setupUi

    void retranslateUi(QWidget *TaskPostScalarClip)
    {
        label->setText(QCoreApplication::translate("TaskPostScalarClip", "Scalar", nullptr));
        Scalar->setItemText(0, QCoreApplication::translate("TaskPostScalarClip", "Outline", nullptr));
        Scalar->setItemText(1, QCoreApplication::translate("TaskPostScalarClip", "Surface", nullptr));
        Scalar->setItemText(2, QCoreApplication::translate("TaskPostScalarClip", "Surface with Edges", nullptr));
        Scalar->setItemText(3, QCoreApplication::translate("TaskPostScalarClip", "Wireframe", nullptr));

        label_2->setText(QCoreApplication::translate("TaskPostScalarClip", "Min scalar", nullptr));
        label_3->setText(QCoreApplication::translate("TaskPostScalarClip", "Clip scalar", nullptr));
        label_4->setText(QCoreApplication::translate("TaskPostScalarClip", "Max scalar", nullptr));
        InsideOut->setText(QCoreApplication::translate("TaskPostScalarClip", "Clip inside out", nullptr));
        (void)TaskPostScalarClip;
    } // retranslateUi

};

namespace Ui {
    class TaskPostScalarClip: public Ui_TaskPostScalarClip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTSCALARCLIP_H
