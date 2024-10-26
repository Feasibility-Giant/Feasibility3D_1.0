/********************************************************************************
** Form generated from reading UI file 'TaskTrajectory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKTRAJECTORY_H
#define UI_TASKTRAJECTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace RobotGui {

class Ui_TaskTrajectory
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ButtonStepStart;
    QPushButton *ButtonStepBack;
    QPushButton *ButtonStepStop;
    QPushButton *ButtonStepRun;
    QPushButton *ButtonStepForward;
    QPushButton *ButtonStepEnd;
    QSlider *timeSlider;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *timeSpinBox;
    QSpinBox *Override;
    QComboBox *comboBoxIpo;
    QLabel *label_Pos;
    QTableWidget *trajectoryTable;

    void setupUi(QWidget *RobotGui__TaskTrajectory)
    {
        if (RobotGui__TaskTrajectory->objectName().isEmpty())
            RobotGui__TaskTrajectory->setObjectName(QString::fromUtf8("RobotGui__TaskTrajectory"));
        RobotGui__TaskTrajectory->resize(222, 314);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotGui__TaskTrajectory->sizePolicy().hasHeightForWidth());
        RobotGui__TaskTrajectory->setSizePolicy(sizePolicy);
        RobotGui__TaskTrajectory->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(RobotGui__TaskTrajectory);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(2);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ButtonStepStart = new QPushButton(RobotGui__TaskTrajectory);
        ButtonStepStart->setObjectName(QString::fromUtf8("ButtonStepStart"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonStepStart->sizePolicy().hasHeightForWidth());
        ButtonStepStart->setSizePolicy(sizePolicy1);
        ButtonStepStart->setMinimumSize(QSize(30, 20));
        ButtonStepStart->setMaximumSize(QSize(35, 22));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        ButtonStepStart->setFont(font);

        hboxLayout->addWidget(ButtonStepStart);

        ButtonStepBack = new QPushButton(RobotGui__TaskTrajectory);
        ButtonStepBack->setObjectName(QString::fromUtf8("ButtonStepBack"));
        sizePolicy1.setHeightForWidth(ButtonStepBack->sizePolicy().hasHeightForWidth());
        ButtonStepBack->setSizePolicy(sizePolicy1);
        ButtonStepBack->setMinimumSize(QSize(30, 20));
        ButtonStepBack->setMaximumSize(QSize(35, 22));
        ButtonStepBack->setFont(font);

        hboxLayout->addWidget(ButtonStepBack);

        ButtonStepStop = new QPushButton(RobotGui__TaskTrajectory);
        ButtonStepStop->setObjectName(QString::fromUtf8("ButtonStepStop"));
        sizePolicy1.setHeightForWidth(ButtonStepStop->sizePolicy().hasHeightForWidth());
        ButtonStepStop->setSizePolicy(sizePolicy1);
        ButtonStepStop->setMinimumSize(QSize(30, 20));
        ButtonStepStop->setMaximumSize(QSize(35, 22));
        ButtonStepStop->setFont(font);
        ButtonStepStop->setText(QString::fromUtf8("||"));

        hboxLayout->addWidget(ButtonStepStop);

        ButtonStepRun = new QPushButton(RobotGui__TaskTrajectory);
        ButtonStepRun->setObjectName(QString::fromUtf8("ButtonStepRun"));
        sizePolicy1.setHeightForWidth(ButtonStepRun->sizePolicy().hasHeightForWidth());
        ButtonStepRun->setSizePolicy(sizePolicy1);
        ButtonStepRun->setMinimumSize(QSize(30, 20));
        ButtonStepRun->setMaximumSize(QSize(35, 22));
        ButtonStepRun->setFont(font);

        hboxLayout->addWidget(ButtonStepRun);

        ButtonStepForward = new QPushButton(RobotGui__TaskTrajectory);
        ButtonStepForward->setObjectName(QString::fromUtf8("ButtonStepForward"));
        sizePolicy1.setHeightForWidth(ButtonStepForward->sizePolicy().hasHeightForWidth());
        ButtonStepForward->setSizePolicy(sizePolicy1);
        ButtonStepForward->setMinimumSize(QSize(30, 20));
        ButtonStepForward->setMaximumSize(QSize(35, 22));
        ButtonStepForward->setFont(font);

        hboxLayout->addWidget(ButtonStepForward);

        ButtonStepEnd = new QPushButton(RobotGui__TaskTrajectory);
        ButtonStepEnd->setObjectName(QString::fromUtf8("ButtonStepEnd"));
        sizePolicy1.setHeightForWidth(ButtonStepEnd->sizePolicy().hasHeightForWidth());
        ButtonStepEnd->setSizePolicy(sizePolicy1);
        ButtonStepEnd->setMinimumSize(QSize(30, 20));
        ButtonStepEnd->setMaximumSize(QSize(35, 22));
        ButtonStepEnd->setFont(font);

        hboxLayout->addWidget(ButtonStepEnd);


        verticalLayout->addLayout(hboxLayout);

        timeSlider = new QSlider(RobotGui__TaskTrajectory);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setMaximum(999);
        timeSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(timeSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        timeSpinBox = new QDoubleSpinBox(RobotGui__TaskTrajectory);
        timeSpinBox->setObjectName(QString::fromUtf8("timeSpinBox"));

        horizontalLayout->addWidget(timeSpinBox);

        Override = new QSpinBox(RobotGui__TaskTrajectory);
        Override->setObjectName(QString::fromUtf8("Override"));
        Override->setSuffix(QString::fromUtf8("%"));
        Override->setMaximum(100);
        Override->setSingleStep(10);
        Override->setValue(100);

        horizontalLayout->addWidget(Override);

        comboBoxIpo = new QComboBox(RobotGui__TaskTrajectory);
        comboBoxIpo->addItem(QString());
        comboBoxIpo->addItem(QString());
        comboBoxIpo->addItem(QString());
        comboBoxIpo->addItem(QString());
        comboBoxIpo->addItem(QString());
        comboBoxIpo->setObjectName(QString::fromUtf8("comboBoxIpo"));

        horizontalLayout->addWidget(comboBoxIpo);


        verticalLayout->addLayout(horizontalLayout);

        label_Pos = new QLabel(RobotGui__TaskTrajectory);
        label_Pos->setObjectName(QString::fromUtf8("label_Pos"));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setWeight(75);
        label_Pos->setFont(font1);

        verticalLayout->addWidget(label_Pos);

        trajectoryTable = new QTableWidget(RobotGui__TaskTrajectory);
        if (trajectoryTable->columnCount() < 5)
            trajectoryTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        trajectoryTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        trajectoryTable->setObjectName(QString::fromUtf8("trajectoryTable"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(trajectoryTable->sizePolicy().hasHeightForWidth());
        trajectoryTable->setSizePolicy(sizePolicy2);
        trajectoryTable->setMinimumSize(QSize(180, 0));
        trajectoryTable->horizontalHeader()->setDefaultSectionSize(40);
        trajectoryTable->verticalHeader()->setDefaultSectionSize(22);

        verticalLayout->addWidget(trajectoryTable);


        retranslateUi(RobotGui__TaskTrajectory);

        QMetaObject::connectSlotsByName(RobotGui__TaskTrajectory);
    } // setupUi

    void retranslateUi(QWidget *RobotGui__TaskTrajectory)
    {
        ButtonStepStart->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "|<", nullptr));
        ButtonStepBack->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "<", nullptr));
        ButtonStepRun->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "|>", nullptr));
        ButtonStepForward->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", ">", nullptr));
        ButtonStepEnd->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", ">|", nullptr));
        comboBoxIpo->setItemText(0, QCoreApplication::translate("RobotGui::TaskTrajectory", "10 ms", nullptr));
        comboBoxIpo->setItemText(1, QCoreApplication::translate("RobotGui::TaskTrajectory", "50 ms", nullptr));
        comboBoxIpo->setItemText(2, QCoreApplication::translate("RobotGui::TaskTrajectory", "100 ms", nullptr));
        comboBoxIpo->setItemText(3, QCoreApplication::translate("RobotGui::TaskTrajectory", "500 ms", nullptr));
        comboBoxIpo->setItemText(4, QCoreApplication::translate("RobotGui::TaskTrajectory", "1 s", nullptr));

        label_Pos->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "Pos: (200.23, 300.23, 400.23, 234, 343 ,343)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = trajectoryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = trajectoryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = trajectoryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = trajectoryTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "V", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = trajectoryTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RobotGui::TaskTrajectory", "A", nullptr));
        (void)RobotGui__TaskTrajectory;
    } // retranslateUi

};

} // namespace RobotGui

namespace RobotGui {
namespace Ui {
    class TaskTrajectory: public Ui_TaskTrajectory {};
} // namespace Ui
} // namespace RobotGui

#endif // UI_TASKTRAJECTORY_H
