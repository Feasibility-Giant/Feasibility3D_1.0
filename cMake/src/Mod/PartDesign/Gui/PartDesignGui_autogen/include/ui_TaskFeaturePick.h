/********************************************************************************
** Form generated from reading UI file 'TaskFeaturePick.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFEATUREPICK_H
#define UI_TASKFEATUREPICK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace PartDesignGui {

class Ui_TaskFeaturePick
{
public:
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget;
    QCheckBox *checkUsed;
    QGroupBox *checkExternal;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkOtherBody;
    QCheckBox *checkOtherPart;
    QFrame *line;
    QRadioButton *radioIndependent;
    QRadioButton *radioDependent;
    QRadioButton *radioXRef;

    void setupUi(QWidget *PartDesignGui__TaskFeaturePick)
    {
        if (PartDesignGui__TaskFeaturePick->objectName().isEmpty())
            PartDesignGui__TaskFeaturePick->setObjectName(QString::fromUtf8("PartDesignGui__TaskFeaturePick"));
        PartDesignGui__TaskFeaturePick->resize(364, 487);
        PartDesignGui__TaskFeaturePick->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_4 = new QVBoxLayout(PartDesignGui__TaskFeaturePick);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listWidget = new QListWidget(PartDesignGui__TaskFeaturePick);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_4->addWidget(listWidget);

        checkUsed = new QCheckBox(PartDesignGui__TaskFeaturePick);
        checkUsed->setObjectName(QString::fromUtf8("checkUsed"));

        verticalLayout_4->addWidget(checkUsed);

        checkExternal = new QGroupBox(PartDesignGui__TaskFeaturePick);
        checkExternal->setObjectName(QString::fromUtf8("checkExternal"));
        checkExternal->setCheckable(false);
        checkExternal->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(checkExternal);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkOtherBody = new QCheckBox(checkExternal);
        checkOtherBody->setObjectName(QString::fromUtf8("checkOtherBody"));

        verticalLayout_2->addWidget(checkOtherBody);

        checkOtherPart = new QCheckBox(checkExternal);
        checkOtherPart->setObjectName(QString::fromUtf8("checkOtherPart"));

        verticalLayout_2->addWidget(checkOtherPart);

        line = new QFrame(checkExternal);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        radioIndependent = new QRadioButton(checkExternal);
        radioIndependent->setObjectName(QString::fromUtf8("radioIndependent"));
        radioIndependent->setEnabled(false);
        radioIndependent->setChecked(true);

        verticalLayout_2->addWidget(radioIndependent);

        radioDependent = new QRadioButton(checkExternal);
        radioDependent->setObjectName(QString::fromUtf8("radioDependent"));
        radioDependent->setEnabled(false);

        verticalLayout_2->addWidget(radioDependent);

        radioXRef = new QRadioButton(checkExternal);
        radioXRef->setObjectName(QString::fromUtf8("radioXRef"));
        radioXRef->setEnabled(false);

        verticalLayout_2->addWidget(radioXRef);


        verticalLayout_4->addWidget(checkExternal);


        retranslateUi(PartDesignGui__TaskFeaturePick);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskFeaturePick);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskFeaturePick)
    {
        checkUsed->setText(QCoreApplication::translate("PartDesignGui::TaskFeaturePick", "Allow used features", nullptr));
        checkExternal->setTitle(QCoreApplication::translate("PartDesignGui::TaskFeaturePick", "Allow external features", nullptr));
        checkOtherBody->setText(QCoreApplication::translate("PartDesignGui::TaskFeaturePick", "From other bodies of the same part", nullptr));
        checkOtherPart->setText(QCoreApplication::translate("PartDesignGui::TaskFeaturePick", "From different parts or free features", nullptr));
        radioIndependent->setText(QCoreApplication::translate("PartDesignGui::TaskFeaturePick", "Make independent copy (recommended)", nullptr));
        radioDependent->setText(QCoreApplication::translate("PartDesignGui::TaskFeaturePick", "Make dependent copy", nullptr));
        radioXRef->setText(QCoreApplication::translate("PartDesignGui::TaskFeaturePick", "Create cross-reference", nullptr));
        (void)PartDesignGui__TaskFeaturePick;
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskFeaturePick: public Ui_TaskFeaturePick {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKFEATUREPICK_H
