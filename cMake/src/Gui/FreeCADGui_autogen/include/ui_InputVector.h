/********************************************************************************
** Form generated from reading UI file 'InputVector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTVECTOR_H
#define UI_INPUTVECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

namespace Gui {
namespace Dialog {

class Ui_InputVector
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label;
    QDoubleSpinBox *vectorX;
    QLabel *label_2;
    QDoubleSpinBox *vectorY;
    QLabel *label_3;
    QDoubleSpinBox *vectorZ;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__InputVector)
    {
        if (Gui__Dialog__InputVector->objectName().isEmpty())
            Gui__Dialog__InputVector->setObjectName(QString::fromUtf8("Gui__Dialog__InputVector"));
        Gui__Dialog__InputVector->resize(181, 177);
        gridLayout = new QGridLayout(Gui__Dialog__InputVector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Gui__Dialog__InputVector);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        vectorX = new QDoubleSpinBox(groupBox);
        vectorX->setObjectName(QString::fromUtf8("vectorX"));
        vectorX->setMinimum(-2147480000.000000000000000);
        vectorX->setMaximum(2147480000.000000000000000);

        gridLayout1->addWidget(vectorX, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        vectorY = new QDoubleSpinBox(groupBox);
        vectorY->setObjectName(QString::fromUtf8("vectorY"));
        vectorY->setMinimum(-2147480000.000000000000000);
        vectorY->setMaximum(2147480000.000000000000000);

        gridLayout1->addWidget(vectorY, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        vectorZ = new QDoubleSpinBox(groupBox);
        vectorZ->setObjectName(QString::fromUtf8("vectorZ"));
        vectorZ->setMinimum(-2147480000.000000000000000);
        vectorZ->setMaximum(2147480000.000000000000000);
        vectorZ->setValue(1.000000000000000);

        gridLayout1->addWidget(vectorZ, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__InputVector);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        QWidget::setTabOrder(vectorX, vectorY);
        QWidget::setTabOrder(vectorY, vectorZ);

        retranslateUi(Gui__Dialog__InputVector);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__InputVector, SLOT(accept()));

        QMetaObject::connectSlotsByName(Gui__Dialog__InputVector);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__InputVector)
    {
        Gui__Dialog__InputVector->setWindowTitle(QCoreApplication::translate("Gui::Dialog::InputVector", "Input vector", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::InputVector", "Vector", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::InputVector", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("Gui::Dialog::InputVector", "Y:", nullptr));
        label_3->setText(QCoreApplication::translate("Gui::Dialog::InputVector", "Z:", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class InputVector: public Ui_InputVector {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_INPUTVECTOR_H
