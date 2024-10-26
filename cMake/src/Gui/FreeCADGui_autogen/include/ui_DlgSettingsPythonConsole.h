/********************************************************************************
** Form generated from reading UI file 'DlgSettingsPythonConsole.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSPYTHONCONSOLE_H
#define UI_DLGSETTINGSPYTHONCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsPythonConsole
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *GroupBox_console;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *PythonWordWrap;
    Gui::PrefCheckBox *PythonBlockCursor;
    Gui::PrefCheckBox *PythonSaveHistory;
    QLabel *labelProfilerInterval;
    Gui::PrefSpinBox *ProfilerInterval;
    QGroupBox *GroupBox_other;
    QGridLayout *gridLayout_3;
    QLabel *fclabel;
    Gui::PrefFileChooser *ExternalPythonExecutable;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsPythonConsole)
    {
        if (Gui__Dialog__DlgSettingsPythonConsole->objectName().isEmpty())
            Gui__Dialog__DlgSettingsPythonConsole->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsPythonConsole"));
        Gui__Dialog__DlgSettingsPythonConsole->resize(654, 259);
        gridLayout_2 = new QGridLayout(Gui__Dialog__DlgSettingsPythonConsole);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        GroupBox_console = new QGroupBox(Gui__Dialog__DlgSettingsPythonConsole);
        GroupBox_console->setObjectName(QString::fromUtf8("GroupBox_console"));
        gridLayout = new QGridLayout(GroupBox_console);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PythonWordWrap = new Gui::PrefCheckBox(GroupBox_console);
        PythonWordWrap->setObjectName(QString::fromUtf8("PythonWordWrap"));
        PythonWordWrap->setChecked(true);
        PythonWordWrap->setProperty("prefEntry", QVariant(QByteArray("PythonWordWrap")));
        PythonWordWrap->setProperty("prefPath", QVariant(QByteArray("PythonConsole")));

        gridLayout->addWidget(PythonWordWrap, 0, 0, 1, 1);

        PythonBlockCursor = new Gui::PrefCheckBox(GroupBox_console);
        PythonBlockCursor->setObjectName(QString::fromUtf8("PythonBlockCursor"));
        PythonBlockCursor->setChecked(false);
        PythonBlockCursor->setProperty("prefEntry", QVariant(QByteArray("PythonBlockCursor")));
        PythonBlockCursor->setProperty("prefPath", QVariant(QByteArray("PythonConsole")));

        gridLayout->addWidget(PythonBlockCursor, 1, 0, 1, 1);

        PythonSaveHistory = new Gui::PrefCheckBox(GroupBox_console);
        PythonSaveHistory->setObjectName(QString::fromUtf8("PythonSaveHistory"));
        PythonSaveHistory->setChecked(false);
        PythonSaveHistory->setProperty("prefEntry", QVariant(QByteArray("SavePythonHistory")));
        PythonSaveHistory->setProperty("prefPath", QVariant(QByteArray("PythonConsole")));

        gridLayout->addWidget(PythonSaveHistory, 2, 0, 1, 1);

        labelProfilerInterval = new QLabel(GroupBox_console);
        labelProfilerInterval->setObjectName(QString::fromUtf8("labelProfilerInterval"));

        gridLayout->addWidget(labelProfilerInterval, 3, 0, 1, 1);

        ProfilerInterval = new Gui::PrefSpinBox(GroupBox_console);
        ProfilerInterval->setObjectName(QString::fromUtf8("ProfilerInterval"));
        ProfilerInterval->setMinimum(0);
        ProfilerInterval->setMaximum(5000);
        ProfilerInterval->setValue(200);
        ProfilerInterval->setProperty("prefEntry", QVariant(QByteArray("ProfilerInterval")));
        ProfilerInterval->setProperty("prefPath", QVariant(QByteArray("PythonConsole")));

        gridLayout->addWidget(ProfilerInterval, 3, 1, 1, 1);


        gridLayout_2->addWidget(GroupBox_console, 0, 0, 1, 1);

        GroupBox_other = new QGroupBox(Gui__Dialog__DlgSettingsPythonConsole);
        GroupBox_other->setObjectName(QString::fromUtf8("GroupBox_other"));
        gridLayout_3 = new QGridLayout(GroupBox_other);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        fclabel = new QLabel(GroupBox_other);
        fclabel->setObjectName(QString::fromUtf8("fclabel"));

        gridLayout_3->addWidget(fclabel, 0, 0, 1, 1);

        ExternalPythonExecutable = new Gui::PrefFileChooser(GroupBox_other);
        ExternalPythonExecutable->setObjectName(QString::fromUtf8("ExternalPythonExecutable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExternalPythonExecutable->sizePolicy().hasHeightForWidth());
        ExternalPythonExecutable->setSizePolicy(sizePolicy);
        ExternalPythonExecutable->setMinimumSize(QSize(300, 0));
        ExternalPythonExecutable->setProperty("prefEntry", QVariant(QByteArray("ExternalPythonExecutable")));
        ExternalPythonExecutable->setProperty("prefPath", QVariant(QByteArray("PythonConsole")));

        gridLayout_3->addWidget(ExternalPythonExecutable, 0, 1, 1, 1);


        gridLayout_2->addWidget(GroupBox_other, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgSettingsPythonConsole);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsPythonConsole);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsPythonConsole)
    {
        Gui__Dialog__DlgSettingsPythonConsole->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "General", nullptr));
        GroupBox_console->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Console", nullptr));
#if QT_CONFIG(tooltip)
        PythonWordWrap->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Words will be wrapped when they exceed available\n"
"horizontal space in Python console", nullptr));
#endif // QT_CONFIG(tooltip)
        PythonWordWrap->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Enable word wrap", nullptr));
#if QT_CONFIG(tooltip)
        PythonBlockCursor->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "The cursor shape will be a block", nullptr));
#endif // QT_CONFIG(tooltip)
        PythonBlockCursor->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Enable block cursor", nullptr));
#if QT_CONFIG(tooltip)
        PythonSaveHistory->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Saves Python history across sessions", nullptr));
#endif // QT_CONFIG(tooltip)
        PythonSaveHistory->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Save history", nullptr));
        labelProfilerInterval->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Python profiler interval (milliseconds):", nullptr));
#if QT_CONFIG(tooltip)
        ProfilerInterval->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "The interval at which the profiler runs when there's Python code running (to keep the GUI responding). Set to 0 to disable.", nullptr));
#endif // QT_CONFIG(tooltip)
        GroupBox_other->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Other", nullptr));
        fclabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Path to external Python executable (optional):", nullptr));
#if QT_CONFIG(tooltip)
        ExternalPythonExecutable->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsPythonConsole", "Used for package installation with pip and debugging with debugpy. Autodetected if needed and not specified.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsPythonConsole: public Ui_DlgSettingsPythonConsole {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSPYTHONCONSOLE_H
