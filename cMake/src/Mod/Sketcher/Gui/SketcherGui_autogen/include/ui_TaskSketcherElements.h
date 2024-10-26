/********************************************************************************
** Form generated from reading UI file 'TaskSketcherElements.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSKETCHERELEMENTS_H
#define UI_TASKSKETCHERELEMENTS_H

#include <QListWidget>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace SketcherGui {

class Ui_TaskSketcherElements
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout1;
    QCheckBox *filterBox;
    QToolButton *filterButton;
    QToolButton *settingsButton;
    ElementView *listWidgetElements;

    void setupUi(QWidget *SketcherGui__TaskSketcherElements)
    {
        if (SketcherGui__TaskSketcherElements->objectName().isEmpty())
            SketcherGui__TaskSketcherElements->setObjectName(QString::fromUtf8("SketcherGui__TaskSketcherElements"));
        SketcherGui__TaskSketcherElements->resize(220, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SketcherGui__TaskSketcherElements->sizePolicy().hasHeightForWidth());
        SketcherGui__TaskSketcherElements->setSizePolicy(sizePolicy);
        SketcherGui__TaskSketcherElements->setMaximumSize(QSize(16777215, 350));
        SketcherGui__TaskSketcherElements->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(SketcherGui__TaskSketcherElements);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        filterBox = new QCheckBox(SketcherGui__TaskSketcherElements);
        filterBox->setObjectName(QString::fromUtf8("filterBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filterBox->sizePolicy().hasHeightForWidth());
        filterBox->setSizePolicy(sizePolicy1);
        filterBox->setStyleSheet(QString::fromUtf8("padding-right: 0px; margin-right: 0px"));
        filterBox->setText(QString::fromUtf8(""));

        horizontalLayout1->addWidget(filterBox);

        filterButton = new QToolButton(SketcherGui__TaskSketcherElements);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filterButton->sizePolicy().hasHeightForWidth());
        filterButton->setSizePolicy(sizePolicy2);
        filterButton->setStyleSheet(QString::fromUtf8("padding-left: 0px; margin-left: 0px"));
        filterButton->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout1->addWidget(filterButton);

        settingsButton = new QToolButton(SketcherGui__TaskSketcherElements);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/dialogs/Sketcher_Settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon);
        settingsButton->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout1->addWidget(settingsButton);


        verticalLayout->addLayout(horizontalLayout1);

        listWidgetElements = new ElementView(SketcherGui__TaskSketcherElements);
        listWidgetElements->setObjectName(QString::fromUtf8("listWidgetElements"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listWidgetElements->sizePolicy().hasHeightForWidth());
        listWidgetElements->setSizePolicy(sizePolicy4);
        listWidgetElements->setModelColumn(0);

        verticalLayout->addWidget(listWidgetElements);


        retranslateUi(SketcherGui__TaskSketcherElements);

        QMetaObject::connectSlotsByName(SketcherGui__TaskSketcherElements);
    } // setupUi

    void retranslateUi(QWidget *SketcherGui__TaskSketcherElements)
    {
#if QT_CONFIG(tooltip)
        filterBox->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherElements", "Check to toggle filters", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        filterButton->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherElements", "Click to show filters", nullptr));
#endif // QT_CONFIG(tooltip)
        filterButton->setText(QCoreApplication::translate("SketcherGui::TaskSketcherElements", "Filters", nullptr));
#if QT_CONFIG(tooltip)
        settingsButton->setToolTip(QCoreApplication::translate("SketcherGui::TaskSketcherElements", "Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        settingsButton->setText(QString());
        (void)SketcherGui__TaskSketcherElements;
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class TaskSketcherElements: public Ui_TaskSketcherElements {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_TASKSKETCHERELEMENTS_H
