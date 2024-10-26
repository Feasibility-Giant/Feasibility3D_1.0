/********************************************************************************
** Form generated from reading UI file 'TaskFilling.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFILLING_H
#define UI_TASKFILLING_H

#include <Gui/Widgets.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

namespace SurfaceGui {

class Ui_TaskFilling
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonInitFace;
    Gui::ClearLineEdit *lineInitFaceName;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonEdgeAdd;
    QToolButton *buttonEdgeRemove;
    QListWidget *listBoundary;
    QLabel *label_3;
    QLabel *statusLabel;
    QLabel *label;
    QComboBox *comboBoxFaces;
    QLabel *label_2;
    QComboBox *comboBoxCont;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonAccept;
    QPushButton *buttonIgnore;

    void setupUi(QWidget *SurfaceGui__TaskFilling)
    {
        if (SurfaceGui__TaskFilling->objectName().isEmpty())
            SurfaceGui__TaskFilling->setObjectName(QString::fromUtf8("SurfaceGui__TaskFilling"));
        SurfaceGui__TaskFilling->resize(356, 467);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SurfaceGui__TaskFilling->sizePolicy().hasHeightForWidth());
        SurfaceGui__TaskFilling->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(SurfaceGui__TaskFilling);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonInitFace = new QPushButton(SurfaceGui__TaskFilling);
        buttonInitFace->setObjectName(QString::fromUtf8("buttonInitFace"));

        horizontalLayout_2->addWidget(buttonInitFace);

        lineInitFaceName = new Gui::ClearLineEdit(SurfaceGui__TaskFilling);
        lineInitFaceName->setObjectName(QString::fromUtf8("lineInitFaceName"));
        lineInitFaceName->setReadOnly(true);

        horizontalLayout_2->addWidget(lineInitFaceName);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(SurfaceGui__TaskFilling);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonEdgeAdd = new QToolButton(groupBox);
        buttonEdgeAdd->setObjectName(QString::fromUtf8("buttonEdgeAdd"));
        buttonEdgeAdd->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonEdgeAdd->sizePolicy().hasHeightForWidth());
        buttonEdgeAdd->setSizePolicy(sizePolicy1);
        buttonEdgeAdd->setCheckable(true);
        buttonEdgeAdd->setChecked(false);

        horizontalLayout->addWidget(buttonEdgeAdd);

        buttonEdgeRemove = new QToolButton(groupBox);
        buttonEdgeRemove->setObjectName(QString::fromUtf8("buttonEdgeRemove"));
        sizePolicy1.setHeightForWidth(buttonEdgeRemove->sizePolicy().hasHeightForWidth());
        buttonEdgeRemove->setSizePolicy(sizePolicy1);
        buttonEdgeRemove->setCheckable(true);

        horizontalLayout->addWidget(buttonEdgeRemove);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        listBoundary = new QListWidget(groupBox);
        listBoundary->setObjectName(QString::fromUtf8("listBoundary"));
        listBoundary->setDragDropMode(QAbstractItemView::InternalMove);

        gridLayout->addWidget(listBoundary, 1, 0, 1, 3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3, 2, 0, 1, 3);

        statusLabel = new QLabel(groupBox);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setText(QString::fromUtf8("Status messages"));

        gridLayout->addWidget(statusLabel, 3, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label, 4, 0, 1, 1);

        comboBoxFaces = new QComboBox(groupBox);
        comboBoxFaces->setObjectName(QString::fromUtf8("comboBoxFaces"));
        comboBoxFaces->setEnabled(false);

        gridLayout->addWidget(comboBoxFaces, 4, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        comboBoxCont = new QComboBox(groupBox);
        comboBoxCont->setObjectName(QString::fromUtf8("comboBoxCont"));
        comboBoxCont->setEnabled(false);

        gridLayout->addWidget(comboBoxCont, 5, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(74, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        buttonAccept = new QPushButton(groupBox);
        buttonAccept->setObjectName(QString::fromUtf8("buttonAccept"));
        buttonAccept->setEnabled(false);

        gridLayout->addWidget(buttonAccept, 6, 1, 1, 1);

        buttonIgnore = new QPushButton(groupBox);
        buttonIgnore->setObjectName(QString::fromUtf8("buttonIgnore"));
        buttonIgnore->setEnabled(false);

        gridLayout->addWidget(buttonIgnore, 6, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);


        retranslateUi(SurfaceGui__TaskFilling);

        QMetaObject::connectSlotsByName(SurfaceGui__TaskFilling);
    } // setupUi

    void retranslateUi(QWidget *SurfaceGui__TaskFilling)
    {
        SurfaceGui__TaskFilling->setWindowTitle(QCoreApplication::translate("SurfaceGui::TaskFilling", "Boundaries", nullptr));
        buttonInitFace->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Support surface", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("SurfaceGui::TaskFilling", "Add the edges that will limit the surface.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("SurfaceGui::TaskFilling", "Boundary edges", nullptr));
        buttonEdgeAdd->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Add Edge", nullptr));
        buttonEdgeRemove->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Remove Edge", nullptr));
#if QT_CONFIG(tooltip)
        listBoundary->setToolTip(QCoreApplication::translate("SurfaceGui::TaskFilling", "Drag the items to reorder the list", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Drag the items to reorder the list.", nullptr));
        label->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Faces:", nullptr));
        label_2->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Continuity:", nullptr));
        buttonAccept->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Accept", nullptr));
        buttonIgnore->setText(QCoreApplication::translate("SurfaceGui::TaskFilling", "Ignore", nullptr));
    } // retranslateUi

};

} // namespace SurfaceGui

namespace SurfaceGui {
namespace Ui {
    class TaskFilling: public Ui_TaskFilling {};
} // namespace Ui
} // namespace SurfaceGui

#endif // UI_TASKFILLING_H
