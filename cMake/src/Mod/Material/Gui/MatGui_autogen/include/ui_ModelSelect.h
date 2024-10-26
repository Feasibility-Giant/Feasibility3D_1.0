/********************************************************************************
** Form generated from reading UI file 'ModelSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELSELECT_H
#define UI_MODELSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace MatGui {

class Ui_ModelSelect
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeView *treeModels;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelURL;
    QLabel *label;
    QLabel *labelDOI;
    QTextEdit *editDescription;
    QLineEdit *editName;
    QLabel *labelName;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *editDOI;
    QPushButton *buttonDOI;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editURL;
    QPushButton *buttonURL;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonFavorite;
    QWidget *tabProperties;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableProperties;
    QDialogButtonBox *standardButtons;

    void setupUi(QDialog *MatGui__ModelSelect)
    {
        if (MatGui__ModelSelect->objectName().isEmpty())
            MatGui__ModelSelect->setObjectName(QString::fromUtf8("MatGui__ModelSelect"));
        MatGui__ModelSelect->resize(705, 489);
        verticalLayout = new QVBoxLayout(MatGui__ModelSelect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(MatGui__ModelSelect);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeModels = new QTreeView(splitter);
        treeModels->setObjectName(QString::fromUtf8("treeModels"));
        splitter->addWidget(treeModels);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabGeneral->sizePolicy().hasHeightForWidth());
        tabGeneral->setSizePolicy(sizePolicy);
        tabGeneral->setMaximumSize(QSize(365, 409));
        verticalLayout_2 = new QVBoxLayout(tabGeneral);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelURL = new QLabel(tabGeneral);
        labelURL->setObjectName(QString::fromUtf8("labelURL"));

        gridLayout->addWidget(labelURL, 1, 0, 1, 1);

        label = new QLabel(tabGeneral);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        labelDOI = new QLabel(tabGeneral);
        labelDOI->setObjectName(QString::fromUtf8("labelDOI"));

        gridLayout->addWidget(labelDOI, 2, 0, 1, 1);

        editDescription = new QTextEdit(tabGeneral);
        editDescription->setObjectName(QString::fromUtf8("editDescription"));
        editDescription->setReadOnly(true);

        gridLayout->addWidget(editDescription, 3, 1, 1, 1);

        editName = new QLineEdit(tabGeneral);
        editName->setObjectName(QString::fromUtf8("editName"));
        editName->setEnabled(true);
        editName->setReadOnly(true);

        gridLayout->addWidget(editName, 0, 1, 1, 1);

        labelName = new QLabel(tabGeneral);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        editDOI = new QLineEdit(tabGeneral);
        editDOI->setObjectName(QString::fromUtf8("editDOI"));
        editDOI->setReadOnly(true);

        horizontalLayout_3->addWidget(editDOI);

        buttonDOI = new QPushButton(tabGeneral);
        buttonDOI->setObjectName(QString::fromUtf8("buttonDOI"));
        buttonDOI->setMaximumSize(QSize(22, 22));

        horizontalLayout_3->addWidget(buttonDOI);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editURL = new QLineEdit(tabGeneral);
        editURL->setObjectName(QString::fromUtf8("editURL"));
        editURL->setReadOnly(true);

        horizontalLayout_2->addWidget(editURL);

        buttonURL = new QPushButton(tabGeneral);
        buttonURL->setObjectName(QString::fromUtf8("buttonURL"));
        buttonURL->setMaximumSize(QSize(22, 22));

        horizontalLayout_2->addWidget(buttonURL);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonFavorite = new QPushButton(tabGeneral);
        buttonFavorite->setObjectName(QString::fromUtf8("buttonFavorite"));
        buttonFavorite->setText(QString::fromUtf8("*"));

        horizontalLayout->addWidget(buttonFavorite);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tabGeneral, QString());
        tabProperties = new QWidget();
        tabProperties->setObjectName(QString::fromUtf8("tabProperties"));
        verticalLayout_3 = new QVBoxLayout(tabProperties);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableProperties = new QTableView(tabProperties);
        tableProperties->setObjectName(QString::fromUtf8("tableProperties"));

        verticalLayout_3->addWidget(tableProperties);

        tabWidget->addTab(tabProperties, QString());
        splitter->addWidget(tabWidget);

        verticalLayout->addWidget(splitter);

        standardButtons = new QDialogButtonBox(MatGui__ModelSelect);
        standardButtons->setObjectName(QString::fromUtf8("standardButtons"));
        standardButtons->setOrientation(Qt::Horizontal);
        standardButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(standardButtons);


        retranslateUi(MatGui__ModelSelect);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MatGui__ModelSelect);
    } // setupUi

    void retranslateUi(QDialog *MatGui__ModelSelect)
    {
        MatGui__ModelSelect->setWindowTitle(QCoreApplication::translate("MatGui::ModelSelect", "Material Models", nullptr));
        labelURL->setText(QCoreApplication::translate("MatGui::ModelSelect", "URL", nullptr));
        label->setText(QCoreApplication::translate("MatGui::ModelSelect", "Description", nullptr));
        labelDOI->setText(QCoreApplication::translate("MatGui::ModelSelect", "DOI", nullptr));
        labelName->setText(QCoreApplication::translate("MatGui::ModelSelect", "Name", nullptr));
        buttonDOI->setText(QString());
        buttonURL->setText(QString());
#if QT_CONFIG(tooltip)
        buttonFavorite->setToolTip(QCoreApplication::translate("MatGui::ModelSelect", "Add to favorites", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QCoreApplication::translate("MatGui::ModelSelect", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabProperties), QCoreApplication::translate("MatGui::ModelSelect", "Properties", nullptr));
    } // retranslateUi

};

} // namespace MatGui

namespace MatGui {
namespace Ui {
    class ModelSelect: public Ui_ModelSelect {};
} // namespace Ui
} // namespace MatGui

#endif // UI_MODELSELECT_H
