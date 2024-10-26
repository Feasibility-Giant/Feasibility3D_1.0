/********************************************************************************
** Form generated from reading UI file 'SketchRectangularArrayDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHRECTANGULARARRAYDIALOG_H
#define UI_SKETCHRECTANGULARARRAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Gui/PrefWidgets.h"

namespace SketcherGui {

class Ui_SketchRectangularArrayDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    Gui::PrefSpinBox *ColsQuantitySpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    Gui::PrefSpinBox *RowsQuantitySpinBox;
    Gui::PrefCheckBox *EqualVerticalHorizontalSpacingCheckBox;
    Gui::PrefCheckBox *ConstraintSeparationCheckBox;
    Gui::PrefCheckBox *CloneCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SketcherGui__SketchRectangularArrayDialog)
    {
        if (SketcherGui__SketchRectangularArrayDialog->objectName().isEmpty())
            SketcherGui__SketchRectangularArrayDialog->setObjectName(QString::fromUtf8("SketcherGui__SketchRectangularArrayDialog"));
        SketcherGui__SketchRectangularArrayDialog->setWindowModality(Qt::ApplicationModal);
        SketcherGui__SketchRectangularArrayDialog->resize(287, 205);
        verticalLayout = new QVBoxLayout(SketcherGui__SketchRectangularArrayDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SketcherGui__SketchRectangularArrayDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        ColsQuantitySpinBox = new Gui::PrefSpinBox(SketcherGui__SketchRectangularArrayDialog);
        ColsQuantitySpinBox->setObjectName(QString::fromUtf8("ColsQuantitySpinBox"));
        ColsQuantitySpinBox->setMinimum(2);
        ColsQuantitySpinBox->setProperty("prefEntry", QVariant(QByteArray("DefaultArrayColumnNumber")));
        ColsQuantitySpinBox->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        horizontalLayout->addWidget(ColsQuantitySpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(SketcherGui__SketchRectangularArrayDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        RowsQuantitySpinBox = new Gui::PrefSpinBox(SketcherGui__SketchRectangularArrayDialog);
        RowsQuantitySpinBox->setObjectName(QString::fromUtf8("RowsQuantitySpinBox"));
        RowsQuantitySpinBox->setMinimum(1);
        RowsQuantitySpinBox->setProperty("prefEntry", QVariant(QByteArray("DefaultArrayRowNumber")));
        RowsQuantitySpinBox->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        horizontalLayout_2->addWidget(RowsQuantitySpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        EqualVerticalHorizontalSpacingCheckBox = new Gui::PrefCheckBox(SketcherGui__SketchRectangularArrayDialog);
        EqualVerticalHorizontalSpacingCheckBox->setObjectName(QString::fromUtf8("EqualVerticalHorizontalSpacingCheckBox"));
        EqualVerticalHorizontalSpacingCheckBox->setProperty("prefEntry", QVariant(QByteArray("DefaultEqualVerticalHorizontalSpacing")));
        EqualVerticalHorizontalSpacingCheckBox->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        verticalLayout->addWidget(EqualVerticalHorizontalSpacingCheckBox);

        ConstraintSeparationCheckBox = new Gui::PrefCheckBox(SketcherGui__SketchRectangularArrayDialog);
        ConstraintSeparationCheckBox->setObjectName(QString::fromUtf8("ConstraintSeparationCheckBox"));
        ConstraintSeparationCheckBox->setLayoutDirection(Qt::LeftToRight);
        ConstraintSeparationCheckBox->setChecked(true);
        ConstraintSeparationCheckBox->setProperty("prefEntry", QVariant(QByteArray("DefaultConstraintArrayElements")));
        ConstraintSeparationCheckBox->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        verticalLayout->addWidget(ConstraintSeparationCheckBox);

        CloneCheckBox = new Gui::PrefCheckBox(SketcherGui__SketchRectangularArrayDialog);
        CloneCheckBox->setObjectName(QString::fromUtf8("CloneCheckBox"));
        CloneCheckBox->setProperty("prefEntry", QVariant(QByteArray("CloneOnCopy")));
        CloneCheckBox->setProperty("prefPath", QVariant(QByteArray("Mod/Sketcher")));

        verticalLayout->addWidget(CloneCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SketcherGui__SketchRectangularArrayDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SketcherGui__SketchRectangularArrayDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SketcherGui__SketchRectangularArrayDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SketcherGui__SketchRectangularArrayDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SketcherGui__SketchRectangularArrayDialog);
    } // setupUi

    void retranslateUi(QDialog *SketcherGui__SketchRectangularArrayDialog)
    {
        SketcherGui__SketchRectangularArrayDialog->setWindowTitle(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Create array", nullptr));
        label->setText(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Columns:", nullptr));
#if QT_CONFIG(tooltip)
        ColsQuantitySpinBox->setToolTip(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Number of columns of the linear array", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Rows:", nullptr));
#if QT_CONFIG(tooltip)
        RowsQuantitySpinBox->setToolTip(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Number of rows of the linear array", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        EqualVerticalHorizontalSpacingCheckBox->setToolTip(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Makes the inter-row and inter-col spacing the same if clicked", nullptr));
#endif // QT_CONFIG(tooltip)
        EqualVerticalHorizontalSpacingCheckBox->setText(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Equal vertical/horizontal spacing", nullptr));
#if QT_CONFIG(tooltip)
        ConstraintSeparationCheckBox->setToolTip(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "If selected, each element in the array is constrained\n"
"with respect to the others using construction lines", nullptr));
#endif // QT_CONFIG(tooltip)
        ConstraintSeparationCheckBox->setText(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Constrain inter-element separation", nullptr));
#if QT_CONFIG(tooltip)
        CloneCheckBox->setToolTip(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "If selected, it substitutes dimensional constraints by geometric constraints\n"
"in the copies, so that a change in the original element is directly\n"
"reflected on copies", nullptr));
#endif // QT_CONFIG(tooltip)
        CloneCheckBox->setText(QCoreApplication::translate("SketcherGui::SketchRectangularArrayDialog", "Clone", nullptr));
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class SketchRectangularArrayDialog: public Ui_SketchRectangularArrayDialog {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_SKETCHRECTANGULARARRAYDIALOG_H
