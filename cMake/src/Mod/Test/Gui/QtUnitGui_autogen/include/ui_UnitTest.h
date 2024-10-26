/********************************************************************************
** Form generated from reading UI file 'UnitTest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITTEST_H
#define UI_UNITTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

namespace TestGui {

class Ui_UnitTest
{
public:
    QGridLayout *gridLayout;
    QGroupBox *buttonGroup1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabelTest;
    QComboBox *comboTests;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *startButton;
    QSpacerItem *spacerItem1;
    QPushButton *helpButton;
    QPushButton *aboutButton;
    QPushButton *closeButton;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QProgressBar *progressBar;
    QLabel *textLabelRun;
    QLabel *textLabelRunCt;
    QLabel *textLabelFail;
    QLabel *textLabelFailCt;
    QLabel *textLabelErr;
    QLabel *textLabelErrCt;
    QLabel *textLabelRem;
    QLabel *textLabelRemCt;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QTreeWidget *treeViewFailure;
    QLabel *textLabelStatus;

    void setupUi(QDialog *TestGui__UnitTest)
    {
        if (TestGui__UnitTest->objectName().isEmpty())
            TestGui__UnitTest->setObjectName(QString::fromUtf8("TestGui__UnitTest"));
        TestGui__UnitTest->resize(421, 434);
        TestGui__UnitTest->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(TestGui__UnitTest);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonGroup1 = new QGroupBox(TestGui__UnitTest);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        hboxLayout = new QHBoxLayout(buttonGroup1);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(5, 5, 5, 5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabelTest = new QLabel(buttonGroup1);
        textLabelTest->setObjectName(QString::fromUtf8("textLabelTest"));

        hboxLayout->addWidget(textLabelTest);

        comboTests = new QComboBox(buttonGroup1);
        comboTests->setObjectName(QString::fromUtf8("comboTests"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboTests->sizePolicy().hasHeightForWidth());
        comboTests->setSizePolicy(sizePolicy);
        comboTests->setEditable(true);
        comboTests->setDuplicatesEnabled(false);

        hboxLayout->addWidget(comboTests);


        gridLayout->addWidget(buttonGroup1, 0, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        startButton = new QPushButton(TestGui__UnitTest);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setAutoDefault(true);

        vboxLayout->addWidget(startButton);

        spacerItem1 = new QSpacerItem(77, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        helpButton = new QPushButton(TestGui__UnitTest);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setAutoDefault(true);

        vboxLayout->addWidget(helpButton);

        aboutButton = new QPushButton(TestGui__UnitTest);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setAutoDefault(true);

        vboxLayout->addWidget(aboutButton);

        closeButton = new QPushButton(TestGui__UnitTest);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setAutoDefault(true);

        vboxLayout->addWidget(closeButton);


        gridLayout->addLayout(vboxLayout, 0, 1, 3, 1);

        groupBox1 = new QGroupBox(TestGui__UnitTest);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(6, 6, 6, 6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        progressBar = new QProgressBar(groupBox1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(progressBar, 0, 0, 1, 8);

        textLabelRun = new QLabel(groupBox1);
        textLabelRun->setObjectName(QString::fromUtf8("textLabelRun"));

        gridLayout1->addWidget(textLabelRun, 1, 0, 1, 1);

        textLabelRunCt = new QLabel(groupBox1);
        textLabelRunCt->setObjectName(QString::fromUtf8("textLabelRunCt"));
        textLabelRunCt->setText(QString::fromUtf8("<font color=\"#0000ff\">0</font>"));
        textLabelRunCt->setAlignment(Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelRunCt, 1, 1, 1, 1);

        textLabelFail = new QLabel(groupBox1);
        textLabelFail->setObjectName(QString::fromUtf8("textLabelFail"));

        gridLayout1->addWidget(textLabelFail, 1, 2, 1, 1);

        textLabelFailCt = new QLabel(groupBox1);
        textLabelFailCt->setObjectName(QString::fromUtf8("textLabelFailCt"));
        textLabelFailCt->setText(QString::fromUtf8("<font color=\"#0000ff\">0</font>"));
        textLabelFailCt->setAlignment(Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelFailCt, 1, 3, 1, 1);

        textLabelErr = new QLabel(groupBox1);
        textLabelErr->setObjectName(QString::fromUtf8("textLabelErr"));

        gridLayout1->addWidget(textLabelErr, 1, 4, 1, 1);

        textLabelErrCt = new QLabel(groupBox1);
        textLabelErrCt->setObjectName(QString::fromUtf8("textLabelErrCt"));
        textLabelErrCt->setText(QString::fromUtf8("<font color=\"#0000ff\">0</font>"));
        textLabelErrCt->setAlignment(Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelErrCt, 1, 5, 1, 1);

        textLabelRem = new QLabel(groupBox1);
        textLabelRem->setObjectName(QString::fromUtf8("textLabelRem"));

        gridLayout1->addWidget(textLabelRem, 1, 6, 1, 1);

        textLabelRemCt = new QLabel(groupBox1);
        textLabelRemCt->setObjectName(QString::fromUtf8("textLabelRemCt"));
        textLabelRemCt->setText(QString::fromUtf8("<font color=\"#0000ff\">0</font>"));
        textLabelRemCt->setAlignment(Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelRemCt, 1, 7, 1, 1);


        gridLayout->addWidget(groupBox1, 1, 0, 1, 1);

        groupBox2 = new QGroupBox(TestGui__UnitTest);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        treeViewFailure = new QTreeWidget(groupBox2);
        treeViewFailure->setObjectName(QString::fromUtf8("treeViewFailure"));
        treeViewFailure->setRootIsDecorated(false);

        gridLayout2->addWidget(treeViewFailure, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox2, 2, 0, 1, 1);

        textLabelStatus = new QLabel(TestGui__UnitTest);
        textLabelStatus->setObjectName(QString::fromUtf8("textLabelStatus"));
        textLabelStatus->setFrameShape(QFrame::Panel);
        textLabelStatus->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(textLabelStatus, 3, 0, 1, 2);

        QWidget::setTabOrder(comboTests, startButton);
        QWidget::setTabOrder(startButton, treeViewFailure);
        QWidget::setTabOrder(treeViewFailure, helpButton);
        QWidget::setTabOrder(helpButton, aboutButton);
        QWidget::setTabOrder(aboutButton, closeButton);

        retranslateUi(TestGui__UnitTest);
        QObject::connect(closeButton, SIGNAL(clicked()), TestGui__UnitTest, SLOT(close()));

        startButton->setDefault(true);


        QMetaObject::connectSlotsByName(TestGui__UnitTest);
    } // setupUi

    void retranslateUi(QDialog *TestGui__UnitTest)
    {
        TestGui__UnitTest->setWindowTitle(QCoreApplication::translate("TestGui::UnitTest", "FreeCAD UnitTest", nullptr));
        buttonGroup1->setTitle(QCoreApplication::translate("TestGui::UnitTest", "Test", nullptr));
        textLabelTest->setText(QCoreApplication::translate("TestGui::UnitTest", "Select test name:", nullptr));
        startButton->setText(QCoreApplication::translate("TestGui::UnitTest", "&Start", nullptr));
#if QT_CONFIG(shortcut)
        startButton->setShortcut(QCoreApplication::translate("TestGui::UnitTest", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        helpButton->setText(QCoreApplication::translate("TestGui::UnitTest", "&Help", nullptr));
#if QT_CONFIG(shortcut)
        helpButton->setShortcut(QCoreApplication::translate("TestGui::UnitTest", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        aboutButton->setText(QCoreApplication::translate("TestGui::UnitTest", "&About", nullptr));
#if QT_CONFIG(shortcut)
        aboutButton->setShortcut(QCoreApplication::translate("TestGui::UnitTest", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        closeButton->setText(QCoreApplication::translate("TestGui::UnitTest", "&Close", nullptr));
#if QT_CONFIG(shortcut)
        closeButton->setShortcut(QCoreApplication::translate("TestGui::UnitTest", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox1->setTitle(QCoreApplication::translate("TestGui::UnitTest", "Progress", nullptr));
        textLabelRun->setText(QCoreApplication::translate("TestGui::UnitTest", "Run:", nullptr));
        textLabelFail->setText(QCoreApplication::translate("TestGui::UnitTest", "Failures:", nullptr));
        textLabelErr->setText(QCoreApplication::translate("TestGui::UnitTest", "Errors:", nullptr));
        textLabelRem->setText(QCoreApplication::translate("TestGui::UnitTest", "Remaining:", nullptr));
        groupBox2->setTitle(QCoreApplication::translate("TestGui::UnitTest", "Failures and errors", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeViewFailure->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TestGui::UnitTest", "Description", nullptr));
        textLabelStatus->setText(QCoreApplication::translate("TestGui::UnitTest", "Idle", nullptr));
    } // retranslateUi

};

} // namespace TestGui

namespace TestGui {
namespace Ui {
    class UnitTest: public Ui_UnitTest {};
} // namespace Ui
} // namespace TestGui

#endif // UI_UNITTEST_H
