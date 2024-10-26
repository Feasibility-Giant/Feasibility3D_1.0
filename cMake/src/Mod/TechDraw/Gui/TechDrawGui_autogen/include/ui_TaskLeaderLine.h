/********************************************************************************
** Form generated from reading UI file 'TaskLeaderLine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLEADERLINE_H
#define UI_TASKLEADERLINE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskLeaderLine
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QTextBrowser *tbBaseView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbCancelEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbTracker;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *cboxStartSym;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *cboxEndSym;
    QLabel *label;
    Gui::ColorButton *cpLineColor;
    QLabel *label_5;
    Gui::QuantitySpinBox *dsbWeight;
    QLabel *label_6;
    QComboBox *cboxStyle;

    void setupUi(QWidget *TechDrawGui__TaskLeaderLine)
    {
        if (TechDrawGui__TaskLeaderLine->objectName().isEmpty())
            TechDrawGui__TaskLeaderLine->setObjectName(QString::fromUtf8("TechDrawGui__TaskLeaderLine"));
        TechDrawGui__TaskLeaderLine->resize(350, 225);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskLeaderLine->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskLeaderLine->setSizePolicy(sizePolicy);
        TechDrawGui__TaskLeaderLine->setMinimumSize(QSize(250, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_LeaderLine.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TechDrawGui__TaskLeaderLine->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskLeaderLine);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(TechDrawGui__TaskLeaderLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        tbBaseView = new QTextBrowser(TechDrawGui__TaskLeaderLine);
        tbBaseView->setObjectName(QString::fromUtf8("tbBaseView"));
        tbBaseView->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbBaseView->sizePolicy().hasHeightForWidth());
        tbBaseView->setSizePolicy(sizePolicy1);
        tbBaseView->setMaximumSize(QSize(16777215, 22));
        tbBaseView->setMouseTracking(false);
        tbBaseView->setFocusPolicy(Qt::NoFocus);
        tbBaseView->setAcceptDrops(false);
        tbBaseView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(tbBaseView, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pbCancelEdit = new QPushButton(TechDrawGui__TaskLeaderLine);
        pbCancelEdit->setObjectName(QString::fromUtf8("pbCancelEdit"));

        horizontalLayout->addWidget(pbCancelEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbTracker = new QPushButton(TechDrawGui__TaskLeaderLine);
        pbTracker->setObjectName(QString::fromUtf8("pbTracker"));

        horizontalLayout->addWidget(pbTracker);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TechDrawGui__TaskLeaderLine);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(TechDrawGui__TaskLeaderLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        cboxStartSym = new QComboBox(TechDrawGui__TaskLeaderLine);
        cboxStartSym->setObjectName(QString::fromUtf8("cboxStartSym"));
        cboxStartSym->setMinimumSize(QSize(0, 22));

        gridLayout_2->addWidget(cboxStartSym, 0, 2, 1, 1);

        label_3 = new QLabel(TechDrawGui__TaskLeaderLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        cboxEndSym = new QComboBox(TechDrawGui__TaskLeaderLine);
        cboxEndSym->setObjectName(QString::fromUtf8("cboxEndSym"));
        cboxEndSym->setMinimumSize(QSize(0, 22));

        gridLayout_2->addWidget(cboxEndSym, 1, 2, 1, 1);

        label = new QLabel(TechDrawGui__TaskLeaderLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        cpLineColor = new Gui::ColorButton(TechDrawGui__TaskLeaderLine);
        cpLineColor->setObjectName(QString::fromUtf8("cpLineColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(22);
        sizePolicy2.setHeightForWidth(cpLineColor->sizePolicy().hasHeightForWidth());
        cpLineColor->setSizePolicy(sizePolicy2);
        cpLineColor->setColor(QColor(0, 0, 0));

        gridLayout_2->addWidget(cpLineColor, 2, 2, 1, 1);

        label_5 = new QLabel(TechDrawGui__TaskLeaderLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        dsbWeight = new Gui::QuantitySpinBox(TechDrawGui__TaskLeaderLine);
        dsbWeight->setObjectName(QString::fromUtf8("dsbWeight"));
        dsbWeight->setEnabled(true);
        dsbWeight->setMinimumSize(QSize(0, 22));
        dsbWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbWeight->setSingleStep(0.100000000000000);
        dsbWeight->setValue(0.500000000000000);

        gridLayout_2->addWidget(dsbWeight, 3, 2, 1, 1);

        label_6 = new QLabel(TechDrawGui__TaskLeaderLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        cboxStyle = new QComboBox(TechDrawGui__TaskLeaderLine);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/none.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cboxStyle->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/continuous-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cboxStyle->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/dash-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cboxStyle->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/dot-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cboxStyle->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/dashDot-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cboxStyle->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/dashDotDot-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cboxStyle->addItem(icon6, QString());
        cboxStyle->setObjectName(QString::fromUtf8("cboxStyle"));
        cboxStyle->setMinimumSize(QSize(0, 22));

        gridLayout_2->addWidget(cboxStyle, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(TechDrawGui__TaskLeaderLine);

        cboxStartSym->setCurrentIndex(-1);
        cboxStyle->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TechDrawGui__TaskLeaderLine);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskLeaderLine)
    {
        TechDrawGui__TaskLeaderLine->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Leader Line", nullptr));
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Base View", nullptr));
        pbCancelEdit->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Discard Changes", nullptr));
#if QT_CONFIG(tooltip)
        pbTracker->setToolTip(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "First pick the start point of the line,\n"
"then at least a second point.\n"
"You can pick further points to get line segments.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbTracker->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Pick Points", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Start Symbol", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "End Symbol", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Color", nullptr));
#if QT_CONFIG(tooltip)
        cpLineColor->setToolTip(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Line color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Width", nullptr));
#if QT_CONFIG(tooltip)
        dsbWeight->setToolTip(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Line width", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Style", nullptr));
        cboxStyle->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "NoLine", nullptr));
        cboxStyle->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Continuous", nullptr));
        cboxStyle->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Dash", nullptr));
        cboxStyle->setItemText(3, QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Dot", nullptr));
        cboxStyle->setItemText(4, QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "DashDot", nullptr));
        cboxStyle->setItemText(5, QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "DashDotDot", nullptr));

#if QT_CONFIG(tooltip)
        cboxStyle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskLeaderLine", "Line style", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskLeaderLine: public Ui_TaskLeaderLine {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKLEADERLINE_H
