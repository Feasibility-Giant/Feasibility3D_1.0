/********************************************************************************
** Form generated from reading UI file 'TaskPostClip.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOSTCLIP_H
#define UI_TASKPOSTCLIP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskPostClip
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *FunctionBox;
    QToolButton *CreateButton;
    QFrame *line;
    QWidget *Container;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *InsideOut;
    QCheckBox *CutCells;

    void setupUi(QWidget *TaskPostClip)
    {
        if (TaskPostClip->objectName().isEmpty())
            TaskPostClip->setObjectName(QString::fromUtf8("TaskPostClip"));
        TaskPostClip->resize(413, 184);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskPostClip->sizePolicy().hasHeightForWidth());
        TaskPostClip->setSizePolicy(sizePolicy);
        TaskPostClip->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskPostClip);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FunctionBox = new QComboBox(TaskPostClip);
        FunctionBox->setObjectName(QString::fromUtf8("FunctionBox"));

        horizontalLayout->addWidget(FunctionBox);

        CreateButton = new QToolButton(TaskPostClip);
        CreateButton->setObjectName(QString::fromUtf8("CreateButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CreateButton->setIcon(icon);
        CreateButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(CreateButton);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TaskPostClip);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Container = new QWidget(TaskPostClip);
        Container->setObjectName(QString::fromUtf8("Container"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Container->sizePolicy().hasHeightForWidth());
        Container->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Container);

        line_2 = new QFrame(TaskPostClip);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        InsideOut = new QCheckBox(TaskPostClip);
        InsideOut->setObjectName(QString::fromUtf8("InsideOut"));

        horizontalLayout_2->addWidget(InsideOut);

        CutCells = new QCheckBox(TaskPostClip);
        CutCells->setObjectName(QString::fromUtf8("CutCells"));

        horizontalLayout_2->addWidget(CutCells);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TaskPostClip);

        QMetaObject::connectSlotsByName(TaskPostClip);
    } // setupUi

    void retranslateUi(QWidget *TaskPostClip)
    {
        CreateButton->setText(QCoreApplication::translate("TaskPostClip", "Create", nullptr));
        InsideOut->setText(QCoreApplication::translate("TaskPostClip", "Inside Out", nullptr));
        CutCells->setText(QCoreApplication::translate("TaskPostClip", "Cut Cells", nullptr));
        (void)TaskPostClip;
    } // retranslateUi

};

namespace Ui {
    class TaskPostClip: public Ui_TaskPostClip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKPOSTCLIP_H
