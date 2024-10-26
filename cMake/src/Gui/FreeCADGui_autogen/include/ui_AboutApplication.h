/********************************************************************************
** Form generated from reading UI file 'AboutApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTAPPLICATION_H
#define UI_ABOUTAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_AboutApplication
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_about;
    QVBoxLayout *verticalLayout;
    QLabel *labelSplashPicture;
    QSpacerItem *spacer;
    QVBoxLayout *boxInfo;
    QHBoxLayout *boxAuthor;
    QSpacerItem *spacerItem;
    Gui::UrlLabel *labelAuthor;
    QSpacerItem *spacerItem1;
    QGridLayout *boxVersion;
    QLabel *labelVersion;
    QLabel *labelBuildVersion;
    QLabel *labelRevision;
    QLabel *labelBuildRevision;
    QLabel *labelDate;
    QLabel *labelBuildDate;
    QLabel *labelOS;
    QLabel *labelBuildOS;
    QLabel *labelPlatform;
    QLabel *labelBuildPlatform;
    QLabel *labelBranch;
    QLabel *labelBuildBranch;
    QLabel *labelHash;
    Gui::UrlLabel *labelBuildHash;
    QHBoxLayout *horizontalLayout;
    QPushButton *copyButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *spacer_4;
    QWidget *tab_license;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowserLicense;
    QHBoxLayout *boxOK;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;

    void setupUi(QDialog *Gui__Dialog__AboutApplication)
    {
        if (Gui__Dialog__AboutApplication->objectName().isEmpty())
            Gui__Dialog__AboutApplication->setObjectName(QString::fromUtf8("Gui__Dialog__AboutApplication"));
        Gui__Dialog__AboutApplication->resize(470, 617);
        Gui__Dialog__AboutApplication->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__AboutApplication);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(Gui__Dialog__AboutApplication);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_about = new QWidget();
        tab_about->setObjectName(QString::fromUtf8("tab_about"));
        verticalLayout = new QVBoxLayout(tab_about);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelSplashPicture = new QLabel(tab_about);
        labelSplashPicture->setObjectName(QString::fromUtf8("labelSplashPicture"));
        labelSplashPicture->setPixmap(QPixmap(QString::fromUtf8(":/icons/freecadsplash.png")));
        labelSplashPicture->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelSplashPicture);

        spacer = new QSpacerItem(430, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer);

        boxInfo = new QVBoxLayout();
#ifndef Q_OS_MAC
        boxInfo->setSpacing(6);
#endif
        boxInfo->setContentsMargins(0, 0, 0, 0);
        boxInfo->setObjectName(QString::fromUtf8("boxInfo"));
        boxAuthor = new QHBoxLayout();
#ifndef Q_OS_MAC
        boxAuthor->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        boxAuthor->setContentsMargins(0, 0, 0, 0);
#endif
        boxAuthor->setObjectName(QString::fromUtf8("boxAuthor"));
        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        boxAuthor->addItem(spacerItem);

        labelAuthor = new Gui::UrlLabel(tab_about);
        labelAuthor->setObjectName(QString::fromUtf8("labelAuthor"));
        labelAuthor->setText(QString::fromUtf8("Unknown Application (c) Unknown Author"));
        labelAuthor->setTextFormat(Qt::PlainText);

        boxAuthor->addWidget(labelAuthor);

        spacerItem1 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        boxAuthor->addItem(spacerItem1);


        boxInfo->addLayout(boxAuthor);

        boxVersion = new QGridLayout();
#ifndef Q_OS_MAC
        boxVersion->setSpacing(6);
#endif
        boxVersion->setContentsMargins(0, 0, 0, 0);
        boxVersion->setObjectName(QString::fromUtf8("boxVersion"));
        labelVersion = new QLabel(tab_about);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));

        boxVersion->addWidget(labelVersion, 0, 0, 1, 1);

        labelBuildVersion = new QLabel(tab_about);
        labelBuildVersion->setObjectName(QString::fromUtf8("labelBuildVersion"));
        labelBuildVersion->setText(QString::fromUtf8("<html><head/><body><p><span style=\"font-weight:600;\">Unknown</span></p></body></html>"));

        boxVersion->addWidget(labelBuildVersion, 0, 1, 1, 1);

        labelRevision = new QLabel(tab_about);
        labelRevision->setObjectName(QString::fromUtf8("labelRevision"));

        boxVersion->addWidget(labelRevision, 1, 0, 1, 1);

        labelBuildRevision = new QLabel(tab_about);
        labelBuildRevision->setObjectName(QString::fromUtf8("labelBuildRevision"));
        labelBuildRevision->setText(QString::fromUtf8("<html><head/><body><p><span style=\"font-weight:600;\">Unknown</span></p></body></html>"));

        boxVersion->addWidget(labelBuildRevision, 1, 1, 1, 1);

        labelDate = new QLabel(tab_about);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));

        boxVersion->addWidget(labelDate, 2, 0, 1, 1);

        labelBuildDate = new QLabel(tab_about);
        labelBuildDate->setObjectName(QString::fromUtf8("labelBuildDate"));
        labelBuildDate->setText(QString::fromUtf8("<html><head/><body><p><span style=\" font-weight:600;\">Unknown</span></p></body></html>"));

        boxVersion->addWidget(labelBuildDate, 2, 1, 1, 1);

        labelOS = new QLabel(tab_about);
        labelOS->setObjectName(QString::fromUtf8("labelOS"));

        boxVersion->addWidget(labelOS, 3, 0, 1, 1);

        labelBuildOS = new QLabel(tab_about);
        labelBuildOS->setObjectName(QString::fromUtf8("labelBuildOS"));
        labelBuildOS->setText(QString::fromUtf8("<html><head/><body><p><span style=\"font-weight:600;\">Unknown</span></p></body></html>"));

        boxVersion->addWidget(labelBuildOS, 3, 1, 1, 1);

        labelPlatform = new QLabel(tab_about);
        labelPlatform->setObjectName(QString::fromUtf8("labelPlatform"));

        boxVersion->addWidget(labelPlatform, 4, 0, 1, 1);

        labelBuildPlatform = new QLabel(tab_about);
        labelBuildPlatform->setObjectName(QString::fromUtf8("labelBuildPlatform"));
        labelBuildPlatform->setText(QString::fromUtf8("<html><head/><body><p><span style=\"font-weight:600;\">Unknown</span></p></body></html>"));

        boxVersion->addWidget(labelBuildPlatform, 4, 1, 1, 1);

        labelBranch = new QLabel(tab_about);
        labelBranch->setObjectName(QString::fromUtf8("labelBranch"));
        labelBranch->setText(QString::fromUtf8("Branch"));

        boxVersion->addWidget(labelBranch, 5, 0, 1, 1);

        labelBuildBranch = new QLabel(tab_about);
        labelBuildBranch->setObjectName(QString::fromUtf8("labelBuildBranch"));
        labelBuildBranch->setText(QString::fromUtf8("<html><head/><body><p><span style=\"font-weight:600;\">Unknown</span></p></body></html>"));

        boxVersion->addWidget(labelBuildBranch, 5, 1, 1, 1);

        labelHash = new QLabel(tab_about);
        labelHash->setObjectName(QString::fromUtf8("labelHash"));
        labelHash->setText(QString::fromUtf8("Hash"));

        boxVersion->addWidget(labelHash, 6, 0, 1, 1);

        labelBuildHash = new Gui::UrlLabel(tab_about);
        labelBuildHash->setObjectName(QString::fromUtf8("labelBuildHash"));
        labelBuildHash->setText(QString::fromUtf8("<html><head/><body><p><span style=\"font-weight:600;\">Unknown</span></p></body></html>"));

        boxVersion->addWidget(labelBuildHash, 6, 1, 1, 1);


        boxInfo->addLayout(boxVersion);


        verticalLayout->addLayout(boxInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        copyButton = new QPushButton(tab_about);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));

        horizontalLayout->addWidget(copyButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        spacer_4 = new QSpacerItem(430, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer_4);

        tabWidget->addTab(tab_about, QString());
        tab_license = new QWidget();
        tab_license->setObjectName(QString::fromUtf8("tab_license"));
        verticalLayout_3 = new QVBoxLayout(tab_license);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textBrowserLicense = new QTextBrowser(tab_license);
        textBrowserLicense->setObjectName(QString::fromUtf8("textBrowserLicense"));
        textBrowserLicense->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Fira Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:600;\">FreeCAD license </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The FreeCAD application is licensed under the terms of the LGPL2+ license, as stated below.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Third-party libraries licenses</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The different libraries used in FreeCAD and their respective licenses are described on the<a href=\"https://www.freecad.org/wiki/Third_Party_Libraries\"><span style=\" text-decoration: underline; color:#0000ff;\">Third Party Libraries wiki page</span></a>.</p>\n"
"<hr />\n"
"<hr />\n"
"<hr />\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x;\"><a name=\"SEC1\"></a><span style=\" font-size:large; font-weight:600;\">G</span><span style=\" font-size:large; font-weight:600;\">NU LIBRARY GENERAL PUBLIC LICENSE</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Version 2, June 1991 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"SEC2\"></a><span style=\" font-size:large; font-weight:600;\">P</span><span style=\" font-size:large; font-weight:600;\">reamble</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The licenses for most software are designed to take away your freedom to share and change it. By contrast, the GNU General Public Licenses are intended to guarantee your freedom to share and change free software--to make sure the software is free for all its users. </p>\n"
"<p style=\" m"
                        "argin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This license, the Library General Public License, applies to some specially designated Free Software Foundation software, and to any other libraries whose authors decide to use it. You can use it for your libraries, too. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When we speak of free software, we are referring to freedom, not price. Our General Public Licenses are designed to make sure that you have the freedom to distribute copies of free software (and charge for this service if you wish), that you receive source code or can get it if you want it, that you can change the software or use pieces of it in new free programs; and that you know you can do these things. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">To protect your righ"
                        "ts, we need to make restrictions that forbid anyone to deny you these rights or to ask you to surrender the rights. These restrictions translate to certain responsibilities for you if you distribute copies of the library, or if you modify it. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For example, if you distribute copies of the library, whether gratis or for a fee, you must give the recipients all the rights that we gave you. You must make sure that they, too, receive or can get the source code. If you link a program with the library, you must provide complete object files to the recipients so that they can relink them with the library, after making changes to the library and recompiling it. And you must show them these terms so they know their rights. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Our method of protecting your rights has"
                        " two steps: (1) copyright the library, and (2) offer you this license which gives you legal permission to copy, distribute and/or modify the library. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Also, for each distributor's protection, we want to make certain that everyone understands that there is no warranty for this free library. If the library is modified by someone else and passed on, we want its recipients to know that what they have is not the original version, so that any problems introduced by others will not reflect on the original authors' reputations. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Finally, any free program is threatened constantly by software patents. We wish to avoid the danger that companies distributing free software will individually obtain patent licenses, thus in effect transforming the program into proprie"
                        "tary software. To prevent this, we have made it clear that any patent must be licensed for everyone's free use or not licensed at all. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Most GNU software, including some libraries, is covered by the ordinary GNU General Public License, which was designed for utility programs. This license, the GNU Library General Public License, applies to certain designated libraries. This license is quite different from the ordinary one; be sure to read it in full, and don't assume that anything in it is the same as in the ordinary license. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The reason we have a separate public license for some libraries is that they blur the distinction we usually make between modifying or adding to a program and simply using it. Linking a program with a library, without changing the"
                        " library, is in some sense simply using the library, and is analogous to running a utility program or application program. However, in a textual and legal sense, the linked executable is a combined work, a derivative of the original library, and the ordinary General Public License treats it as such. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Because of this blurred distinction, using the ordinary General Public License for libraries did not effectively promote software sharing, because most developers did not use the libraries. We concluded that weaker conditions might promote sharing better. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">However, unrestricted linking of non-free programs would deprive the users of those programs of all benefit from the free status of the libraries themselves. This Library General Public License is intende"
                        "d to permit developers of non-free programs to use free libraries, while preserving your freedom as a user of such programs to change the free libraries that are incorporated in them. (We have not seen how to achieve this as regards changes in header files, but we have achieved it as regards changes in the actual functions of the Library.) The hope is that this will lead to faster development of free libraries. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The precise terms and conditions for copying, distribution and modification follow. Pay close attention to the difference between a &quot;work based on the library&quot; and a &quot;work that uses the library&quot;. The former contains code derived from the library, while the latter only works together with the library. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Note that it is possible"
                        " for a library to be covered by the ordinary General Public License rather than by this special one. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"SEC3\"></a><span style=\" font-size:large; font-weight:600;\">T</span><span style=\" font-size:large; font-weight:600;\">ERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">0.</span> This License Agreement applies to any software library which contains a notice placed by the copyright holder or other authorized party saying it may be distributed under the terms of this Library General Public License (also called &quot;this License&quot;). Each licensee is addressed as &quot;you&quot;. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px;\">A &quot;library&quot; means a collection of software functions and/or data prepared so as to be conveniently linked with application programs (which use some of those functions and data) to form executables. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The &quot;Library&quot;, below, refers to any such software library or work which has been distributed under these terms. A &quot;work based on the Library&quot; means either the Library or any derivative work under copyright law: that is to say, a work containing the Library or a portion of it, either verbatim or with modifications and/or translated straightforwardly into another language. (Hereinafter, translation is included without limitation in the term &quot;modification&quot;.) </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;Source code&quot; for a work means "
                        "the preferred form of the work for making modifications to it. For a library, complete source code means all the source code for all modules it contains, plus any associated interface definition files, plus the scripts used to control compilation and installation of the library. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Activities other than copying, distribution and modification are not covered by this License; they are outside its scope. The act of running a program using the Library is not restricted, and output from such a program is covered only if its contents constitute a work based on the Library (independent of the use of the Library in a tool for writing it). Whether that is true depends on what the Library does and what the program that uses the Library does. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-we"
                        "ight:600;\">1.</span> You may copy and distribute verbatim copies of the Library's complete source code as you receive it, in any medium, provided that you conspicuously and appropriately publish on each copy an appropriate copyright notice and disclaimer of warranty; keep intact all the notices that refer to this License and to the absence of any warranty; and distribute a copy of this License along with the Library. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You may charge a fee for the physical act of transferring a copy, and you may at your option offer warranty protection in exchange for a fee. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">2.</span> You may modify your copy or copies of the Library or any portion of it, thus forming a work based on the Library, and copy and distribute such modificati"
                        "ons or work under the terms of Section 1 above, provided that you also meet all of these conditions: </p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">a)</span> The modified work must itself be a software library. </li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">b)</span> You must cause the files modified to carry prominent notices stating that you changed the files and the date of any change. </li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">c)</span> You must cause the whole of the work to be licensed at no charge to all third parties under the terms of this L"
                        "icense. </li>\n"
"<li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">d)</span> If a facility in the modified Library refers to a function or a table of data to be supplied by an application program that uses the facility, other than as an argument passed when the facility is invoked, then you must make a good faith effort to ensure that, in the event an application does not supply such function or table, the facility still operates, and performs whatever part of its purpose remains meaningful. </li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\">(For example, a function in a library to compute square roots has a purpose that is entirely well-defined independent of the application. Therefore, Subsection 2d requires that any application-supplied function or table used by this function must be optional: if the application doe"
                        "s not supply it, the square root function must still compute square roots.) </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These requirements apply to the modified work as a whole. If identifiable sections of that work are not derived from the Library, and can be reasonably considered independent and separate works in themselves, then this License, and its terms, do not apply to those sections when you distribute them as separate works. But when you distribute the same sections as part of a whole which is a work based on the Library, the distribution of the whole must be on the terms of this License, whose permissions for other licensees extend to the entire whole, and thus to each and every part regardless of who wrote it. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Thus, it is not the intent of this section to claim rights or contest your"
                        " rights to work written entirely by you; rather, the intent is to exercise the right to control the distribution of derivative or collective works based on the Library. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">In addition, mere aggregation of another work not based on the Library with the Library (or with a work based on the Library) on a volume of a storage or distribution medium does not bring the other work under the scope of this License. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">3.</span> You may opt to apply the terms of the ordinary GNU General Public License instead of this License to a given copy of the Library. To do this, you must alter all the notices that refer to this License, so that they refer to the ordinary GNU General Public License, version 2, instead of to this License. (If a ne"
                        "wer version than version 2 of the ordinary GNU General Public License has appeared, then you can specify that version instead if you wish.) Do not make any other change in these notices. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Once this change is made in a given copy, it is irreversible for that copy, so the ordinary GNU General Public License applies to all subsequent copies and derivative works made from that copy. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This option is useful when you wish to copy part of the code of the Library into a program that is not a library. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">4.</span> You may copy and distribute the Library (or a portion or derivative of it, under Section 2"
                        ") in object code or executable form under the terms of Sections 1 and 2 above provided that you accompany it with the complete corresponding machine-readable source code, which must be distributed under the terms of Sections 1 and 2 above on a medium customarily used for software interchange. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If distribution of object code is made by offering access to copy from a designated place, then offering equivalent access to copy the source code from the same place satisfies the requirement to distribute the source code, even though third parties are not compelled to copy the source along with the object code. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">5.</span> A program that contains no derivative of any portion of the Library, but is designed to work with the Librar"
                        "y by being compiled or linked with it, is called a &quot;work that uses the Library&quot;. Such a work, in isolation, is not a derivative work of the Library, and therefore falls outside the scope of this License. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">However, linking a &quot;work that uses the Library&quot; with the Library creates an executable that is a derivative of the Library (because it contains portions of the Library), rather than a &quot;work that uses the library&quot;. The executable is therefore covered by this License. Section 6 states terms for distribution of such executables. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When a &quot;work that uses the Library&quot; uses material from a header file that is part of the Library, the object code for the work may be a derivative work of the Library even though the source"
                        " code is not. Whether this is true is especially significant if the work can be linked without the Library, or if the work is itself a library. The threshold for this to be true is not precisely defined by law. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If such an object file uses only numerical parameters, data structure layouts and accessors, and small macros and small inline functions (ten lines or less in length), then the use of the object file is unrestricted, regardless of whether it is legally a derivative work. (Executables containing this object code plus portions of the Library will still fall under Section 6.) </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Otherwise, if the work is a derivative of the Library, you may distribute the object code for the work under the terms of Section 6. Any executables containing that work also"
                        " fall under Section 6, whether or not they are linked directly with the Library itself. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">6.</span> As an exception to the Sections above, you may also compile or link a &quot;work that uses the Library&quot; with the Library to produce a work containing portions of the Library, and distribute that work under terms of your choice, provided that the terms permit modification of the work for the customer's own use and reverse engineering for debugging such modifications. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You must give prominent notice with each copy of the work that the Library is used in it and that the Library and its use are covered by this License. You must supply a copy of this License. If the work during execution displays copyright notices, you mus"
                        "t include the copyright notice for the Library among them, as well as a reference directing the user to the copy of this License. Also, you must do one of these things: </p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">a)</span> Accompany the work with the complete corresponding machine-readable source code for the Library including whatever changes were used in the work (which must be distributed under Sections 1 and 2 above); and, if the work is an executable linked with the Library, with the complete machine-readable &quot;work that uses the Library&quot;, as object code and/or source code, so that the user can modify the Library and then relink to produce a modified executable containing the modified Library. (It is understood that the user who changes the contents of definitions files "
                        "in the Library will not necessarily be able to recompile the application to use the modified definitions.) </li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">b)</span> Accompany the work with a written offer, valid for at least three years, to give the same user the materials specified in Subsection 6a, above, for a charge no more than the cost of performing this distribution. </li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">c)</span> If distribution of the work is made by offering access to copy from a designated place, offer equivalent access to copy the above specified materials from the same place. </li>\n"
"<li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">d)</span> Verify"
                        " that the user has already received a copy of these materials or that you have already sent this user a copy. </li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For an executable, the required form of the &quot;work that uses the Library&quot; must include any data and utility programs needed for reproducing the executable from it. However, as a special exception, the source code distributed need not include anything that is normally distributed (in either source or binary form) with the major components (compiler, kernel, and so on) of the operating system on which the executable runs, unless that component itself accompanies the executable. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">It may happen that this requirement contradicts the license restrictions of other proprietary libraries that do not normally accompany the operating system"
                        ". Such a contradiction means you cannot use both them and the Library together in an executable that you distribute. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">7.</span> You may place library facilities that are a work based on the Library side-by-side in a single library together with other library facilities not covered by this License, and distribute such a combined library, provided that the separate distribution of the work based on the Library and of the other library facilities is otherwise permitted, and provided that you do these two things: </p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">a)</span> Accompany the combined library with a copy of the same work b"
                        "ased on the Library, uncombined with any other library facilities. This must be distributed under the terms of the Sections above. </li>\n"
"<li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">b)</span> Give prominent notice with the combined library of the fact that part of it is a work based on the Library, and explaining where to find the accompanying uncombined form of the same work. </li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">8.</span> You may not copy, modify, sublicense, link with, or distribute the Library except as expressly provided under this License. Any attempt otherwise to copy, modify, sublicense, link with, or distribute the Library is void, and will automatically terminate your rights under this License. However, parties who have received copies, or rights, from yo"
                        "u under this License will not have their licenses terminated so long as such parties remain in full compliance. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">9.</span> You are not required to accept this License, since you have not signed it. However, nothing else grants you permission to modify or distribute the Library or its derivative works. These actions are prohibited by law if you do not accept this License. Therefore, by modifying or distributing the Library (or any work based on the Library), you indicate your acceptance of this License to do so, and all its terms and conditions for copying, distributing or modifying the Library or works based on it. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">10.</span> Each time you redistribute the Library (or any work based on"
                        " the Library), the recipient automatically receives a license from the original licensor to copy, distribute, link with or modify the Library subject to these terms and conditions. You may not impose any further restrictions on the recipients' exercise of the rights granted herein. You are not responsible for enforcing compliance by third parties to this License. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">11.</span> If, as a consequence of a court judgment or allegation of patent infringement or for any other reason (not limited to patent issues), conditions are imposed on you (whether by court order, agreement or otherwise) that contradict the conditions of this License, they do not excuse you from the conditions of this License. If you cannot distribute so as to satisfy simultaneously your obligations under this License and any other pertinent obligations, then as a consequence you may n"
                        "ot distribute the Library at all. For example, if a patent license would not permit royalty-free redistribution of the Library by all those who receive copies directly or indirectly through you, then the only way you could satisfy both it and this License would be to refrain entirely from distribution of the Library. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If any portion of this section is held invalid or unenforceable under any particular circumstance, the balance of the section is intended to apply, and the section as a whole is intended to apply in other circumstances. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">It is not the purpose of this section to induce you to infringe any patents or other property right claims or to contest validity of any such claims; this section has the sole purpose of protecting the integrity of the fre"
                        "e software distribution system which is implemented by public license practices. Many people have made generous contributions to the wide range of software distributed through that system in reliance on consistent application of that system; it is up to the author/donor to decide if he or she is willing to distribute software through any other system and a licensee cannot impose that choice. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This section is intended to make thoroughly clear what is believed to be a consequence of the rest of this License. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">12.</span> If the distribution and/or use of the Library is restricted in certain countries either by patents or by copyrighted interfaces, the original copyright holder who places the Library under this License may "
                        "add an explicit geographical distribution limitation excluding those countries, so that distribution is permitted only in or among countries not thus excluded. In such case, this License incorporates the limitation as if written in the body of this License. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">13.</span> The Free Software Foundation may publish revised and/or new versions of the Library General Public License from time to time. Such new versions will be similar in spirit to the present version, but may differ in detail to address new problems or concerns. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Each version is given a distinguishing version number. If the Library specifies a version number of this License which applies to it and &quot;any later version&quot;, you have the option of following t"
                        "he terms and conditions either of that version or of any later version published by the Free Software Foundation. If the Library does not specify a license version number, you may choose any version ever published by the Free Software Foundation. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">14.</span> If you wish to incorporate parts of the Library into other free programs whose distribution conditions are incompatible with these, write to the author to ask for permission. For software which is copyrighted by the Free Software Foundation, write to the Free Software Foundation; we sometimes make exceptions for this. Our decision will be guided by the two goals of preserving the free status of all derivatives of our free software and of promoting the sharing and reuse of software generally. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-weight:600;\">NO WARRANTY</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">15.</span> BECAUSE THE LIBRARY IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY FOR THE LIBRARY, TO THE EXTENT PERMITTED BY APPLICABLE LAW. EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES PROVIDE THE LIBRARY &quot;AS IS&quot; WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE LIBRARY IS WITH YOU. SHOULD THE LIBRARY PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;"
                        "\">16.</span> IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR REDISTRIBUTE THE LIBRARY AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE LIBRARY (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD PARTIES OR A FAILURE OF THE LIBRARY TO OPERATE WITH ANY OTHER SOFTWARE), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"));
        textBrowserLicense->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(textBrowserLicense);

        tabWidget->addTab(tab_license, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        boxOK = new QHBoxLayout();
#ifndef Q_OS_MAC
        boxOK->setSpacing(6);
#endif
        boxOK->setContentsMargins(0, 0, 0, 0);
        boxOK->setObjectName(QString::fromUtf8("boxOK"));
        spacerItem2 = new QSpacerItem(160, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        boxOK->addItem(spacerItem2);

        okButton = new QPushButton(Gui__Dialog__AboutApplication);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        boxOK->addWidget(okButton);


        gridLayout->addLayout(boxOK, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__AboutApplication);
        QObject::connect(okButton, SIGNAL(clicked()), Gui__Dialog__AboutApplication, SLOT(accept()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Gui__Dialog__AboutApplication);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__AboutApplication)
    {
        Gui__Dialog__AboutApplication->setWindowTitle(QCoreApplication::translate("Gui::Dialog::AboutApplication", "About", nullptr));
        labelSplashPicture->setText(QString());
        labelVersion->setText(QCoreApplication::translate("Gui::Dialog::AboutApplication", "Version", nullptr));
        labelRevision->setText(QCoreApplication::translate("Gui::Dialog::AboutApplication", "Revision number", nullptr));
        labelDate->setText(QCoreApplication::translate("Gui::Dialog::AboutApplication", "Release date", nullptr));
        labelOS->setText(QCoreApplication::translate("Gui::Dialog::AboutApplication", "Operating system", nullptr));
        labelPlatform->setText(QCoreApplication::translate("Gui::Dialog::AboutApplication", "Word size", nullptr));
        copyButton->setText(QCoreApplication::translate("Gui::Dialog::AboutApplication", "Copy to clipboard", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_about), QCoreApplication::translate("Gui::Dialog::AboutApplication", "About", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_license), QCoreApplication::translate("Gui::Dialog::AboutApplication", "License", nullptr));
        okButton->setText(QCoreApplication::translate("Gui::Dialog::AboutApplication", "OK", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class AboutApplication: public Ui_AboutApplication {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_ABOUTAPPLICATION_H
