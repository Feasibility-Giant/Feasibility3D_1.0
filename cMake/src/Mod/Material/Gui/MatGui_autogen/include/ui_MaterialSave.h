/********************************************************************************
** Form generated from reading UI file 'MaterialSave.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALSAVE_H
#define UI_MATERIALSAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

namespace MatGui {

class Ui_MaterialSave
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboLibrary;
    QTreeView *treeMaterials;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonNewFolder;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *editFilename;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkDerived;
    QDialogButtonBox *standardButtons;

    void setupUi(QDialog *MatGui__MaterialSave)
    {
        if (MatGui__MaterialSave->objectName().isEmpty())
            MatGui__MaterialSave->setObjectName(QString::fromUtf8("MatGui__MaterialSave"));
        MatGui__MaterialSave->resize(654, 708);
        verticalLayout = new QVBoxLayout(MatGui__MaterialSave);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(MatGui__MaterialSave);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboLibrary = new QComboBox(MatGui__MaterialSave);
        comboLibrary->setObjectName(QString::fromUtf8("comboLibrary"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboLibrary->sizePolicy().hasHeightForWidth());
        comboLibrary->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboLibrary);


        verticalLayout->addLayout(horizontalLayout);

        treeMaterials = new QTreeView(MatGui__MaterialSave);
        treeMaterials->setObjectName(QString::fromUtf8("treeMaterials"));

        verticalLayout->addWidget(treeMaterials);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonNewFolder = new QPushButton(MatGui__MaterialSave);
        buttonNewFolder->setObjectName(QString::fromUtf8("buttonNewFolder"));

        horizontalLayout_3->addWidget(buttonNewFolder);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(MatGui__MaterialSave);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        editFilename = new QLineEdit(MatGui__MaterialSave);
        editFilename->setObjectName(QString::fromUtf8("editFilename"));
        sizePolicy.setHeightForWidth(editFilename->sizePolicy().hasHeightForWidth());
        editFilename->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(editFilename);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        checkDerived = new QCheckBox(MatGui__MaterialSave);
        checkDerived->setObjectName(QString::fromUtf8("checkDerived"));

        horizontalLayout_4->addWidget(checkDerived);


        verticalLayout->addLayout(horizontalLayout_4);

        standardButtons = new QDialogButtonBox(MatGui__MaterialSave);
        standardButtons->setObjectName(QString::fromUtf8("standardButtons"));
        standardButtons->setOrientation(Qt::Horizontal);
        standardButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(standardButtons);


        retranslateUi(MatGui__MaterialSave);
        QObject::connect(standardButtons, SIGNAL(accepted()), MatGui__MaterialSave, SLOT(accept()));
        QObject::connect(standardButtons, SIGNAL(rejected()), MatGui__MaterialSave, SLOT(reject()));

        QMetaObject::connectSlotsByName(MatGui__MaterialSave);
    } // setupUi

    void retranslateUi(QDialog *MatGui__MaterialSave)
    {
        MatGui__MaterialSave->setWindowTitle(QCoreApplication::translate("MatGui::MaterialSave", "Save Material", nullptr));
        label->setText(QCoreApplication::translate("MatGui::MaterialSave", "Library:", nullptr));
        buttonNewFolder->setText(QCoreApplication::translate("MatGui::MaterialSave", "New Folder", nullptr));
        label_2->setText(QCoreApplication::translate("MatGui::MaterialSave", "Filename:", nullptr));
        checkDerived->setText(QCoreApplication::translate("MatGui::MaterialSave", "Save as Inherited", nullptr));
    } // retranslateUi

};

} // namespace MatGui

namespace MatGui {
namespace Ui {
    class MaterialSave: public Ui_MaterialSave {};
} // namespace Ui
} // namespace MatGui

#endif // UI_MATERIALSAVE_H
