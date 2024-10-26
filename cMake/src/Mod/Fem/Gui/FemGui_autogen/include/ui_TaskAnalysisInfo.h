/********************************************************************************
** Form generated from reading UI file 'TaskAnalysisInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKANALYSISINFO_H
#define UI_TASKANALYSISINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskAnalysisInfo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *listView;
    QLabel *label_2;
    QListView *listView_2;

    void setupUi(QWidget *TaskAnalysisInfo)
    {
        if (TaskAnalysisInfo->objectName().isEmpty())
            TaskAnalysisInfo->setObjectName(QString::fromUtf8("TaskAnalysisInfo"));
        TaskAnalysisInfo->resize(196, 448);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskAnalysisInfo->sizePolicy().hasHeightForWidth());
        TaskAnalysisInfo->setSizePolicy(sizePolicy);
        TaskAnalysisInfo->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskAnalysisInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TaskAnalysisInfo);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        listView = new QListView(TaskAnalysisInfo);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        label_2 = new QLabel(TaskAnalysisInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        listView_2 = new QListView(TaskAnalysisInfo);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        verticalLayout->addWidget(listView_2);


        retranslateUi(TaskAnalysisInfo);

        QMetaObject::connectSlotsByName(TaskAnalysisInfo);
    } // setupUi

    void retranslateUi(QWidget *TaskAnalysisInfo)
    {
        label->setText(QCoreApplication::translate("TaskAnalysisInfo", "Meshes:", nullptr));
        label_2->setText(QCoreApplication::translate("TaskAnalysisInfo", "Analysis features", nullptr));
        (void)TaskAnalysisInfo;
    } // retranslateUi

};

namespace Ui {
    class TaskAnalysisInfo: public Ui_TaskAnalysisInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKANALYSISINFO_H
