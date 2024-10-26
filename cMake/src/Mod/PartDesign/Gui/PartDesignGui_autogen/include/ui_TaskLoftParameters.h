/********************************************************************************
** Form generated from reading UI file 'TaskLoftParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLOFTPARAMETERS_H
#define UI_TASKLOFTPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartDesignGui {

class Ui_TaskLoftParameters
{
public:
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxRuled;
    QCheckBox *checkBoxClosed;
    QGroupBox *groupprofile;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *buttonProfileBase;
    QLineEdit *profileBaseEdit;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *buttonRefAdd;
    QToolButton *buttonRefRemove;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidgetReferences;
    QFrame *line;
    QCheckBox *checkBoxUpdateView;

    void setupUi(QWidget *PartDesignGui__TaskLoftParameters)
    {
        if (PartDesignGui__TaskLoftParameters->objectName().isEmpty())
            PartDesignGui__TaskLoftParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskLoftParameters"));
        PartDesignGui__TaskLoftParameters->resize(262, 293);
        PartDesignGui__TaskLoftParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(PartDesignGui__TaskLoftParameters);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBoxRuled = new QCheckBox(PartDesignGui__TaskLoftParameters);
        checkBoxRuled->setObjectName(QString::fromUtf8("checkBoxRuled"));

        verticalLayout_3->addWidget(checkBoxRuled);

        checkBoxClosed = new QCheckBox(PartDesignGui__TaskLoftParameters);
        checkBoxClosed->setObjectName(QString::fromUtf8("checkBoxClosed"));

        verticalLayout_3->addWidget(checkBoxClosed);

        groupprofile = new QGroupBox(PartDesignGui__TaskLoftParameters);
        groupprofile->setObjectName(QString::fromUtf8("groupprofile"));
        vboxLayout = new QVBoxLayout(groupprofile);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonProfileBase = new QToolButton(groupprofile);
        buttonProfileBase->setObjectName(QString::fromUtf8("buttonProfileBase"));
        buttonProfileBase->setCheckable(true);

        hboxLayout->addWidget(buttonProfileBase);

        profileBaseEdit = new QLineEdit(groupprofile);
        profileBaseEdit->setObjectName(QString::fromUtf8("profileBaseEdit"));

        hboxLayout->addWidget(profileBaseEdit);


        vboxLayout->addLayout(hboxLayout);


        verticalLayout_3->addWidget(groupprofile);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonRefAdd = new QToolButton(PartDesignGui__TaskLoftParameters);
        buttonRefAdd->setObjectName(QString::fromUtf8("buttonRefAdd"));
        buttonRefAdd->setEnabled(true);
        buttonRefAdd->setCheckable(true);
        buttonRefAdd->setChecked(false);

        horizontalLayout_4->addWidget(buttonRefAdd);

        buttonRefRemove = new QToolButton(PartDesignGui__TaskLoftParameters);
        buttonRefRemove->setObjectName(QString::fromUtf8("buttonRefRemove"));
        buttonRefRemove->setCheckable(true);

        horizontalLayout_4->addWidget(buttonRefRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_4);

        listWidgetReferences = new QListWidget(PartDesignGui__TaskLoftParameters);
        listWidgetReferences->setObjectName(QString::fromUtf8("listWidgetReferences"));
        listWidgetReferences->setDragDropMode(QAbstractItemView::InternalMove);

        verticalLayout_3->addWidget(listWidgetReferences);

        line = new QFrame(PartDesignGui__TaskLoftParameters);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskLoftParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout_3->addWidget(checkBoxUpdateView);

        QWidget::setTabOrder(checkBoxRuled, checkBoxClosed);
        QWidget::setTabOrder(checkBoxClosed, buttonProfileBase);
        QWidget::setTabOrder(buttonProfileBase, profileBaseEdit);
        QWidget::setTabOrder(profileBaseEdit, buttonRefAdd);
        QWidget::setTabOrder(buttonRefAdd, buttonRefRemove);
        QWidget::setTabOrder(buttonRefRemove, listWidgetReferences);
        QWidget::setTabOrder(listWidgetReferences, checkBoxUpdateView);

        retranslateUi(PartDesignGui__TaskLoftParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskLoftParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskLoftParameters)
    {
        checkBoxRuled->setText(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "Ruled surface", nullptr));
        checkBoxClosed->setText(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "Closed", nullptr));
        groupprofile->setTitle(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "Profile", nullptr));
        buttonProfileBase->setText(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "Object", nullptr));
        buttonRefAdd->setText(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "Add Section", nullptr));
        buttonRefRemove->setText(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "Remove Section", nullptr));
#if QT_CONFIG(tooltip)
        listWidgetReferences->setToolTip(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "List can be reordered by dragging", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUpdateView->setText(QCoreApplication::translate("PartDesignGui::TaskLoftParameters", "Update view", nullptr));
        (void)PartDesignGui__TaskLoftParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskLoftParameters: public Ui_TaskLoftParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKLOFTPARAMETERS_H
