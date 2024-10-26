/********************************************************************************
** Form generated from reading UI file 'ShapeFromMesh.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPEFROMMESH_H
#define UI_SHAPEFROMMESH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

namespace PartGui {

class Ui_ShapeFromMesh
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxSew;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PartGui__ShapeFromMesh)
    {
        if (PartGui__ShapeFromMesh->objectName().isEmpty())
            PartGui__ShapeFromMesh->setObjectName(QString::fromUtf8("PartGui__ShapeFromMesh"));
        PartGui__ShapeFromMesh->resize(349, 148);
        gridLayout_2 = new QGridLayout(PartGui__ShapeFromMesh);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBoxSew = new QGroupBox(PartGui__ShapeFromMesh);
        groupBoxSew->setObjectName(QString::fromUtf8("groupBoxSew"));
        groupBoxSew->setCheckable(true);
        groupBoxSew->setChecked(true);
        gridLayout = new QGridLayout(groupBoxSew);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBoxSew);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(groupBoxSew);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout->addWidget(doubleSpinBox, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxSew, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PartGui__ShapeFromMesh);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(PartGui__ShapeFromMesh);
        QObject::connect(buttonBox, SIGNAL(accepted()), PartGui__ShapeFromMesh, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PartGui__ShapeFromMesh, SLOT(reject()));

        QMetaObject::connectSlotsByName(PartGui__ShapeFromMesh);
    } // setupUi

    void retranslateUi(QDialog *PartGui__ShapeFromMesh)
    {
        PartGui__ShapeFromMesh->setWindowTitle(QCoreApplication::translate("PartGui::ShapeFromMesh", "Shape from mesh", nullptr));
        groupBoxSew->setTitle(QCoreApplication::translate("PartGui::ShapeFromMesh", "Sew shape", nullptr));
        label->setText(QCoreApplication::translate("PartGui::ShapeFromMesh", "Enter tolerance for sewing shape:", nullptr));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class ShapeFromMesh: public Ui_ShapeFromMesh {};
} // namespace Ui
} // namespace PartGui

#endif // UI_SHAPEFROMMESH_H
