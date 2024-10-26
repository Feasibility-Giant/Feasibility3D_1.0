/********************************************************************************
** Form generated from reading UI file 'ImageEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEEDIT_H
#define UI_IMAGEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Mod/Material/Gui/ImageEdit.h"

namespace MatGui {

class Ui_ImageEdit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    MatGui::ImageLabel *labelThumb;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buttonFileSelect;
    QGridLayout *gridLayout;
    QLabel *labelHeight;
    QLabel *labelWidth;
    QLineEdit *editHeight;
    QLineEdit *editWidth;
    QSpacerItem *verticalSpacer;
    MatGui::ImageLabel *labelImage;
    QDialogButtonBox *standardButtons;

    void setupUi(QDialog *MatGui__ImageEdit)
    {
        if (MatGui__ImageEdit->objectName().isEmpty())
            MatGui__ImageEdit->setObjectName(QString::fromUtf8("MatGui__ImageEdit"));
        MatGui__ImageEdit->resize(498, 626);
        verticalLayout = new QVBoxLayout(MatGui__ImageEdit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(MatGui__ImageEdit);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label, 0, Qt::AlignTop);

        labelThumb = new MatGui::ImageLabel(MatGui__ImageEdit);
        labelThumb->setObjectName(QString::fromUtf8("labelThumb"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelThumb->sizePolicy().hasHeightForWidth());
        labelThumb->setSizePolicy(sizePolicy);
        labelThumb->setMinimumSize(QSize(64, 64));
        labelThumb->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(labelThumb, 0, Qt::AlignLeft|Qt::AlignTop);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        buttonFileSelect = new QPushButton(MatGui__ImageEdit);
        buttonFileSelect->setObjectName(QString::fromUtf8("buttonFileSelect"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonFileSelect->sizePolicy().hasHeightForWidth());
        buttonFileSelect->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(buttonFileSelect, 0, Qt::AlignRight|Qt::AlignTop);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelHeight = new QLabel(MatGui__ImageEdit);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));

        gridLayout->addWidget(labelHeight, 1, 0, 1, 1);

        labelWidth = new QLabel(MatGui__ImageEdit);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));

        gridLayout->addWidget(labelWidth, 0, 0, 1, 1);

        editHeight = new QLineEdit(MatGui__ImageEdit);
        editHeight->setObjectName(QString::fromUtf8("editHeight"));
        editHeight->setEnabled(false);
        editHeight->setReadOnly(true);

        gridLayout->addWidget(editHeight, 1, 1, 1, 1);

        editWidth = new QLineEdit(MatGui__ImageEdit);
        editWidth->setObjectName(QString::fromUtf8("editWidth"));
        editWidth->setEnabled(false);
        editWidth->setReadOnly(true);

        gridLayout->addWidget(editWidth, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        labelImage = new MatGui::ImageLabel(MatGui__ImageEdit);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelImage->sizePolicy().hasHeightForWidth());
        labelImage->setSizePolicy(sizePolicy2);
        labelImage->setMinimumSize(QSize(480, 480));
        labelImage->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(labelImage, 0, Qt::AlignTop);

        standardButtons = new QDialogButtonBox(MatGui__ImageEdit);
        standardButtons->setObjectName(QString::fromUtf8("standardButtons"));
        standardButtons->setOrientation(Qt::Horizontal);
        standardButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(standardButtons);


        retranslateUi(MatGui__ImageEdit);
        QObject::connect(standardButtons, SIGNAL(accepted()), MatGui__ImageEdit, SLOT(accept()));
        QObject::connect(standardButtons, SIGNAL(rejected()), MatGui__ImageEdit, SLOT(reject()));

        QMetaObject::connectSlotsByName(MatGui__ImageEdit);
    } // setupUi

    void retranslateUi(QDialog *MatGui__ImageEdit)
    {
        MatGui__ImageEdit->setWindowTitle(QCoreApplication::translate("MatGui::ImageEdit", "Image", nullptr));
        label->setText(QCoreApplication::translate("MatGui::ImageEdit", "Thumbnail", nullptr));
        labelThumb->setText(QString());
        buttonFileSelect->setText(QCoreApplication::translate("MatGui::ImageEdit", "File...", nullptr));
        labelHeight->setText(QCoreApplication::translate("MatGui::ImageEdit", "Height", nullptr));
        labelWidth->setText(QCoreApplication::translate("MatGui::ImageEdit", "Width", nullptr));
        labelImage->setText(QString());
    } // retranslateUi

};

} // namespace MatGui

namespace MatGui {
namespace Ui {
    class ImageEdit: public Ui_ImageEdit {};
} // namespace Ui
} // namespace MatGui

#endif // UI_IMAGEEDIT_H
