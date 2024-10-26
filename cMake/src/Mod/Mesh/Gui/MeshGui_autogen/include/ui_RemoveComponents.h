/********************************************************************************
** Form generated from reading UI file 'RemoveComponents.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECOMPONENTS_H
#define UI_REMOVECOMPONENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace MeshGui {

class Ui_RemoveComponents
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *selectRegion;
    QSpacerItem *spacerItem;
    QPushButton *selectAll;
    QSpacerItem *spacerItem1;
    QPushButton *selectComponents;
    QLabel *label;
    QSpinBox *spSelectComp;
    QPushButton *selectTriangle;
    QCheckBox *cbSelectComp;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QPushButton *deselectRegion;
    QSpacerItem *spacerItem2;
    QPushButton *deselectAll;
    QSpacerItem *spacerItem3;
    QPushButton *deselectComponents;
    QLabel *label_2;
    QSpinBox *spDeselectComp;
    QPushButton *deselectTriangle;
    QCheckBox *cbDeselectComp;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *visibleTriangles;
    QCheckBox *screenTriangles;

    void setupUi(QWidget *MeshGui__RemoveComponents)
    {
        if (MeshGui__RemoveComponents->objectName().isEmpty())
            MeshGui__RemoveComponents->setObjectName(QString::fromUtf8("MeshGui__RemoveComponents"));
        MeshGui__RemoveComponents->resize(303, 471);
        gridLayout_2 = new QGridLayout(MeshGui__RemoveComponents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(MeshGui__RemoveComponents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selectRegion = new QPushButton(groupBox);
        selectRegion->setObjectName(QString::fromUtf8("selectRegion"));

        gridLayout->addWidget(selectRegion, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 2);

        selectAll = new QPushButton(groupBox);
        selectAll->setObjectName(QString::fromUtf8("selectAll"));

        gridLayout->addWidget(selectAll, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 1, 1, 2);

        selectComponents = new QPushButton(groupBox);
        selectComponents->setObjectName(QString::fromUtf8("selectComponents"));

        gridLayout->addWidget(selectComponents, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 1, 1, 1);

        spSelectComp = new QSpinBox(groupBox);
        spSelectComp->setObjectName(QString::fromUtf8("spSelectComp"));

        gridLayout->addWidget(spSelectComp, 2, 2, 1, 1);

        selectTriangle = new QPushButton(groupBox);
        selectTriangle->setObjectName(QString::fromUtf8("selectTriangle"));

        gridLayout->addWidget(selectTriangle, 3, 0, 1, 1);

        cbSelectComp = new QCheckBox(groupBox);
        cbSelectComp->setObjectName(QString::fromUtf8("cbSelectComp"));

        gridLayout->addWidget(cbSelectComp, 3, 1, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MeshGui__RemoveComponents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        deselectRegion = new QPushButton(groupBox_2);
        deselectRegion->setObjectName(QString::fromUtf8("deselectRegion"));

        gridLayout1->addWidget(deselectRegion, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 0, 1, 1, 2);

        deselectAll = new QPushButton(groupBox_2);
        deselectAll->setObjectName(QString::fromUtf8("deselectAll"));

        gridLayout1->addWidget(deselectAll, 1, 0, 1, 1);

        spacerItem3 = new QSpacerItem(181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 1, 1, 1, 2);

        deselectComponents = new QPushButton(groupBox_2);
        deselectComponents->setObjectName(QString::fromUtf8("deselectComponents"));

        gridLayout1->addWidget(deselectComponents, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 2, 1, 1, 1);

        spDeselectComp = new QSpinBox(groupBox_2);
        spDeselectComp->setObjectName(QString::fromUtf8("spDeselectComp"));

        gridLayout1->addWidget(spDeselectComp, 2, 2, 1, 1);

        deselectTriangle = new QPushButton(groupBox_2);
        deselectTriangle->setObjectName(QString::fromUtf8("deselectTriangle"));

        gridLayout1->addWidget(deselectTriangle, 3, 0, 1, 1);

        cbDeselectComp = new QCheckBox(groupBox_2);
        cbDeselectComp->setObjectName(QString::fromUtf8("cbDeselectComp"));

        gridLayout1->addWidget(cbDeselectComp, 3, 1, 1, 2);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(MeshGui__RemoveComponents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        visibleTriangles = new QCheckBox(groupBox_3);
        visibleTriangles->setObjectName(QString::fromUtf8("visibleTriangles"));
        visibleTriangles->setChecked(false);

        gridLayout_3->addWidget(visibleTriangles, 0, 0, 1, 1);

        screenTriangles = new QCheckBox(groupBox_3);
        screenTriangles->setObjectName(QString::fromUtf8("screenTriangles"));
        screenTriangles->setChecked(true);

        gridLayout_3->addWidget(screenTriangles, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 1);

        QWidget::setTabOrder(selectRegion, selectAll);
        QWidget::setTabOrder(selectAll, selectComponents);
        QWidget::setTabOrder(selectComponents, spSelectComp);
        QWidget::setTabOrder(spSelectComp, selectTriangle);
        QWidget::setTabOrder(selectTriangle, cbSelectComp);
        QWidget::setTabOrder(cbSelectComp, deselectRegion);
        QWidget::setTabOrder(deselectRegion, deselectAll);
        QWidget::setTabOrder(deselectAll, deselectComponents);
        QWidget::setTabOrder(deselectComponents, spDeselectComp);
        QWidget::setTabOrder(spDeselectComp, deselectTriangle);
        QWidget::setTabOrder(deselectTriangle, cbDeselectComp);

        retranslateUi(MeshGui__RemoveComponents);

        QMetaObject::connectSlotsByName(MeshGui__RemoveComponents);
    } // setupUi

    void retranslateUi(QWidget *MeshGui__RemoveComponents)
    {
        MeshGui__RemoveComponents->setWindowTitle(QCoreApplication::translate("MeshGui::RemoveComponents", "Remove components", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MeshGui::RemoveComponents", "Select", nullptr));
        selectRegion->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Region", nullptr));
        selectAll->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "All", nullptr));
        selectComponents->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Components", nullptr));
        label->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "< faces than", nullptr));
        selectTriangle->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Pick triangle", nullptr));
        cbSelectComp->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Select whole component", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MeshGui::RemoveComponents", "Deselect", nullptr));
        deselectRegion->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Region", nullptr));
        deselectAll->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "All", nullptr));
        deselectComponents->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Components", nullptr));
        label_2->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "> faces than", nullptr));
        deselectTriangle->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Pick triangle", nullptr));
        cbDeselectComp->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Deselect whole component", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MeshGui::RemoveComponents", "Region options", nullptr));
        visibleTriangles->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Respect only visible triangles", nullptr));
        screenTriangles->setText(QCoreApplication::translate("MeshGui::RemoveComponents", "Respect only triangles with normals facing screen", nullptr));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class RemoveComponents: public Ui_RemoveComponents {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_REMOVECOMPONENTS_H
