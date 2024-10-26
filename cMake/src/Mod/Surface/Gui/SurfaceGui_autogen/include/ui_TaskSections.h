/********************************************************************************
** Form generated from reading UI file 'TaskSections.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSECTIONS_H
#define UI_TASKSECTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

namespace SurfaceGui {

class Ui_Sections
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *buttonEdgeAdd;
    QToolButton *buttonEdgeRemove;
    QListWidget *listSections;
    QLabel *statusLabel;

    void setupUi(QWidget *SurfaceGui__Sections)
    {
        if (SurfaceGui__Sections->objectName().isEmpty())
            SurfaceGui__Sections->setObjectName(QString::fromUtf8("SurfaceGui__Sections"));
        SurfaceGui__Sections->resize(293, 443);
        gridLayout_2 = new QGridLayout(SurfaceGui__Sections);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(SurfaceGui__Sections);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonEdgeAdd = new QToolButton(groupBox);
        buttonEdgeAdd->setObjectName(QString::fromUtf8("buttonEdgeAdd"));
        buttonEdgeAdd->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonEdgeAdd->sizePolicy().hasHeightForWidth());
        buttonEdgeAdd->setSizePolicy(sizePolicy);
        buttonEdgeAdd->setChecked(false);
        buttonEdgeAdd->setCheckable(true);

        horizontalLayout_2->addWidget(buttonEdgeAdd);

        buttonEdgeRemove = new QToolButton(groupBox);
        buttonEdgeRemove->setObjectName(QString::fromUtf8("buttonEdgeRemove"));
        sizePolicy.setHeightForWidth(buttonEdgeRemove->sizePolicy().hasHeightForWidth());
        buttonEdgeRemove->setSizePolicy(sizePolicy);
        buttonEdgeRemove->setCheckable(true);

        horizontalLayout_2->addWidget(buttonEdgeRemove);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        listSections = new QListWidget(groupBox);
        listSections->setObjectName(QString::fromUtf8("listSections"));
        listSections->setDragDropMode(QAbstractItemView::InternalMove);

        gridLayout->addWidget(listSections, 1, 0, 1, 2);

        statusLabel = new QLabel(groupBox);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setText(QString::fromUtf8("Status messages"));

        gridLayout->addWidget(statusLabel, 2, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SurfaceGui__Sections);

        QMetaObject::connectSlotsByName(SurfaceGui__Sections);
    } // setupUi

    void retranslateUi(QWidget *SurfaceGui__Sections)
    {
        SurfaceGui__Sections->setWindowTitle(QCoreApplication::translate("SurfaceGui::Sections", "Sectional edges", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("SurfaceGui::Sections", "Add the edges that will be sectional cuts of the surface,\n"
"that is, the surface will be forced to pass through these edges.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("SurfaceGui::Sections", "Sectional edges", nullptr));
        buttonEdgeAdd->setText(QCoreApplication::translate("SurfaceGui::Sections", "Add Edge", nullptr));
        buttonEdgeRemove->setText(QCoreApplication::translate("SurfaceGui::Sections", "Remove Edge", nullptr));
#if QT_CONFIG(tooltip)
        listSections->setToolTip(QCoreApplication::translate("SurfaceGui::Sections", "<html><head/><body><p>List can be reordered by dragging</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace SurfaceGui

namespace SurfaceGui {
namespace Ui {
    class Sections: public Ui_Sections {};
} // namespace Ui
} // namespace SurfaceGui

#endif // UI_TASKSECTIONS_H
