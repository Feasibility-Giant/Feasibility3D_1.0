/********************************************************************************
** Form generated from reading UI file 'DlgSettingsNotificationArea.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSNOTIFICATIONAREA_H
#define UI_DLGSETTINGSNOTIFICATIONAREA_H

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

class Ui_DlgSettingsNotificationArea
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *GroupBox11;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *NotificationAreaEnabled;
    Gui::PrefCheckBox *NonIntrusiveNotificationsEnabled;
    QGroupBox *GroupBoxSubscriptions;
    QGridLayout *gridLayout_1;
    Gui::PrefCheckBox *developerErrorSubscriptionEnabled;
    Gui::PrefCheckBox *developerWarningSubscriptionEnabled;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label;
    Gui::PrefSpinBox *maxDuration;
    Gui::PrefSpinBox *minDuration;
    QLabel *label_3;
    Gui::PrefSpinBox *maxNotifications;
    QLabel *label_width;
    Gui::PrefSpinBox *notificationWidth;
    Gui::PrefCheckBox *hideNonIntrusiveNotificationsWhenWindowDeactivated;
    Gui::PrefCheckBox *preventNonIntrusiveNotificationsWhenWindowNotActive;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    Gui::PrefSpinBox *maxWidgetMessages;
    QLabel *label_4;
    Gui::PrefCheckBox *autoRemoveUserNotifications;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsNotificationArea)
    {
        if (Gui__Dialog__DlgSettingsNotificationArea->objectName().isEmpty())
            Gui__Dialog__DlgSettingsNotificationArea->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsNotificationArea"));
        Gui__Dialog__DlgSettingsNotificationArea->resize(654, 375);
        gridLayout_2 = new QGridLayout(Gui__Dialog__DlgSettingsNotificationArea);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        GroupBox11 = new QGroupBox(Gui__Dialog__DlgSettingsNotificationArea);
        GroupBox11->setObjectName(QString::fromUtf8("GroupBox11"));
        gridLayout = new QGridLayout(GroupBox11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NotificationAreaEnabled = new Gui::PrefCheckBox(GroupBox11);
        NotificationAreaEnabled->setObjectName(QString::fromUtf8("NotificationAreaEnabled"));
        NotificationAreaEnabled->setChecked(true);
        NotificationAreaEnabled->setProperty("prefEntry", QVariant(QByteArray("NotificationAreaEnabled")));
        NotificationAreaEnabled->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout->addWidget(NotificationAreaEnabled, 0, 0, 1, 1);

        NonIntrusiveNotificationsEnabled = new Gui::PrefCheckBox(GroupBox11);
        NonIntrusiveNotificationsEnabled->setObjectName(QString::fromUtf8("NonIntrusiveNotificationsEnabled"));
        NonIntrusiveNotificationsEnabled->setChecked(true);
        NonIntrusiveNotificationsEnabled->setProperty("prefEntry", QVariant(QByteArray("NonIntrusiveNotificationsEnabled")));
        NonIntrusiveNotificationsEnabled->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout->addWidget(NonIntrusiveNotificationsEnabled, 1, 0, 1, 1);


        gridLayout_2->addWidget(GroupBox11, 0, 0, 1, 1);

        GroupBoxSubscriptions = new QGroupBox(Gui__Dialog__DlgSettingsNotificationArea);
        GroupBoxSubscriptions->setObjectName(QString::fromUtf8("GroupBoxSubscriptions"));
        gridLayout_1 = new QGridLayout(GroupBoxSubscriptions);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        developerErrorSubscriptionEnabled = new Gui::PrefCheckBox(GroupBoxSubscriptions);
        developerErrorSubscriptionEnabled->setObjectName(QString::fromUtf8("developerErrorSubscriptionEnabled"));
        developerErrorSubscriptionEnabled->setChecked(false);
        developerErrorSubscriptionEnabled->setProperty("prefEntry", QVariant(QByteArray("DeveloperErrorSubscriptionEnabled")));
        developerErrorSubscriptionEnabled->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_1->addWidget(developerErrorSubscriptionEnabled, 0, 0, 1, 1);

        developerWarningSubscriptionEnabled = new Gui::PrefCheckBox(GroupBoxSubscriptions);
        developerWarningSubscriptionEnabled->setObjectName(QString::fromUtf8("developerWarningSubscriptionEnabled"));
        developerWarningSubscriptionEnabled->setChecked(false);
        developerWarningSubscriptionEnabled->setProperty("prefEntry", QVariant(QByteArray("DeveloperWarningSubscriptionEnabled")));
        developerWarningSubscriptionEnabled->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_1->addWidget(developerWarningSubscriptionEnabled, 1, 0, 1, 1);


        gridLayout_2->addWidget(GroupBoxSubscriptions, 1, 0, 1, 1);

        groupBox = new QGroupBox(Gui__Dialog__DlgSettingsNotificationArea);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        maxDuration = new Gui::PrefSpinBox(groupBox);
        maxDuration->setObjectName(QString::fromUtf8("maxDuration"));
        maxDuration->setMinimum(0);
        maxDuration->setMaximum(120);
        maxDuration->setValue(20);
        maxDuration->setProperty("prefEntry", QVariant(QByteArray("NotificationTime")));
        maxDuration->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_3->addWidget(maxDuration, 0, 1, 1, 1);

        minDuration = new Gui::PrefSpinBox(groupBox);
        minDuration->setObjectName(QString::fromUtf8("minDuration"));
        minDuration->setValue(5);
        minDuration->setProperty("prefEntry", QVariant(QByteArray("MinimumOnScreenTime")));
        minDuration->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_3->addWidget(minDuration, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        maxNotifications = new Gui::PrefSpinBox(groupBox);
        maxNotifications->setObjectName(QString::fromUtf8("maxNotifications"));
        maxNotifications->setValue(15);
        maxNotifications->setProperty("prefEntry", QVariant(QByteArray("MaxOpenNotifications")));
        maxNotifications->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_3->addWidget(maxNotifications, 2, 1, 1, 1);

        label_width = new QLabel(groupBox);
        label_width->setObjectName(QString::fromUtf8("label_width"));

        gridLayout_3->addWidget(label_width, 3, 0, 1, 1);

        notificationWidth = new Gui::PrefSpinBox(groupBox);
        notificationWidth->setObjectName(QString::fromUtf8("notificationWidth"));
        notificationWidth->setMinimum(300);
        notificationWidth->setMaximum(10000);
        notificationWidth->setValue(800);
        notificationWidth->setProperty("prefEntry", QVariant(QByteArray("NotificiationWidth")));
        notificationWidth->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_3->addWidget(notificationWidth, 3, 1, 1, 1);

        hideNonIntrusiveNotificationsWhenWindowDeactivated = new Gui::PrefCheckBox(groupBox);
        hideNonIntrusiveNotificationsWhenWindowDeactivated->setObjectName(QString::fromUtf8("hideNonIntrusiveNotificationsWhenWindowDeactivated"));
        hideNonIntrusiveNotificationsWhenWindowDeactivated->setChecked(true);
        hideNonIntrusiveNotificationsWhenWindowDeactivated->setProperty("prefEntry", QVariant(QByteArray("HideNonIntrusiveNotificationsWhenWindowDeactivated")));
        hideNonIntrusiveNotificationsWhenWindowDeactivated->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_3->addWidget(hideNonIntrusiveNotificationsWhenWindowDeactivated, 4, 0, 1, 1);

        preventNonIntrusiveNotificationsWhenWindowNotActive = new Gui::PrefCheckBox(groupBox);
        preventNonIntrusiveNotificationsWhenWindowNotActive->setObjectName(QString::fromUtf8("preventNonIntrusiveNotificationsWhenWindowNotActive"));
        preventNonIntrusiveNotificationsWhenWindowNotActive->setChecked(true);
        preventNonIntrusiveNotificationsWhenWindowNotActive->setProperty("prefEntry", QVariant(QByteArray("PreventNonIntrusiveNotificationsWhenWindowNotActive")));
        preventNonIntrusiveNotificationsWhenWindowNotActive->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_3->addWidget(preventNonIntrusiveNotificationsWhenWindowNotActive, 5, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgSettingsNotificationArea);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        maxWidgetMessages = new Gui::PrefSpinBox(groupBox_2);
        maxWidgetMessages->setObjectName(QString::fromUtf8("maxWidgetMessages"));
        maxWidgetMessages->setMaximum(10000);
        maxWidgetMessages->setValue(1000);
        maxWidgetMessages->setProperty("prefEntry", QVariant(QByteArray("MaxWidgetMessages")));
        maxWidgetMessages->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_4->addWidget(maxWidgetMessages, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        autoRemoveUserNotifications = new Gui::PrefCheckBox(groupBox_2);
        autoRemoveUserNotifications->setObjectName(QString::fromUtf8("autoRemoveUserNotifications"));
        autoRemoveUserNotifications->setChecked(true);
        autoRemoveUserNotifications->setProperty("prefEntry", QVariant(QByteArray("AutoRemoveUserNotifications")));
        autoRemoveUserNotifications->setProperty("prefPath", QVariant(QByteArray("NotificationArea")));

        gridLayout_4->addWidget(autoRemoveUserNotifications, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgSettingsNotificationArea);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsNotificationArea);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsNotificationArea)
    {
        Gui__Dialog__DlgSettingsNotificationArea->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Notification Area", nullptr));
        GroupBox11->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        NotificationAreaEnabled->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "The Notification area will appear in the status bar", nullptr));
#endif // QT_CONFIG(tooltip)
        NotificationAreaEnabled->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Enable Notification Area", nullptr));
#if QT_CONFIG(tooltip)
        NonIntrusiveNotificationsEnabled->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Non-intrusive notifications will appear next to the notification area in the status bar", nullptr));
#endif // QT_CONFIG(tooltip)
        NonIntrusiveNotificationsEnabled->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Enable non-intrusive notifications", nullptr));
        GroupBoxSubscriptions->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Additional data sources", nullptr));
#if QT_CONFIG(tooltip)
        developerErrorSubscriptionEnabled->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Errors intended for developers will appear in the notification area", nullptr));
#endif // QT_CONFIG(tooltip)
        developerErrorSubscriptionEnabled->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Debug errors", nullptr));
#if QT_CONFIG(tooltip)
        developerWarningSubscriptionEnabled->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Warnings intended for developers will appear in the notification area", nullptr));
#endif // QT_CONFIG(tooltip)
        developerWarningSubscriptionEnabled->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Debug warnings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Non-Intrusive Notifications", nullptr));
        label_2->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Minimum Duration:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Maximum Duration:", nullptr));
#if QT_CONFIG(tooltip)
        maxDuration->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Duration during which the notification will be shown (unless mouse buttons are clicked)", nullptr));
#endif // QT_CONFIG(tooltip)
        maxDuration->setSuffix(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "s", nullptr));
#if QT_CONFIG(tooltip)
        minDuration->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Minimum duration during which the notification will be shown (unless notification clicked)", nullptr));
#endif // QT_CONFIG(tooltip)
        minDuration->setSuffix(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "s", nullptr));
        label_3->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Maximum Number of Notifications:", nullptr));
#if QT_CONFIG(tooltip)
        maxNotifications->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Maximum number of notifications that will be simultaneously present on the screen", nullptr));
#endif // QT_CONFIG(tooltip)
        label_width->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Notification width:", nullptr));
#if QT_CONFIG(tooltip)
        notificationWidth->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Width of the notification in pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        hideNonIntrusiveNotificationsWhenWindowDeactivated->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Any open non-intrusive notifications will disappear when another window is activated", nullptr));
#endif // QT_CONFIG(tooltip)
        hideNonIntrusiveNotificationsWhenWindowDeactivated->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Hide when other window is activated", nullptr));
#if QT_CONFIG(tooltip)
        preventNonIntrusiveNotificationsWhenWindowNotActive->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Prevent non-intrusive notifications from appearing when the FreeCAD Window is not the active window", nullptr));
#endif // QT_CONFIG(tooltip)
        preventNonIntrusiveNotificationsWhenWindowNotActive->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Do not show when inactive", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Message List", nullptr));
#if QT_CONFIG(tooltip)
        maxWidgetMessages->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Limit the number of messages that will be kept in the list. If 0 there is no limit.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Maximum Messages (0 = no limit):", nullptr));
#if QT_CONFIG(tooltip)
        autoRemoveUserNotifications->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Removes the user notifications from the message list after the non-intrusive maximum duration has lapsed.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoRemoveUserNotifications->setText(QCoreApplication::translate("Gui::Dialog::DlgSettingsNotificationArea", "Auto-remove User Notifications", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsNotificationArea: public Ui_DlgSettingsNotificationArea {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSNOTIFICATIONAREA_H
