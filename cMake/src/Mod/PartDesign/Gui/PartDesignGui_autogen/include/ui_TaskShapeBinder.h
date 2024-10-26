/********************************************************************************
** Form generated from reading UI file 'TaskShapeBinder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSHAPEBINDER_H
#define UI_TASKSHAPEBINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartDesignGui {

class Ui_TaskShapeBinder
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonBase;
    QLineEdit *baseEdit;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *buttonRefAdd;
    QToolButton *buttonRefRemove;
    QListWidget *listWidgetReferences;

    void setupUi(QWidget *PartDesignGui__TaskShapeBinder)
    {
        if (PartDesignGui__TaskShapeBinder->objectName().isEmpty())
            PartDesignGui__TaskShapeBinder->setObjectName(QString::fromUtf8("PartDesignGui__TaskShapeBinder"));
        PartDesignGui__TaskShapeBinder->resize(309, 331);
        PartDesignGui__TaskShapeBinder->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskShapeBinder);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBase = new QToolButton(PartDesignGui__TaskShapeBinder);
        buttonBase->setObjectName(QString::fromUtf8("buttonBase"));
        buttonBase->setCheckable(true);

        horizontalLayout->addWidget(buttonBase);

        baseEdit = new QLineEdit(PartDesignGui__TaskShapeBinder);
        baseEdit->setObjectName(QString::fromUtf8("baseEdit"));

        horizontalLayout->addWidget(baseEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonRefAdd = new QToolButton(PartDesignGui__TaskShapeBinder);
        buttonRefAdd->setObjectName(QString::fromUtf8("buttonRefAdd"));
        buttonRefAdd->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonRefAdd->sizePolicy().hasHeightForWidth());
        buttonRefAdd->setSizePolicy(sizePolicy);
        buttonRefAdd->setCheckable(true);
        buttonRefAdd->setChecked(false);

        horizontalLayout_4->addWidget(buttonRefAdd);

        buttonRefRemove = new QToolButton(PartDesignGui__TaskShapeBinder);
        buttonRefRemove->setObjectName(QString::fromUtf8("buttonRefRemove"));
        sizePolicy.setHeightForWidth(buttonRefRemove->sizePolicy().hasHeightForWidth());
        buttonRefRemove->setSizePolicy(sizePolicy);
        buttonRefRemove->setCheckable(true);

        horizontalLayout_4->addWidget(buttonRefRemove);


        verticalLayout->addLayout(horizontalLayout_4);

        listWidgetReferences = new QListWidget(PartDesignGui__TaskShapeBinder);
        listWidgetReferences->setObjectName(QString::fromUtf8("listWidgetReferences"));

        verticalLayout->addWidget(listWidgetReferences);

        QWidget::setTabOrder(buttonBase, baseEdit);
        QWidget::setTabOrder(baseEdit, buttonRefAdd);
        QWidget::setTabOrder(buttonRefAdd, buttonRefRemove);
        QWidget::setTabOrder(buttonRefRemove, listWidgetReferences);

        retranslateUi(PartDesignGui__TaskShapeBinder);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskShapeBinder);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskShapeBinder)
    {
        buttonBase->setText(QCoreApplication::translate("PartDesignGui::TaskShapeBinder", "Object", nullptr));
        buttonRefAdd->setText(QCoreApplication::translate("PartDesignGui::TaskShapeBinder", "Add Geometry", nullptr));
        buttonRefRemove->setText(QCoreApplication::translate("PartDesignGui::TaskShapeBinder", "Remove Geometry", nullptr));
        (void)PartDesignGui__TaskShapeBinder;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskShapeBinder: public Ui_TaskShapeBinder {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKSHAPEBINDER_H
