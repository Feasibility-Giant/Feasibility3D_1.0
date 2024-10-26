/********************************************************************************
** Form generated from reading UI file 'TaskPipeOrientation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPIPEORIENTATION_H
#define UI_TASKPIPEORIENTATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartDesignGui {

class Ui_TaskPipeOrientation
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBoxMode;
    QStackedWidget *stackedWidget;
    QWidget *standard;
    QWidget *fixed;
    QWidget *frenet;
    QWidget *auxiliary;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *curvelinear;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *buttonProfileBase;
    QLineEdit *profileBaseEdit;
    QToolButton *buttonProfileClear;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *buttonRefAdd;
    QToolButton *buttonRefRemove;
    QListWidget *listWidgetReferences;
    QWidget *binormal;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;

    void setupUi(QWidget *PartDesignGui__TaskPipeOrientation)
    {
        if (PartDesignGui__TaskPipeOrientation->objectName().isEmpty())
            PartDesignGui__TaskPipeOrientation->setObjectName(QString::fromUtf8("PartDesignGui__TaskPipeOrientation"));
        PartDesignGui__TaskPipeOrientation->resize(305, 420);
        PartDesignGui__TaskPipeOrientation->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(PartDesignGui__TaskPipeOrientation);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(PartDesignGui__TaskPipeOrientation);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBoxMode = new QComboBox(PartDesignGui__TaskPipeOrientation);
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->setObjectName(QString::fromUtf8("comboBoxMode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxMode->sizePolicy().hasHeightForWidth());
        comboBoxMode->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBoxMode);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(PartDesignGui__TaskPipeOrientation);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        standard = new QWidget();
        standard->setObjectName(QString::fromUtf8("standard"));
        stackedWidget->addWidget(standard);
        fixed = new QWidget();
        fixed->setObjectName(QString::fromUtf8("fixed"));
        stackedWidget->addWidget(fixed);
        frenet = new QWidget();
        frenet->setObjectName(QString::fromUtf8("frenet"));
        stackedWidget->addWidget(frenet);
        auxiliary = new QWidget();
        auxiliary->setObjectName(QString::fromUtf8("auxiliary"));
        verticalLayout_2 = new QVBoxLayout(auxiliary);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        curvelinear = new QCheckBox(auxiliary);
        curvelinear->setObjectName(QString::fromUtf8("curvelinear"));

        verticalLayout_2->addWidget(curvelinear);

        groupBox = new QGroupBox(auxiliary);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonProfileBase = new QToolButton(groupBox);
        buttonProfileBase->setObjectName(QString::fromUtf8("buttonProfileBase"));
        buttonProfileBase->setCheckable(true);

        horizontalLayout_2->addWidget(buttonProfileBase);

        profileBaseEdit = new QLineEdit(groupBox);
        profileBaseEdit->setObjectName(QString::fromUtf8("profileBaseEdit"));

        horizontalLayout_2->addWidget(profileBaseEdit);

        buttonProfileClear = new QToolButton(groupBox);
        buttonProfileClear->setObjectName(QString::fromUtf8("buttonProfileClear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/edit-cleartext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonProfileClear->setIcon(icon);

        horizontalLayout_2->addWidget(buttonProfileClear);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonRefAdd = new QToolButton(groupBox);
        buttonRefAdd->setObjectName(QString::fromUtf8("buttonRefAdd"));
        buttonRefAdd->setEnabled(true);
        sizePolicy.setHeightForWidth(buttonRefAdd->sizePolicy().hasHeightForWidth());
        buttonRefAdd->setSizePolicy(sizePolicy);
        buttonRefAdd->setCheckable(true);
        buttonRefAdd->setChecked(false);

        horizontalLayout_4->addWidget(buttonRefAdd);

        buttonRefRemove = new QToolButton(groupBox);
        buttonRefRemove->setObjectName(QString::fromUtf8("buttonRefRemove"));
        sizePolicy.setHeightForWidth(buttonRefRemove->sizePolicy().hasHeightForWidth());
        buttonRefRemove->setSizePolicy(sizePolicy);
        buttonRefRemove->setCheckable(true);

        horizontalLayout_4->addWidget(buttonRefRemove);


        verticalLayout->addLayout(horizontalLayout_4);

        listWidgetReferences = new QListWidget(groupBox);
        listWidgetReferences->setObjectName(QString::fromUtf8("listWidgetReferences"));

        verticalLayout->addWidget(listWidgetReferences);


        verticalLayout_2->addWidget(groupBox);

        stackedWidget->addWidget(auxiliary);
        binormal = new QWidget();
        binormal->setObjectName(QString::fromUtf8("binormal"));
        verticalLayout_4 = new QVBoxLayout(binormal);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(binormal);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_4->addWidget(label_5);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        formLayout->setHorizontalSpacing(20);
        label = new QLabel(binormal);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_3 = new QLabel(binormal);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(binormal);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        doubleSpinBoxX = new QDoubleSpinBox(binormal);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        sizePolicy.setHeightForWidth(doubleSpinBoxX->sizePolicy().hasHeightForWidth());
        doubleSpinBoxX->setSizePolicy(sizePolicy);
        doubleSpinBoxX->setMinimum(-99.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(binormal);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        sizePolicy.setHeightForWidth(doubleSpinBoxY->sizePolicy().hasHeightForWidth());
        doubleSpinBoxY->setSizePolicy(sizePolicy);
        doubleSpinBoxY->setMinimum(-99.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(binormal);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        sizePolicy.setHeightForWidth(doubleSpinBoxZ->sizePolicy().hasHeightForWidth());
        doubleSpinBoxZ->setSizePolicy(sizePolicy);
        doubleSpinBoxZ->setMinimum(-99.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBoxZ);


        verticalLayout_4->addLayout(formLayout);

        stackedWidget->addWidget(binormal);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(PartDesignGui__TaskPipeOrientation);
        QObject::connect(comboBoxMode, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PartDesignGui__TaskPipeOrientation);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskPipeOrientation)
    {
        label_2->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Orientation mode", nullptr));
        comboBoxMode->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Standard", nullptr));
        comboBoxMode->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Fixed", nullptr));
        comboBoxMode->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Frenet", nullptr));
        comboBoxMode->setItemText(3, QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Auxiliary", nullptr));
        comboBoxMode->setItemText(4, QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Binormal", nullptr));

        curvelinear->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Curvelinear equivalence", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Profile", nullptr));
        buttonProfileBase->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Object", nullptr));
        buttonRefAdd->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Add Edge", nullptr));
        buttonRefRemove->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Remove Edge", nullptr));
        label_5->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Set the constant binormal vector used to calculate the profiles orientation", nullptr));
        label->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "X", nullptr));
        label_3->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Y", nullptr));
        label_4->setText(QCoreApplication::translate("PartDesignGui::TaskPipeOrientation", "Z", nullptr));
        (void)PartDesignGui__TaskPipeOrientation;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskPipeOrientation: public Ui_TaskPipeOrientation {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKPIPEORIENTATION_H
