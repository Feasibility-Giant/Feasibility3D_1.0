/********************************************************************************
** Form generated from reading UI file 'TaskRobotMessages.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKROBOTMESSAGES_H
#define UI_TASKROBOTMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace RobotGui {

class Ui_TaskRobotMessages
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonClear;
    QTextEdit *textEditMessages;

    void setupUi(QWidget *TaskRobotMessages)
    {
        if (TaskRobotMessages->objectName().isEmpty())
            TaskRobotMessages->setObjectName(QString::fromUtf8("TaskRobotMessages"));
        TaskRobotMessages->resize(252, 300);
        TaskRobotMessages->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(TaskRobotMessages);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonClear = new QPushButton(TaskRobotMessages);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        verticalLayout->addWidget(pushButtonClear);

        textEditMessages = new QTextEdit(TaskRobotMessages);
        textEditMessages->setObjectName(QString::fromUtf8("textEditMessages"));

        verticalLayout->addWidget(textEditMessages);


        retranslateUi(TaskRobotMessages);

        QMetaObject::connectSlotsByName(TaskRobotMessages);
    } // setupUi

    void retranslateUi(QWidget *TaskRobotMessages)
    {
        pushButtonClear->setText(QCoreApplication::translate("RobotGui::TaskRobotMessages", "clear", nullptr));
        (void)TaskRobotMessages;
    } // retranslateUi

};

} // namespace RobotGui

namespace RobotGui {
namespace Ui {
    class TaskRobotMessages: public Ui_TaskRobotMessages {};
} // namespace Ui
} // namespace RobotGui

#endif // UI_TASKROBOTMESSAGES_H
