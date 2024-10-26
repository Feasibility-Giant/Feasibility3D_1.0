/********************************************************************************
** Form generated from reading UI file 'VectorListEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTORLISTEDITOR_H
#define UI_VECTORLISTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Gui {

class Ui_VectorListEditor
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QDoubleSpinBox *coordX;
    QLabel *label_3;
    QDoubleSpinBox *coordY;
    QLabel *label_4;
    QDoubleSpinBox *coordZ;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonMouse;
    QToolButton *toolButtonAdd;
    QToolButton *toolButtonRemove;
    QToolButton *toolButtonAccept;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTableView *tableWidget;

    void setupUi(QDialog *Gui__VectorListEditor)
    {
        if (Gui__VectorListEditor->objectName().isEmpty())
            Gui__VectorListEditor->setObjectName(QString::fromUtf8("Gui__VectorListEditor"));
        Gui__VectorListEditor->resize(288, 476);
        gridLayout_3 = new QGridLayout(Gui__VectorListEditor);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Gui__VectorListEditor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("Id:"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spinBox = new QSpinBox(Gui__VectorListEditor);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);

        gridLayout_2->addWidget(spinBox, 0, 1, 1, 1);

        label_2 = new QLabel(Gui__VectorListEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("x:"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        coordX = new QDoubleSpinBox(Gui__VectorListEditor);
        coordX->setObjectName(QString::fromUtf8("coordX"));

        gridLayout_2->addWidget(coordX, 1, 1, 1, 1);

        label_3 = new QLabel(Gui__VectorListEditor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setText(QString::fromUtf8("y:"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        coordY = new QDoubleSpinBox(Gui__VectorListEditor);
        coordY->setObjectName(QString::fromUtf8("coordY"));

        gridLayout_2->addWidget(coordY, 2, 1, 1, 1);

        label_4 = new QLabel(Gui__VectorListEditor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setText(QString::fromUtf8("z:"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        coordZ = new QDoubleSpinBox(Gui__VectorListEditor);
        coordZ->setObjectName(QString::fromUtf8("coordZ"));

        gridLayout_2->addWidget(coordZ, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonBox = new QDialogButtonBox(Gui__VectorListEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Gui__VectorListEditor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCheckable(true);

        verticalLayout->addWidget(pushButton);


        gridLayout_3->addLayout(verticalLayout, 0, 2, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButtonMouse = new QToolButton(Gui__VectorListEditor);
        toolButtonMouse->setObjectName(QString::fromUtf8("toolButtonMouse"));
        toolButtonMouse->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/mouse_pointer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonMouse->setIcon(icon);

        horizontalLayout->addWidget(toolButtonMouse);

        toolButtonAdd = new QToolButton(Gui__VectorListEditor);
        toolButtonAdd->setObjectName(QString::fromUtf8("toolButtonAdd"));
        toolButtonAdd->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonAdd->setIcon(icon1);

        horizontalLayout->addWidget(toolButtonAdd);

        toolButtonRemove = new QToolButton(Gui__VectorListEditor);
        toolButtonRemove->setObjectName(QString::fromUtf8("toolButtonRemove"));
        toolButtonRemove->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonRemove->setIcon(icon2);

        horizontalLayout->addWidget(toolButtonRemove);

        toolButtonAccept = new QToolButton(Gui__VectorListEditor);
        toolButtonAccept->setObjectName(QString::fromUtf8("toolButtonAccept"));
        toolButtonAccept->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/edit_OK.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonAccept->setIcon(icon3);

        horizontalLayout->addWidget(toolButtonAccept);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        widget = new QWidget(Gui__VectorListEditor);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 300));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableView(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(80);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 3);

        QWidget::setTabOrder(spinBox, coordX);
        QWidget::setTabOrder(coordX, coordY);
        QWidget::setTabOrder(coordY, coordZ);
        QWidget::setTabOrder(coordZ, toolButtonMouse);
        QWidget::setTabOrder(toolButtonMouse, toolButtonAdd);
        QWidget::setTabOrder(toolButtonAdd, toolButtonRemove);
        QWidget::setTabOrder(toolButtonRemove, toolButtonAccept);
        QWidget::setTabOrder(toolButtonAccept, tableWidget);
        QWidget::setTabOrder(tableWidget, pushButton);

        retranslateUi(Gui__VectorListEditor);
        QObject::connect(pushButton, SIGNAL(toggled(bool)), widget, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Gui__VectorListEditor);
    } // setupUi

    void retranslateUi(QDialog *Gui__VectorListEditor)
    {
        Gui__VectorListEditor->setWindowTitle(QCoreApplication::translate("Gui::VectorListEditor", "Vectors", nullptr));
        pushButton->setText(QCoreApplication::translate("Gui::VectorListEditor", "Table", nullptr));
    } // retranslateUi

};

} // namespace Gui

namespace Gui {
namespace Ui {
    class VectorListEditor: public Ui_VectorListEditor {};
} // namespace Ui
} // namespace Gui

#endif // UI_VECTORLISTEDITOR_H
