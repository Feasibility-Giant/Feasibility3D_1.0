/********************************************************************************
** Form generated from reading UI file 'DlgPointsRead.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPOINTSREAD_H
#define UI_DLGPOINTSREAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

namespace PointsGui {

class Ui_DlgPointsRead
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QComboBox *comboBoxTrmplate;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout1;
    QRadioButton *radioButtonIgnore;
    QRadioButton *radioButtonNbrOfPoints;
    QGridLayout *gridLayout1;
    QLabel *textLabel3;
    QLineEdit *lineEditClusterStart;
    QLabel *textLabel4;
    QLineEdit *lineEditComments;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QGridLayout *gridLayout3;
    QLabel *textLabel6;
    QComboBox *comboBoxSeparator;
    QLabel *textLabel7;
    QComboBox *comboBoxPointsFormat;
    QLabel *textLabel8;
    QComboBox *comboBoxNextBlock1;
    QLabel *textLabel8_2;
    QComboBox *comboBoxNextBlock2;
    QLabel *textLabel8_2_2;
    QComboBox *comboBoxNextBlock3;
    QGroupBox *groupBox3;
    QVBoxLayout *vboxLayout1;
    QLineEdit *lineEditFileName;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel5;
    QLineEdit *lineEditPreviewLines;
    QTextEdit *textEditPreview;

    void setupUi(QDialog *PointsGui__DlgPointsRead)
    {
        if (PointsGui__DlgPointsRead->objectName().isEmpty())
            PointsGui__DlgPointsRead->setObjectName(QString::fromUtf8("PointsGui__DlgPointsRead"));
        PointsGui__DlgPointsRead->resize(394, 631);
        vboxLayout = new QVBoxLayout(PointsGui__DlgPointsRead);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(PointsGui__DlgPointsRead);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        comboBoxTrmplate = new QComboBox(PointsGui__DlgPointsRead);
        comboBoxTrmplate->setObjectName(QString::fromUtf8("comboBoxTrmplate"));

        hboxLayout->addWidget(comboBoxTrmplate);


        vboxLayout->addLayout(hboxLayout);

        groupBox1 = new QGroupBox(PointsGui__DlgPointsRead);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout = new QGridLayout(groupBox1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(groupBox1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout1 = new QHBoxLayout(groupBox);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(6, 6, 6, 6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        radioButtonIgnore = new QRadioButton(groupBox);
        radioButtonIgnore->setObjectName(QString::fromUtf8("radioButtonIgnore"));
        radioButtonIgnore->setAutoExclusive(true);

        hboxLayout1->addWidget(radioButtonIgnore);

        radioButtonNbrOfPoints = new QRadioButton(groupBox);
        radioButtonNbrOfPoints->setObjectName(QString::fromUtf8("radioButtonNbrOfPoints"));
        radioButtonNbrOfPoints->setAutoExclusive(true);

        hboxLayout1->addWidget(radioButtonNbrOfPoints);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel3 = new QLabel(groupBox1);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout1->addWidget(textLabel3, 0, 0, 1, 1);

        lineEditClusterStart = new QLineEdit(groupBox1);
        lineEditClusterStart->setObjectName(QString::fromUtf8("lineEditClusterStart"));

        gridLayout1->addWidget(lineEditClusterStart, 0, 1, 1, 1);

        textLabel4 = new QLabel(groupBox1);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout1->addWidget(textLabel4, 1, 0, 1, 1);

        lineEditComments = new QLineEdit(groupBox1);
        lineEditComments->setObjectName(QString::fromUtf8("lineEditComments"));

        gridLayout1->addWidget(lineEditComments, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox1);

        groupBox2 = new QGroupBox(PointsGui__DlgPointsRead);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(6, 6, 6, 6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        textLabel6 = new QLabel(groupBox2);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        gridLayout3->addWidget(textLabel6, 0, 0, 1, 1);

        comboBoxSeparator = new QComboBox(groupBox2);
        comboBoxSeparator->addItem(QString::fromUtf8(","));
        comboBoxSeparator->addItem(QString::fromUtf8(";"));
        comboBoxSeparator->addItem(QString());
        comboBoxSeparator->addItem(QString());
        comboBoxSeparator->setObjectName(QString::fromUtf8("comboBoxSeparator"));
        comboBoxSeparator->setEditable(true);

        gridLayout3->addWidget(comboBoxSeparator, 0, 1, 1, 1);

        textLabel7 = new QLabel(groupBox2);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

        gridLayout3->addWidget(textLabel7, 1, 0, 1, 1);

        comboBoxPointsFormat = new QComboBox(groupBox2);
        comboBoxPointsFormat->addItem(QString());
        comboBoxPointsFormat->addItem(QString());
        comboBoxPointsFormat->setObjectName(QString::fromUtf8("comboBoxPointsFormat"));

        gridLayout3->addWidget(comboBoxPointsFormat, 1, 1, 1, 1);

        textLabel8 = new QLabel(groupBox2);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));

        gridLayout3->addWidget(textLabel8, 2, 0, 1, 1);

        comboBoxNextBlock1 = new QComboBox(groupBox2);
        comboBoxNextBlock1->addItem(QString());
        comboBoxNextBlock1->addItem(QString());
        comboBoxNextBlock1->addItem(QString());
        comboBoxNextBlock1->addItem(QString());
        comboBoxNextBlock1->addItem(QString());
        comboBoxNextBlock1->setObjectName(QString::fromUtf8("comboBoxNextBlock1"));

        gridLayout3->addWidget(comboBoxNextBlock1, 2, 1, 1, 1);

        textLabel8_2 = new QLabel(groupBox2);
        textLabel8_2->setObjectName(QString::fromUtf8("textLabel8_2"));

        gridLayout3->addWidget(textLabel8_2, 3, 0, 1, 1);

        comboBoxNextBlock2 = new QComboBox(groupBox2);
        comboBoxNextBlock2->addItem(QString());
        comboBoxNextBlock2->addItem(QString());
        comboBoxNextBlock2->addItem(QString());
        comboBoxNextBlock2->addItem(QString());
        comboBoxNextBlock2->addItem(QString());
        comboBoxNextBlock2->setObjectName(QString::fromUtf8("comboBoxNextBlock2"));

        gridLayout3->addWidget(comboBoxNextBlock2, 3, 1, 1, 1);

        textLabel8_2_2 = new QLabel(groupBox2);
        textLabel8_2_2->setObjectName(QString::fromUtf8("textLabel8_2_2"));

        gridLayout3->addWidget(textLabel8_2_2, 4, 0, 1, 1);

        comboBoxNextBlock3 = new QComboBox(groupBox2);
        comboBoxNextBlock3->addItem(QString());
        comboBoxNextBlock3->addItem(QString());
        comboBoxNextBlock3->addItem(QString());
        comboBoxNextBlock3->addItem(QString());
        comboBoxNextBlock3->addItem(QString());
        comboBoxNextBlock3->setObjectName(QString::fromUtf8("comboBoxNextBlock3"));

        gridLayout3->addWidget(comboBoxNextBlock3, 4, 1, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox2);

        groupBox3 = new QGroupBox(PointsGui__DlgPointsRead);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        vboxLayout1 = new QVBoxLayout(groupBox3);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(6, 6, 6, 6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        lineEditFileName = new QLineEdit(groupBox3);
        lineEditFileName->setObjectName(QString::fromUtf8("lineEditFileName"));
        lineEditFileName->setReadOnly(true);

        vboxLayout1->addWidget(lineEditFileName);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel5 = new QLabel(groupBox3);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        hboxLayout2->addWidget(textLabel5);

        lineEditPreviewLines = new QLineEdit(groupBox3);
        lineEditPreviewLines->setObjectName(QString::fromUtf8("lineEditPreviewLines"));
        lineEditPreviewLines->setText(QString::fromUtf8("100"));

        hboxLayout2->addWidget(lineEditPreviewLines);


        vboxLayout1->addLayout(hboxLayout2);

        textEditPreview = new QTextEdit(groupBox3);
        textEditPreview->setObjectName(QString::fromUtf8("textEditPreview"));

        vboxLayout1->addWidget(textEditPreview);


        vboxLayout->addWidget(groupBox3);

        QWidget::setTabOrder(comboBoxTrmplate, radioButtonIgnore);
        QWidget::setTabOrder(radioButtonIgnore, radioButtonNbrOfPoints);
        QWidget::setTabOrder(radioButtonNbrOfPoints, lineEditClusterStart);
        QWidget::setTabOrder(lineEditClusterStart, lineEditComments);
        QWidget::setTabOrder(lineEditComments, comboBoxSeparator);
        QWidget::setTabOrder(comboBoxSeparator, comboBoxPointsFormat);
        QWidget::setTabOrder(comboBoxPointsFormat, comboBoxNextBlock1);
        QWidget::setTabOrder(comboBoxNextBlock1, comboBoxNextBlock2);
        QWidget::setTabOrder(comboBoxNextBlock2, comboBoxNextBlock3);
        QWidget::setTabOrder(comboBoxNextBlock3, lineEditFileName);
        QWidget::setTabOrder(lineEditFileName, lineEditPreviewLines);
        QWidget::setTabOrder(lineEditPreviewLines, textEditPreview);

        retranslateUi(PointsGui__DlgPointsRead);

        QMetaObject::connectSlotsByName(PointsGui__DlgPointsRead);
    } // setupUi

    void retranslateUi(QDialog *PointsGui__DlgPointsRead)
    {
        PointsGui__DlgPointsRead->setWindowTitle(QCoreApplication::translate("PointsGui::DlgPointsRead", "ASCII points import", nullptr));
        textLabel1->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Template:", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("PointsGui::DlgPointsRead", "Special lines", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PointsGui::DlgPointsRead", "First line:", nullptr));
        radioButtonIgnore->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Ignore", nullptr));
        radioButtonNbrOfPoints->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Number of points", nullptr));
        textLabel3->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Cluster by lines starting with:", nullptr));
        textLabel4->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Ignore lines starting with:", nullptr));
        groupBox2->setTitle(QCoreApplication::translate("PointsGui::DlgPointsRead", "Point format", nullptr));
        textLabel6->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Number separator:", nullptr));
        comboBoxSeparator->setItemText(2, QCoreApplication::translate("PointsGui::DlgPointsRead", "\\t", nullptr));
        comboBoxSeparator->setItemText(3, QCoreApplication::translate("PointsGui::DlgPointsRead", "\\w", nullptr));

        textLabel7->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Points format:", nullptr));
        comboBoxPointsFormat->setItemText(0, QCoreApplication::translate("PointsGui::DlgPointsRead", "X,Y,Z", nullptr));
        comboBoxPointsFormat->setItemText(1, QCoreApplication::translate("PointsGui::DlgPointsRead", "X,Y", nullptr));

        textLabel8->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Next block:", nullptr));
        comboBoxNextBlock1->setItemText(0, QCoreApplication::translate("PointsGui::DlgPointsRead", "none", nullptr));
        comboBoxNextBlock1->setItemText(1, QCoreApplication::translate("PointsGui::DlgPointsRead", "I,J,K (normal vector)", nullptr));
        comboBoxNextBlock1->setItemText(2, QCoreApplication::translate("PointsGui::DlgPointsRead", "I,K (normal vector 2D)", nullptr));
        comboBoxNextBlock1->setItemText(3, QCoreApplication::translate("PointsGui::DlgPointsRead", "R,G,B (color)", nullptr));
        comboBoxNextBlock1->setItemText(4, QCoreApplication::translate("PointsGui::DlgPointsRead", "I (Gray value)", nullptr));

        textLabel8_2->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Next block:", nullptr));
        comboBoxNextBlock2->setItemText(0, QCoreApplication::translate("PointsGui::DlgPointsRead", "none", nullptr));
        comboBoxNextBlock2->setItemText(1, QCoreApplication::translate("PointsGui::DlgPointsRead", "I,J,K (normal vector)", nullptr));
        comboBoxNextBlock2->setItemText(2, QCoreApplication::translate("PointsGui::DlgPointsRead", "I,K (normal vector 2D)", nullptr));
        comboBoxNextBlock2->setItemText(3, QCoreApplication::translate("PointsGui::DlgPointsRead", "R,G,B (color)", nullptr));
        comboBoxNextBlock2->setItemText(4, QCoreApplication::translate("PointsGui::DlgPointsRead", "I (Gray value)", nullptr));

        textLabel8_2_2->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Next block:", nullptr));
        comboBoxNextBlock3->setItemText(0, QCoreApplication::translate("PointsGui::DlgPointsRead", "none", nullptr));
        comboBoxNextBlock3->setItemText(1, QCoreApplication::translate("PointsGui::DlgPointsRead", "I,J,K (normal vector)", nullptr));
        comboBoxNextBlock3->setItemText(2, QCoreApplication::translate("PointsGui::DlgPointsRead", "I,K (normal vector 2D)", nullptr));
        comboBoxNextBlock3->setItemText(3, QCoreApplication::translate("PointsGui::DlgPointsRead", "R,G,B (color)", nullptr));
        comboBoxNextBlock3->setItemText(4, QCoreApplication::translate("PointsGui::DlgPointsRead", "I (Gray value)", nullptr));

        groupBox3->setTitle(QCoreApplication::translate("PointsGui::DlgPointsRead", "Preview", nullptr));
        textLabel5->setText(QCoreApplication::translate("PointsGui::DlgPointsRead", "Number of previewed lines:", nullptr));
    } // retranslateUi

};

} // namespace PointsGui

namespace PointsGui {
namespace Ui {
    class DlgPointsRead: public Ui_DlgPointsRead {};
} // namespace Ui
} // namespace PointsGui

#endif // UI_DLGPOINTSREAD_H
