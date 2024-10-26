/********************************************************************************
** Form generated from reading UI file 'DlgSettings3DView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGS3DVIEW_H
#define UI_DLGSETTINGS3DVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettings3DView
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *GroupBoxGeneral;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayoutCoord;
    Gui::PrefCheckBox *CheckBox_CornerCoordSystem;
    QSpacerItem *horizontalSpacerCoord;
    QLabel *labelCoordSize;
    Gui::PrefSpinBox *SpinBox_CornerCoordSystemSize;
    QLabel *axisLetterColorLabel;
    Gui::PrefColorButton *axisLetterColor;
    Gui::PrefCheckBox *CheckBox_ShowAxisCross;
    Gui::PrefCheckBox *CheckBox_ShowFPS;
    QGroupBox *GroupBox12;
    QVBoxLayout *verticalLayout_3;
    Gui::PrefCheckBox *CheckBox_use_SW_OpenGL;
    Gui::PrefCheckBox *CheckBox_useVBO;
    QGridLayout *gridLayout;
    QLabel *renderCacheLabel;
    QComboBox *renderCache;
    QLabel *aliasingLAbel;
    QComboBox *comboAliasing;
    QLabel *transparentRenderLabel;
    Gui::PrefComboBox *comboTransparentRender;
    QLabel *markerSizeLabel;
    QComboBox *boxMarkerSize;
    QLabel *textLabel1;
    Gui::PrefDoubleSpinBox *FloatSpinBox_EyeDistance;
    Gui::PrefCheckBox *checkBoxBacklight;
    Gui::PrefColorButton *backlightColor;
    QSpacerItem *horizontalSpacer;
    QLabel *backlightLabel;
    Gui::PrefSlider *sliderIntensity;
    QGroupBox *groupBoxCamera;
    QGridLayout *gridLayout1;
    Gui::PrefRadioButton *radioPerspective;
    Gui::PrefRadioButton *radioOrthographic;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *Gui__Dialog__DlgSettings3DView)
    {
        if (Gui__Dialog__DlgSettings3DView->objectName().isEmpty())
            Gui__Dialog__DlgSettings3DView->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettings3DView"));
        Gui__Dialog__DlgSettings3DView->resize(499, 520);
        verticalLayout_2 = new QVBoxLayout(Gui__Dialog__DlgSettings3DView);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        GroupBoxGeneral = new QGroupBox(Gui__Dialog__DlgSettings3DView);
        GroupBoxGeneral->setObjectName(QString::fromUtf8("GroupBoxGeneral"));
        GroupBoxGeneral->setEnabled(true);
        verticalLayout = new QVBoxLayout(GroupBoxGeneral);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayoutCoord = new QGridLayout();
        gridLayoutCoord->setSpacing(6);
        gridLayoutCoord->setObjectName(QString::fromUtf8("gridLayoutCoord"));
        CheckBox_CornerCoordSystem = new Gui::PrefCheckBox(GroupBoxGeneral);
        CheckBox_CornerCoordSystem->setObjectName(QString::fromUtf8("CheckBox_CornerCoordSystem"));
        CheckBox_CornerCoordSystem->setChecked(true);
        CheckBox_CornerCoordSystem->setProperty("prefEntry", QVariant(QByteArray("CornerCoordSystem")));
        CheckBox_CornerCoordSystem->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayoutCoord->addWidget(CheckBox_CornerCoordSystem, 0, 0, 1, 1);

        horizontalSpacerCoord = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutCoord->addItem(horizontalSpacerCoord, 0, 1, 1, 1);

        labelCoordSize = new QLabel(GroupBoxGeneral);
        labelCoordSize->setObjectName(QString::fromUtf8("labelCoordSize"));
        labelCoordSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutCoord->addWidget(labelCoordSize, 0, 2, 1, 1);

        SpinBox_CornerCoordSystemSize = new Gui::PrefSpinBox(GroupBoxGeneral);
        SpinBox_CornerCoordSystemSize->setObjectName(QString::fromUtf8("SpinBox_CornerCoordSystemSize"));
        SpinBox_CornerCoordSystemSize->setMinimum(2);
        SpinBox_CornerCoordSystemSize->setMaximum(100);
        SpinBox_CornerCoordSystemSize->setValue(10);
        SpinBox_CornerCoordSystemSize->setSuffix(QString::fromUtf8("%"));
        SpinBox_CornerCoordSystemSize->setProperty("prefEntry", QVariant(QByteArray("CornerCoordSystemSize")));
        SpinBox_CornerCoordSystemSize->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayoutCoord->addWidget(SpinBox_CornerCoordSystemSize, 0, 3, 1, 1);

        axisLetterColorLabel = new QLabel(GroupBoxGeneral);
        axisLetterColorLabel->setObjectName(QString::fromUtf8("axisLetterColorLabel"));

        gridLayoutCoord->addWidget(axisLetterColorLabel, 1, 2, 1, 1);

        axisLetterColor = new Gui::PrefColorButton(GroupBoxGeneral);
        axisLetterColor->setObjectName(QString::fromUtf8("axisLetterColor"));
        axisLetterColor->setProperty("color", QVariant(QColor(0, 0, 0)));
        axisLetterColor->setProperty("prefEntry", QVariant(QByteArray("AxisLetterColor")));
        axisLetterColor->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayoutCoord->addWidget(axisLetterColor, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayoutCoord);

        CheckBox_ShowAxisCross = new Gui::PrefCheckBox(GroupBoxGeneral);
        CheckBox_ShowAxisCross->setObjectName(QString::fromUtf8("CheckBox_ShowAxisCross"));
        CheckBox_ShowAxisCross->setProperty("prefEntry", QVariant(QByteArray("ShowAxisCross")));
        CheckBox_ShowAxisCross->setProperty("prefPath", QVariant(QByteArray("View")));

        verticalLayout->addWidget(CheckBox_ShowAxisCross);

        CheckBox_ShowFPS = new Gui::PrefCheckBox(GroupBoxGeneral);
        CheckBox_ShowFPS->setObjectName(QString::fromUtf8("CheckBox_ShowFPS"));
        CheckBox_ShowFPS->setProperty("prefEntry", QVariant(QByteArray("ShowFPS")));
        CheckBox_ShowFPS->setProperty("prefPath", QVariant(QByteArray("View")));

        verticalLayout->addWidget(CheckBox_ShowFPS);


        verticalLayout_2->addWidget(GroupBoxGeneral);

        GroupBox12 = new QGroupBox(Gui__Dialog__DlgSettings3DView);
        GroupBox12->setObjectName(QString::fromUtf8("GroupBox12"));
        GroupBox12->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(GroupBox12);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        CheckBox_use_SW_OpenGL = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_use_SW_OpenGL->setObjectName(QString::fromUtf8("CheckBox_use_SW_OpenGL"));
        CheckBox_use_SW_OpenGL->setProperty("prefEntry", QVariant(QByteArray("UseSoftwareOpenGL")));
        CheckBox_use_SW_OpenGL->setProperty("prefPath", QVariant(QByteArray("OpenGL")));

        verticalLayout_3->addWidget(CheckBox_use_SW_OpenGL);

        CheckBox_useVBO = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_useVBO->setObjectName(QString::fromUtf8("CheckBox_useVBO"));
        CheckBox_useVBO->setProperty("prefEntry", QVariant(QByteArray("UseVBO")));
        CheckBox_useVBO->setProperty("prefPath", QVariant(QByteArray("View")));

        verticalLayout_3->addWidget(CheckBox_useVBO);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        renderCacheLabel = new QLabel(GroupBox12);
        renderCacheLabel->setObjectName(QString::fromUtf8("renderCacheLabel"));

        gridLayout->addWidget(renderCacheLabel, 0, 0, 1, 1);

        renderCache = new QComboBox(GroupBox12);
        renderCache->addItem(QString());
        renderCache->addItem(QString());
        renderCache->addItem(QString());
        renderCache->setObjectName(QString::fromUtf8("renderCache"));
        renderCache->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(renderCache, 0, 4, 1, 1);

        aliasingLAbel = new QLabel(GroupBox12);
        aliasingLAbel->setObjectName(QString::fromUtf8("aliasingLAbel"));

        gridLayout->addWidget(aliasingLAbel, 1, 0, 1, 1);

        comboAliasing = new QComboBox(GroupBox12);
        comboAliasing->setObjectName(QString::fromUtf8("comboAliasing"));
        comboAliasing->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboAliasing, 1, 4, 1, 1);

        transparentRenderLabel = new QLabel(GroupBox12);
        transparentRenderLabel->setObjectName(QString::fromUtf8("transparentRenderLabel"));

        gridLayout->addWidget(transparentRenderLabel, 2, 0, 1, 1);

        comboTransparentRender = new Gui::PrefComboBox(GroupBox12);
        comboTransparentRender->addItem(QString());
        comboTransparentRender->addItem(QString());
        comboTransparentRender->setObjectName(QString::fromUtf8("comboTransparentRender"));
        comboTransparentRender->setMinimumSize(QSize(120, 0));
        comboTransparentRender->setProperty("prefEntry", QVariant(QByteArray("TransparentObjectRenderType")));
        comboTransparentRender->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(comboTransparentRender, 2, 4, 1, 1);

        markerSizeLabel = new QLabel(GroupBox12);
        markerSizeLabel->setObjectName(QString::fromUtf8("markerSizeLabel"));

        gridLayout->addWidget(markerSizeLabel, 3, 0, 1, 1);

        boxMarkerSize = new QComboBox(GroupBox12);
        boxMarkerSize->setObjectName(QString::fromUtf8("boxMarkerSize"));
        boxMarkerSize->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(boxMarkerSize, 3, 4, 1, 1);

        textLabel1 = new QLabel(GroupBox12);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 4, 0, 1, 1);

        FloatSpinBox_EyeDistance = new Gui::PrefDoubleSpinBox(GroupBox12);
        FloatSpinBox_EyeDistance->setObjectName(QString::fromUtf8("FloatSpinBox_EyeDistance"));
        FloatSpinBox_EyeDistance->setMinimumSize(QSize(120, 0));
        FloatSpinBox_EyeDistance->setDecimals(1);
        FloatSpinBox_EyeDistance->setMinimum(0.100000000000000);
        FloatSpinBox_EyeDistance->setMaximum(1000.000000000000000);
        FloatSpinBox_EyeDistance->setSingleStep(2.000000000000000);
        FloatSpinBox_EyeDistance->setValue(5.000000000000000);
        FloatSpinBox_EyeDistance->setProperty("prefEntry", QVariant(QByteArray("EyeDistance")));
        FloatSpinBox_EyeDistance->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(FloatSpinBox_EyeDistance, 4, 4, 1, 1);

        checkBoxBacklight = new Gui::PrefCheckBox(GroupBox12);
        checkBoxBacklight->setObjectName(QString::fromUtf8("checkBoxBacklight"));
        checkBoxBacklight->setProperty("prefEntry", QVariant(QByteArray("EnableBacklight")));
        checkBoxBacklight->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(checkBoxBacklight, 5, 0, 1, 1);

        backlightColor = new Gui::PrefColorButton(GroupBox12);
        backlightColor->setObjectName(QString::fromUtf8("backlightColor"));
        backlightColor->setEnabled(false);
        backlightColor->setProperty("color", QVariant(QColor(255, 255, 255)));
        backlightColor->setProperty("prefEntry", QVariant(QByteArray("BacklightColor")));
        backlightColor->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(backlightColor, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 2, 1, 1);

        backlightLabel = new QLabel(GroupBox12);
        backlightLabel->setObjectName(QString::fromUtf8("backlightLabel"));
        backlightLabel->setEnabled(false);
        backlightLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(backlightLabel, 5, 3, 1, 1);

        sliderIntensity = new Gui::PrefSlider(GroupBox12);
        sliderIntensity->setObjectName(QString::fromUtf8("sliderIntensity"));
        sliderIntensity->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sliderIntensity->sizePolicy().hasHeightForWidth());
        sliderIntensity->setSizePolicy(sizePolicy);
        sliderIntensity->setMinimumSize(QSize(120, 0));
        sliderIntensity->setMaximum(100);
        sliderIntensity->setSingleStep(1);
        sliderIntensity->setValue(100);
        sliderIntensity->setOrientation(Qt::Horizontal);
        sliderIntensity->setTickPosition(QSlider::TicksBelow);
        sliderIntensity->setTickInterval(10);
        sliderIntensity->setProperty("prefEntry", QVariant(QByteArray("BacklightIntensity")));
        sliderIntensity->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout->addWidget(sliderIntensity, 5, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_2->addWidget(GroupBox12);

        groupBoxCamera = new QGroupBox(Gui__Dialog__DlgSettings3DView);
        groupBoxCamera->setObjectName(QString::fromUtf8("groupBoxCamera"));
        gridLayout1 = new QGridLayout(groupBoxCamera);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        radioPerspective = new Gui::PrefRadioButton(groupBoxCamera);
        radioPerspective->setObjectName(QString::fromUtf8("radioPerspective"));
        radioPerspective->setProperty("prefEntry", QVariant(QByteArray("Perspective")));
        radioPerspective->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(radioPerspective, 0, 0, 1, 1);

        radioOrthographic = new Gui::PrefRadioButton(groupBoxCamera);
        radioOrthographic->setObjectName(QString::fromUtf8("radioOrthographic"));
        radioOrthographic->setChecked(true);
        radioOrthographic->setProperty("prefEntry", QVariant(QByteArray("Orthographic")));
        radioOrthographic->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(radioOrthographic, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBoxCamera);

        spacerItem = new QSpacerItem(455, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem);


        retranslateUi(Gui__Dialog__DlgSettings3DView);
        QObject::connect(checkBoxBacklight, SIGNAL(toggled(bool)), backlightColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxBacklight, SIGNAL(toggled(bool)), sliderIntensity, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxBacklight, SIGNAL(toggled(bool)), backlightLabel, SLOT(setEnabled(bool)));
        QObject::connect(CheckBox_CornerCoordSystem, SIGNAL(toggled(bool)), SpinBox_CornerCoordSystemSize, SLOT(setEnabled(bool)));
        QObject::connect(CheckBox_CornerCoordSystem, SIGNAL(toggled(bool)), axisLetterColor, SLOT(setEnabled(bool)));

        renderCache->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettings3DView);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettings3DView)
    {
        Gui__Dialog__DlgSettings3DView->setWindowTitle(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "3D View", nullptr));
        GroupBoxGeneral->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "General", nullptr));
#if QT_CONFIG(tooltip)
        CheckBox_CornerCoordSystem->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Main coordinate system will always be shown in\n"
"lower right corner within opened files", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_CornerCoordSystem->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Show coordinate system in the corner", nullptr));
        labelCoordSize->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Relative size:", nullptr));
#if QT_CONFIG(tooltip)
        SpinBox_CornerCoordSystemSize->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Size of main coordinate system representation\n"
"in the corner -- in % of height/width of viewport", nullptr));
#endif // QT_CONFIG(tooltip)
        axisLetterColorLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Letter color:", nullptr));
#if QT_CONFIG(tooltip)
        axisLetterColor->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Axis letter color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        CheckBox_ShowAxisCross->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Axis cross will be shown by default at file\n"
"opening or creation", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_ShowAxisCross->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Show axis cross by default", nullptr));
#if QT_CONFIG(tooltip)
        CheckBox_ShowFPS->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Time needed for last operation and resulting frame rate\n"
"will be shown at the lower left corner in opened files", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_ShowFPS->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Show counter of frames per second", nullptr));
        GroupBox12->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Rendering", nullptr));
#if QT_CONFIG(tooltip)
        CheckBox_use_SW_OpenGL->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "This option is useful for troubleshooting graphics card and driver problems.\n"
"\n"
"Changing this option requires a restart of the application.", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_use_SW_OpenGL->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Use software OpenGL", nullptr));
#if QT_CONFIG(tooltip)
        CheckBox_useVBO->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "If selected, Vertex Buffer Objects (VBO) will be used.\n"
"A VBO is an OpenGL feature that provides methods for uploading\n"
"vertex data (position, normal vector, color, etc.) to the graphics card.\n"
"VBOs offer substantial performance gains because the data resides\n"
"in the graphics memory rather than the system memory and so it\n"
"can be rendered directly by GPU.\n"
"\n"
"Note: Sometimes this feature may lead to a host of different\n"
"issues ranging from graphical anomalies to GPU crash bugs. Remember to\n"
"report this setting as enabled when seeking support on the FreeCAD forums", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_useVBO->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Use OpenGL VBO (Vertex Buffer Object)", nullptr));
        renderCacheLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Render cache", nullptr));
        renderCache->setItemText(0, QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Auto", nullptr));
        renderCache->setItemText(1, QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Distributed", nullptr));
        renderCache->setItemText(2, QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Centralized", nullptr));

#if QT_CONFIG(tooltip)
        renderCache->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "'Render Caching' is another way to say 'Rendering Acceleration'.\n"
"There are 3 options available to achieve this:\n"
"1) 'Auto' (default), let Coin3D decide where to cache.\n"
"2) 'Distributed', manually turn on cache for all view provider root node.\n"
"3) 'Centralized', manually turn off cache in all nodes of all view provider, and\n"
"only cache at the scene graph root node. This offers the fastest rendering speed\n"
"but slower response to any scene changes.", nullptr));
#endif // QT_CONFIG(tooltip)
        aliasingLAbel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Anti-Aliasing", nullptr));
#if QT_CONFIG(tooltip)
        comboAliasing->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "What kind of multisample anti-aliasing is used", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        transparentRenderLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        transparentRenderLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Transparent objects:", nullptr));
        comboTransparentRender->setItemText(0, QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "One pass", nullptr));
        comboTransparentRender->setItemText(1, QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Backface pass", nullptr));

#if QT_CONFIG(tooltip)
        comboTransparentRender->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Render types of transparent objects", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        markerSizeLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        markerSizeLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Marker size:", nullptr));
#if QT_CONFIG(tooltip)
        boxMarkerSize->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Size of vertices in the Sketcher, TechDraw and other workbenches", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel1->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Eye to eye distance for stereo modes", nullptr));
#if QT_CONFIG(tooltip)
        FloatSpinBox_EyeDistance->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Eye-to-eye distance used for stereo projections.\n"
"The specified value is a factor that will be multiplied with the\n"
"bounding box size of the 3D object that is currently displayed.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBoxBacklight->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Backlight is enabled with the defined color", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxBacklight->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Backlight color", nullptr));
#if QT_CONFIG(tooltip)
        backlightColor->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Backlight color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        backlightLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        backlightLabel->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Intensity", nullptr));
#if QT_CONFIG(tooltip)
        sliderIntensity->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Intensity of the backlight", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxCamera->setTitle(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Camera type", nullptr));
#if QT_CONFIG(tooltip)
        radioPerspective->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Objects will appear in a perspective projection", nullptr));
#endif // QT_CONFIG(tooltip)
        radioPerspective->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Perspective renderin&g", nullptr));
#if QT_CONFIG(tooltip)
        radioOrthographic->setToolTip(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Objects will be projected in orthographic projection", nullptr));
#endif // QT_CONFIG(tooltip)
        radioOrthographic->setText(QCoreApplication::translate("Gui::Dialog::DlgSettings3DView", "Or&thographic rendering", nullptr));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettings3DView: public Ui_DlgSettings3DView {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGS3DVIEW_H
