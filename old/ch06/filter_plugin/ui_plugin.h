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
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginGui
{
public:
    QGridLayout *gridLayout;
    QTabWidget *mainTabs;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label;
    QDoubleSpinBox *bilateralSigmaColorSpin;
    QDoubleSpinBox *bilateralSigmaSpaceSpin;
    QLabel *label_3;
    QSpinBox *bilateralDiaSpin;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSpinBox *blurKernelSizeSpinBox;
    QLabel *label_5;
    QSpinBox *blurAnchoXSpin;
    QSpinBox *blurAnchoYSpin;
    QLabel *label_6;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QSpinBox *boxDepthSpin;
    QLabel *label_9;
    QSpinBox *boxKernelSizeSpinBox;
    QLabel *label_10;
    QLabel *label_8;
    QSpinBox *boxAnchoXSpin;
    QLabel *label_7;
    QSpinBox *boxAnchoYSpin;
    QCheckBox *boxNormalCheck;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QSpinBox *gaussKernelSizeSpinBox;
    QLabel *label_11;
    QLabel *label_13;
    QDoubleSpinBox *gaussSigmaXSpin;
    QDoubleSpinBox *gaussSigmaYSpin;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QSpinBox *medianApertureSpin;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QLabel *label_15;
    QWidget *tab_7;
    QGridLayout *gridLayout_8;
    QLabel *label_16;
    QLabel *label_17;
    QDoubleSpinBox *derivScaleSpin;
    QDoubleSpinBox *derivDeltaSpin;
    QRadioButton *derivLaplacRadio;
    QRadioButton *derivScharrRadio;
    QRadioButton *derivSobelRadio;
    QWidget *tab_8;
    QGridLayout *gridLayout_9;
    QSpinBox *morphIterSpin;
    QLabel *label_18;
    QComboBox *morphTypesCombo;
    QRadioButton *morphErodeRadio;
    QRadioButton *morphDilateRadio;
    QLabel *label_19;
    QRadioButton *morphMorphRadio;
    QLabel *label_20;
    QComboBox *morphShapesCombo;

    void setupUi(QWidget *PluginGui)
    {
        if (PluginGui->objectName().isEmpty())
            PluginGui->setObjectName(QString::fromUtf8("PluginGui"));
        PluginGui->resize(319, 530);
        gridLayout = new QGridLayout(PluginGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainTabs = new QTabWidget(PluginGui);
        mainTabs->setObjectName(QString::fromUtf8("mainTabs"));
        mainTabs->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        bilateralSigmaColorSpin = new QDoubleSpinBox(tab);
        bilateralSigmaColorSpin->setObjectName(QString::fromUtf8("bilateralSigmaColorSpin"));
        bilateralSigmaColorSpin->setMaximum(999.000000000000000);
        bilateralSigmaColorSpin->setValue(50.000000000000000);

        gridLayout_3->addWidget(bilateralSigmaColorSpin, 1, 1, 1, 1);

        bilateralSigmaSpaceSpin = new QDoubleSpinBox(tab);
        bilateralSigmaSpaceSpin->setObjectName(QString::fromUtf8("bilateralSigmaSpaceSpin"));
        bilateralSigmaSpaceSpin->setMaximum(999.000000000000000);
        bilateralSigmaSpaceSpin->setValue(50.000000000000000);

        gridLayout_3->addWidget(bilateralSigmaSpaceSpin, 2, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        bilateralDiaSpin = new QSpinBox(tab);
        bilateralDiaSpin->setObjectName(QString::fromUtf8("bilateralDiaSpin"));
        bilateralDiaSpin->setMinimum(3);
        bilateralDiaSpin->setMaximum(30);
        bilateralDiaSpin->setValue(5);

        gridLayout_3->addWidget(bilateralDiaSpin, 0, 1, 1, 1);

        mainTabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        blurKernelSizeSpinBox = new QSpinBox(tab_2);
        blurKernelSizeSpinBox->setObjectName(QString::fromUtf8("blurKernelSizeSpinBox"));
        blurKernelSizeSpinBox->setMinimum(3);
        blurKernelSizeSpinBox->setMaximum(30);
        blurKernelSizeSpinBox->setValue(5);

        gridLayout_2->addWidget(blurKernelSizeSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        blurAnchoXSpin = new QSpinBox(tab_2);
        blurAnchoXSpin->setObjectName(QString::fromUtf8("blurAnchoXSpin"));
        blurAnchoXSpin->setMinimum(-99);

        gridLayout_2->addWidget(blurAnchoXSpin, 1, 1, 1, 1);

        blurAnchoYSpin = new QSpinBox(tab_2);
        blurAnchoYSpin->setObjectName(QString::fromUtf8("blurAnchoYSpin"));
        blurAnchoYSpin->setMinimum(-99);

        gridLayout_2->addWidget(blurAnchoYSpin, 2, 1, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        mainTabs->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        boxDepthSpin = new QSpinBox(tab_3);
        boxDepthSpin->setObjectName(QString::fromUtf8("boxDepthSpin"));
        boxDepthSpin->setMinimum(-1);
        boxDepthSpin->setMaximum(9);
        boxDepthSpin->setValue(-1);

        gridLayout_4->addWidget(boxDepthSpin, 1, 1, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        boxKernelSizeSpinBox = new QSpinBox(tab_3);
        boxKernelSizeSpinBox->setObjectName(QString::fromUtf8("boxKernelSizeSpinBox"));
        boxKernelSizeSpinBox->setMinimum(3);
        boxKernelSizeSpinBox->setMaximum(30);
        boxKernelSizeSpinBox->setValue(5);

        gridLayout_4->addWidget(boxKernelSizeSpinBox, 0, 1, 1, 1);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setWordWrap(true);

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_8, 2, 0, 1, 1);

        boxAnchoXSpin = new QSpinBox(tab_3);
        boxAnchoXSpin->setObjectName(QString::fromUtf8("boxAnchoXSpin"));
        boxAnchoXSpin->setMinimum(-99);

        gridLayout_4->addWidget(boxAnchoXSpin, 2, 1, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_7, 3, 0, 1, 1);

        boxAnchoYSpin = new QSpinBox(tab_3);
        boxAnchoYSpin->setObjectName(QString::fromUtf8("boxAnchoYSpin"));
        boxAnchoYSpin->setMinimum(-99);

        gridLayout_4->addWidget(boxAnchoYSpin, 3, 1, 1, 1);

        boxNormalCheck = new QCheckBox(tab_3);
        boxNormalCheck->setObjectName(QString::fromUtf8("boxNormalCheck"));

        gridLayout_4->addWidget(boxNormalCheck, 4, 0, 1, 2);

        mainTabs->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        gaussKernelSizeSpinBox = new QSpinBox(tab_4);
        gaussKernelSizeSpinBox->setObjectName(QString::fromUtf8("gaussKernelSizeSpinBox"));
        gaussKernelSizeSpinBox->setMinimum(3);
        gaussKernelSizeSpinBox->setMaximum(30);
        gaussKernelSizeSpinBox->setValue(5);

        gridLayout_5->addWidget(gaussKernelSizeSpinBox, 0, 1, 1, 1);

        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_11, 1, 0, 1, 1);

        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_13, 2, 0, 1, 1);

        gaussSigmaXSpin = new QDoubleSpinBox(tab_4);
        gaussSigmaXSpin->setObjectName(QString::fromUtf8("gaussSigmaXSpin"));
        gaussSigmaXSpin->setValue(1.000000000000000);

        gridLayout_5->addWidget(gaussSigmaXSpin, 1, 1, 1, 1);

        gaussSigmaYSpin = new QDoubleSpinBox(tab_4);
        gaussSigmaYSpin->setObjectName(QString::fromUtf8("gaussSigmaYSpin"));

        gridLayout_5->addWidget(gaussSigmaYSpin, 2, 1, 1, 1);

        mainTabs->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);

        medianApertureSpin = new QSpinBox(tab_5);
        medianApertureSpin->setObjectName(QString::fromUtf8("medianApertureSpin"));
        medianApertureSpin->setMinimum(1);

        gridLayout_6->addWidget(medianApertureSpin, 0, 1, 1, 1);

        mainTabs->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_15 = new QLabel(tab_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);
        label_15->setWordWrap(true);

        gridLayout_7->addWidget(label_15, 0, 0, 1, 1);

        mainTabs->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_8 = new QGridLayout(tab_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(label_16, 3, 0, 1, 1);

        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(label_17, 4, 0, 1, 1);

        derivScaleSpin = new QDoubleSpinBox(tab_7);
        derivScaleSpin->setObjectName(QString::fromUtf8("derivScaleSpin"));
        derivScaleSpin->setMinimum(0.100000000000000);
        derivScaleSpin->setMaximum(999.000000000000000);

        gridLayout_8->addWidget(derivScaleSpin, 3, 1, 1, 1);

        derivDeltaSpin = new QDoubleSpinBox(tab_7);
        derivDeltaSpin->setObjectName(QString::fromUtf8("derivDeltaSpin"));
        derivDeltaSpin->setMinimum(0.000000000000000);
        derivDeltaSpin->setMaximum(999.000000000000000);
        derivDeltaSpin->setValue(0.000000000000000);

        gridLayout_8->addWidget(derivDeltaSpin, 4, 1, 1, 1);

        derivLaplacRadio = new QRadioButton(tab_7);
        derivLaplacRadio->setObjectName(QString::fromUtf8("derivLaplacRadio"));

        gridLayout_8->addWidget(derivLaplacRadio, 2, 0, 1, 2);

        derivScharrRadio = new QRadioButton(tab_7);
        derivScharrRadio->setObjectName(QString::fromUtf8("derivScharrRadio"));

        gridLayout_8->addWidget(derivScharrRadio, 1, 0, 1, 2);

        derivSobelRadio = new QRadioButton(tab_7);
        derivSobelRadio->setObjectName(QString::fromUtf8("derivSobelRadio"));
        derivSobelRadio->setChecked(true);

        gridLayout_8->addWidget(derivSobelRadio, 0, 0, 1, 2);

        mainTabs->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_9 = new QGridLayout(tab_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        morphIterSpin = new QSpinBox(tab_8);
        morphIterSpin->setObjectName(QString::fromUtf8("morphIterSpin"));
        morphIterSpin->setMinimum(1);

        gridLayout_9->addWidget(morphIterSpin, 3, 1, 1, 1);

        label_18 = new QLabel(tab_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setWordWrap(true);

        gridLayout_9->addWidget(label_18, 3, 0, 1, 1);

        morphTypesCombo = new QComboBox(tab_8);
        morphTypesCombo->setObjectName(QString::fromUtf8("morphTypesCombo"));

        gridLayout_9->addWidget(morphTypesCombo, 5, 1, 1, 1);

        morphErodeRadio = new QRadioButton(tab_8);
        morphErodeRadio->setObjectName(QString::fromUtf8("morphErodeRadio"));
        morphErodeRadio->setChecked(true);

        gridLayout_9->addWidget(morphErodeRadio, 0, 0, 1, 2);

        morphDilateRadio = new QRadioButton(tab_8);
        morphDilateRadio->setObjectName(QString::fromUtf8("morphDilateRadio"));

        gridLayout_9->addWidget(morphDilateRadio, 1, 0, 1, 2);

        label_19 = new QLabel(tab_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setWordWrap(true);

        gridLayout_9->addWidget(label_19, 5, 0, 1, 1);

        morphMorphRadio = new QRadioButton(tab_8);
        morphMorphRadio->setObjectName(QString::fromUtf8("morphMorphRadio"));

        gridLayout_9->addWidget(morphMorphRadio, 2, 0, 1, 2);

        label_20 = new QLabel(tab_8);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_9->addWidget(label_20, 4, 0, 1, 1);

        morphShapesCombo = new QComboBox(tab_8);
        morphShapesCombo->setObjectName(QString::fromUtf8("morphShapesCombo"));

        gridLayout_9->addWidget(morphShapesCombo, 4, 1, 1, 1);

        mainTabs->addTab(tab_8, QString());

        gridLayout->addWidget(mainTabs, 0, 0, 1, 1);


        retranslateUi(PluginGui);

        mainTabs->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(PluginGui);
    } // setupUi

    void retranslateUi(QWidget *PluginGui)
    {
        PluginGui->setWindowTitle(QApplication::translate("PluginGui", "Form", nullptr));
        label_2->setText(QApplication::translate("PluginGui", "Sigma Space :", nullptr));
        label->setText(QApplication::translate("PluginGui", "Sigma Color :", nullptr));
        label_3->setText(QApplication::translate("PluginGui", "Diameter :", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab), QApplication::translate("PluginGui", "Bilateral Filter", nullptr));
        label_4->setText(QApplication::translate("PluginGui", "Kernel Size :", nullptr));
        label_5->setText(QApplication::translate("PluginGui", "Anchor Point X:", nullptr));
        label_6->setText(QApplication::translate("PluginGui", "Anchor Point Y:", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab_2), QApplication::translate("PluginGui", "Blur", nullptr));
        label_9->setText(QApplication::translate("PluginGui", "Kernel Size :", nullptr));
        label_10->setText(QApplication::translate("PluginGui", "Depth (use -1 for depth same as source):", nullptr));
        label_8->setText(QApplication::translate("PluginGui", "Anchor Point X:", nullptr));
        label_7->setText(QApplication::translate("PluginGui", "Anchor Point Y:", nullptr));
        boxNormalCheck->setText(QApplication::translate("PluginGui", "Normalized", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab_3), QApplication::translate("PluginGui", "Box Filter", nullptr));
        label_12->setText(QApplication::translate("PluginGui", "Kernel Size :", nullptr));
        label_11->setText(QApplication::translate("PluginGui", "Sigma X:", nullptr));
        label_13->setText(QApplication::translate("PluginGui", "Sigma Y:", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab_4), QApplication::translate("PluginGui", "Gaussian Filter", nullptr));
        label_14->setText(QApplication::translate("PluginGui", "Aperture Size:", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab_5), QApplication::translate("PluginGui", "Median Filter", nullptr));
        label_15->setText(QApplication::translate("PluginGui", "Kernel Matrix is contant and set in the code. Change it to experiment with various Kernel matrices.", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab_6), QApplication::translate("PluginGui", "Filter 2D", nullptr));
        label_16->setText(QApplication::translate("PluginGui", "Scale :", nullptr));
        label_17->setText(QApplication::translate("PluginGui", "Delta :", nullptr));
        derivLaplacRadio->setText(QApplication::translate("PluginGui", "Laplacian", nullptr));
        derivScharrRadio->setText(QApplication::translate("PluginGui", "Scharr", nullptr));
        derivSobelRadio->setText(QApplication::translate("PluginGui", "Sobel", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab_7), QApplication::translate("PluginGui", "Derivatives", nullptr));
        label_18->setText(QApplication::translate("PluginGui", "Iteration Count :", nullptr));
        morphErodeRadio->setText(QApplication::translate("PluginGui", "Erode", nullptr));
        morphDilateRadio->setText(QApplication::translate("PluginGui", "Dilate", nullptr));
        label_19->setText(QApplication::translate("PluginGui", "Morph Type :", nullptr));
        morphMorphRadio->setText(QApplication::translate("PluginGui", "Morph", nullptr));
        label_20->setText(QApplication::translate("PluginGui", "Morph Shape :", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(tab_8), QApplication::translate("PluginGui", "Morphology", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginGui: public Ui_PluginGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_H
