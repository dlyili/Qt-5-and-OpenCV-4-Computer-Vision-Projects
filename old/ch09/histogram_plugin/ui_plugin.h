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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginGui
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *grayRadio;
    QRadioButton *rgbRadio;
    QRadioButton *hsvRadio;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *binsSpin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *widthSpin;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *heightSpin;
    QCheckBox *uniformCheck;

    void setupUi(QWidget *PluginGui)
    {
        if (PluginGui->objectName().isEmpty())
            PluginGui->setObjectName(QString::fromUtf8("PluginGui"));
        PluginGui->resize(332, 550);
        gridLayout = new QGridLayout(PluginGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(PluginGui);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grayRadio = new QRadioButton(groupBox);
        grayRadio->setObjectName(QString::fromUtf8("grayRadio"));
        grayRadio->setChecked(true);

        verticalLayout->addWidget(grayRadio);

        rgbRadio = new QRadioButton(groupBox);
        rgbRadio->setObjectName(QString::fromUtf8("rgbRadio"));

        verticalLayout->addWidget(rgbRadio);

        hsvRadio = new QRadioButton(groupBox);
        hsvRadio->setObjectName(QString::fromUtf8("hsvRadio"));

        verticalLayout->addWidget(hsvRadio);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PluginGui);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        binsSpin = new QSpinBox(PluginGui);
        binsSpin->setObjectName(QString::fromUtf8("binsSpin"));
        binsSpin->setMaximum(999);
        binsSpin->setValue(255);

        horizontalLayout->addWidget(binsSpin);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PluginGui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        widthSpin = new QSpinBox(PluginGui);
        widthSpin->setObjectName(QString::fromUtf8("widthSpin"));
        widthSpin->setMaximum(9999);
        widthSpin->setValue(640);

        horizontalLayout_2->addWidget(widthSpin);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(PluginGui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_3);

        heightSpin = new QSpinBox(PluginGui);
        heightSpin->setObjectName(QString::fromUtf8("heightSpin"));
        heightSpin->setMaximum(9999);
        heightSpin->setValue(360);

        horizontalLayout_3->addWidget(heightSpin);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        uniformCheck = new QCheckBox(PluginGui);
        uniformCheck->setObjectName(QString::fromUtf8("uniformCheck"));

        gridLayout->addWidget(uniformCheck, 4, 0, 1, 1);


        retranslateUi(PluginGui);

        QMetaObject::connectSlotsByName(PluginGui);
    } // setupUi

    void retranslateUi(QWidget *PluginGui)
    {
        PluginGui->setWindowTitle(QApplication::translate("PluginGui", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("PluginGui", "Histogram Type", nullptr));
        grayRadio->setText(QApplication::translate("PluginGui", "Grayscale", nullptr));
        rgbRadio->setText(QApplication::translate("PluginGui", "RGB", nullptr));
        hsvRadio->setText(QApplication::translate("PluginGui", "HSV", nullptr));
        label->setText(QApplication::translate("PluginGui", "Bins:", nullptr));
        label_2->setText(QApplication::translate("PluginGui", "Width :", nullptr));
        label_3->setText(QApplication::translate("PluginGui", "Height :", nullptr));
        uniformCheck->setText(QApplication::translate("PluginGui", "Uniform", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginGui: public Ui_PluginGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_H
