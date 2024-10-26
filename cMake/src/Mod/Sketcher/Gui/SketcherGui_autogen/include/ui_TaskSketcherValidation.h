/********************************************************************************
** Form generated from reading UI file 'TaskSketcherValidation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSKETCHERVALIDATION_H
#define UI_TASKSKETCHERVALIDATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

namespace SketcherGui {

class Ui_TaskSketcherValidation
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_0;
    QGridLayout *gridLayout_7;
    QPushButton *highlightButton;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxTolerance;
    QCheckBox *checkBoxIgnoreConstruction;
    QPushButton *findButton;
    QPushButton *fixButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *findConstraint;
    QPushButton *fixConstraint;
    QPushButton *delConstrExtr;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QPushButton *findDegenerated;
    QPushButton *fixDegenerated;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QPushButton *findReversed;
    QPushButton *swapReversed;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QPushButton *orientLockEnable;
    QPushButton *orientLockDisable;

    void setupUi(QWidget *SketcherGui__TaskSketcherValidation)
    {
        if (SketcherGui__TaskSketcherValidation->objectName().isEmpty())
            SketcherGui__TaskSketcherValidation->setObjectName(QString::fromUtf8("SketcherGui__TaskSketcherValidation"));
        SketcherGui__TaskSketcherValidation->resize(266, 684);
        gridLayout_3 = new QGridLayout(SketcherGui__TaskSketcherValidation);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_0 = new QGroupBox(SketcherGui__TaskSketcherValidation);
        groupBox_0->setObjectName(QString::fromUtf8("groupBox_0"));
        gridLayout_7 = new QGridLayout(groupBox_0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(6, 6, 6, 6);
        highlightButton = new QPushButton(groupBox_0);
        highlightButton->setObjectName(QString::fromUtf8("highlightButton"));

        gridLayout_7->addWidget(highlightButton, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_0, 0, 0, 1, 1);

        groupBox_1 = new QGroupBox(SketcherGui__TaskSketcherValidation);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        gridLayout = new QGridLayout(groupBox_1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxTolerance = new QComboBox(groupBox_1);
        comboBoxTolerance->setObjectName(QString::fromUtf8("comboBoxTolerance"));

        gridLayout->addWidget(comboBoxTolerance, 0, 1, 1, 1);

        checkBoxIgnoreConstruction = new QCheckBox(groupBox_1);
        checkBoxIgnoreConstruction->setObjectName(QString::fromUtf8("checkBoxIgnoreConstruction"));
        checkBoxIgnoreConstruction->setChecked(true);

        gridLayout->addWidget(checkBoxIgnoreConstruction, 1, 0, 1, 2);

        findButton = new QPushButton(groupBox_1);
        findButton->setObjectName(QString::fromUtf8("findButton"));

        gridLayout->addWidget(findButton, 2, 0, 1, 1);

        fixButton = new QPushButton(groupBox_1);
        fixButton->setObjectName(QString::fromUtf8("fixButton"));

        gridLayout->addWidget(fixButton, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_1, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(SketcherGui__TaskSketcherValidation);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        findConstraint = new QPushButton(groupBox_2);
        findConstraint->setObjectName(QString::fromUtf8("findConstraint"));

        gridLayout_2->addWidget(findConstraint, 0, 0, 1, 1);

        fixConstraint = new QPushButton(groupBox_2);
        fixConstraint->setObjectName(QString::fromUtf8("fixConstraint"));

        gridLayout_2->addWidget(fixConstraint, 0, 1, 1, 1);

        delConstrExtr = new QPushButton(groupBox_2);
        delConstrExtr->setObjectName(QString::fromUtf8("delConstrExtr"));

        gridLayout_2->addWidget(delConstrExtr, 1, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(SketcherGui__TaskSketcherValidation);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        findDegenerated = new QPushButton(groupBox_6);
        findDegenerated->setObjectName(QString::fromUtf8("findDegenerated"));

        gridLayout_6->addWidget(findDegenerated, 0, 0, 1, 1);

        fixDegenerated = new QPushButton(groupBox_6);
        fixDegenerated->setObjectName(QString::fromUtf8("fixDegenerated"));

        gridLayout_6->addWidget(fixDegenerated, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_6, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(SketcherGui__TaskSketcherValidation);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        findReversed = new QPushButton(groupBox_3);
        findReversed->setObjectName(QString::fromUtf8("findReversed"));

        gridLayout_4->addWidget(findReversed, 0, 0, 1, 1);

        swapReversed = new QPushButton(groupBox_3);
        swapReversed->setObjectName(QString::fromUtf8("swapReversed"));

        gridLayout_4->addWidget(swapReversed, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 5, 0, 1, 1);

        groupBox_4 = new QGroupBox(SketcherGui__TaskSketcherValidation);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        orientLockEnable = new QPushButton(groupBox_4);
        orientLockEnable->setObjectName(QString::fromUtf8("orientLockEnable"));

        gridLayout_5->addWidget(orientLockEnable, 0, 0, 1, 1);

        orientLockDisable = new QPushButton(groupBox_4);
        orientLockDisable->setObjectName(QString::fromUtf8("orientLockDisable"));

        gridLayout_5->addWidget(orientLockDisable, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 6, 0, 1, 1);


        retranslateUi(SketcherGui__TaskSketcherValidation);

        QMetaObject::connectSlotsByName(SketcherGui__TaskSketcherValidation);
    } // setupUi

    void retranslateUi(QWidget *SketcherGui__TaskSketcherValidation)
    {
        SketcherGui__TaskSketcherValidation->setWindowTitle(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Sketcher validation", nullptr));
        groupBox_0->setTitle(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Open and non-manifold vertexes", nullptr));
#if QT_CONFIG(tooltip)
        highlightButton->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Highlights open and non-manifold vertexes that could lead to error if sketch is used to generate solids\n"
"This is purely based on topological shape of the sketch and not on its geometry/constrain set.", nullptr));
#endif // QT_CONFIG(tooltip)
        highlightButton->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Highlight troublesome vertexes", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_1->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Fixes found missing coincidences by adding extra coincident constrains", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_1->setTitle(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Missing coincidences", nullptr));
        label->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Tolerance:", nullptr));
#if QT_CONFIG(tooltip)
        comboBoxTolerance->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Defines the X/Y tolerance inside which missing coincidences are searched.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBoxIgnoreConstruction->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "If checked, construction geometries are ignored in the search", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxIgnoreConstruction->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Ignore construction geometry", nullptr));
#if QT_CONFIG(tooltip)
        findButton->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Finds and displays missing coincidences in the sketch.\n"
"This is done by analyzing the sketch geometries and constraints.", nullptr));
#endif // QT_CONFIG(tooltip)
        findButton->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Find", nullptr));
        fixButton->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Fix", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Invalid constraints", nullptr));
#if QT_CONFIG(tooltip)
        findConstraint->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Finds invalid/malformed constrains in the sketch", nullptr));
#endif // QT_CONFIG(tooltip)
        findConstraint->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Find", nullptr));
#if QT_CONFIG(tooltip)
        fixConstraint->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Tries to fix found invalid constraints", nullptr));
#endif // QT_CONFIG(tooltip)
        fixConstraint->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Fix", nullptr));
#if QT_CONFIG(tooltip)
        delConstrExtr->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Deletes constraints referring to external geometry", nullptr));
#endif // QT_CONFIG(tooltip)
        delConstrExtr->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Delete constraints to external geom.", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Degenerated geometry", nullptr));
#if QT_CONFIG(tooltip)
        findDegenerated->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Finds degenerated geometries in the sketch", nullptr));
#endif // QT_CONFIG(tooltip)
        findDegenerated->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Find", nullptr));
#if QT_CONFIG(tooltip)
        fixDegenerated->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Tries to fix found degenerated geometries", nullptr));
#endif // QT_CONFIG(tooltip)
        fixDegenerated->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Fix", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Reversed external geometry", nullptr));
#if QT_CONFIG(tooltip)
        findReversed->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Finds reversed external geometries", nullptr));
#endif // QT_CONFIG(tooltip)
        findReversed->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Find", nullptr));
#if QT_CONFIG(tooltip)
        swapReversed->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Fixes found reversed external geometries by swapping their endpoints", nullptr));
#endif // QT_CONFIG(tooltip)
        swapReversed->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Swap endpoints in constraints", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Constraint orientation locking", nullptr));
#if QT_CONFIG(tooltip)
        orientLockEnable->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Enables/updates constraint orientation locking", nullptr));
#endif // QT_CONFIG(tooltip)
        orientLockEnable->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Enable/Update", nullptr));
#if QT_CONFIG(tooltip)
        orientLockDisable->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Disables constraint orientation locking", nullptr));
#endif // QT_CONFIG(tooltip)
        orientLockDisable->setText(QCoreApplication::translate("SketcherGui::TaskSketcherValidation", "Disable", nullptr));
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class TaskSketcherValidation: public Ui_TaskSketcherValidation {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_TASKSKETCHERVALIDATION_H
