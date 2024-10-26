/********************************************************************************
** Form generated from reading UI file 'Array3D.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARRAY3D_H
#define UI_ARRAY3D_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

namespace MatGui {

class Ui_Array3D
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTableView *table3D;
    QTableView *table2D;
    QDialogButtonBox *standardButtons;

    void setupUi(QDialog *MatGui__Array3D)
    {
        if (MatGui__Array3D->objectName().isEmpty())
            MatGui__Array3D->setObjectName(QString::fromUtf8("MatGui__Array3D"));
        MatGui__Array3D->resize(915, 709);
        verticalLayout = new QVBoxLayout(MatGui__Array3D);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(MatGui__Array3D);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        table3D = new QTableView(splitter);
        table3D->setObjectName(QString::fromUtf8("table3D"));
        splitter->addWidget(table3D);
        table2D = new QTableView(splitter);
        table2D->setObjectName(QString::fromUtf8("table2D"));
        splitter->addWidget(table2D);

        verticalLayout->addWidget(splitter);

        standardButtons = new QDialogButtonBox(MatGui__Array3D);
        standardButtons->setObjectName(QString::fromUtf8("standardButtons"));
        standardButtons->setOrientation(Qt::Horizontal);
        standardButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(standardButtons);


        retranslateUi(MatGui__Array3D);
        QObject::connect(standardButtons, SIGNAL(accepted()), MatGui__Array3D, SLOT(accept()));
        QObject::connect(standardButtons, SIGNAL(rejected()), MatGui__Array3D, SLOT(reject()));

        QMetaObject::connectSlotsByName(MatGui__Array3D);
    } // setupUi

    void retranslateUi(QDialog *MatGui__Array3D)
    {
        MatGui__Array3D->setWindowTitle(QCoreApplication::translate("MatGui::Array3D", "3D Array", nullptr));
    } // retranslateUi

};

} // namespace MatGui

namespace MatGui {
namespace Ui {
    class Array3D: public Ui_Array3D {};
} // namespace Ui
} // namespace MatGui

#endif // UI_ARRAY3D_H
