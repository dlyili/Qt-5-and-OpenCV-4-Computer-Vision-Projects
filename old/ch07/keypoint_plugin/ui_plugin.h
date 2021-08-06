/********************************************************************************
** Form generated from reading UI file 'plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGIN_H
#define UI_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginGui
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_8;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QSpinBox *agastThreshSpin;
    QLabel *label;
    QCheckBox *agastNonmaxCheck;
    QLabel *label_2;
    QComboBox *agastTypeCombo;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QCheckBox *kazeUprightCheck;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *kazeLayerSpin;
    QComboBox *akazeDescriptCombo;
    QCheckBox *kazeExtendCheck;
    QSpinBox *kazeOctaveSpin;
    QCheckBox *kazeAcceleratedCheck;
    QLabel *label_3;
    QDoubleSpinBox *kazeThreshSpin;
    QLabel *label_7;
    QComboBox *kazeDiffCombo;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QSpinBox *briskThreshSpin;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *briskOctaveSpin;
    QDoubleSpinBox *briskScaleSpin;
    QWidget *page_4;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QLabel *label_11;
    QCheckBox *fastNonmaxCheck;
    QSpinBox *fastThreshSpin;
    QComboBox *fastTypeCombo;
    QWidget *page_5;
    QGridLayout *gridLayout_6;
    QCheckBox *harrisCheck;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_17;
    QSpinBox *gfttBlockSpin;
    QDoubleSpinBox *harrisKSpin;
    QSpinBox *gfttMaxSpin;
    QDoubleSpinBox *gfttQualitySpin;
    QDoubleSpinBox *gfttDistSpin;
    QWidget *page_6;
    QGridLayout *gridLayout_7;
    QSpinBox *orbPatchSpin;
    QLabel *label_19;
    QSpinBox *orbWtaSpin;
    QLabel *label_24;
    QLabel *label_21;
    QLabel *label_20;
    QDoubleSpinBox *orbScaleSpin;
    QLabel *label_18;
    QSpinBox *orbFeaturesSpin;
    QSpinBox *orbLevelsSpin;
    QLabel *label_22;
    QCheckBox *orbFastCheck;
    QSpinBox *orbFastSpin;
    QWidget *tab_2;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *browseBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *label_23;
    QComboBox *keypointCombo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_25;
    QComboBox *descriptorCombo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_26;
    QComboBox *matcherCombo;

    void setupUi(QWidget *PluginGui)
    {
        if (PluginGui->objectName().isEmpty())
            PluginGui->setObjectName(QString::fromUtf8("PluginGui"));
        PluginGui->resize(333, 601);
        gridLayout = new QGridLayout(PluginGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(PluginGui);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_8 = new QGridLayout(tab);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        toolBox = new QToolBox(tab);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 263, 318));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        agastThreshSpin = new QSpinBox(page);
        agastThreshSpin->setObjectName(QString::fromUtf8("agastThreshSpin"));
        agastThreshSpin->setMaximum(255);
        agastThreshSpin->setValue(10);

        gridLayout_2->addWidget(agastThreshSpin, 0, 1, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        agastNonmaxCheck = new QCheckBox(page);
        agastNonmaxCheck->setObjectName(QString::fromUtf8("agastNonmaxCheck"));

        gridLayout_2->addWidget(agastNonmaxCheck, 1, 0, 1, 2);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        agastTypeCombo = new QComboBox(page);
        agastTypeCombo->setObjectName(QString::fromUtf8("agastTypeCombo"));

        gridLayout_2->addWidget(agastTypeCombo, 2, 1, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("AGAST"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 264, 318));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        kazeUprightCheck = new QCheckBox(page_2);
        kazeUprightCheck->setObjectName(QString::fromUtf8("kazeUprightCheck"));

        gridLayout_3->addWidget(kazeUprightCheck, 2, 0, 1, 2);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setWordWrap(true);

        gridLayout_3->addWidget(label_4, 5, 0, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setWordWrap(true);

        gridLayout_3->addWidget(label_5, 6, 0, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setWordWrap(true);

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        kazeLayerSpin = new QSpinBox(page_2);
        kazeLayerSpin->setObjectName(QString::fromUtf8("kazeLayerSpin"));
        kazeLayerSpin->setMaximum(999);
        kazeLayerSpin->setValue(4);

        gridLayout_3->addWidget(kazeLayerSpin, 6, 1, 1, 1);

        akazeDescriptCombo = new QComboBox(page_2);
        akazeDescriptCombo->setObjectName(QString::fromUtf8("akazeDescriptCombo"));

        gridLayout_3->addWidget(akazeDescriptCombo, 3, 1, 1, 1);

        kazeExtendCheck = new QCheckBox(page_2);
        kazeExtendCheck->setObjectName(QString::fromUtf8("kazeExtendCheck"));

        gridLayout_3->addWidget(kazeExtendCheck, 1, 0, 1, 2);

        kazeOctaveSpin = new QSpinBox(page_2);
        kazeOctaveSpin->setObjectName(QString::fromUtf8("kazeOctaveSpin"));
        kazeOctaveSpin->setMaximum(999);
        kazeOctaveSpin->setValue(4);

        gridLayout_3->addWidget(kazeOctaveSpin, 5, 1, 1, 1);

        kazeAcceleratedCheck = new QCheckBox(page_2);
        kazeAcceleratedCheck->setObjectName(QString::fromUtf8("kazeAcceleratedCheck"));

        gridLayout_3->addWidget(kazeAcceleratedCheck, 0, 0, 1, 2);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        gridLayout_3->addWidget(label_3, 4, 0, 1, 1);

        kazeThreshSpin = new QDoubleSpinBox(page_2);
        kazeThreshSpin->setObjectName(QString::fromUtf8("kazeThreshSpin"));
        kazeThreshSpin->setDecimals(6);
        kazeThreshSpin->setMaximum(10.000000000000000);
        kazeThreshSpin->setSingleStep(0.000100000000000);
        kazeThreshSpin->setValue(0.000100000000000);

        gridLayout_3->addWidget(kazeThreshSpin, 4, 1, 1, 1);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_3->addWidget(label_7, 7, 0, 1, 1);

        kazeDiffCombo = new QComboBox(page_2);
        kazeDiffCombo->setObjectName(QString::fromUtf8("kazeDiffCombo"));

        gridLayout_3->addWidget(kazeDiffCombo, 7, 1, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("KAZE && AKAZE"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 263, 318));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        briskThreshSpin = new QSpinBox(page_3);
        briskThreshSpin->setObjectName(QString::fromUtf8("briskThreshSpin"));
        briskThreshSpin->setMaximum(999);
        briskThreshSpin->setValue(30);

        gridLayout_4->addWidget(briskThreshSpin, 0, 1, 1, 1);

        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        briskOctaveSpin = new QSpinBox(page_3);
        briskOctaveSpin->setObjectName(QString::fromUtf8("briskOctaveSpin"));
        briskOctaveSpin->setValue(3);

        gridLayout_4->addWidget(briskOctaveSpin, 1, 1, 1, 1);

        briskScaleSpin = new QDoubleSpinBox(page_3);
        briskScaleSpin->setObjectName(QString::fromUtf8("briskScaleSpin"));
        briskScaleSpin->setValue(1.000000000000000);

        gridLayout_4->addWidget(briskScaleSpin, 2, 1, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("BRISK"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 263, 318));
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(page_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);

        fastNonmaxCheck = new QCheckBox(page_4);
        fastNonmaxCheck->setObjectName(QString::fromUtf8("fastNonmaxCheck"));

        gridLayout_5->addWidget(fastNonmaxCheck, 1, 0, 1, 3);

        fastThreshSpin = new QSpinBox(page_4);
        fastThreshSpin->setObjectName(QString::fromUtf8("fastThreshSpin"));
        fastThreshSpin->setValue(10);

        gridLayout_5->addWidget(fastThreshSpin, 0, 1, 1, 2);

        fastTypeCombo = new QComboBox(page_4);
        fastTypeCombo->setObjectName(QString::fromUtf8("fastTypeCombo"));

        gridLayout_5->addWidget(fastTypeCombo, 2, 1, 1, 2);

        toolBox->addItem(page_4, QString::fromUtf8("FAST"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 263, 318));
        gridLayout_6 = new QGridLayout(page_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        harrisCheck = new QCheckBox(page_5);
        harrisCheck->setObjectName(QString::fromUtf8("harrisCheck"));

        gridLayout_6->addWidget(harrisCheck, 0, 0, 1, 2);

        label_16 = new QLabel(page_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_16, 4, 0, 1, 1);

        label_14 = new QLabel(page_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_14, 2, 0, 1, 1);

        label_15 = new QLabel(page_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_15, 3, 0, 1, 1);

        label_13 = new QLabel(page_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_13, 1, 0, 1, 1);

        label_17 = new QLabel(page_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_17, 5, 0, 1, 1);

        gfttBlockSpin = new QSpinBox(page_5);
        gfttBlockSpin->setObjectName(QString::fromUtf8("gfttBlockSpin"));
        gfttBlockSpin->setValue(3);

        gridLayout_6->addWidget(gfttBlockSpin, 2, 1, 1, 1);

        harrisKSpin = new QDoubleSpinBox(page_5);
        harrisKSpin->setObjectName(QString::fromUtf8("harrisKSpin"));
        harrisKSpin->setDecimals(5);
        harrisKSpin->setSingleStep(0.010000000000000);
        harrisKSpin->setValue(0.040000000000000);

        gridLayout_6->addWidget(harrisKSpin, 1, 1, 1, 1);

        gfttMaxSpin = new QSpinBox(page_5);
        gfttMaxSpin->setObjectName(QString::fromUtf8("gfttMaxSpin"));
        gfttMaxSpin->setMaximum(999999);
        gfttMaxSpin->setValue(1000);

        gridLayout_6->addWidget(gfttMaxSpin, 3, 1, 1, 1);

        gfttQualitySpin = new QDoubleSpinBox(page_5);
        gfttQualitySpin->setObjectName(QString::fromUtf8("gfttQualitySpin"));
        gfttQualitySpin->setDecimals(5);
        gfttQualitySpin->setMaximum(999.000000000000000);
        gfttQualitySpin->setSingleStep(0.010000000000000);
        gfttQualitySpin->setValue(0.010000000000000);

        gridLayout_6->addWidget(gfttQualitySpin, 5, 1, 1, 1);

        gfttDistSpin = new QDoubleSpinBox(page_5);
        gfttDistSpin->setObjectName(QString::fromUtf8("gfttDistSpin"));
        gfttDistSpin->setDecimals(5);
        gfttDistSpin->setMaximum(99999.000000000000000);
        gfttDistSpin->setValue(1.000000000000000);

        gridLayout_6->addWidget(gfttDistSpin, 4, 1, 1, 1);

        toolBox->addItem(page_5, QString::fromUtf8("GFTT && Harris"));
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        gfttBlockSpin->raise();
        harrisKSpin->raise();
        gfttMaxSpin->raise();
        gfttQualitySpin->raise();
        gfttDistSpin->raise();
        harrisCheck->raise();
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        page_6->setGeometry(QRect(0, 0, 263, 318));
        gridLayout_7 = new QGridLayout(page_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        orbPatchSpin = new QSpinBox(page_6);
        orbPatchSpin->setObjectName(QString::fromUtf8("orbPatchSpin"));
        orbPatchSpin->setValue(31);

        gridLayout_7->addWidget(orbPatchSpin, 3, 1, 1, 1);

        label_19 = new QLabel(page_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_19, 1, 0, 1, 1);

        orbWtaSpin = new QSpinBox(page_6);
        orbWtaSpin->setObjectName(QString::fromUtf8("orbWtaSpin"));
        orbWtaSpin->setValue(2);

        gridLayout_7->addWidget(orbWtaSpin, 4, 1, 1, 1);

        label_24 = new QLabel(page_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_24, 6, 0, 1, 1);

        label_21 = new QLabel(page_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_21, 3, 0, 1, 1);

        label_20 = new QLabel(page_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_20, 2, 0, 1, 1);

        orbScaleSpin = new QDoubleSpinBox(page_6);
        orbScaleSpin->setObjectName(QString::fromUtf8("orbScaleSpin"));
        orbScaleSpin->setValue(1.200000000000000);

        gridLayout_7->addWidget(orbScaleSpin, 1, 1, 1, 1);

        label_18 = new QLabel(page_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_18, 0, 0, 1, 1);

        orbFeaturesSpin = new QSpinBox(page_6);
        orbFeaturesSpin->setObjectName(QString::fromUtf8("orbFeaturesSpin"));
        orbFeaturesSpin->setMaximum(9999);
        orbFeaturesSpin->setValue(500);

        gridLayout_7->addWidget(orbFeaturesSpin, 0, 1, 1, 1);

        orbLevelsSpin = new QSpinBox(page_6);
        orbLevelsSpin->setObjectName(QString::fromUtf8("orbLevelsSpin"));
        orbLevelsSpin->setValue(8);

        gridLayout_7->addWidget(orbLevelsSpin, 2, 1, 1, 1);

        label_22 = new QLabel(page_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_22, 4, 0, 1, 1);

        orbFastCheck = new QCheckBox(page_6);
        orbFastCheck->setObjectName(QString::fromUtf8("orbFastCheck"));

        gridLayout_7->addWidget(orbFastCheck, 5, 0, 1, 2);

        orbFastSpin = new QSpinBox(page_6);
        orbFastSpin->setObjectName(QString::fromUtf8("orbFastSpin"));
        orbFastSpin->setMaximum(999);
        orbFastSpin->setValue(20);

        gridLayout_7->addWidget(orbFastSpin, 6, 1, 1, 1);

        toolBox->addItem(page_6, QString::fromUtf8("ORB"));

        gridLayout_8->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_9 = new QGridLayout(tab_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        browseBtn = new QPushButton(tab_2);
        browseBtn->setObjectName(QString::fromUtf8("browseBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(browseBtn->sizePolicy().hasHeightForWidth());
        browseBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(browseBtn);


        gridLayout_9->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_23);

        keypointCombo = new QComboBox(tab_2);
        keypointCombo->setObjectName(QString::fromUtf8("keypointCombo"));

        horizontalLayout->addWidget(keypointCombo);


        gridLayout_9->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_25);

        descriptorCombo = new QComboBox(tab_2);
        descriptorCombo->setObjectName(QString::fromUtf8("descriptorCombo"));

        horizontalLayout_2->addWidget(descriptorCombo);


        gridLayout_9->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_26);

        matcherCombo = new QComboBox(tab_2);
        matcherCombo->setObjectName(QString::fromUtf8("matcherCombo"));

        horizontalLayout_3->addWidget(matcherCombo);


        gridLayout_9->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(PluginGui);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PluginGui);
    } // setupUi

    void retranslateUi(QWidget *PluginGui)
    {
        PluginGui->setWindowTitle(QApplication::translate("PluginGui", "Form", nullptr));
        label->setText(QApplication::translate("PluginGui", "Threshold :", nullptr));
        agastNonmaxCheck->setText(QApplication::translate("PluginGui", "Nonmax Suppression", nullptr));
        label_2->setText(QApplication::translate("PluginGui", "Type :", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("PluginGui", "AGAST", nullptr));
        kazeUprightCheck->setText(QApplication::translate("PluginGui", "Upright", nullptr));
        label_4->setText(QApplication::translate("PluginGui", "Nr. of Octaves :", nullptr));
        label_5->setText(QApplication::translate("PluginGui", "Nr. of Octave Layers :", nullptr));
        label_6->setText(QApplication::translate("PluginGui", "Descriptor Type :", nullptr));
        kazeExtendCheck->setText(QApplication::translate("PluginGui", "Extended", nullptr));
        kazeAcceleratedCheck->setText(QApplication::translate("PluginGui", "Accelerated", nullptr));
        label_3->setText(QApplication::translate("PluginGui", "Threshold :", nullptr));
        label_7->setText(QApplication::translate("PluginGui", "Diffusivity :", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("PluginGui", "KAZE && AKAZE", nullptr));
        label_8->setText(QApplication::translate("PluginGui", "Threshold :", nullptr));
        label_9->setText(QApplication::translate("PluginGui", "Octaves :", nullptr));
        label_10->setText(QApplication::translate("PluginGui", "Pattern Scale :", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("PluginGui", "BRISK", nullptr));
        label_12->setText(QApplication::translate("PluginGui", "Type :", nullptr));
        label_11->setText(QApplication::translate("PluginGui", "Threshold :", nullptr));
        fastNonmaxCheck->setText(QApplication::translate("PluginGui", "Nonmax Suppression", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("PluginGui", "FAST", nullptr));
        harrisCheck->setText(QApplication::translate("PluginGui", "Use Harris", nullptr));
        label_16->setText(QApplication::translate("PluginGui", "Min Distance :", nullptr));
        label_14->setText(QApplication::translate("PluginGui", "Block Size :", nullptr));
        label_15->setText(QApplication::translate("PluginGui", "Max Features :", nullptr));
        label_13->setText(QApplication::translate("PluginGui", "K :", nullptr));
        label_17->setText(QApplication::translate("PluginGui", "Quality Level :", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("PluginGui", "GFTT && Harris", nullptr));
        label_19->setText(QApplication::translate("PluginGui", "Scale Factor :", nullptr));
        label_24->setText(QApplication::translate("PluginGui", "Fast Threshold :", nullptr));
        label_21->setText(QApplication::translate("PluginGui", "Patch Size :", nullptr));
        label_20->setText(QApplication::translate("PluginGui", "Nr. of Levels :", nullptr));
        label_18->setText(QApplication::translate("PluginGui", "Nr. of Features :", nullptr));
        label_22->setText(QApplication::translate("PluginGui", "WTA K:", nullptr));
        orbFastCheck->setText(QApplication::translate("PluginGui", "FAST (Instead of Harris)", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("PluginGui", "ORB", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PluginGui", "Feature2D Settings", nullptr));
        browseBtn->setText(QApplication::translate("PluginGui", "Browse for Second Image", nullptr));
        label_23->setText(QApplication::translate("PluginGui", "Keypoint Detector:", nullptr));
        label_25->setText(QApplication::translate("PluginGui", "Descriptor Extractor :", nullptr));
        label_26->setText(QApplication::translate("PluginGui", "Descriptor Matcher :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PluginGui", "Matching", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginGui: public Ui_PluginGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_H
