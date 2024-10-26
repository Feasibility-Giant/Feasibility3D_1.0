/********************************************************************************
** Form generated from reading UI file 'DownloadManager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADMANAGER_H
#define UI_DOWNLOADMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "DownloadItem.h"

namespace Gui {
namespace Dialog {

class Ui_DownloadManager
{
public:
    QGridLayout *gridLayout;
    EditTableView *downloadsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *cleanupButton;
    QSpacerItem *spacerItem;
    QLabel *itemCount;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Gui__Dialog__DownloadManager)
    {
        if (Gui__Dialog__DownloadManager->objectName().isEmpty())
            Gui__Dialog__DownloadManager->setObjectName(QString::fromUtf8("Gui__Dialog__DownloadManager"));
        Gui__Dialog__DownloadManager->resize(332, 252);
        gridLayout = new QGridLayout(Gui__Dialog__DownloadManager);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        downloadsView = new EditTableView(Gui__Dialog__DownloadManager);
        downloadsView->setObjectName(QString::fromUtf8("downloadsView"));

        gridLayout->addWidget(downloadsView, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cleanupButton = new QPushButton(Gui__Dialog__DownloadManager);
        cleanupButton->setObjectName(QString::fromUtf8("cleanupButton"));
        cleanupButton->setEnabled(false);

        horizontalLayout->addWidget(cleanupButton);

        spacerItem = new QSpacerItem(58, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        itemCount = new QLabel(Gui__Dialog__DownloadManager);
        itemCount->setObjectName(QString::fromUtf8("itemCount"));

        gridLayout->addWidget(itemCount, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        retranslateUi(Gui__Dialog__DownloadManager);

        QMetaObject::connectSlotsByName(Gui__Dialog__DownloadManager);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DownloadManager)
    {
        Gui__Dialog__DownloadManager->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DownloadManager", "Downloads", nullptr));
        cleanupButton->setText(QCoreApplication::translate("Gui::Dialog::DownloadManager", "Clean up", nullptr));
        itemCount->setText(QCoreApplication::translate("Gui::Dialog::DownloadManager", "0 Items", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DownloadManager: public Ui_DownloadManager {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DOWNLOADMANAGER_H
