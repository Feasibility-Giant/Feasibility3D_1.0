/********************************************************************************
** Form generated from reading UI file 'DlgProjectionOnSurface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROJECTIONONSURFACE_H
#define UI_DLGPROJECTIONONSURFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartGui {

class Ui_DlgProjectionOnSurface
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonAddProjFace;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddFace;
    QPushButton *pushButtonAddWire;
    QPushButton *pushButtonAddEdge;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButtonShowAll;
    QRadioButton *radioButtonFaces;
    QRadioButton *radioButtonEdges;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelExtrudeHeigth;
    QDoubleSpinBox *doubleSpinBoxExtrudeHeight;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelDepth;
    QDoubleSpinBox *doubleSpinBoxSolidDepth;
    QGroupBox *groupBoxDir;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonGetCurrentCamDir;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonDirX;
    QDoubleSpinBox *doubleSpinBoxDirX;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonDirY;
    QDoubleSpinBox *doubleSpinBoxDirY;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonDirZ;
    QDoubleSpinBox *doubleSpinBoxDirZ;

    void setupUi(QWidget *PartGui__DlgProjectionOnSurface)
    {
        if (PartGui__DlgProjectionOnSurface->objectName().isEmpty())
            PartGui__DlgProjectionOnSurface->setObjectName(QString::fromUtf8("PartGui__DlgProjectionOnSurface"));
        PartGui__DlgProjectionOnSurface->resize(400, 764);
        verticalLayout = new QVBoxLayout(PartGui__DlgProjectionOnSurface);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonAddProjFace = new QPushButton(PartGui__DlgProjectionOnSurface);
        pushButtonAddProjFace->setObjectName(QString::fromUtf8("pushButtonAddProjFace"));

        verticalLayout->addWidget(pushButtonAddProjFace);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAddFace = new QPushButton(PartGui__DlgProjectionOnSurface);
        pushButtonAddFace->setObjectName(QString::fromUtf8("pushButtonAddFace"));

        horizontalLayout->addWidget(pushButtonAddFace);

        pushButtonAddWire = new QPushButton(PartGui__DlgProjectionOnSurface);
        pushButtonAddWire->setObjectName(QString::fromUtf8("pushButtonAddWire"));

        horizontalLayout->addWidget(pushButtonAddWire);

        pushButtonAddEdge = new QPushButton(PartGui__DlgProjectionOnSurface);
        pushButtonAddEdge->setObjectName(QString::fromUtf8("pushButtonAddEdge"));

        horizontalLayout->addWidget(pushButtonAddEdge);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        radioButtonShowAll = new QRadioButton(PartGui__DlgProjectionOnSurface);
        radioButtonShowAll->setObjectName(QString::fromUtf8("radioButtonShowAll"));
        radioButtonShowAll->setChecked(true);

        horizontalLayout_5->addWidget(radioButtonShowAll);

        radioButtonFaces = new QRadioButton(PartGui__DlgProjectionOnSurface);
        radioButtonFaces->setObjectName(QString::fromUtf8("radioButtonFaces"));
        radioButtonFaces->setChecked(false);

        horizontalLayout_5->addWidget(radioButtonFaces);

        radioButtonEdges = new QRadioButton(PartGui__DlgProjectionOnSurface);
        radioButtonEdges->setObjectName(QString::fromUtf8("radioButtonEdges"));
        radioButtonEdges->setChecked(false);

        horizontalLayout_5->addWidget(radioButtonEdges);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelExtrudeHeigth = new QLabel(PartGui__DlgProjectionOnSurface);
        labelExtrudeHeigth->setObjectName(QString::fromUtf8("labelExtrudeHeigth"));
        labelExtrudeHeigth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(labelExtrudeHeigth);

        doubleSpinBoxExtrudeHeight = new QDoubleSpinBox(PartGui__DlgProjectionOnSurface);
        doubleSpinBoxExtrudeHeight->setObjectName(QString::fromUtf8("doubleSpinBoxExtrudeHeight"));
        doubleSpinBoxExtrudeHeight->setMaximum(999.000000000000000);
        doubleSpinBoxExtrudeHeight->setValue(10.000000000000000);

        horizontalLayout_6->addWidget(doubleSpinBoxExtrudeHeight);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelDepth = new QLabel(PartGui__DlgProjectionOnSurface);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));
        labelDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(labelDepth);

        doubleSpinBoxSolidDepth = new QDoubleSpinBox(PartGui__DlgProjectionOnSurface);
        doubleSpinBoxSolidDepth->setObjectName(QString::fromUtf8("doubleSpinBoxSolidDepth"));
        doubleSpinBoxSolidDepth->setMinimum(-999.000000000000000);
        doubleSpinBoxSolidDepth->setMaximum(999.000000000000000);
        doubleSpinBoxSolidDepth->setValue(0.000000000000000);

        horizontalLayout_7->addWidget(doubleSpinBoxSolidDepth);


        verticalLayout->addLayout(horizontalLayout_7);

        groupBoxDir = new QGroupBox(PartGui__DlgProjectionOnSurface);
        groupBoxDir->setObjectName(QString::fromUtf8("groupBoxDir"));
        verticalLayout_2 = new QVBoxLayout(groupBoxDir);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonGetCurrentCamDir = new QPushButton(groupBoxDir);
        pushButtonGetCurrentCamDir->setObjectName(QString::fromUtf8("pushButtonGetCurrentCamDir"));

        verticalLayout_2->addWidget(pushButtonGetCurrentCamDir);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonDirX = new QPushButton(groupBoxDir);
        pushButtonDirX->setObjectName(QString::fromUtf8("pushButtonDirX"));

        horizontalLayout_2->addWidget(pushButtonDirX);

        doubleSpinBoxDirX = new QDoubleSpinBox(groupBoxDir);
        doubleSpinBoxDirX->setObjectName(QString::fromUtf8("doubleSpinBoxDirX"));
        doubleSpinBoxDirX->setEnabled(false);
        doubleSpinBoxDirX->setReadOnly(false);
        doubleSpinBoxDirX->setMinimum(-1.000000000000000);
        doubleSpinBoxDirX->setMaximum(1.000000000000000);
        doubleSpinBoxDirX->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxDirX);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonDirY = new QPushButton(groupBoxDir);
        pushButtonDirY->setObjectName(QString::fromUtf8("pushButtonDirY"));

        horizontalLayout_3->addWidget(pushButtonDirY);

        doubleSpinBoxDirY = new QDoubleSpinBox(groupBoxDir);
        doubleSpinBoxDirY->setObjectName(QString::fromUtf8("doubleSpinBoxDirY"));
        doubleSpinBoxDirY->setEnabled(false);
        doubleSpinBoxDirY->setMinimum(-1.000000000000000);
        doubleSpinBoxDirY->setMaximum(1.000000000000000);
        doubleSpinBoxDirY->setSingleStep(0.100000000000000);

        horizontalLayout_3->addWidget(doubleSpinBoxDirY);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButtonDirZ = new QPushButton(groupBoxDir);
        pushButtonDirZ->setObjectName(QString::fromUtf8("pushButtonDirZ"));

        horizontalLayout_4->addWidget(pushButtonDirZ);

        doubleSpinBoxDirZ = new QDoubleSpinBox(groupBoxDir);
        doubleSpinBoxDirZ->setObjectName(QString::fromUtf8("doubleSpinBoxDirZ"));
        doubleSpinBoxDirZ->setEnabled(false);
        doubleSpinBoxDirZ->setMinimum(-1.000000000000000);
        doubleSpinBoxDirZ->setMaximum(1.000000000000000);
        doubleSpinBoxDirZ->setSingleStep(0.100000000000000);

        horizontalLayout_4->addWidget(doubleSpinBoxDirZ);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBoxDir);


        retranslateUi(PartGui__DlgProjectionOnSurface);

        QMetaObject::connectSlotsByName(PartGui__DlgProjectionOnSurface);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgProjectionOnSurface)
    {
        PartGui__DlgProjectionOnSurface->setWindowTitle(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Projection on surface", nullptr));
        pushButtonAddProjFace->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Select projection surface", nullptr));
        pushButtonAddFace->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Add face", nullptr));
        pushButtonAddWire->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Add wire", nullptr));
        pushButtonAddEdge->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Add edge", nullptr));
        radioButtonShowAll->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Show all", nullptr));
        radioButtonFaces->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Show faces", nullptr));
        radioButtonEdges->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Show Edges", nullptr));
        labelExtrudeHeigth->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Extrude height", nullptr));
        labelDepth->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Solid depth", nullptr));
        groupBoxDir->setTitle(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Direction", nullptr));
        pushButtonGetCurrentCamDir->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Get current camera direction", nullptr));
        pushButtonDirX->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "X:", nullptr));
        pushButtonDirY->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Y:", nullptr));
        pushButtonDirZ->setText(QCoreApplication::translate("PartGui::DlgProjectionOnSurface", "Z:", nullptr));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgProjectionOnSurface: public Ui_DlgProjectionOnSurface {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPROJECTIONONSURFACE_H
