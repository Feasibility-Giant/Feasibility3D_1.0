/********************************************************************************
** Form generated from reading UI file 'TaskCosVertex.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCOSVERTEX_H
#define UI_TASKCOSVERTEX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"

namespace TechDrawGui {

class Ui_TaskCosVertex
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *leBaseView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbTracker;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    Gui::QuantitySpinBox *dsbX;
    QLabel *label_3;
    Gui::QuantitySpinBox *dsbY;

    void setupUi(QWidget *TechDrawGui__TaskCosVertex)
    {
        if (TechDrawGui__TaskCosVertex->objectName().isEmpty())
            TechDrawGui__TaskCosVertex->setObjectName(QString::fromUtf8("TechDrawGui__TaskCosVertex"));
        TechDrawGui__TaskCosVertex->resize(250, 167);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_CosmeticVertex.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TechDrawGui__TaskCosVertex->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(TechDrawGui__TaskCosVertex);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(TechDrawGui__TaskCosVertex);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        leBaseView = new QLineEdit(TechDrawGui__TaskCosVertex);
        leBaseView->setObjectName(QString::fromUtf8("leBaseView"));
        leBaseView->setEnabled(false);
        leBaseView->setMouseTracking(false);
        leBaseView->setFocusPolicy(Qt::NoFocus);
        leBaseView->setAcceptDrops(false);

        gridLayout->addWidget(leBaseView, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbTracker = new QPushButton(TechDrawGui__TaskCosVertex);
        pbTracker->setObjectName(QString::fromUtf8("pbTracker"));

        horizontalLayout->addWidget(pbTracker);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        line = new QFrame(TechDrawGui__TaskCosVertex);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        groupBox = new QGroupBox(TechDrawGui__TaskCosVertex);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        dsbX = new Gui::QuantitySpinBox(groupBox);
        dsbX->setObjectName(QString::fromUtf8("dsbX"));
        dsbX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbX->setMinimum(-2147483647.000000000000000);
        dsbX->setMaximum(2147483647.000000000000000);
        dsbX->setProperty("decimals", QVariant(4));

        gridLayout_2->addWidget(dsbX, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 2);

        dsbY = new Gui::QuantitySpinBox(groupBox);
        dsbY->setObjectName(QString::fromUtf8("dsbY"));
        dsbY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbY->setMinimum(-2147483647.000000000000000);
        dsbY->setMaximum(2147483647.000000000000000);
        dsbY->setProperty("decimals", QVariant(4));

        gridLayout_2->addWidget(dsbY, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(TechDrawGui__TaskCosVertex);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskCosVertex);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskCosVertex)
    {
        TechDrawGui__TaskCosVertex->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskCosVertex", "Cosmetic Vertex", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskCosVertex", "Base View", nullptr));
        pbTracker->setText(QCoreApplication::translate("TechDrawGui::TaskCosVertex", "Point Picker", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("TechDrawGui::TaskCosVertex", "Position from the view center", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("TechDrawGui::TaskCosVertex", "Position", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskCosVertex", "X", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskCosVertex", "Y", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskCosVertex: public Ui_TaskCosVertex {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKCOSVERTEX_H
