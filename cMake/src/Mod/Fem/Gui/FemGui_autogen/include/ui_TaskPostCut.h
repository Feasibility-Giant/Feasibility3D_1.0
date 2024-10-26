/********************************************************************************
** Form generated from reading UI file 'TaskPostCut.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTCUT_H
#define UI_TASKPOSTCUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskPostCut
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *FunctionBox;
    QToolButton *CreateButton;
    QFrame *line;
    QWidget *Container;

    void setupUi(QWidget *TaskPostCut)
    {
        if (TaskPostCut->objectName().isEmpty())
            TaskPostCut->setObjectName(QString::fromUtf8("TaskPostCut"));
        TaskPostCut->resize(404, 98);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskPostCut->sizePolicy().hasHeightForWidth());
        TaskPostCut->setSizePolicy(sizePolicy);
        TaskPostCut->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskPostCut);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FunctionBox = new QComboBox(TaskPostCut);
        FunctionBox->setObjectName(QString::fromUtf8("FunctionBox"));

        horizontalLayout->addWidget(FunctionBox);

        CreateButton = new QToolButton(TaskPostCut);
        CreateButton->setObjectName(QString::fromUtf8("CreateButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CreateButton->setIcon(icon);
        CreateButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(CreateButton);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TaskPostCut);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Container = new QWidget(TaskPostCut);
        Container->setObjectName(QString::fromUtf8("Container"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Container->sizePolicy().hasHeightForWidth());
        Container->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Container);


        retranslateUi(TaskPostCut);

        QMetaObject::connectSlotsByName(TaskPostCut);
    } // setupUi

    void retranslateUi(QWidget *TaskPostCut)
    {
        CreateButton->setText(QCoreApplication::translate("TaskPostCut", "Create", nullptr));
        (void)TaskPostCut;
    } // retranslateUi

};

namespace Ui {
    class TaskPostCut: public Ui_TaskPostCut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTCUT_H
