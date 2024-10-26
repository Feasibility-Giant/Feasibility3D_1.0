/********************************************************************************
** Form generated from reading UI file 'DlgSettingsColorGradient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSCOLORGRADIENT_H
#define UI_DLGSETTINGSCOLORGRADIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsColorGradient
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxModel;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel5;
    QComboBox *comboBoxModel;
    QSpacerItem *spacerItem;
    QGroupBox *buttonGroupStyle;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonFlow;
    QRadioButton *radioButtonZero;
    QGroupBox *groupBoxVisible;
    QHBoxLayout *hboxLayout;
    QCheckBox *checkBoxGrayed;
    QCheckBox *checkBoxInvisible;
    QGroupBox *groupBoxRange;
    QGridLayout *gridLayout_2;
    QLabel *textLabelMax;
    QLineEdit *floatLineEditMax;
    QSpacerItem *spacerItem1;
    QLabel *textLabel1;
    QSpinBox *spinBoxLabel;
    QLabel *textLabelMin;
    QLineEdit *floatLineEditMin;
    QLabel *textLabel1_2;
    QSpinBox *spinBoxDecimals;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgSettingsColorGradient)
    {
        if (Gui__Dialog__DlgSettingsColorGradient->objectName().isEmpty())
            Gui__Dialog__DlgSettingsColorGradient->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsColorGradient"));
        Gui__Dialog__DlgSettingsColorGradient->resize(255, 313);
        Gui__Dialog__DlgSettingsColorGradient->setSizeGripEnabled(true);
        Gui__Dialog__DlgSettingsColorGradient->setModal(true);
        verticalLayout = new QVBoxLayout(Gui__Dialog__DlgSettingsColorGradient);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxModel = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxModel->setObjectName(QString::fromUtf8("groupBoxModel"));
        horizontalLayout = new QHBoxLayout(groupBoxModel);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textLabel5 = new QLabel(groupBoxModel);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        horizontalLayout->addWidget(textLabel5);

        comboBoxModel = new QComboBox(groupBoxModel);
        comboBoxModel->addItem(QString());
        comboBoxModel->addItem(QString());
        comboBoxModel->addItem(QString());
        comboBoxModel->addItem(QString());
        comboBoxModel->setObjectName(QString::fromUtf8("comboBoxModel"));

        horizontalLayout->addWidget(comboBoxModel);

        spacerItem = new QSpacerItem(3, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);


        verticalLayout->addWidget(groupBoxModel);

        buttonGroupStyle = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        buttonGroupStyle->setObjectName(QString::fromUtf8("buttonGroupStyle"));
        gridLayout = new QGridLayout(buttonGroupStyle);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        radioButtonFlow = new QRadioButton(buttonGroupStyle);
        radioButtonFlow->setObjectName(QString::fromUtf8("radioButtonFlow"));
        radioButtonFlow->setChecked(true);

        gridLayout->addWidget(radioButtonFlow, 0, 0, 1, 1);

        radioButtonZero = new QRadioButton(buttonGroupStyle);
        radioButtonZero->setObjectName(QString::fromUtf8("radioButtonZero"));

        gridLayout->addWidget(radioButtonZero, 0, 1, 1, 1);


        verticalLayout->addWidget(buttonGroupStyle);

        groupBoxVisible = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxVisible->setObjectName(QString::fromUtf8("groupBoxVisible"));
        hboxLayout = new QHBoxLayout(groupBoxVisible);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        checkBoxGrayed = new QCheckBox(groupBoxVisible);
        checkBoxGrayed->setObjectName(QString::fromUtf8("checkBoxGrayed"));

        hboxLayout->addWidget(checkBoxGrayed);

        checkBoxInvisible = new QCheckBox(groupBoxVisible);
        checkBoxInvisible->setObjectName(QString::fromUtf8("checkBoxInvisible"));

        hboxLayout->addWidget(checkBoxInvisible);


        verticalLayout->addWidget(groupBoxVisible);

        groupBoxRange = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxRange->setObjectName(QString::fromUtf8("groupBoxRange"));
        gridLayout_2 = new QGridLayout(groupBoxRange);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textLabelMax = new QLabel(groupBoxRange);
        textLabelMax->setObjectName(QString::fromUtf8("textLabelMax"));

        gridLayout_2->addWidget(textLabelMax, 0, 0, 2, 1);

        floatLineEditMax = new QLineEdit(groupBoxRange);
        floatLineEditMax->setObjectName(QString::fromUtf8("floatLineEditMax"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(floatLineEditMax->sizePolicy().hasHeightForWidth());
        floatLineEditMax->setSizePolicy(sizePolicy);
        floatLineEditMax->setMinimumSize(QSize(60, 0));
        floatLineEditMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(floatLineEditMax, 0, 1, 2, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem1, 0, 3, 1, 1);

        textLabel1 = new QLabel(groupBoxRange);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout_2->addWidget(textLabel1, 0, 4, 2, 1);

        spinBoxLabel = new QSpinBox(groupBoxRange);
        spinBoxLabel->setObjectName(QString::fromUtf8("spinBoxLabel"));
        spinBoxLabel->setMinimumSize(QSize(40, 0));
        spinBoxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(spinBoxLabel, 0, 5, 2, 1);

        textLabelMin = new QLabel(groupBoxRange);
        textLabelMin->setObjectName(QString::fromUtf8("textLabelMin"));

        gridLayout_2->addWidget(textLabelMin, 2, 0, 1, 1);

        floatLineEditMin = new QLineEdit(groupBoxRange);
        floatLineEditMin->setObjectName(QString::fromUtf8("floatLineEditMin"));
        sizePolicy.setHeightForWidth(floatLineEditMin->sizePolicy().hasHeightForWidth());
        floatLineEditMin->setSizePolicy(sizePolicy);
        floatLineEditMin->setMinimumSize(QSize(60, 0));
        floatLineEditMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(floatLineEditMin, 2, 1, 1, 1);

        textLabel1_2 = new QLabel(groupBoxRange);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout_2->addWidget(textLabel1_2, 2, 4, 1, 1);

        spinBoxDecimals = new QSpinBox(groupBoxRange);
        spinBoxDecimals->setObjectName(QString::fromUtf8("spinBoxDecimals"));
        spinBoxDecimals->setMinimumSize(QSize(40, 0));
        spinBoxDecimals->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxDecimals->setMaximum(6);
        spinBoxDecimals->setValue(2);

        gridLayout_2->addWidget(spinBoxDecimals, 2, 5, 1, 1);


        verticalLayout->addWidget(groupBoxRange);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgSettingsColorGradient);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        textLabel5->setBuddy(comboBoxModel);
        textLabelMax->setBuddy(floatLineEditMax);
        textLabel1->setBuddy(spinBoxLabel);
        textLabelMin->setBuddy(floatLineEditMin);
        textLabel1_2->setBuddy(spinBoxDecimals);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(comboBoxModel, radioButtonFlow);
        QWidget::setTabOrder(radioButtonFlow, checkBoxGrayed);
        QWidget::setTabOrder(checkBoxGrayed, checkBoxInvisible);
        QWidget::setTabOrder(checkBoxInvisible, floatLineEditMax);
        QWidget::setTabOrder(floatLineEditMax, floatLineEditMin);
        QWidget::setTabOrder(floatLineEditMin, spinBoxLabel);

        retranslateUi(Gui__Dialog__DlgSettingsColorGradient);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgSettingsColorGradient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgSettingsColorGradient, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsColorGradient);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgSettingsColorGradient)
    {
        Gui__Dialog__DlgSettingsColorGradient->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color-gradient settings", nullptr));
        groupBoxModel->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color model", nullptr));
        textLabel5->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Gradient:", nullptr));
        comboBoxModel->setItemText(0, QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "red-yellow-green-cyan-blue", nullptr));
        comboBoxModel->setItemText(1, QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "blue-cyan-green-yellow-red", nullptr));
        comboBoxModel->setItemText(2, QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "white-black", nullptr));
        comboBoxModel->setItemText(3, QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "black-white", nullptr));

        buttonGroupStyle->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Style", nullptr));
#if QT_CONFIG(tooltip)
        radioButtonFlow->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color gradient is used with its full color range", nullptr));
#endif // QT_CONFIG(tooltip)
        radioButtonFlow->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Flow", nullptr));
#if QT_CONFIG(shortcut)
        radioButtonFlow->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+F", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        radioButtonZero->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color gradient starts from the zero value", nullptr));
#endif // QT_CONFIG(tooltip)
        radioButtonZero->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Zero", nullptr));
#if QT_CONFIG(shortcut)
        radioButtonZero->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBoxVisible->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Visibility", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxGrayed->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Data outside the specified min-max range\n"
"will be displayed in gray", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxGrayed->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Out g&rayed", nullptr));
#if QT_CONFIG(shortcut)
        checkBoxGrayed->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        checkBoxInvisible->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Data outside the specified min-max range\n"
"will be displayed with transparency", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxInvisible->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Out &transparent", nullptr));
#if QT_CONFIG(shortcut)
        checkBoxInvisible->setShortcut(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+I", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBoxRange->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Parameter range", nullptr));
        textLabelMax->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Ma&ximum:", nullptr));
        textLabel1->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Labels:", nullptr));
#if QT_CONFIG(tooltip)
        spinBoxLabel->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Number of labels besides the color bar", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabelMin->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Mi&nimum:", nullptr));
        textLabel1_2->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Decimals:", nullptr));
#if QT_CONFIG(tooltip)
        spinBoxDecimals->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Number of decimals for labels\n"
"besides the color bar", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsColorGradient: public Ui_DlgSettingsColorGradient {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSCOLORGRADIENT_H
