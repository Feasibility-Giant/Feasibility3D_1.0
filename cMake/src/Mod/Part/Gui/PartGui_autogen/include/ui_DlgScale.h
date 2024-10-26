/********************************************************************************
** Form generated from reading UI file 'DlgScale.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSCALE_H
#define UI_DLGSCALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

namespace PartGui {

class Ui_DlgScale
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *dsbYScale;
    QLabel *label_7;
    QRadioButton *rbUniform;
    QDoubleSpinBox *dsbXScale;
    QLabel *label_4;
    QRadioButton *rbNonUniform;
    QDoubleSpinBox *dsbUniformScale;
    QDoubleSpinBox *dsbZScale;
    QLabel *label_2;
    QFrame *line;
    QTreeWidget *treeWidget;
    QLabel *statusLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PartGui__DlgScale)
    {
        if (PartGui__DlgScale->objectName().isEmpty())
            PartGui__DlgScale->setObjectName(QString::fromUtf8("PartGui__DlgScale"));
        PartGui__DlgScale->resize(319, 360);
        verticalLayout = new QVBoxLayout(PartGui__DlgScale);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(PartGui__DlgScale);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(PartGui__DlgScale);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        dsbYScale = new QDoubleSpinBox(PartGui__DlgScale);
        dsbYScale->setObjectName(QString::fromUtf8("dsbYScale"));
        dsbYScale->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dsbYScale->sizePolicy().hasHeightForWidth());
        dsbYScale->setSizePolicy(sizePolicy);
        dsbYScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbYScale->setDecimals(4);
        dsbYScale->setMinimum(-2147480000.000000000000000);
        dsbYScale->setMaximum(2147480000.000000000000000);
        dsbYScale->setValue(1.000000000000000);

        gridLayout_4->addWidget(dsbYScale, 4, 1, 1, 1);

        label_7 = new QLabel(PartGui__DlgScale);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 5, 0, 1, 1);

        rbUniform = new QRadioButton(PartGui__DlgScale);
        rbUniform->setObjectName(QString::fromUtf8("rbUniform"));
        rbUniform->setChecked(true);

        gridLayout_4->addWidget(rbUniform, 0, 0, 1, 1);

        dsbXScale = new QDoubleSpinBox(PartGui__DlgScale);
        dsbXScale->setObjectName(QString::fromUtf8("dsbXScale"));
        dsbXScale->setEnabled(false);
        sizePolicy.setHeightForWidth(dsbXScale->sizePolicy().hasHeightForWidth());
        dsbXScale->setSizePolicy(sizePolicy);
        dsbXScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbXScale->setDecimals(4);
        dsbXScale->setMinimum(-2147480000.000000000000000);
        dsbXScale->setMaximum(2147480000.000000000000000);
        dsbXScale->setValue(1.000000000000000);

        gridLayout_4->addWidget(dsbXScale, 3, 1, 1, 1);

        label_4 = new QLabel(PartGui__DlgScale);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 4, 0, 1, 1);

        rbNonUniform = new QRadioButton(PartGui__DlgScale);
        rbNonUniform->setObjectName(QString::fromUtf8("rbNonUniform"));

        gridLayout_4->addWidget(rbNonUniform, 2, 0, 1, 1);

        dsbUniformScale = new QDoubleSpinBox(PartGui__DlgScale);
        dsbUniformScale->setObjectName(QString::fromUtf8("dsbUniformScale"));
        dsbUniformScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbUniformScale->setDecimals(4);
        dsbUniformScale->setMinimum(-2147480000.000000000000000);
        dsbUniformScale->setMaximum(2147480000.000000000000000);
        dsbUniformScale->setValue(1.000000000000000);

        gridLayout_4->addWidget(dsbUniformScale, 1, 1, 1, 1);

        dsbZScale = new QDoubleSpinBox(PartGui__DlgScale);
        dsbZScale->setObjectName(QString::fromUtf8("dsbZScale"));
        dsbZScale->setEnabled(false);
        sizePolicy.setHeightForWidth(dsbZScale->sizePolicy().hasHeightForWidth());
        dsbZScale->setSizePolicy(sizePolicy);
        dsbZScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbZScale->setKeyboardTracking(false);
        dsbZScale->setDecimals(4);
        dsbZScale->setMinimum(-2147480000.000000000000000);
        dsbZScale->setMaximum(2147480000.000000000000000);
        dsbZScale->setValue(1.000000000000000);

        gridLayout_4->addWidget(dsbZScale, 5, 1, 1, 1);

        label_2 = new QLabel(PartGui__DlgScale);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        line = new QFrame(PartGui__DlgScale);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        treeWidget = new QTreeWidget(PartGui__DlgScale);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        statusLabel = new QLabel(PartGui__DlgScale);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setEnabled(false);

        verticalLayout->addWidget(statusLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PartGui__DlgScale);

        QMetaObject::connectSlotsByName(PartGui__DlgScale);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgScale)
    {
        PartGui__DlgScale->setWindowTitle(QCoreApplication::translate("PartGui::DlgScale", "Scale", nullptr));
        label_3->setText(QCoreApplication::translate("PartGui::DlgScale", "X Factor", nullptr));
        label->setText(QCoreApplication::translate("PartGui::DlgScale", "Factor", nullptr));
        label_7->setText(QCoreApplication::translate("PartGui::DlgScale", "Z Factor", nullptr));
#if QT_CONFIG(tooltip)
        rbUniform->setToolTip(QCoreApplication::translate("PartGui::DlgScale", "Scale the object by a single factor in all directions.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbUniform->setText(QCoreApplication::translate("PartGui::DlgScale", "Uniform Scaling", nullptr));
        label_4->setText(QCoreApplication::translate("PartGui::DlgScale", "Y Factor", nullptr));
#if QT_CONFIG(tooltip)
        rbNonUniform->setToolTip(QCoreApplication::translate("PartGui::DlgScale", "Specify a different scale factor for each cardinal direction.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbNonUniform->setText(QCoreApplication::translate("PartGui::DlgScale", "Non-Uniform Scaling", nullptr));
        label_2->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PartGui::DlgScale", "Shape", nullptr));
#if QT_CONFIG(tooltip)
        treeWidget->setToolTip(QCoreApplication::translate("PartGui::DlgScale", "Select shape(s) that should be scaled", nullptr));
#endif // QT_CONFIG(tooltip)
        statusLabel->setText(QString());
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgScale: public Ui_DlgScale {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGSCALE_H
