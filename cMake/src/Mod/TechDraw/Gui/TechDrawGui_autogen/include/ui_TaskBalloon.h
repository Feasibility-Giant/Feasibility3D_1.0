/********************************************************************************
** Form generated from reading UI file 'TaskBalloon.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKBALLOON_H
#define UI_TASKBALLOON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskBalloon
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leText;
    QLabel *label_5;
    Gui::ColorButton *textColor;
    QLabel *label_7;
    Gui::QuantitySpinBox *qsbFontSize;
    QLabel *label_3;
    QComboBox *comboBubbleShape;
    QLabel *label_2;
    Gui::QuantitySpinBox *qsbShapeScale;
    QLabel *label_4;
    QComboBox *comboEndSymbol;
    QLabel *label_10;
    Gui::QuantitySpinBox *qsbSymbolScale;
    QLabel *label_9;
    QComboBox *comboLineVisible;
    QLabel *label_8;
    Gui::QuantitySpinBox *qsbLineWidth;
    QLabel *label_6;
    Gui::QuantitySpinBox *qsbKinkLength;

    void setupUi(QWidget *TechDrawGui__TaskBalloon)
    {
        if (TechDrawGui__TaskBalloon->objectName().isEmpty())
            TechDrawGui__TaskBalloon->setObjectName(QString::fromUtf8("TechDrawGui__TaskBalloon"));
        TechDrawGui__TaskBalloon->resize(300, 279);
        verticalLayout = new QVBoxLayout(TechDrawGui__TaskBalloon);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(TechDrawGui__TaskBalloon);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leText = new QLineEdit(TechDrawGui__TaskBalloon);
        leText->setObjectName(QString::fromUtf8("leText"));

        gridLayout->addWidget(leText, 0, 1, 1, 1);

        label_5 = new QLabel(TechDrawGui__TaskBalloon);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        textColor = new Gui::ColorButton(TechDrawGui__TaskBalloon);
        textColor->setObjectName(QString::fromUtf8("textColor"));
        textColor->setColor(QColor(0, 0, 0));

        gridLayout->addWidget(textColor, 1, 1, 1, 1);

        label_7 = new QLabel(TechDrawGui__TaskBalloon);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        qsbFontSize = new Gui::QuantitySpinBox(TechDrawGui__TaskBalloon);
        qsbFontSize->setObjectName(QString::fromUtf8("qsbFontSize"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qsbFontSize->sizePolicy().hasHeightForWidth());
        qsbFontSize->setSizePolicy(sizePolicy);
        qsbFontSize->setMinimumSize(QSize(0, 20));
        qsbFontSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbFontSize->setValue(4.000000000000000);
        qsbFontSize->setProperty("prefEntry", QVariant(QByteArray("BalloonKink")));
        qsbFontSize->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(qsbFontSize, 2, 1, 1, 1);

        label_3 = new QLabel(TechDrawGui__TaskBalloon);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comboBubbleShape = new QComboBox(TechDrawGui__TaskBalloon);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/circular.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/none.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/triangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/inspection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/hexagon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/square.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/rectangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/bottomline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBubbleShape->addItem(icon7, QString());
        comboBubbleShape->setObjectName(QString::fromUtf8("comboBubbleShape"));

        gridLayout->addWidget(comboBubbleShape, 3, 1, 1, 1);

        label_2 = new QLabel(TechDrawGui__TaskBalloon);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        qsbShapeScale = new Gui::QuantitySpinBox(TechDrawGui__TaskBalloon);
        qsbShapeScale->setObjectName(QString::fromUtf8("qsbShapeScale"));
        qsbShapeScale->setMinimumSize(QSize(0, 20));
        qsbShapeScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbShapeScale->setMinimum(0.000000000000000);
        qsbShapeScale->setSingleStep(0.100000000000000);
        qsbShapeScale->setValue(1.000000000000000);

        gridLayout->addWidget(qsbShapeScale, 4, 1, 1, 1);

        label_4 = new QLabel(TechDrawGui__TaskBalloon);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        comboEndSymbol = new QComboBox(TechDrawGui__TaskBalloon);
        comboEndSymbol->setObjectName(QString::fromUtf8("comboEndSymbol"));

        gridLayout->addWidget(comboEndSymbol, 5, 1, 1, 1);

        label_10 = new QLabel(TechDrawGui__TaskBalloon);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 0, 1, 1);

        qsbSymbolScale = new Gui::QuantitySpinBox(TechDrawGui__TaskBalloon);
        qsbSymbolScale->setObjectName(QString::fromUtf8("qsbSymbolScale"));
        qsbSymbolScale->setMinimumSize(QSize(0, 20));
        qsbSymbolScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbSymbolScale->setMinimum(0.000000000000000);
        qsbSymbolScale->setSingleStep(0.100000000000000);
        qsbSymbolScale->setValue(1.000000000000000);

        gridLayout->addWidget(qsbSymbolScale, 6, 1, 1, 1);

        label_9 = new QLabel(TechDrawGui__TaskBalloon);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        comboLineVisible = new QComboBox(TechDrawGui__TaskBalloon);
        comboLineVisible->addItem(QString());
        comboLineVisible->addItem(QString());
        comboLineVisible->setObjectName(QString::fromUtf8("comboLineVisible"));

        gridLayout->addWidget(comboLineVisible, 7, 1, 1, 1);

        label_8 = new QLabel(TechDrawGui__TaskBalloon);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        qsbLineWidth = new Gui::QuantitySpinBox(TechDrawGui__TaskBalloon);
        qsbLineWidth->setObjectName(QString::fromUtf8("qsbLineWidth"));
        sizePolicy.setHeightForWidth(qsbLineWidth->sizePolicy().hasHeightForWidth());
        qsbLineWidth->setSizePolicy(sizePolicy);
        qsbLineWidth->setMinimumSize(QSize(0, 20));
        qsbLineWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbLineWidth->setValue(0.350000000000000);
        qsbLineWidth->setProperty("prefEntry", QVariant(QByteArray("BalloonKink")));
        qsbLineWidth->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(qsbLineWidth, 8, 1, 1, 1);

        label_6 = new QLabel(TechDrawGui__TaskBalloon);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        qsbKinkLength = new Gui::QuantitySpinBox(TechDrawGui__TaskBalloon);
        qsbKinkLength->setObjectName(QString::fromUtf8("qsbKinkLength"));
        sizePolicy.setHeightForWidth(qsbKinkLength->sizePolicy().hasHeightForWidth());
        qsbKinkLength->setSizePolicy(sizePolicy);
        qsbKinkLength->setMinimumSize(QSize(0, 20));
        qsbKinkLength->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbKinkLength->setValue(5.000000000000000);
        qsbKinkLength->setProperty("prefEntry", QVariant(QByteArray("BalloonKink")));
        qsbKinkLength->setProperty("prefPath", QVariant(QByteArray("Mod/TechDraw/Dimensions")));

        gridLayout->addWidget(qsbKinkLength, 9, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(TechDrawGui__TaskBalloon);

        comboLineVisible->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TechDrawGui__TaskBalloon);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskBalloon)
    {
        TechDrawGui__TaskBalloon->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Balloon", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Text:", nullptr));
#if QT_CONFIG(tooltip)
        leText->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Text to be displayed", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Text Color:", nullptr));
#if QT_CONFIG(tooltip)
        textColor->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Color for 'Text'", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Font Size:", nullptr));
#if QT_CONFIG(tooltip)
        qsbFontSize->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Fontsize for 'Text'", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Bubble Shape:", nullptr));
        comboBubbleShape->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskBalloon", "Circular", nullptr));
        comboBubbleShape->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskBalloon", "None", nullptr));
        comboBubbleShape->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskBalloon", "Triangle", nullptr));
        comboBubbleShape->setItemText(3, QCoreApplication::translate("TechDrawGui::TaskBalloon", "Inspection", nullptr));
        comboBubbleShape->setItemText(4, QCoreApplication::translate("TechDrawGui::TaskBalloon", "Hexagon", nullptr));
        comboBubbleShape->setItemText(5, QCoreApplication::translate("TechDrawGui::TaskBalloon", "Square", nullptr));
        comboBubbleShape->setItemText(6, QCoreApplication::translate("TechDrawGui::TaskBalloon", "Rectangle", nullptr));
        comboBubbleShape->setItemText(7, QCoreApplication::translate("TechDrawGui::TaskBalloon", "Line", nullptr));

#if QT_CONFIG(tooltip)
        comboBubbleShape->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Shape of the balloon bubble", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Shape Scale:", nullptr));
#if QT_CONFIG(tooltip)
        qsbShapeScale->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Bubble shape scale factor", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "End Symbol:", nullptr));
#if QT_CONFIG(tooltip)
        comboEndSymbol->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "End symbol for the balloon line", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "End Symbol Scale:", nullptr));
#if QT_CONFIG(tooltip)
        qsbSymbolScale->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "End symbol scale factor", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Line Visible:", nullptr));
        comboLineVisible->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskBalloon", "False", nullptr));
        comboLineVisible->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskBalloon", "True", nullptr));

#if QT_CONFIG(tooltip)
        comboLineVisible->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Whether the leader line is visible or not", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Line Width:", nullptr));
#if QT_CONFIG(tooltip)
        qsbLineWidth->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Leader line width", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Leader Kink Length:", nullptr));
#if QT_CONFIG(tooltip)
        qsbKinkLength->setToolTip(QCoreApplication::translate("TechDrawGui::TaskBalloon", "Length of balloon leader line kink", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskBalloon: public Ui_TaskBalloon {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKBALLOON_H
