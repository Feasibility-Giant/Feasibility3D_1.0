/********************************************************************************
** Form generated from reading UI file 'TaskDimension.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDIMENSION_H
#define UI_TASKDIMENSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/QuantitySpinBox.h"
#include "Gui/Widgets.h"

namespace TechDrawGui {

class Ui_TaskDimension
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gbTolerancing;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QCheckBox *cbTheoreticallyExact;
    QCheckBox *cbEqualTolerance;
    QLabel *label_2;
    Gui::QuantitySpinBox *qsbOvertolerance;
    QLabel *label_8;
    Gui::QuantitySpinBox *qsbUndertolerance;
    QGroupBox *gbFormatting;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLineEdit *leFormatSpecifier;
    QCheckBox *cbArbitrary;
    QLabel *label;
    QLineEdit *leFormatSpecifierOverTolerance;
    QLabel *label_12;
    QLineEdit *leFormatSpecifierUnderTolerance;
    QCheckBox *cbArbitraryTolerances;
    QGroupBox *gbDisplayStyle;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_3;
    QCheckBox *cbArrowheads;
    QLabel *label_5;
    Gui::ColorButton *dimensionColor;
    QLabel *label_7;
    Gui::QuantitySpinBox *qsbFontSize;
    QLabel *label_4;
    QComboBox *comboDrawingStyle;
    QGroupBox *gbLines;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_4;
    QRadioButton *rbOverride;
    QLabel *label_3;
    QDoubleSpinBox *dsbDimAngle;
    QPushButton *pbDimUseDefault;
    QPushButton *pbDimUseSelection;
    QLabel *label_6;
    QDoubleSpinBox *dsbExtAngle;
    QPushButton *pbExtUseDefault;
    QPushButton *pbExtUseSelection;

    void setupUi(QWidget *TechDrawGui__TaskDimension)
    {
        if (TechDrawGui__TaskDimension->objectName().isEmpty())
            TechDrawGui__TaskDimension->setObjectName(QString::fromUtf8("TechDrawGui__TaskDimension"));
        TechDrawGui__TaskDimension->resize(371, 698);
        verticalLayout_4 = new QVBoxLayout(TechDrawGui__TaskDimension);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gbTolerancing = new QGroupBox(TechDrawGui__TaskDimension);
        gbTolerancing->setObjectName(QString::fromUtf8("gbTolerancing"));
        verticalLayout_2 = new QVBoxLayout(gbTolerancing);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cbTheoreticallyExact = new QCheckBox(gbTolerancing);
        cbTheoreticallyExact->setObjectName(QString::fromUtf8("cbTheoreticallyExact"));

        gridLayout_2->addWidget(cbTheoreticallyExact, 0, 0, 1, 1);

        cbEqualTolerance = new QCheckBox(gbTolerancing);
        cbEqualTolerance->setObjectName(QString::fromUtf8("cbEqualTolerance"));

        gridLayout_2->addWidget(cbEqualTolerance, 1, 0, 1, 1);

        label_2 = new QLabel(gbTolerancing);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        qsbOvertolerance = new Gui::QuantitySpinBox(gbTolerancing);
        qsbOvertolerance->setObjectName(QString::fromUtf8("qsbOvertolerance"));
        qsbOvertolerance->setMinimumSize(QSize(0, 20));
        qsbOvertolerance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbOvertolerance->setSingleStep(0.100000000000000);
        qsbOvertolerance->setValue(0.000000000000000);

        gridLayout_2->addWidget(qsbOvertolerance, 2, 1, 1, 1);

        label_8 = new QLabel(gbTolerancing);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        qsbUndertolerance = new Gui::QuantitySpinBox(gbTolerancing);
        qsbUndertolerance->setObjectName(QString::fromUtf8("qsbUndertolerance"));
        qsbUndertolerance->setMinimumSize(QSize(0, 20));
        qsbUndertolerance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbUndertolerance->setSingleStep(0.100000000000000);
        qsbUndertolerance->setValue(0.000000000000000);

        gridLayout_2->addWidget(qsbUndertolerance, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_4->addWidget(gbTolerancing);

        gbFormatting = new QGroupBox(TechDrawGui__TaskDimension);
        gbFormatting->setObjectName(QString::fromUtf8("gbFormatting"));
        verticalLayout = new QVBoxLayout(gbFormatting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_11 = new QLabel(gbFormatting);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        leFormatSpecifier = new QLineEdit(gbFormatting);
        leFormatSpecifier->setObjectName(QString::fromUtf8("leFormatSpecifier"));

        gridLayout->addWidget(leFormatSpecifier, 0, 1, 1, 1);

        cbArbitrary = new QCheckBox(gbFormatting);
        cbArbitrary->setObjectName(QString::fromUtf8("cbArbitrary"));

        gridLayout->addWidget(cbArbitrary, 1, 0, 1, 1);

        label = new QLabel(gbFormatting);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        leFormatSpecifierOverTolerance = new QLineEdit(gbFormatting);
        leFormatSpecifierOverTolerance->setObjectName(QString::fromUtf8("leFormatSpecifierOverTolerance"));

        gridLayout->addWidget(leFormatSpecifierOverTolerance, 2, 1, 1, 1);

        label_12 = new QLabel(gbFormatting);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        leFormatSpecifierUnderTolerance = new QLineEdit(gbFormatting);
        leFormatSpecifierUnderTolerance->setObjectName(QString::fromUtf8("leFormatSpecifierUnderTolerance"));

        gridLayout->addWidget(leFormatSpecifierUnderTolerance, 3, 1, 1, 1);

        cbArbitraryTolerances = new QCheckBox(gbFormatting);
        cbArbitraryTolerances->setObjectName(QString::fromUtf8("cbArbitraryTolerances"));

        gridLayout->addWidget(cbArbitraryTolerances, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_4->addWidget(gbFormatting);

        gbDisplayStyle = new QGroupBox(TechDrawGui__TaskDimension);
        gbDisplayStyle->setObjectName(QString::fromUtf8("gbDisplayStyle"));
        verticalLayout_3 = new QVBoxLayout(gbDisplayStyle);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cbArrowheads = new QCheckBox(gbDisplayStyle);
        cbArrowheads->setObjectName(QString::fromUtf8("cbArrowheads"));

        gridLayout_3->addWidget(cbArrowheads, 0, 0, 1, 1);

        label_5 = new QLabel(gbDisplayStyle);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        dimensionColor = new Gui::ColorButton(gbDisplayStyle);
        dimensionColor->setObjectName(QString::fromUtf8("dimensionColor"));
        dimensionColor->setColor(QColor(0, 0, 0));

        gridLayout_3->addWidget(dimensionColor, 1, 1, 1, 1);

        label_7 = new QLabel(gbDisplayStyle);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        qsbFontSize = new Gui::QuantitySpinBox(gbDisplayStyle);
        qsbFontSize->setObjectName(QString::fromUtf8("qsbFontSize"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qsbFontSize->sizePolicy().hasHeightForWidth());
        qsbFontSize->setSizePolicy(sizePolicy);
        qsbFontSize->setMinimumSize(QSize(0, 20));
        qsbFontSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qsbFontSize->setMinimum(0.000000000000000);
        qsbFontSize->setValue(4.000000000000000);
        qsbFontSize->setProperty("prefEntry", QVariant(QByteArray("FontSize")));
        qsbFontSize->setProperty("prefPath", QVariant(QByteArray("/Mod/TechDraw/Dimensions")));

        gridLayout_3->addWidget(qsbFontSize, 2, 1, 1, 1);

        label_4 = new QLabel(gbDisplayStyle);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        comboDrawingStyle = new QComboBox(gbDisplayStyle);
        comboDrawingStyle->addItem(QString());
        comboDrawingStyle->addItem(QString());
        comboDrawingStyle->addItem(QString());
        comboDrawingStyle->addItem(QString());
        comboDrawingStyle->setObjectName(QString::fromUtf8("comboDrawingStyle"));

        gridLayout_3->addWidget(comboDrawingStyle, 3, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);


        verticalLayout_4->addWidget(gbDisplayStyle);

        gbLines = new QGroupBox(TechDrawGui__TaskDimension);
        gbLines->setObjectName(QString::fromUtf8("gbLines"));
        verticalLayout_5 = new QVBoxLayout(gbLines);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        rbOverride = new QRadioButton(gbLines);
        rbOverride->setObjectName(QString::fromUtf8("rbOverride"));

        gridLayout_4->addWidget(rbOverride, 0, 0, 1, 1);

        label_3 = new QLabel(gbLines);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        dsbDimAngle = new QDoubleSpinBox(gbLines);
        dsbDimAngle->setObjectName(QString::fromUtf8("dsbDimAngle"));
        dsbDimAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbDimAngle->setMinimum(-360.000000000000000);
        dsbDimAngle->setMaximum(360.000000000000000);

        gridLayout_4->addWidget(dsbDimAngle, 1, 1, 1, 1);

        pbDimUseDefault = new QPushButton(gbLines);
        pbDimUseDefault->setObjectName(QString::fromUtf8("pbDimUseDefault"));

        gridLayout_4->addWidget(pbDimUseDefault, 2, 0, 1, 1);

        pbDimUseSelection = new QPushButton(gbLines);
        pbDimUseSelection->setObjectName(QString::fromUtf8("pbDimUseSelection"));

        gridLayout_4->addWidget(pbDimUseSelection, 2, 1, 1, 1);

        label_6 = new QLabel(gbLines);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 3, 0, 1, 1);

        dsbExtAngle = new QDoubleSpinBox(gbLines);
        dsbExtAngle->setObjectName(QString::fromUtf8("dsbExtAngle"));
        dsbExtAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dsbExtAngle->setMinimum(-360.000000000000000);
        dsbExtAngle->setMaximum(360.000000000000000);

        gridLayout_4->addWidget(dsbExtAngle, 3, 1, 1, 1);

        pbExtUseDefault = new QPushButton(gbLines);
        pbExtUseDefault->setObjectName(QString::fromUtf8("pbExtUseDefault"));

        gridLayout_4->addWidget(pbExtUseDefault, 4, 0, 1, 1);

        pbExtUseSelection = new QPushButton(gbLines);
        pbExtUseSelection->setObjectName(QString::fromUtf8("pbExtUseSelection"));

        gridLayout_4->addWidget(pbExtUseSelection, 4, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_4);


        verticalLayout_4->addWidget(gbLines);


        retranslateUi(TechDrawGui__TaskDimension);

        QMetaObject::connectSlotsByName(TechDrawGui__TaskDimension);
    } // setupUi

    void retranslateUi(QWidget *TechDrawGui__TaskDimension)
    {
        TechDrawGui__TaskDimension->setWindowTitle(QCoreApplication::translate("TechDrawGui::TaskDimension", "Dimension", nullptr));
        gbTolerancing->setTitle(QCoreApplication::translate("TechDrawGui::TaskDimension", "Tolerancing", nullptr));
#if QT_CONFIG(tooltip)
        cbTheoreticallyExact->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "If theoretical exact (basic) dimension", nullptr));
#endif // QT_CONFIG(tooltip)
        cbTheoreticallyExact->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Theoretically Exact", nullptr));
#if QT_CONFIG(tooltip)
        cbEqualTolerance->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Assign same value to over and under tolerance", nullptr));
#endif // QT_CONFIG(tooltip)
        cbEqualTolerance->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Equal Tolerance", nullptr));
        label_2->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Overtolerance:", nullptr));
#if QT_CONFIG(tooltip)
        qsbOvertolerance->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Overtolerance value\n"
"If 'Equal Tolerance' is checked this is also\n"
"the negated value for 'Under Tolerance'.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Undertolerance:", nullptr));
#if QT_CONFIG(tooltip)
        qsbUndertolerance->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Undertolerance value\n"
"If 'Equal Tolerance' is checked it will be replaced\n"
"by negative value of 'Over Tolerance'.", nullptr));
#endif // QT_CONFIG(tooltip)
        gbFormatting->setTitle(QCoreApplication::translate("TechDrawGui::TaskDimension", "Formatting", nullptr));
        label_11->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Format Specifier:", nullptr));
#if QT_CONFIG(tooltip)
        leFormatSpecifier->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Text to be displayed", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbArbitrary->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "If checked the content of 'Format Spec' will\n"
"be used instead of the dimension value", nullptr));
#endif // QT_CONFIG(tooltip)
        cbArbitrary->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Arbitrary Text", nullptr));
        label->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "OverTolerance Format Specifier:", nullptr));
#if QT_CONFIG(tooltip)
        leFormatSpecifierOverTolerance->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Specifies the overtolerance format in printf() style, or arbitrary text", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "UnderTolerance Format Specifier:", nullptr));
#if QT_CONFIG(tooltip)
        leFormatSpecifierUnderTolerance->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Specifies the undertolerance format in printf() style, or arbitrary text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbArbitraryTolerances->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "<html><head/><body><p>If checked the content of tolerance format spec  will</p><p>be used instead of the tolerance value</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbArbitraryTolerances->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Arbitrary Tolerance Text", nullptr));
        gbDisplayStyle->setTitle(QCoreApplication::translate("TechDrawGui::TaskDimension", "Display Style", nullptr));
#if QT_CONFIG(tooltip)
        cbArrowheads->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Reverses usual direction of dimension line terminators", nullptr));
#endif // QT_CONFIG(tooltip)
        cbArrowheads->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Flip Arrowheads", nullptr));
        label_5->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Color:", nullptr));
#if QT_CONFIG(tooltip)
        dimensionColor->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Color of the dimension", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Font Size:", nullptr));
#if QT_CONFIG(tooltip)
        qsbFontSize->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Fontsize for 'Text'", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Drawing Style:", nullptr));
        comboDrawingStyle->setItemText(0, QCoreApplication::translate("TechDrawGui::TaskDimension", "ISO Oriented", nullptr));
        comboDrawingStyle->setItemText(1, QCoreApplication::translate("TechDrawGui::TaskDimension", "ISO Referencing", nullptr));
        comboDrawingStyle->setItemText(2, QCoreApplication::translate("TechDrawGui::TaskDimension", "ASME Inlined", nullptr));
        comboDrawingStyle->setItemText(3, QCoreApplication::translate("TechDrawGui::TaskDimension", "ASME Referencing", nullptr));

#if QT_CONFIG(tooltip)
        comboDrawingStyle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Standard and style according to which dimension is drawn", nullptr));
#endif // QT_CONFIG(tooltip)
        gbLines->setTitle(QCoreApplication::translate("TechDrawGui::TaskDimension", "Lines", nullptr));
#if QT_CONFIG(tooltip)
        rbOverride->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Use override angles if checked. Use default angles if unchecked.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbOverride->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Override angles", nullptr));
        label_3->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Dimension line angle", nullptr));
#if QT_CONFIG(tooltip)
        dsbDimAngle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Angle of dimension line with drawing X axis (degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbDimUseDefault->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Set dimension line angle to default (ortho view).", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDimUseDefault->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Use default", nullptr));
#if QT_CONFIG(tooltip)
        pbDimUseSelection->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Set dimension line angle to match selected edge or vertices.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDimUseSelection->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Use selection", nullptr));
        label_6->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Extension line angle", nullptr));
#if QT_CONFIG(tooltip)
        dsbExtAngle->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Angle of extension lines with drawing X axis (degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbExtUseDefault->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Set extension line angle to default (ortho).", nullptr));
#endif // QT_CONFIG(tooltip)
        pbExtUseDefault->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Use default", nullptr));
#if QT_CONFIG(tooltip)
        pbExtUseSelection->setToolTip(QCoreApplication::translate("TechDrawGui::TaskDimension", "Set extension line angle to match selected edge or vertices.", nullptr));
#endif // QT_CONFIG(tooltip)
        pbExtUseSelection->setText(QCoreApplication::translate("TechDrawGui::TaskDimension", "Use selection", nullptr));
    } // retranslateUi

};

} // namespace TechDrawGui

namespace TechDrawGui {
namespace Ui {
    class TaskDimension: public Ui_TaskDimension {};
} // namespace Ui
} // namespace TechDrawGui

#endif // UI_TASKDIMENSION_H
