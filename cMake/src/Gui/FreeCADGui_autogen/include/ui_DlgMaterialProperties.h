/********************************************************************************
** Form generated from reading UI file 'DlgMaterialProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMATERIALPROPERTIES_H
#define UI_DLGMATERIALPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgMaterialProperties
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox4;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel4;
    QSpacerItem *spacerItem;
    QSpinBox *shininess;
    QLabel *textLabel1;
    Gui::ColorButton *ambientColor;
    Gui::ColorButton *emissiveColor;
    QLabel *textLabel3;
    Gui::ColorButton *diffuseColor;
    QLabel *textLabel2;
    Gui::ColorButton *specularColor;
    QLabel *label;
    QPushButton *buttonReset;
    QPushButton *buttonDefault;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgMaterialProperties)
    {
        if (Gui__Dialog__DlgMaterialProperties->objectName().isEmpty())
            Gui__Dialog__DlgMaterialProperties->setObjectName(QString::fromUtf8("Gui__Dialog__DlgMaterialProperties"));
        Gui__Dialog__DlgMaterialProperties->resize(292, 247);
        Gui__Dialog__DlgMaterialProperties->setSizeGripEnabled(true);
        Gui__Dialog__DlgMaterialProperties->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgMaterialProperties);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox4 = new QGroupBox(Gui__Dialog__DlgMaterialProperties);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        gridLayout1 = new QGridLayout(groupBox4);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        textLabel4 = new QLabel(groupBox4);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        hboxLayout->addWidget(textLabel4);

        spacerItem = new QSpacerItem(81, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        shininess = new QSpinBox(groupBox4);
        shininess->setObjectName(QString::fromUtf8("shininess"));
        shininess->setSuffix(QString::fromUtf8("%"));
        shininess->setSingleStep(5);

        hboxLayout->addWidget(shininess);


        gridLayout1->addLayout(hboxLayout, 4, 0, 1, 2);

        textLabel1 = new QLabel(groupBox4);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout1->addWidget(textLabel1, 1, 0, 1, 1);

        ambientColor = new Gui::ColorButton(groupBox4);
        ambientColor->setObjectName(QString::fromUtf8("ambientColor"));

        gridLayout1->addWidget(ambientColor, 0, 1, 1, 1);

        emissiveColor = new Gui::ColorButton(groupBox4);
        emissiveColor->setObjectName(QString::fromUtf8("emissiveColor"));

        gridLayout1->addWidget(emissiveColor, 2, 1, 1, 1);

        textLabel3 = new QLabel(groupBox4);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout1->addWidget(textLabel3, 3, 0, 1, 1);

        diffuseColor = new Gui::ColorButton(groupBox4);
        diffuseColor->setObjectName(QString::fromUtf8("diffuseColor"));

        gridLayout1->addWidget(diffuseColor, 1, 1, 1, 1);

        textLabel2 = new QLabel(groupBox4);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout1->addWidget(textLabel2, 0, 0, 1, 1);

        specularColor = new Gui::ColorButton(groupBox4);
        specularColor->setObjectName(QString::fromUtf8("specularColor"));

        gridLayout1->addWidget(specularColor, 3, 1, 1, 1);

        label = new QLabel(groupBox4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 2, 0, 1, 1);

        buttonReset = new QPushButton(groupBox4);
        buttonReset->setObjectName(QString::fromUtf8("buttonReset"));

        gridLayout1->addWidget(buttonReset, 5, 0, 1, 1);

        buttonDefault = new QPushButton(groupBox4);
        buttonDefault->setObjectName(QString::fromUtf8("buttonDefault"));

        gridLayout1->addWidget(buttonDefault, 5, 1, 1, 1);


        gridLayout->addWidget(groupBox4, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgMaterialProperties);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        QWidget::setTabOrder(ambientColor, diffuseColor);
        QWidget::setTabOrder(diffuseColor, emissiveColor);
        QWidget::setTabOrder(emissiveColor, specularColor);
        QWidget::setTabOrder(specularColor, shininess);

        retranslateUi(Gui__Dialog__DlgMaterialProperties);
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgMaterialProperties, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgMaterialProperties);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgMaterialProperties)
    {
        Gui__Dialog__DlgMaterialProperties->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Material properties", nullptr));
        groupBox4->setTitle(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Material", nullptr));
        textLabel4->setText(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Shininess:", nullptr));
        textLabel1->setText(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Diffuse color:", nullptr));
        ambientColor->setText(QString());
        emissiveColor->setText(QString());
        textLabel3->setText(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Specular color:", nullptr));
        diffuseColor->setText(QString());
        textLabel2->setText(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Ambient color:", nullptr));
        specularColor->setText(QString());
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Emissive color:", nullptr));
        buttonReset->setText(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Reset", nullptr));
        buttonDefault->setText(QCoreApplication::translate("Gui::Dialog::DlgMaterialProperties", "Default", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgMaterialProperties: public Ui_DlgMaterialProperties {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGMATERIALPROPERTIES_H
