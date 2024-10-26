/********************************************************************************
** Form generated from reading UI file 'TaskPipeScaling.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPIPESCALING_H
#define UI_TASKPIPESCALING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartDesignGui {

class Ui_TaskPipeScaling
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBoxScaling;
    QStackedWidget *stackedWidget;
    QWidget *constant;
    QWidget *multisection;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *buttonRefAdd;
    QToolButton *buttonRefRemove;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidgetReferences;

    void setupUi(QWidget *PartDesignGui__TaskPipeScaling)
    {
        if (PartDesignGui__TaskPipeScaling->objectName().isEmpty())
            PartDesignGui__TaskPipeScaling->setObjectName(QString::fromUtf8("PartDesignGui__TaskPipeScaling"));
        PartDesignGui__TaskPipeScaling->resize(262, 270);
        PartDesignGui__TaskPipeScaling->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(PartDesignGui__TaskPipeScaling);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(PartDesignGui__TaskPipeScaling);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBoxScaling = new QComboBox(PartDesignGui__TaskPipeScaling);
        comboBoxScaling->addItem(QString());
        comboBoxScaling->addItem(QString());
        comboBoxScaling->setObjectName(QString::fromUtf8("comboBoxScaling"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxScaling->sizePolicy().hasHeightForWidth());
        comboBoxScaling->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBoxScaling);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(PartDesignGui__TaskPipeScaling);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        constant = new QWidget();
        constant->setObjectName(QString::fromUtf8("constant"));
        stackedWidget->addWidget(constant);
        multisection = new QWidget();
        multisection->setObjectName(QString::fromUtf8("multisection"));
        verticalLayout_2 = new QVBoxLayout(multisection);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonRefAdd = new QToolButton(multisection);
        buttonRefAdd->setObjectName(QString::fromUtf8("buttonRefAdd"));
        buttonRefAdd->setEnabled(true);
        buttonRefAdd->setCheckable(true);
        buttonRefAdd->setChecked(false);

        horizontalLayout_4->addWidget(buttonRefAdd);

        buttonRefRemove = new QToolButton(multisection);
        buttonRefRemove->setObjectName(QString::fromUtf8("buttonRefRemove"));
        buttonRefRemove->setCheckable(true);

        horizontalLayout_4->addWidget(buttonRefRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        listWidgetReferences = new QListWidget(multisection);
        listWidgetReferences->setObjectName(QString::fromUtf8("listWidgetReferences"));
        listWidgetReferences->setDragDropMode(QAbstractItemView::InternalMove);

        verticalLayout_2->addWidget(listWidgetReferences);

        stackedWidget->addWidget(multisection);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(PartDesignGui__TaskPipeScaling);
        QObject::connect(comboBoxScaling, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PartDesignGui__TaskPipeScaling);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskPipeScaling)
    {
        label_2->setText(QCoreApplication::translate("PartDesignGui::TaskPipeScaling", "Transform mode", nullptr));
        comboBoxScaling->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskPipeScaling", "Constant", nullptr));
        comboBoxScaling->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskPipeScaling", "Multisection", nullptr));

        buttonRefAdd->setText(QCoreApplication::translate("PartDesignGui::TaskPipeScaling", "Add Section", nullptr));
        buttonRefRemove->setText(QCoreApplication::translate("PartDesignGui::TaskPipeScaling", "Remove Section", nullptr));
#if QT_CONFIG(tooltip)
        listWidgetReferences->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPipeScaling", "List can be reordered by dragging", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)PartDesignGui__TaskPipeScaling;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskPipeScaling: public Ui_TaskPipeScaling {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKPIPESCALING_H
