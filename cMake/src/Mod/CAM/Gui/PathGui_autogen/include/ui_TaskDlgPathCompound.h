/********************************************************************************
** Form generated from reading UI file 'TaskDlgPathCompound.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDLGPATHCOMPOUND_H
#define UI_TASKDLGPATHCOMPOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskDlgPathCompound
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *PathsList;

    void setupUi(QWidget *TaskDlgPathCompound)
    {
        if (TaskDlgPathCompound->objectName().isEmpty())
            TaskDlgPathCompound->setObjectName(QString::fromUtf8("TaskDlgPathCompound"));
        TaskDlgPathCompound->resize(315, 404);
        verticalLayout = new QVBoxLayout(TaskDlgPathCompound);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TaskDlgPathCompound);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        PathsList = new QListWidget(TaskDlgPathCompound);
        PathsList->setObjectName(QString::fromUtf8("PathsList"));
        PathsList->setFrameShape(QFrame::StyledPanel);
        PathsList->setLineWidth(1);
        PathsList->setDragDropMode(QAbstractItemView::InternalMove);
        PathsList->setDefaultDropAction(Qt::MoveAction);

        verticalLayout->addWidget(PathsList);


        retranslateUi(TaskDlgPathCompound);

        QMetaObject::connectSlotsByName(TaskDlgPathCompound);
    } // setupUi

    void retranslateUi(QWidget *TaskDlgPathCompound)
    {
        TaskDlgPathCompound->setWindowTitle(QCoreApplication::translate("TaskDlgPathCompound", "Paths list", nullptr));
        label->setText(QCoreApplication::translate("TaskDlgPathCompound", "Reorder children by dragging and dropping them to their correct location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskDlgPathCompound: public Ui_TaskDlgPathCompound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDLGPATHCOMPOUND_H
