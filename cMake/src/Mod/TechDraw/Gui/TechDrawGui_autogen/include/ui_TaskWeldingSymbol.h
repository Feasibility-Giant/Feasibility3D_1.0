/********************************************************************************
** Form generated from reading UI file 'TaskWeldingSymbol.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKWELDINGSYMBOL_H
#define UI_TASKWELDINGSYMBOL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"

QT_BEGIN_NAMESPACE

class Ui_TaskWeldingSymbol
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hlArrowSideLayout;
    QGridLayout *gridLayout;
    QLineEdit *leArrowTextC;
    QLineEdit *leArrowTextL;
    QPushButton *pbArrowSymbol;
    QLineEdit *leArrowTextR;
    QFrame *line;
    QHBoxLayout *hlOtherSideLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *leOtherTextL;
    QPushButton *pbOtherSymbol;
    QLineEdit *leOtherTextR;
    QPushButton *pbOtherErase;
    QLineEdit *leOtherTextC;
    QPushButton *pbFlipSides;
    QFrame *line_2;
    QGridLayout *gridLayout_3;
    QCheckBox *cbFieldWeld;
    QCheckBox *cbAllAround;
    QCheckBox *cbAltWeld;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLineEdit *leTailText;
    QLabel *label;
    Gui::FileChooser *fcSymbolDir;

    void setupUi(QWidget *TaskWeldingSymbol)
    {
        if (TaskWeldingSymbol->objectName().isEmpty())
            TaskWeldingSymbol->setObjectName(QString::fromUtf8("TaskWeldingSymbol"));
        TaskWeldingSymbol->resize(400, 244);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskWeldingSymbol->sizePolicy().hasHeightForWidth());
        TaskWeldingSymbol->setSizePolicy(sizePolicy);
        TaskWeldingSymbol->setMinimumSize(QSize(250, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_WeldSymbol.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TaskWeldingSymbol->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TaskWeldingSymbol);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        hlArrowSideLayout = new QHBoxLayout();
        hlArrowSideLayout->setObjectName(QString::fromUtf8("hlArrowSideLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leArrowTextC = new QLineEdit(TaskWeldingSymbol);
        leArrowTextC->setObjectName(QString::fromUtf8("leArrowTextC"));

        gridLayout->addWidget(leArrowTextC, 0, 1, 1, 1);

        leArrowTextL = new QLineEdit(TaskWeldingSymbol);
        leArrowTextL->setObjectName(QString::fromUtf8("leArrowTextL"));

        gridLayout->addWidget(leArrowTextL, 2, 0, 1, 1);

        pbArrowSymbol = new QPushButton(TaskWeldingSymbol);
        pbArrowSymbol->setObjectName(QString::fromUtf8("pbArrowSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbArrowSymbol->sizePolicy().hasHeightForWidth());
        pbArrowSymbol->setSizePolicy(sizePolicy1);
        pbArrowSymbol->setMinimumSize(QSize(0, 0));
        pbArrowSymbol->setBaseSize(QSize(0, 32));
        pbArrowSymbol->setCheckable(false);

        gridLayout->addWidget(pbArrowSymbol, 2, 1, 1, 1);

        leArrowTextR = new QLineEdit(TaskWeldingSymbol);
        leArrowTextR->setObjectName(QString::fromUtf8("leArrowTextR"));

        gridLayout->addWidget(leArrowTextR, 2, 2, 1, 1);


        hlArrowSideLayout->addLayout(gridLayout);


        verticalLayout_4->addLayout(hlArrowSideLayout);

        line = new QFrame(TaskWeldingSymbol);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line);

        hlOtherSideLayout = new QHBoxLayout();
        hlOtherSideLayout->setObjectName(QString::fromUtf8("hlOtherSideLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        leOtherTextL = new QLineEdit(TaskWeldingSymbol);
        leOtherTextL->setObjectName(QString::fromUtf8("leOtherTextL"));

        gridLayout_2->addWidget(leOtherTextL, 0, 0, 1, 1);

        pbOtherSymbol = new QPushButton(TaskWeldingSymbol);
        pbOtherSymbol->setObjectName(QString::fromUtf8("pbOtherSymbol"));

        gridLayout_2->addWidget(pbOtherSymbol, 0, 1, 1, 1);

        leOtherTextR = new QLineEdit(TaskWeldingSymbol);
        leOtherTextR->setObjectName(QString::fromUtf8("leOtherTextR"));

        gridLayout_2->addWidget(leOtherTextR, 0, 2, 1, 1);

        pbOtherErase = new QPushButton(TaskWeldingSymbol);
        pbOtherErase->setObjectName(QString::fromUtf8("pbOtherErase"));
        sizePolicy1.setHeightForWidth(pbOtherErase->sizePolicy().hasHeightForWidth());
        pbOtherErase->setSizePolicy(sizePolicy1);
        pbOtherErase->setMinimumSize(QSize(60, 30));
        pbOtherErase->setMaximumSize(QSize(60, 30));
        pbOtherErase->setBaseSize(QSize(60, 30));

        gridLayout_2->addWidget(pbOtherErase, 1, 0, 1, 1);

        leOtherTextC = new QLineEdit(TaskWeldingSymbol);
        leOtherTextC->setObjectName(QString::fromUtf8("leOtherTextC"));

        gridLayout_2->addWidget(leOtherTextC, 1, 1, 1, 1);

        pbFlipSides = new QPushButton(TaskWeldingSymbol);
        pbFlipSides->setObjectName(QString::fromUtf8("pbFlipSides"));
        sizePolicy1.setHeightForWidth(pbFlipSides->sizePolicy().hasHeightForWidth());
        pbFlipSides->setSizePolicy(sizePolicy1);
        pbFlipSides->setMinimumSize(QSize(60, 30));
        pbFlipSides->setMaximumSize(QSize(60, 30));
        pbFlipSides->setBaseSize(QSize(60, 30));

        gridLayout_2->addWidget(pbFlipSides, 1, 2, 1, 1, Qt::AlignRight);


        hlOtherSideLayout->addLayout(gridLayout_2);


        verticalLayout_4->addLayout(hlOtherSideLayout);


        verticalLayout->addLayout(verticalLayout_4);

        line_2 = new QFrame(TaskWeldingSymbol);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cbFieldWeld = new QCheckBox(TaskWeldingSymbol);
        cbFieldWeld->setObjectName(QString::fromUtf8("cbFieldWeld"));

        gridLayout_3->addWidget(cbFieldWeld, 0, 0, 1, 1);

        cbAllAround = new QCheckBox(TaskWeldingSymbol);
        cbAllAround->setObjectName(QString::fromUtf8("cbAllAround"));

        gridLayout_3->addWidget(cbAllAround, 0, 1, 1, 1);

        cbAltWeld = new QCheckBox(TaskWeldingSymbol);
        cbAltWeld->setObjectName(QString::fromUtf8("cbAltWeld"));

        gridLayout_3->addWidget(cbAltWeld, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_5 = new QLabel(TaskWeldingSymbol);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        leTailText = new QLineEdit(TaskWeldingSymbol);
        leTailText->setObjectName(QString::fromUtf8("leTailText"));
        sizePolicy.setHeightForWidth(leTailText->sizePolicy().hasHeightForWidth());
        leTailText->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(leTailText, 0, 1, 1, 1);

        label = new QLabel(TaskWeldingSymbol);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        fcSymbolDir = new Gui::FileChooser(TaskWeldingSymbol);
        fcSymbolDir->setObjectName(QString::fromUtf8("fcSymbolDir"));
        fcSymbolDir->setMode(Gui::FileChooser::Directory);

        gridLayout_4->addWidget(fcSymbolDir, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        retranslateUi(TaskWeldingSymbol);

        QMetaObject::connectSlotsByName(TaskWeldingSymbol);
    } // setupUi

    void retranslateUi(QWidget *TaskWeldingSymbol)
    {
        TaskWeldingSymbol->setWindowTitle(QCoreApplication::translate("TaskWeldingSymbol", "Welding Symbol", nullptr));
#if QT_CONFIG(tooltip)
        leArrowTextC->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Text above arrow side symbol\n"
"Angle, surface finish, root", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        leArrowTextL->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Text before arrow side symbol\n"
"Preparation depth, (weld size)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbArrowSymbol->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Pick arrow side symbol", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbArrowSymbol->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbArrowSymbol->setText(QCoreApplication::translate("TaskWeldingSymbol", "Symbol", nullptr));
#if QT_CONFIG(tooltip)
        leArrowTextR->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Text after arrow side symbol\n"
"Number of welds \303\227 length, (gap)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        leOtherTextL->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Text before other side symbol\n"
"Preparation depth, (weld size)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbOtherSymbol->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Pick other side symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        pbOtherSymbol->setText(QCoreApplication::translate("TaskWeldingSymbol", "Symbol", nullptr));
#if QT_CONFIG(tooltip)
        leOtherTextR->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Text after other side symbol\n"
"Number of welds \303\227 length, (gap)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbOtherErase->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Remove other side symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        pbOtherErase->setText(QCoreApplication::translate("TaskWeldingSymbol", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        leOtherTextC->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Text below arrow side symbol\n"
"Angle, surface finish, root", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbFlipSides->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Flips the sides", nullptr));
#endif // QT_CONFIG(tooltip)
        pbFlipSides->setText(QCoreApplication::translate("TaskWeldingSymbol", "Flip Sides", nullptr));
#if QT_CONFIG(tooltip)
        cbFieldWeld->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Adds the 'Field Weld' symbol (flag)\n"
"at the kink in the leader line", nullptr));
#endif // QT_CONFIG(tooltip)
        cbFieldWeld->setText(QCoreApplication::translate("TaskWeldingSymbol", "Field Weld", nullptr));
#if QT_CONFIG(tooltip)
        cbAllAround->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Adds the 'All Around' symbol (circle)\n"
"at the kink in the leader line", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAllAround->setText(QCoreApplication::translate("TaskWeldingSymbol", "All Around", nullptr));
#if QT_CONFIG(tooltip)
        cbAltWeld->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Offsets the lower symbol to indicate alternating welds", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAltWeld->setText(QCoreApplication::translate("TaskWeldingSymbol", "Alternating", nullptr));
        label_5->setText(QCoreApplication::translate("TaskWeldingSymbol", "Tail Text", nullptr));
#if QT_CONFIG(tooltip)
        leTailText->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Text at end of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TaskWeldingSymbol", "Symbol Directory", nullptr));
#if QT_CONFIG(tooltip)
        fcSymbolDir->setToolTip(QCoreApplication::translate("TaskWeldingSymbol", "Directory path for welding symbols.\n"
"This directory will be used for the symbol selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        fcSymbolDir->setFilter(QCoreApplication::translate("TaskWeldingSymbol", "*.svg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskWeldingSymbol: public Ui_TaskWeldingSymbol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWELDINGSYMBOL_H
