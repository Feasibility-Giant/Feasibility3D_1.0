/********************************************************************************
** Form generated from reading UI file 'DownloadItem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADITEM_H
#define UI_DOWNLOADITEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "DownloadItem.h"

QT_BEGIN_NAMESPACE

class Ui_DownloadItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *fileIcon;
    QVBoxLayout *verticalLayout_2;
    SqueezeLabel *fileNameLabel;
    QProgressBar *progressBar;
    SqueezeLabel *downloadInfoLabel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *tryAgainButton;
    QPushButton *stopButton;
    QPushButton *openButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *DownloadItem)
    {
        if (DownloadItem->objectName().isEmpty())
            DownloadItem->setObjectName(QString::fromUtf8("DownloadItem"));
        DownloadItem->resize(423, 98);
        DownloadItem->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(DownloadItem);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileIcon = new QLabel(DownloadItem);
        fileIcon->setObjectName(QString::fromUtf8("fileIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileIcon->sizePolicy().hasHeightForWidth());
        fileIcon->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(fileIcon);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fileNameLabel = new SqueezeLabel(DownloadItem);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(fileNameLabel);

        progressBar = new QProgressBar(DownloadItem);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout_2->addWidget(progressBar);

        downloadInfoLabel = new SqueezeLabel(DownloadItem);
        downloadInfoLabel->setObjectName(QString::fromUtf8("downloadInfoLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(downloadInfoLabel->sizePolicy().hasHeightForWidth());
        downloadInfoLabel->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(downloadInfoLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(17, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tryAgainButton = new QPushButton(DownloadItem);
        tryAgainButton->setObjectName(QString::fromUtf8("tryAgainButton"));
        tryAgainButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tryAgainButton->setIcon(icon);

        verticalLayout->addWidget(tryAgainButton);

        stopButton = new QPushButton(DownloadItem);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/process-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon1);

        verticalLayout->addWidget(stopButton);

        openButton = new QPushButton(DownloadItem);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon2);

        verticalLayout->addWidget(openButton);

        verticalSpacer_2 = new QSpacerItem(17, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(DownloadItem);

        QMetaObject::connectSlotsByName(DownloadItem);
    } // setupUi

    void retranslateUi(QWidget *DownloadItem)
    {
        fileIcon->setText(QCoreApplication::translate("DownloadItem", "Ico", nullptr));
        fileNameLabel->setProperty("text", QVariant(QCoreApplication::translate("DownloadItem", "Filename", nullptr)));
        downloadInfoLabel->setProperty("text", QVariant(QString()));
        (void)DownloadItem;
    } // retranslateUi

};

namespace Ui {
    class DownloadItem: public Ui_DownloadItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADITEM_H
