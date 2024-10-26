/********************************************************************************
** Form generated from reading UI file 'TaskTetParameter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKTETPARAMETER_H
#define UI_TASKTETPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskTetParameter
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout1;
    QLabel *maxSizeLabel;
    QDoubleSpinBox *doubleSpinBox_MaxSize;
    QHBoxLayout *horizontalLayout2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_MinSize;
    QCheckBox *checkBox_SecondOrder;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox_Fineness;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_GrowthRate;
    QLabel *label_4;
    QSpinBox *spinBox_SegsPerEdge;
    QLabel *label_5;
    QSpinBox *spinBox_SegsPerRadius;
    QCheckBox *checkBox_Optimize;
    QFrame *line;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_InfoNodes;
    QLabel *label_7;
    QLineEdit *lineEdit_InfoTriangle;
    QLabel *label_9;
    QLineEdit *lineEdit_InfoTet;

    void setupUi(QWidget *TaskTetParameter)
    {
        if (TaskTetParameter->objectName().isEmpty())
            TaskTetParameter->setObjectName(QString::fromUtf8("TaskTetParameter"));
        TaskTetParameter->resize(221, 311);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskTetParameter->sizePolicy().hasHeightForWidth());
        TaskTetParameter->setSizePolicy(sizePolicy);
        TaskTetParameter->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskTetParameter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        maxSizeLabel = new QLabel(TaskTetParameter);
        maxSizeLabel->setObjectName(QString::fromUtf8("maxSizeLabel"));

        horizontalLayout1->addWidget(maxSizeLabel);

        doubleSpinBox_MaxSize = new QDoubleSpinBox(TaskTetParameter);
        doubleSpinBox_MaxSize->setObjectName(QString::fromUtf8("doubleSpinBox_MaxSize"));
        doubleSpinBox_MaxSize->setMaximum(9999999.990000000223517);

        horizontalLayout1->addWidget(doubleSpinBox_MaxSize);


        verticalLayout->addLayout(horizontalLayout1);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setObjectName(QString::fromUtf8("horizontalLayout2"));
        label = new QLabel(TaskTetParameter);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout2->addWidget(label);

        doubleSpinBox_MinSize = new QDoubleSpinBox(TaskTetParameter);
        doubleSpinBox_MinSize->setObjectName(QString::fromUtf8("doubleSpinBox_MinSize"));
        doubleSpinBox_MinSize->setMaximum(9999999.990000000223517);

        horizontalLayout2->addWidget(doubleSpinBox_MinSize);


        verticalLayout->addLayout(horizontalLayout2);

        checkBox_SecondOrder = new QCheckBox(TaskTetParameter);
        checkBox_SecondOrder->setObjectName(QString::fromUtf8("checkBox_SecondOrder"));

        verticalLayout->addWidget(checkBox_SecondOrder);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(TaskTetParameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox_Fineness = new QComboBox(TaskTetParameter);
        comboBox_Fineness->addItem(QString());
        comboBox_Fineness->addItem(QString());
        comboBox_Fineness->addItem(QString());
        comboBox_Fineness->addItem(QString());
        comboBox_Fineness->addItem(QString());
        comboBox_Fineness->addItem(QString());
        comboBox_Fineness->setObjectName(QString::fromUtf8("comboBox_Fineness"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_Fineness);

        label_3 = new QLabel(TaskTetParameter);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        doubleSpinBox_GrowthRate = new QDoubleSpinBox(TaskTetParameter);
        doubleSpinBox_GrowthRate->setObjectName(QString::fromUtf8("doubleSpinBox_GrowthRate"));
        doubleSpinBox_GrowthRate->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_GrowthRate);

        label_4 = new QLabel(TaskTetParameter);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        spinBox_SegsPerEdge = new QSpinBox(TaskTetParameter);
        spinBox_SegsPerEdge->setObjectName(QString::fromUtf8("spinBox_SegsPerEdge"));
        spinBox_SegsPerEdge->setEnabled(false);
        spinBox_SegsPerEdge->setMaximum(9999);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_SegsPerEdge);

        label_5 = new QLabel(TaskTetParameter);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        spinBox_SegsPerRadius = new QSpinBox(TaskTetParameter);
        spinBox_SegsPerRadius->setObjectName(QString::fromUtf8("spinBox_SegsPerRadius"));
        spinBox_SegsPerRadius->setEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_SegsPerRadius);


        verticalLayout->addLayout(formLayout);

        checkBox_Optimize = new QCheckBox(TaskTetParameter);
        checkBox_Optimize->setObjectName(QString::fromUtf8("checkBox_Optimize"));
        checkBox_Optimize->setChecked(true);

        verticalLayout->addWidget(checkBox_Optimize);

        line = new QFrame(TaskTetParameter);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_6 = new QLabel(TaskTetParameter);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        lineEdit_InfoNodes = new QLineEdit(TaskTetParameter);
        lineEdit_InfoNodes->setObjectName(QString::fromUtf8("lineEdit_InfoNodes"));
        lineEdit_InfoNodes->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_InfoNodes);

        label_7 = new QLabel(TaskTetParameter);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_InfoTriangle = new QLineEdit(TaskTetParameter);
        lineEdit_InfoTriangle->setObjectName(QString::fromUtf8("lineEdit_InfoTriangle"));
        lineEdit_InfoTriangle->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_InfoTriangle);

        label_9 = new QLabel(TaskTetParameter);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        lineEdit_InfoTet = new QLineEdit(TaskTetParameter);
        lineEdit_InfoTet->setObjectName(QString::fromUtf8("lineEdit_InfoTet"));
        lineEdit_InfoTet->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_InfoTet);


        verticalLayout->addLayout(formLayout_2);


        retranslateUi(TaskTetParameter);

        comboBox_Fineness->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TaskTetParameter);
    } // setupUi

    void retranslateUi(QWidget *TaskTetParameter)
    {
        maxSizeLabel->setText(QCoreApplication::translate("TaskTetParameter", "Max. Size:", nullptr));
        label->setText(QCoreApplication::translate("TaskTetParameter", "Min. Size:", nullptr));
        checkBox_SecondOrder->setText(QCoreApplication::translate("TaskTetParameter", "Second order", nullptr));
        label_2->setText(QCoreApplication::translate("TaskTetParameter", "Fineness:", nullptr));
        comboBox_Fineness->setItemText(0, QCoreApplication::translate("TaskTetParameter", "VeryCoarse", nullptr));
        comboBox_Fineness->setItemText(1, QCoreApplication::translate("TaskTetParameter", "Coarse", nullptr));
        comboBox_Fineness->setItemText(2, QCoreApplication::translate("TaskTetParameter", "Moderate", nullptr));
        comboBox_Fineness->setItemText(3, QCoreApplication::translate("TaskTetParameter", "Fine", nullptr));
        comboBox_Fineness->setItemText(4, QCoreApplication::translate("TaskTetParameter", "VeryFine", nullptr));
        comboBox_Fineness->setItemText(5, QCoreApplication::translate("TaskTetParameter", "UserDefined", nullptr));

        label_3->setText(QCoreApplication::translate("TaskTetParameter", "Growth Rate:", nullptr));
        label_4->setText(QCoreApplication::translate("TaskTetParameter", "Number of Segments per Edge:", nullptr));
        label_5->setText(QCoreApplication::translate("TaskTetParameter", "Number of Segments per Radius:", nullptr));
        checkBox_Optimize->setText(QCoreApplication::translate("TaskTetParameter", "Optimize", nullptr));
        label_6->setText(QCoreApplication::translate("TaskTetParameter", "Node count:", nullptr));
        label_7->setText(QCoreApplication::translate("TaskTetParameter", "Triangle count:", nullptr));
        label_9->setText(QCoreApplication::translate("TaskTetParameter", "Tetrahedron count:", nullptr));
        (void)TaskTetParameter;
    } // retranslateUi

};

namespace Ui {
    class TaskTetParameter: public Ui_TaskTetParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKTETPARAMETER_H
