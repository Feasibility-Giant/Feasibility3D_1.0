/********************************************************************************
** Form generated from reading UI file 'TaskFillingEdge.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFILLINGEDGE_H
#define UI_TASKFILLINGEDGE_H

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

class Ui_TaskFillingEdge
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonUnboundEdgeAdd;
    QToolButton *buttonUnboundEdgeRemove;
    QListWidget *listUnbound;
    QLabel *statusLabel;
    QLabel *label;
    QComboBox *comboBoxUnboundFaces;
    QLabel *label_2;
    QComboBox *comboBoxUnboundCont;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonUnboundAccept;
    QPushButton *buttonUnboundIgnore;

    void setupUi(QWidget *SurfaceGui__TaskFillingEdge)
    {
        if (SurfaceGui__TaskFillingEdge->objectName().isEmpty())
            SurfaceGui__TaskFillingEdge->setObjectName(QString::fromUtf8("SurfaceGui__TaskFillingEdge"));
        SurfaceGui__TaskFillingEdge->resize(360, 400);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SurfaceGui__TaskFillingEdge->sizePolicy().hasHeightForWidth());
        SurfaceGui__TaskFillingEdge->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(SurfaceGui__TaskFillingEdge);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(SurfaceGui__TaskFillingEdge);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonUnboundEdgeAdd = new QToolButton(groupBox);
        buttonUnboundEdgeAdd->setObjectName(QString::fromUtf8("buttonUnboundEdgeAdd"));
        buttonUnboundEdgeAdd->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonUnboundEdgeAdd->sizePolicy().hasHeightForWidth());
        buttonUnboundEdgeAdd->setSizePolicy(sizePolicy1);
        buttonUnboundEdgeAdd->setCheckable(true);
        buttonUnboundEdgeAdd->setChecked(false);

        horizontalLayout->addWidget(buttonUnboundEdgeAdd);

        buttonUnboundEdgeRemove = new QToolButton(groupBox);
        buttonUnboundEdgeRemove->setObjectName(QString::fromUtf8("buttonUnboundEdgeRemove"));
        sizePolicy1.setHeightForWidth(buttonUnboundEdgeRemove->sizePolicy().hasHeightForWidth());
        buttonUnboundEdgeRemove->setSizePolicy(sizePolicy1);
        buttonUnboundEdgeRemove->setCheckable(true);

        horizontalLayout->addWidget(buttonUnboundEdgeRemove);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        listUnbound = new QListWidget(groupBox);
        listUnbound->setObjectName(QString::fromUtf8("listUnbound"));

        gridLayout->addWidget(listUnbound, 1, 0, 1, 3);

        statusLabel = new QLabel(groupBox);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setText(QString::fromUtf8("Status messages"));

        gridLayout->addWidget(statusLabel, 2, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        comboBoxUnboundFaces = new QComboBox(groupBox);
        comboBoxUnboundFaces->setObjectName(QString::fromUtf8("comboBoxUnboundFaces"));
        comboBoxUnboundFaces->setEnabled(false);

        gridLayout->addWidget(comboBoxUnboundFaces, 3, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        comboBoxUnboundCont = new QComboBox(groupBox);
        comboBoxUnboundCont->setObjectName(QString::fromUtf8("comboBoxUnboundCont"));
        comboBoxUnboundCont->setEnabled(false);

        gridLayout->addWidget(comboBoxUnboundCont, 4, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(74, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        buttonUnboundAccept = new QPushButton(groupBox);
        buttonUnboundAccept->setObjectName(QString::fromUtf8("buttonUnboundAccept"));
        buttonUnboundAccept->setEnabled(false);

        gridLayout->addWidget(buttonUnboundAccept, 5, 1, 1, 1);

        buttonUnboundIgnore = new QPushButton(groupBox);
        buttonUnboundIgnore->setObjectName(QString::fromUtf8("buttonUnboundIgnore"));
        buttonUnboundIgnore->setEnabled(false);

        gridLayout->addWidget(buttonUnboundIgnore, 5, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SurfaceGui__TaskFillingEdge);

        QMetaObject::connectSlotsByName(SurfaceGui__TaskFillingEdge);
    } // setupUi

    void retranslateUi(QWidget *SurfaceGui__TaskFillingEdge)
    {
        SurfaceGui__TaskFillingEdge->setWindowTitle(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Edge constraints", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Add edges that will be used to constrain the surface,\n"
"that is, the surface will be forced to pass through these edges.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Non-boundary edges", nullptr));
        buttonUnboundEdgeAdd->setText(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Add Edge", nullptr));
        buttonUnboundEdgeRemove->setText(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Remove Edge", nullptr));
        label->setText(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Faces:", nullptr));
        label_2->setText(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Continuity:", nullptr));
        buttonUnboundAccept->setText(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Accept", nullptr));
        buttonUnboundIgnore->setText(QCoreApplication::translate("SurfaceGui::TaskFillingEdge", "Ignore", nullptr));
    } // retranslateUi

};

} // namespace SurfaceGui

namespace SurfaceGui {
namespace Ui {
    class TaskFillingEdge: public Ui_TaskFillingEdge {};
} // namespace Ui
} // namespace SurfaceGui

#endif // UI_TASKFILLINGEDGE_H
