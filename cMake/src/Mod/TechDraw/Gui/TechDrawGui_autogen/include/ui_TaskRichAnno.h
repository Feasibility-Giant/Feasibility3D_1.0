/********************************************************************************
** Form generated from reading UI file 'TaskRichAnno.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKRICHANNO_H
#define UI_TASKRICHANNO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskRichAnno
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leBaseView;
    QLabel *label_2;
    Gui::QuantitySpinBox *dsbMaxWidth;
    QFrame *line;
    QPushButton *pbEditor;
    QTextEdit *teAnnoText;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QCheckBox *cbShowFrame;
    QLabel *label_4;
    Gui::ColorButton *cpFrameColor;
    QLabel *label_5;
    Gui::QuantitySpinBox *dsbWidth;
    QLabel *label_6;
    QComboBox *cFrameStyle;

    void setupUi(QWidget *TechDrawGui__TaskRichAnno)
    {
        if (TechDrawGui__TaskRichAnno->objectName().isEmpty())
            TechDrawGui__TaskRichAnno->setObjectName(QString::fromUtf8("TechDrawGui__TaskRichAnno"));
        TechDrawGui__TaskRichAnno->resize(409, 419);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TechDrawGui__TaskRichAnno->sizePolicy().hasHeightForWidth());
        TechDrawGui__TaskRichAnno->setSizePolicy(sizePolicy);
        TechDrawGui__TaskRichAnno->setMinimumSize(QSize(250, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/actions/TechDraw_RichTextAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TechDrawGui__TaskRichAnno->setWindowIcon(icon);
        gridLayout = new QGridLayout(TechDrawGui__TaskRichAnno);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(TechDrawGui__TaskRichAnno);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leBaseView = new QLineEdit(frame);
        leBaseView->setObjectName(QString::fromUtf8("leBaseView"));
        leBaseView->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, leBaseView);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dsbMaxWidth = new Gui::QuantitySpinBox(frame);
        dsbMaxWidth->setObjectName(QString::fromUtf8("dsbMaxWidth"));
        dsbMaxWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbMaxWidth->setMinimum(-1.000000000000000);
        dsbMaxWidth->setValue(-1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, dsbMaxWidth);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        pbEditor = new QPushButton(frame);
        pbEditor->setObjectName(QString::fromUtf8("pbEditor"));
        pbEditor->setEnabled(true);

        gridLayout_2->addWidget(pbEditor, 2, 0, 1, 1);

        teAnnoText = new QTextEdit(frame);
        teAnnoText->setObjectName(QString::fromUtf8("teAnnoText"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(teAnnoText->sizePolicy().hasHeightForWidth());
        teAnnoText->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(teAnnoText, 3, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        cbShowFrame = new QCheckBox(frame);
        cbShowFrame->setObjectName(QString::fromUtf8("cbShowFrame"));
        cbShowFrame->setLayoutDirection(Qt::LeftToRight);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbShowFrame);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        cpFrameColor = new Gui::ColorButton(frame);
        cpFrameColor->setObjectName(QString::fromUtf8("cpFrameColor"));
        cpFrameColor->setEnabled(false);
        cpFrameColor->setColor(QColor(0, 0, 0));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cpFrameColor);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        dsbWidth = new Gui::QuantitySpinBox(frame);
        dsbWidth->setObjectName(QString::fromUtf8("dsbWidth"));
        dsbWidth->setEnabled(false);
        dsbWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbWidth->setSingleStep(0.100000000000000);
        dsbWidth->setValue(0.500000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, dsbWidth);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        cFrameStyle = new QComboBox(frame);
        cFrameStyle->addItem(QString());
        cFrameStyle->addItem(QString());
        cFrameStyle->addItem(QString());
        cFrameStyle->addItem(QString());
        cFrameStyle->addItem(QString());
        cFrameStyle->addItem(QString());
        cFrameStyle->setObjectName(QString::fromUtf8("cFrameStyle"));
        cFrameStyle->setEnabled(false);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, cFrameStyle);


        gridLayout_2->addLayout(formLayout_2, 4, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(TechDrawGui__TaskRichAnno);
        QObject::connect(cbShowFrame, SIGNAL(toggled(bool)), cpFrameColor, SLOT(setEnabled(bool)));
        QObject::connect(cbShowFrame, SIGNAL(toggled(bool)), cFrameStyle, SLOT(setEnabled(bool)));
        QObject::connect(cbShowFrame, SIGNAL(toggled(bool)), dsbWidth, SLOT(setEnabled(bool)));

        cFrameStyle->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TechDrawGui__TaskRichAnno);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskRichAnno)
    {
        TechDrawGui__TaskRichAnno->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Rich Text Annotation Block", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Base Feature", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Max Width", nullptr));
#if QT_CONFIG(tooltip)
        dsbMaxWidth->setToolTip(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Maximal width, if -1 then automatic width", nullptr));
#endif // QT_CONFIG(tooltip)
        pbEditor->setText(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Start Rich Text Editor", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Show Frame", nullptr));
        cbShowFrame->setText(QString());
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Color", nullptr));
#if QT_CONFIG(tooltip)
        cpFrameColor->setToolTip(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Line color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Width", nullptr));
#if QT_CONFIG(tooltip)
        dsbWidth->setToolTip(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Line width", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Style", nullptr));
        cFrameStyle->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskRichAnno", "NoLine", nullptr));
        cFrameStyle->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Continuous", nullptr));
        cFrameStyle->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Dash", nullptr));
        cFrameStyle->setItemText(3, QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Dot", nullptr));
        cFrameStyle->setItemText(4, QCoreApplication::translate("TechDrawGui::TaskRichAnno", "DashDot", nullptr));
        cFrameStyle->setItemText(5, QCoreApplication::translate("TechDrawGui::TaskRichAnno", "DashDotDot", nullptr));

#if QT_CONFIG(tooltip)
        cFrameStyle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskRichAnno", "Line style", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskRichAnno: public Ui_TaskRichAnno {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKRICHANNO_H
