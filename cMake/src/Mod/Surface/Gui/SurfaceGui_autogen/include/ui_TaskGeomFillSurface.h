/********************************************************************************
** Form generated from reading UI file 'TaskGeomFillSurface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKGEOMFILLSURFACE_H
#define UI_TASKGEOMFILLSURFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

namespace SurfaceGui {

class Ui_GeomFillSurface
{
public:
    QGridLayout *gridLayout;
    QGroupBox *fillTypes;
    QGridLayout *gridLayout1;
    QRadioButton *fillType_stretch;
    QRadioButton *fillType_coons;
    QRadioButton *fillType_curved;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonEdgeAdd;
    QToolButton *buttonEdgeRemove;
    QListWidget *listWidget;

    void setupUi(QWidget *SurfaceGui__GeomFillSurface)
    {
        if (SurfaceGui__GeomFillSurface->objectName().isEmpty())
            SurfaceGui__GeomFillSurface->setObjectName(QString::fromUtf8("SurfaceGui__GeomFillSurface"));
        SurfaceGui__GeomFillSurface->resize(277, 467);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SurfaceGui__GeomFillSurface->sizePolicy().hasHeightForWidth());
        SurfaceGui__GeomFillSurface->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(SurfaceGui__GeomFillSurface);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fillTypes = new QGroupBox(SurfaceGui__GeomFillSurface);
        fillTypes->setObjectName(QString::fromUtf8("fillTypes"));
        gridLayout1 = new QGridLayout(fillTypes);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        fillType_stretch = new QRadioButton(fillTypes);
        fillType_stretch->setObjectName(QString::fromUtf8("fillType_stretch"));
        fillType_stretch->setChecked(true);

        gridLayout1->addWidget(fillType_stretch, 1, 0, 1, 1);

        fillType_coons = new QRadioButton(fillTypes);
        fillType_coons->setObjectName(QString::fromUtf8("fillType_coons"));

        gridLayout1->addWidget(fillType_coons, 2, 0, 1, 1);

        fillType_curved = new QRadioButton(fillTypes);
        fillType_curved->setObjectName(QString::fromUtf8("fillType_curved"));

        gridLayout1->addWidget(fillType_curved, 3, 0, 1, 1);


        gridLayout->addWidget(fillTypes, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonEdgeAdd = new QToolButton(SurfaceGui__GeomFillSurface);
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

        buttonEdgeRemove = new QToolButton(SurfaceGui__GeomFillSurface);
        buttonEdgeRemove->setObjectName(QString::fromUtf8("buttonEdgeRemove"));
        sizePolicy1.setHeightForWidth(buttonEdgeRemove->sizePolicy().hasHeightForWidth());
        buttonEdgeRemove->setSizePolicy(sizePolicy1);
        buttonEdgeRemove->setCheckable(true);

        horizontalLayout->addWidget(buttonEdgeRemove);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        listWidget = new QListWidget(SurfaceGui__GeomFillSurface);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 2, 0, 1, 1);


        retranslateUi(SurfaceGui__GeomFillSurface);

        QMetaObject::connectSlotsByName(SurfaceGui__GeomFillSurface);
    } // setupUi

    void retranslateUi(QWidget *SurfaceGui__GeomFillSurface)
    {
        SurfaceGui__GeomFillSurface->setWindowTitle(QCoreApplication::translate("SurfaceGui::GeomFillSurface", "Filling", nullptr));
        fillTypes->setTitle(QCoreApplication::translate("SurfaceGui::GeomFillSurface", "Fill type:", nullptr));
        fillType_stretch->setText(QCoreApplication::translate("SurfaceGui::GeomFillSurface", "Stretch", nullptr));
        fillType_coons->setText(QCoreApplication::translate("SurfaceGui::GeomFillSurface", "Coons", nullptr));
        fillType_curved->setText(QCoreApplication::translate("SurfaceGui::GeomFillSurface", "Curved", nullptr));
        buttonEdgeAdd->setText(QCoreApplication::translate("SurfaceGui::GeomFillSurface", "Add Edge", nullptr));
        buttonEdgeRemove->setText(QCoreApplication::translate("SurfaceGui::GeomFillSurface", "Remove Edge", nullptr));
    } // retranslateUi

};

} // namespace SurfaceGui

namespace SurfaceGui {
namespace Ui {
    class GeomFillSurface: public Ui_GeomFillSurface {};
} // namespace Ui
} // namespace SurfaceGui

#endif // UI_TASKGEOMFILLSURFACE_H
