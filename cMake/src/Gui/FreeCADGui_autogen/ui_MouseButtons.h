/********************************************************************************
** Form generated from reading UI file 'MouseButtons.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEBUTTONS_H
#define UI_MOUSEBUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

namespace Gui {
namespace Dialog {

class Ui_MouseButtons
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *selectionLabel;
    QLabel *label_3;
    QLabel *panningLabel;
    QLabel *label_4;
    QLabel *rotationLabel;
    QLabel *label_5;
    QLabel *zoomingLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__MouseButtons)
    {
        if (Gui__Dialog__MouseButtons->objectName().isEmpty())
            Gui__Dialog__MouseButtons->setObjectName(QString::fromUtf8("Gui__Dialog__MouseButtons"));
        Gui__Dialog__MouseButtons->resize(364, 239);
        gridLayout_3 = new QGridLayout(Gui__Dialog__MouseButtons);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(Gui__Dialog__MouseButtons);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        selectionLabel = new QLabel(groupBox);
        selectionLabel->setObjectName(QString::fromUtf8("selectionLabel"));
        selectionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(selectionLabel, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        panningLabel = new QLabel(groupBox);
        panningLabel->setObjectName(QString::fromUtf8("panningLabel"));
        panningLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(panningLabel, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        rotationLabel = new QLabel(groupBox);
        rotationLabel->setObjectName(QString::fromUtf8("rotationLabel"));
        rotationLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(rotationLabel, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        zoomingLabel = new QLabel(groupBox);
        zoomingLabel->setObjectName(QString::fromUtf8("zoomingLabel"));
        zoomingLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(zoomingLabel, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__MouseButtons);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_3->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__MouseButtons);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__MouseButtons, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__MouseButtons, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__MouseButtons);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__MouseButtons)
    {
        Gui__Dialog__MouseButtons->setWindowTitle(QCoreApplication::translate("Gui::Dialog::MouseButtons", "Mouse buttons", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::MouseButtons", "Configuration", nullptr));
        label->setText(QCoreApplication::translate("Gui::Dialog::MouseButtons", "Selection:", nullptr));
        selectionLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("Gui::Dialog::MouseButtons", "Panning:", nullptr));
        panningLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("Gui::Dialog::MouseButtons", "Rotation:", nullptr));
        rotationLabel->setText(QString());
        label_5->setText(QCoreApplication::translate("Gui::Dialog::MouseButtons", "Zooming:", nullptr));
        zoomingLabel->setText(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class MouseButtons: public Ui_MouseButtons {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_MOUSEBUTTONS_H
