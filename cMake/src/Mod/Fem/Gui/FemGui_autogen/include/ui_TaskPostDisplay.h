/********************************************************************************
** Form generated from reading UI file 'TaskPostDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTDISPLAY_H
#define UI_TASKPOSTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskPostDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *Representation;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *Field;
    QLabel *label_3;
    QComboBox *VectorMode;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QSlider *Transparency;

    void setupUi(QWidget *TaskPostDisplay)
    {
        if (TaskPostDisplay->objectName().isEmpty())
            TaskPostDisplay->setObjectName(QString::fromUtf8("TaskPostDisplay"));
        TaskPostDisplay->resize(292, 186);
        TaskPostDisplay->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskPostDisplay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TaskPostDisplay);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        Representation = new QComboBox(TaskPostDisplay);
        Representation->addItem(QString());
        Representation->addItem(QString());
        Representation->addItem(QString());
        Representation->addItem(QString());
        Representation->setObjectName(QString::fromUtf8("Representation"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Representation->sizePolicy().hasHeightForWidth());
        Representation->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Representation);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(TaskPostDisplay);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        Field = new QComboBox(groupBox);
        Field->addItem(QString());
        Field->addItem(QString());
        Field->addItem(QString());
        Field->addItem(QString());
        Field->setObjectName(QString::fromUtf8("Field"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Field->sizePolicy().hasHeightForWidth());
        Field->setSizePolicy(sizePolicy3);

        formLayout->setWidget(0, QFormLayout::FieldRole, Field);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        VectorMode = new QComboBox(groupBox);
        VectorMode->addItem(QString());
        VectorMode->addItem(QString());
        VectorMode->addItem(QString());
        VectorMode->addItem(QString());
        VectorMode->setObjectName(QString::fromUtf8("VectorMode"));
        sizePolicy3.setHeightForWidth(VectorMode->sizePolicy().hasHeightForWidth());
        VectorMode->setSizePolicy(sizePolicy3);

        formLayout->setWidget(1, QFormLayout::FieldRole, VectorMode);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TaskPostDisplay);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        Transparency = new QSlider(groupBox_2);
        Transparency->setObjectName(QString::fromUtf8("Transparency"));
        Transparency->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, Transparency);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(TaskPostDisplay);

        QMetaObject::connectSlotsByName(TaskPostDisplay);
    } // setupUi

    void retranslateUi(QWidget *TaskPostDisplay)
    {
        label->setText(QCoreApplication::translate("TaskPostDisplay", "Mode", nullptr));
        Representation->setItemText(0, QCoreApplication::translate("TaskPostDisplay", "Outline", nullptr));
        Representation->setItemText(1, QCoreApplication::translate("TaskPostDisplay", "Surface", nullptr));
        Representation->setItemText(2, QCoreApplication::translate("TaskPostDisplay", "Surface with Edges", nullptr));
        Representation->setItemText(3, QCoreApplication::translate("TaskPostDisplay", "Wireframe", nullptr));

        groupBox->setTitle(QCoreApplication::translate("TaskPostDisplay", "Coloring", nullptr));
        label_2->setText(QCoreApplication::translate("TaskPostDisplay", "Field", nullptr));
        Field->setItemText(0, QCoreApplication::translate("TaskPostDisplay", "Outline", nullptr));
        Field->setItemText(1, QCoreApplication::translate("TaskPostDisplay", "Surface", nullptr));
        Field->setItemText(2, QCoreApplication::translate("TaskPostDisplay", "Surface with Edges", nullptr));
        Field->setItemText(3, QCoreApplication::translate("TaskPostDisplay", "Wireframe", nullptr));

        label_3->setText(QCoreApplication::translate("TaskPostDisplay", "Vector", nullptr));
        VectorMode->setItemText(0, QCoreApplication::translate("TaskPostDisplay", "Magnitute", nullptr));
        VectorMode->setItemText(1, QCoreApplication::translate("TaskPostDisplay", "X", nullptr));
        VectorMode->setItemText(2, QCoreApplication::translate("TaskPostDisplay", "Y", nullptr));
        VectorMode->setItemText(3, QCoreApplication::translate("TaskPostDisplay", "Z", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("TaskPostDisplay", "Styling", nullptr));
        label_4->setText(QCoreApplication::translate("TaskPostDisplay", "Transparency", nullptr));
        (void)TaskPostDisplay;
    } // retranslateUi

};

namespace Ui {
    class TaskPostDisplay: public Ui_TaskPostDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTDISPLAY_H
