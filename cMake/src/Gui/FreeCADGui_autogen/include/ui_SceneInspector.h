/********************************************************************************
** Form generated from reading UI file 'SceneInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEINSPECTOR_H
#define UI_SCENEINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>

namespace Gui {
namespace Dialog {

class Ui_SceneInspector
{
public:
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QPushButton *refreshButton;
    QSpacerItem *spacerItem;
    QPushButton *closeButton;

    void setupUi(QDialog *Gui__Dialog__SceneInspector)
    {
        if (Gui__Dialog__SceneInspector->objectName().isEmpty())
            Gui__Dialog__SceneInspector->setObjectName(QString::fromUtf8("Gui__Dialog__SceneInspector"));
        Gui__Dialog__SceneInspector->resize(296, 583);
        gridLayout = new QGridLayout(Gui__Dialog__SceneInspector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(Gui__Dialog__SceneInspector);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        refreshButton = new QPushButton(Gui__Dialog__SceneInspector);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        horizontalLayout->addWidget(refreshButton);

        spacerItem = new QSpacerItem(58, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        closeButton = new QPushButton(Gui__Dialog__SceneInspector);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__SceneInspector);
        QObject::connect(closeButton, SIGNAL(clicked()), Gui__Dialog__SceneInspector, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__SceneInspector);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__SceneInspector)
    {
        Gui__Dialog__SceneInspector->setWindowTitle(QCoreApplication::translate("Gui::Dialog::SceneInspector", "Dialog", nullptr));
        refreshButton->setText(QCoreApplication::translate("Gui::Dialog::SceneInspector", "Refresh", nullptr));
        closeButton->setText(QCoreApplication::translate("Gui::Dialog::SceneInspector", "Close", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class SceneInspector: public Ui_SceneInspector {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_SCENEINSPECTOR_H
