/********************************************************************************
** Form generated from reading UI file 'TaskPostContours.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTCONTOURS_H
#define UI_TASKPOSTCONTOURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskPostContours
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *fieldsCB;
    QLabel *vectorL;
    QComboBox *vectorsCB;
    QLabel *fieldL;
    QLabel *numberContoursL;
    QSpinBox *numberContoursSB;
    QCheckBox *noColorCB;

    void setupUi(QWidget *TaskPostContours)
    {
        if (TaskPostContours->objectName().isEmpty())
            TaskPostContours->setObjectName(QString::fromUtf8("TaskPostContours"));
        TaskPostContours->resize(250, 115);
        TaskPostContours->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskPostContours);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fieldsCB = new QComboBox(TaskPostContours);
        fieldsCB->setObjectName(QString::fromUtf8("fieldsCB"));

        gridLayout->addWidget(fieldsCB, 0, 1, 1, 1);

        vectorL = new QLabel(TaskPostContours);
        vectorL->setObjectName(QString::fromUtf8("vectorL"));

        gridLayout->addWidget(vectorL, 1, 0, 1, 1);

        vectorsCB = new QComboBox(TaskPostContours);
        vectorsCB->setObjectName(QString::fromUtf8("vectorsCB"));

        gridLayout->addWidget(vectorsCB, 1, 1, 1, 1);

        fieldL = new QLabel(TaskPostContours);
        fieldL->setObjectName(QString::fromUtf8("fieldL"));

        gridLayout->addWidget(fieldL, 0, 0, 1, 1);

        numberContoursL = new QLabel(TaskPostContours);
        numberContoursL->setObjectName(QString::fromUtf8("numberContoursL"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numberContoursL->sizePolicy().hasHeightForWidth());
        numberContoursL->setSizePolicy(sizePolicy);
        numberContoursL->setText(QString::fromUtf8("Number of contours:"));

        gridLayout->addWidget(numberContoursL, 2, 0, 1, 1);

        numberContoursSB = new QSpinBox(TaskPostContours);
        numberContoursSB->setObjectName(QString::fromUtf8("numberContoursSB"));
        numberContoursSB->setMinimumSize(QSize(40, 0));
        numberContoursSB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberContoursSB->setKeyboardTracking(false);
        numberContoursSB->setMinimum(1);
        numberContoursSB->setMaximum(1000);

        gridLayout->addWidget(numberContoursSB, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        noColorCB = new QCheckBox(TaskPostContours);
        noColorCB->setObjectName(QString::fromUtf8("noColorCB"));

        verticalLayout->addWidget(noColorCB);


        retranslateUi(TaskPostContours);

        QMetaObject::connectSlotsByName(TaskPostContours);
    } // setupUi

    void retranslateUi(QWidget *TaskPostContours)
    {
        vectorL->setText(QCoreApplication::translate("TaskPostContours", "Vector:", nullptr));
        fieldL->setText(QCoreApplication::translate("TaskPostContours", "Field:", nullptr));
#if QT_CONFIG(tooltip)
        noColorCB->setToolTip(QCoreApplication::translate("TaskPostContours", "Contour lines will not be colored", nullptr));
#endif // QT_CONFIG(tooltip)
        noColorCB->setText(QCoreApplication::translate("TaskPostContours", "No color", nullptr));
        (void)TaskPostContours;
    } // retranslateUi

};

namespace Ui {
    class TaskPostContours: public Ui_TaskPostContours {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTCONTOURS_H
