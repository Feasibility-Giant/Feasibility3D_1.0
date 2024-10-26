/********************************************************************************
** Form generated from reading UI file 'TaskPadPocketParameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPADPOCKETPARAMETERS_H
#define UI_TASKPADPOCKETPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/QuantitySpinBox.h"
#include "Gui/SpinBox.h"

namespace PartDesignGui {

class Ui_TaskPadPocketParameters
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QComboBox *changeMode;
    QLabel *labelLength;
    Gui::PrefQuantitySpinBox *lengthEdit;
    QLabel *labelLength2;
    Gui::PrefQuantitySpinBox *lengthEdit2;
    QLabel *labelOffset;
    Gui::PrefQuantitySpinBox *offsetEdit;
    QFrame *upToShapeList;
    QVBoxLayout *vboxLayout;
    QGridLayout *_2;
    QLineEdit *lineShapeName;
    QToolButton *buttonShape;
    QCheckBox *checkBoxAllFaces;
    QWidget *upToShapeFaces;
    QVBoxLayout *verticalLayout_2;
    QToolButton *buttonShapeFace;
    QListWidget *listWidgetReferences;
    QGridLayout *gridLayout_5;
    QLineEdit *lineFaceName;
    QToolButton *buttonFace;
    QCheckBox *checkBoxMidplane;
    QCheckBox *checkBoxReversed;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *labelEdge;
    QComboBox *directionCB;
    QCheckBox *checkBoxDirection;
    QGroupBox *groupBoxDirection;
    QGridLayout *gridLayout_2;
    QLabel *labelXSkew;
    Gui::DoubleSpinBox *XDirectionEdit;
    QLabel *labelYSkew;
    Gui::DoubleSpinBox *YDirectionEdit;
    QLabel *labelZSkew;
    Gui::DoubleSpinBox *ZDirectionEdit;
    QCheckBox *checkBoxAlongDirection;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelTaperAngle;
    Gui::PrefQuantitySpinBox *taperEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTaperAngle2;
    Gui::PrefQuantitySpinBox *taperEdit2;
    QFrame *line;
    QCheckBox *checkBoxUpdateView;

    void setupUi(QWidget *PartDesignGui__TaskPadPocketParameters)
    {
        if (PartDesignGui__TaskPadPocketParameters->objectName().isEmpty())
            PartDesignGui__TaskPadPocketParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskPadPocketParameters"));
        PartDesignGui__TaskPadPocketParameters->resize(300, 772);
        PartDesignGui__TaskPadPocketParameters->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskPadPocketParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(PartDesignGui__TaskPadPocketParameters);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        changeMode = new QComboBox(PartDesignGui__TaskPadPocketParameters);
        changeMode->addItem(QString());
        changeMode->setObjectName(QString::fromUtf8("changeMode"));

        gridLayout->addWidget(changeMode, 0, 1, 1, 1);

        labelLength = new QLabel(PartDesignGui__TaskPadPocketParameters);
        labelLength->setObjectName(QString::fromUtf8("labelLength"));

        gridLayout->addWidget(labelLength, 1, 0, 1, 1);

        lengthEdit = new Gui::PrefQuantitySpinBox(PartDesignGui__TaskPadPocketParameters);
        lengthEdit->setObjectName(QString::fromUtf8("lengthEdit"));
        lengthEdit->setProperty("keyboardTracking", QVariant(false));
        lengthEdit->setProperty("unit", QVariant(QString::fromUtf8("mm")));
        lengthEdit->setProperty("minimum", QVariant(0.000000000000000));

        gridLayout->addWidget(lengthEdit, 1, 1, 1, 1);

        labelLength2 = new QLabel(PartDesignGui__TaskPadPocketParameters);
        labelLength2->setObjectName(QString::fromUtf8("labelLength2"));

        gridLayout->addWidget(labelLength2, 2, 0, 1, 1);

        lengthEdit2 = new Gui::PrefQuantitySpinBox(PartDesignGui__TaskPadPocketParameters);
        lengthEdit2->setObjectName(QString::fromUtf8("lengthEdit2"));
        lengthEdit2->setProperty("keyboardTracking", QVariant(false));
        lengthEdit2->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        gridLayout->addWidget(lengthEdit2, 2, 1, 1, 1);

        labelOffset = new QLabel(PartDesignGui__TaskPadPocketParameters);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        gridLayout->addWidget(labelOffset, 3, 0, 1, 1);

        offsetEdit = new Gui::PrefQuantitySpinBox(PartDesignGui__TaskPadPocketParameters);
        offsetEdit->setObjectName(QString::fromUtf8("offsetEdit"));
        offsetEdit->setProperty("keyboardTracking", QVariant(false));
        offsetEdit->setProperty("unit", QVariant(QString::fromUtf8("mm")));

        gridLayout->addWidget(offsetEdit, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        upToShapeList = new QFrame(PartDesignGui__TaskPadPocketParameters);
        upToShapeList->setObjectName(QString::fromUtf8("upToShapeList"));
        upToShapeList->setFrameShadow(QFrame::Plain);
        upToShapeList->setLineWidth(0);
        vboxLayout = new QVBoxLayout(upToShapeList);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        _2 = new QGridLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        lineShapeName = new QLineEdit(upToShapeList);
        lineShapeName->setObjectName(QString::fromUtf8("lineShapeName"));
        lineShapeName->setReadOnly(true);

        _2->addWidget(lineShapeName, 0, 1, 1, 1);

        buttonShape = new QToolButton(upToShapeList);
        buttonShape->setObjectName(QString::fromUtf8("buttonShape"));
        buttonShape->setMinimumSize(QSize(0, 22));
        buttonShape->setCheckable(true);

        _2->addWidget(buttonShape, 0, 0, 1, 1);


        vboxLayout->addLayout(_2);

        checkBoxAllFaces = new QCheckBox(upToShapeList);
        checkBoxAllFaces->setObjectName(QString::fromUtf8("checkBoxAllFaces"));
        checkBoxAllFaces->setEnabled(true);

        vboxLayout->addWidget(checkBoxAllFaces);

        upToShapeFaces = new QWidget(upToShapeList);
        upToShapeFaces->setObjectName(QString::fromUtf8("upToShapeFaces"));
        verticalLayout_2 = new QVBoxLayout(upToShapeFaces);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonShapeFace = new QToolButton(upToShapeFaces);
        buttonShapeFace->setObjectName(QString::fromUtf8("buttonShapeFace"));
        buttonShapeFace->setCheckable(true);

        verticalLayout_2->addWidget(buttonShapeFace);

        listWidgetReferences = new QListWidget(upToShapeFaces);
        listWidgetReferences->setObjectName(QString::fromUtf8("listWidgetReferences"));
        listWidgetReferences->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_2->addWidget(listWidgetReferences);


        vboxLayout->addWidget(upToShapeFaces);


        verticalLayout->addWidget(upToShapeList);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lineFaceName = new QLineEdit(PartDesignGui__TaskPadPocketParameters);
        lineFaceName->setObjectName(QString::fromUtf8("lineFaceName"));
        lineFaceName->setReadOnly(true);

        gridLayout_5->addWidget(lineFaceName, 0, 1, 1, 1);

        buttonFace = new QToolButton(PartDesignGui__TaskPadPocketParameters);
        buttonFace->setObjectName(QString::fromUtf8("buttonFace"));
        buttonFace->setMinimumSize(QSize(0, 22));
        buttonFace->setCheckable(true);

        gridLayout_5->addWidget(buttonFace, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        checkBoxMidplane = new QCheckBox(PartDesignGui__TaskPadPocketParameters);
        checkBoxMidplane->setObjectName(QString::fromUtf8("checkBoxMidplane"));
        checkBoxMidplane->setEnabled(true);

        verticalLayout->addWidget(checkBoxMidplane);

        checkBoxReversed = new QCheckBox(PartDesignGui__TaskPadPocketParameters);
        checkBoxReversed->setObjectName(QString::fromUtf8("checkBoxReversed"));

        verticalLayout->addWidget(checkBoxReversed);

        groupBox = new QGroupBox(PartDesignGui__TaskPadPocketParameters);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelEdge = new QLabel(groupBox);
        labelEdge->setObjectName(QString::fromUtf8("labelEdge"));

        gridLayout_3->addWidget(labelEdge, 0, 0, 1, 1);

        directionCB = new QComboBox(groupBox);
        directionCB->addItem(QString());
        directionCB->addItem(QString());
        directionCB->addItem(QString());
        directionCB->setObjectName(QString::fromUtf8("directionCB"));

        gridLayout_3->addWidget(directionCB, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        checkBoxDirection = new QCheckBox(groupBox);
        checkBoxDirection->setObjectName(QString::fromUtf8("checkBoxDirection"));

        gridLayout_4->addWidget(checkBoxDirection, 1, 0, 1, 1);

        groupBoxDirection = new QGroupBox(groupBox);
        groupBoxDirection->setObjectName(QString::fromUtf8("groupBoxDirection"));
        groupBoxDirection->setEnabled(true);
        groupBoxDirection->setCheckable(false);
        groupBoxDirection->setChecked(false);
        gridLayout_2 = new QGridLayout(groupBoxDirection);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelXSkew = new QLabel(groupBoxDirection);
        labelXSkew->setObjectName(QString::fromUtf8("labelXSkew"));

        gridLayout_2->addWidget(labelXSkew, 0, 0, 1, 1);

        XDirectionEdit = new Gui::DoubleSpinBox(groupBoxDirection);
        XDirectionEdit->setObjectName(QString::fromUtf8("XDirectionEdit"));
        XDirectionEdit->setKeyboardTracking(false);
        XDirectionEdit->setMinimum(-100.000000000000000);
        XDirectionEdit->setMaximum(100.000000000000000);
        XDirectionEdit->setSingleStep(0.100000000000000);
        XDirectionEdit->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(XDirectionEdit, 0, 1, 1, 1);

        labelYSkew = new QLabel(groupBoxDirection);
        labelYSkew->setObjectName(QString::fromUtf8("labelYSkew"));

        gridLayout_2->addWidget(labelYSkew, 1, 0, 1, 1);

        YDirectionEdit = new Gui::DoubleSpinBox(groupBoxDirection);
        YDirectionEdit->setObjectName(QString::fromUtf8("YDirectionEdit"));
        YDirectionEdit->setKeyboardTracking(false);
        YDirectionEdit->setMinimum(-100.000000000000000);
        YDirectionEdit->setMaximum(100.000000000000000);
        YDirectionEdit->setSingleStep(0.100000000000000);
        YDirectionEdit->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(YDirectionEdit, 1, 1, 1, 1);

        labelZSkew = new QLabel(groupBoxDirection);
        labelZSkew->setObjectName(QString::fromUtf8("labelZSkew"));

        gridLayout_2->addWidget(labelZSkew, 2, 0, 1, 1);

        ZDirectionEdit = new Gui::DoubleSpinBox(groupBoxDirection);
        ZDirectionEdit->setObjectName(QString::fromUtf8("ZDirectionEdit"));
        ZDirectionEdit->setKeyboardTracking(false);
        ZDirectionEdit->setMinimum(-100.000000000000000);
        ZDirectionEdit->setMaximum(100.000000000000000);
        ZDirectionEdit->setSingleStep(0.100000000000000);
        ZDirectionEdit->setValue(1.000000000000000);
        ZDirectionEdit->setProperty("unit", QVariant(QString::fromUtf8("")));

        gridLayout_2->addWidget(ZDirectionEdit, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxDirection, 2, 0, 1, 1);

        checkBoxAlongDirection = new QCheckBox(groupBox);
        checkBoxAlongDirection->setObjectName(QString::fromUtf8("checkBoxAlongDirection"));
        checkBoxAlongDirection->setEnabled(true);

        gridLayout_4->addWidget(checkBoxAlongDirection, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelTaperAngle = new QLabel(PartDesignGui__TaskPadPocketParameters);
        labelTaperAngle->setObjectName(QString::fromUtf8("labelTaperAngle"));

        horizontalLayout_5->addWidget(labelTaperAngle);

        taperEdit = new Gui::PrefQuantitySpinBox(PartDesignGui__TaskPadPocketParameters);
        taperEdit->setObjectName(QString::fromUtf8("taperEdit"));
        taperEdit->setProperty("keyboardTracking", QVariant(false));
        taperEdit->setProperty("unit", QVariant(QString::fromUtf8("deg")));

        horizontalLayout_5->addWidget(taperEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelTaperAngle2 = new QLabel(PartDesignGui__TaskPadPocketParameters);
        labelTaperAngle2->setObjectName(QString::fromUtf8("labelTaperAngle2"));

        horizontalLayout_6->addWidget(labelTaperAngle2);

        taperEdit2 = new Gui::PrefQuantitySpinBox(PartDesignGui__TaskPadPocketParameters);
        taperEdit2->setObjectName(QString::fromUtf8("taperEdit2"));
        taperEdit2->setProperty("keyboardTracking", QVariant(false));
        taperEdit2->setProperty("unit", QVariant(QString::fromUtf8("deg")));

        horizontalLayout_6->addWidget(taperEdit2);


        verticalLayout->addLayout(horizontalLayout_6);

        line = new QFrame(PartDesignGui__TaskPadPocketParameters);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskPadPocketParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);

        QWidget::setTabOrder(changeMode, lengthEdit);
        QWidget::setTabOrder(lengthEdit, lengthEdit2);
        QWidget::setTabOrder(lengthEdit2, offsetEdit);
        QWidget::setTabOrder(offsetEdit, buttonFace);
        QWidget::setTabOrder(buttonFace, lineFaceName);
        QWidget::setTabOrder(lineFaceName, checkBoxMidplane);
        QWidget::setTabOrder(checkBoxMidplane, checkBoxReversed);
        QWidget::setTabOrder(checkBoxReversed, directionCB);
        QWidget::setTabOrder(directionCB, checkBoxDirection);
        QWidget::setTabOrder(checkBoxDirection, XDirectionEdit);
        QWidget::setTabOrder(XDirectionEdit, YDirectionEdit);
        QWidget::setTabOrder(YDirectionEdit, ZDirectionEdit);
        QWidget::setTabOrder(ZDirectionEdit, checkBoxAlongDirection);
        QWidget::setTabOrder(checkBoxAlongDirection, taperEdit);
        QWidget::setTabOrder(taperEdit, taperEdit2);
        QWidget::setTabOrder(taperEdit2, checkBoxUpdateView);

        retranslateUi(PartDesignGui__TaskPadPocketParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskPadPocketParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskPadPocketParameters)
    {
        textLabel1->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Type", nullptr));
        changeMode->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Dimension", nullptr));

        labelLength->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Length", nullptr));
        labelLength2->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "2nd length", nullptr));
        labelOffset->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Offset to face", nullptr));
        buttonShape->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Select shape", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxAllFaces->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Applies length symmetrically to sketch plane", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxAllFaces->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Select all faces", nullptr));
#if QT_CONFIG(tooltip)
        buttonShapeFace->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Click button to enter selection mode,\n"
"         click again to end selection", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonShapeFace->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Select", nullptr));
        buttonFace->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Select face", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxMidplane->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Applies length symmetrically to sketch plane", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxMidplane->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Symmetric to plane", nullptr));
        checkBoxReversed->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Reversed", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Direction", nullptr));
        labelEdge->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Direction/edge:", nullptr));
        directionCB->setItemText(0, QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Sketch normal", nullptr));
        directionCB->setItemText(1, QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Select reference...", nullptr));
        directionCB->setItemText(2, QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Custom direction", nullptr));

#if QT_CONFIG(tooltip)
        directionCB->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Set a direction or select an edge\n"
"from the model as reference", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxDirection->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Show direction", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxDirection->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Use custom vector for pad direction, otherwise\n"
"the sketch plane's normal vector will be used", nullptr));
#endif // QT_CONFIG(tooltip)
        labelXSkew->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "x", nullptr));
#if QT_CONFIG(tooltip)
        XDirectionEdit->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "x-component of direction vector", nullptr));
#endif // QT_CONFIG(tooltip)
        labelYSkew->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "y", nullptr));
#if QT_CONFIG(tooltip)
        YDirectionEdit->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "y-component of direction vector", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZSkew->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "z", nullptr));
#if QT_CONFIG(tooltip)
        ZDirectionEdit->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "z-component of direction vector", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBoxAlongDirection->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "If unchecked, the length will be\n"
"measured along the specified direction", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxAlongDirection->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Length along sketch normal", nullptr));
#if QT_CONFIG(tooltip)
        labelTaperAngle->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Angle to taper the extrusion", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTaperAngle->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Taper angle", nullptr));
#if QT_CONFIG(tooltip)
        labelTaperAngle2->setToolTip(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Angle to taper the extrusion", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTaperAngle2->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "2nd taper angle", nullptr));
        checkBoxUpdateView->setText(QCoreApplication::translate("PartDesignGui::TaskPadPocketParameters", "Update view", nullptr));
        (void)PartDesignGui__TaskPadPocketParameters;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskPadPocketParameters: public Ui_TaskPadPocketParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKPADPOCKETPARAMETERS_H
