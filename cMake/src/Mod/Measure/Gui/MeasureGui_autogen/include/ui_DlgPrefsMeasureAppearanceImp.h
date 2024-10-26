/********************************************************************************
** Form generated from reading UI file 'DlgPrefsMeasureAppearanceImp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFSMEASUREAPPEARANCEIMP_H
#define UI_DLGPREFSMEASUREAPPEARANCEIMP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace MeasureGui {

class Ui_DlgPrefsMeasureAppearanceImp
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gbMisc;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *label_3;
    Gui::PrefSpinBox *sbFontSize;
    Gui::PrefColorButton *cbBackground;
    QLabel *backgroundColorLabel;
    Gui::PrefColorButton *cbLine;
    QLabel *textColorLabel;
    Gui::PrefColorButton *cbText;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MeasureGui__DlgPrefsMeasureAppearanceImp)
    {
        if (MeasureGui__DlgPrefsMeasureAppearanceImp->objectName().isEmpty())
            MeasureGui__DlgPrefsMeasureAppearanceImp->setObjectName(QString::fromUtf8("MeasureGui__DlgPrefsMeasureAppearanceImp"));
        MeasureGui__DlgPrefsMeasureAppearanceImp->resize(623, 287);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MeasureGui__DlgPrefsMeasureAppearanceImp->sizePolicy().hasHeightForWidth());
        MeasureGui__DlgPrefsMeasureAppearanceImp->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/preferences-measure.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MeasureGui__DlgPrefsMeasureAppearanceImp->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(MeasureGui__DlgPrefsMeasureAppearanceImp);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gbMisc = new QGroupBox(MeasureGui__DlgPrefsMeasureAppearanceImp);
        gbMisc->setObjectName(QString::fromUtf8("gbMisc"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbMisc->sizePolicy().hasHeightForWidth());
        gbMisc->setSizePolicy(sizePolicy1);
        gbMisc->setMinimumSize(QSize(0, 0));
        gbMisc->setMaximumSize(QSize(16777215, 200));
        verticalLayout_2 = new QVBoxLayout(gbMisc);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(gbMisc);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gbMisc);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        sbFontSize = new Gui::PrefSpinBox(gbMisc);
        sbFontSize->setObjectName(QString::fromUtf8("sbFontSize"));
        sbFontSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbFontSize->setMinimum(1);
        sbFontSize->setValue(18);
        sbFontSize->setProperty("prefEntry", QVariant(QByteArray("DefaultFontSize")));
        sbFontSize->setProperty("prefPath", QVariant(QByteArray("Mod/Measure/Appearance")));

        gridLayout_5->addWidget(sbFontSize, 0, 1, 1, 1);

        cbBackground = new Gui::PrefColorButton(gbMisc);
        cbBackground->setObjectName(QString::fromUtf8("cbBackground"));
        cbBackground->setProperty("color", QVariant(QColor(0, 0, 0)));
        cbBackground->setProperty("prefEntry", QVariant(QByteArray("DefaultTextBackgroundColor")));
        cbBackground->setProperty("prefPath", QVariant(QByteArray("Mod/Measure/Appearance")));

        gridLayout_5->addWidget(cbBackground, 3, 1, 1, 1);

        backgroundColorLabel = new QLabel(gbMisc);
        backgroundColorLabel->setObjectName(QString::fromUtf8("backgroundColorLabel"));

        gridLayout_5->addWidget(backgroundColorLabel, 3, 0, 1, 1);

        cbLine = new Gui::PrefColorButton(gbMisc);
        cbLine->setObjectName(QString::fromUtf8("cbLine"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbLine->sizePolicy().hasHeightForWidth());
        cbLine->setSizePolicy(sizePolicy2);
        cbLine->setProperty("color", QVariant(QColor(255, 255, 255)));
        cbLine->setProperty("prefEntry", QVariant(QByteArray("DefaultLineColor")));
        cbLine->setProperty("prefPath", QVariant(QByteArray("Mod/Measure/Appearance")));

        gridLayout_5->addWidget(cbLine, 2, 1, 1, 1);

        textColorLabel = new QLabel(gbMisc);
        textColorLabel->setObjectName(QString::fromUtf8("textColorLabel"));

        gridLayout_5->addWidget(textColorLabel, 1, 0, 1, 1);

        cbText = new Gui::PrefColorButton(gbMisc);
        cbText->setObjectName(QString::fromUtf8("cbText"));
        cbText->setProperty("color", QVariant(QColor(255, 255, 255)));
        cbText->setProperty("prefEntry", QVariant(QByteArray("DefaultTextColor")));
        cbText->setProperty("prefPath", QVariant(QByteArray("Mod/Measure/Appearance")));

        gridLayout_5->addWidget(cbText, 1, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 2);
        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_2->addLayout(gridLayout_5);


        verticalLayout_3->addWidget(gbMisc);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(MeasureGui__DlgPrefsMeasureAppearanceImp);

        QMetaObject::connectSlotsByName(MeasureGui__DlgPrefsMeasureAppearanceImp);
    } // setupUi

    void retranslateUi(QWidget *MeasureGui__DlgPrefsMeasureAppearanceImp)
    {
        MeasureGui__DlgPrefsMeasureAppearanceImp->setWindowTitle(QCoreApplication::translate("MeasureGui::DlgPrefsMeasureAppearanceImp", "Appearance", nullptr));
#if QT_CONFIG(tooltip)
        MeasureGui__DlgPrefsMeasureAppearanceImp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        gbMisc->setTitle(QCoreApplication::translate("MeasureGui::DlgPrefsMeasureAppearanceImp", "Default property values", nullptr));
        label->setText(QCoreApplication::translate("MeasureGui::DlgPrefsMeasureAppearanceImp", "Text size", nullptr));
        label_3->setText(QCoreApplication::translate("MeasureGui::DlgPrefsMeasureAppearanceImp", "Line color", nullptr));
        sbFontSize->setSuffix(QCoreApplication::translate("MeasureGui::DlgPrefsMeasureAppearanceImp", " px", nullptr));
        backgroundColorLabel->setText(QCoreApplication::translate("MeasureGui::DlgPrefsMeasureAppearanceImp", "Background color", nullptr));
        textColorLabel->setText(QCoreApplication::translate("MeasureGui::DlgPrefsMeasureAppearanceImp", "Text color", nullptr));
    } // retranslateUi

};

} // namespace MeasureGui

namespace MeasureGui {
namespace Ui {
    class DlgPrefsMeasureAppearanceImp: public Ui_DlgPrefsMeasureAppearanceImp {};
} // namespace Ui
} // namespace MeasureGui

#endif // UI_DLGPREFSMEASUREAPPEARANCEIMP_H
