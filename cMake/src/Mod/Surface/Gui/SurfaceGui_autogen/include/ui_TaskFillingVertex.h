/********************************************************************************
** Form generated from reading UI file 'TaskFillingVertex.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFILLINGVERTEX_H
#define UI_TASKFILLINGVERTEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

namespace SurfaceGui {

class Ui_TaskFillingVertex
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonVertexAdd;
    QToolButton *buttonVertexRemove;
    QListWidget *listFreeVertex;

    void setupUi(QWidget *SurfaceGui__TaskFillingVertex)
    {
        if (SurfaceGui__TaskFillingVertex->objectName().isEmpty())
            SurfaceGui__TaskFillingVertex->setObjectName(QString::fromUtf8("SurfaceGui__TaskFillingVertex"));
        SurfaceGui__TaskFillingVertex->resize(390, 329);
        gridLayout_2 = new QGridLayout(SurfaceGui__TaskFillingVertex);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(SurfaceGui__TaskFillingVertex);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonVertexAdd = new QToolButton(groupBox);
        buttonVertexAdd->setObjectName(QString::fromUtf8("buttonVertexAdd"));
        buttonVertexAdd->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonVertexAdd->sizePolicy().hasHeightForWidth());
        buttonVertexAdd->setSizePolicy(sizePolicy);
        buttonVertexAdd->setCheckable(true);
        buttonVertexAdd->setChecked(false);

        horizontalLayout->addWidget(buttonVertexAdd);

        buttonVertexRemove = new QToolButton(groupBox);
        buttonVertexRemove->setObjectName(QString::fromUtf8("buttonVertexRemove"));
        sizePolicy.setHeightForWidth(buttonVertexRemove->sizePolicy().hasHeightForWidth());
        buttonVertexRemove->setSizePolicy(sizePolicy);
        buttonVertexRemove->setCheckable(true);

        horizontalLayout->addWidget(buttonVertexRemove);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        listFreeVertex = new QListWidget(groupBox);
        listFreeVertex->setObjectName(QString::fromUtf8("listFreeVertex"));

        gridLayout->addWidget(listFreeVertex, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SurfaceGui__TaskFillingVertex);

        QMetaObject::connectSlotsByName(SurfaceGui__TaskFillingVertex);
    } // setupUi

    void retranslateUi(QWidget *SurfaceGui__TaskFillingVertex)
    {
        SurfaceGui__TaskFillingVertex->setWindowTitle(QCoreApplication::translate("SurfaceGui::TaskFillingVertex", "Vertex constraints", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("SurfaceGui::TaskFillingVertex", "Add vertices that will be used to constrain the surface,\n"
"that is, the surface will be forced to pass through these points.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("SurfaceGui::TaskFillingVertex", "Non-boundary vertices", nullptr));
        buttonVertexAdd->setText(QCoreApplication::translate("SurfaceGui::TaskFillingVertex", "Add Vertex", nullptr));
        buttonVertexRemove->setText(QCoreApplication::translate("SurfaceGui::TaskFillingVertex", "Remove Vertex", nullptr));
    } // retranslateUi

};

} // namespace SurfaceGui

namespace SurfaceGui {
namespace Ui {
    class TaskFillingVertex: public Ui_TaskFillingVertex {};
} // namespace Ui
} // namespace SurfaceGui

#endif // UI_TASKFILLINGVERTEX_H
