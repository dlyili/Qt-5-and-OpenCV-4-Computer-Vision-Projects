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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginGui
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *threshSlider;
    QComboBox *threshAdaptiveCombo;
    QCheckBox *threshAdaptiveCheck;
    QSlider *threshMaxSlider;
    QLabel *label_3;
    QLabel *label;
    QComboBox *threshTypeCombo;

    void setupUi(QWidget *PluginGui)
    {
        if (PluginGui->objectName().isEmpty())
            PluginGui->setObjectName(QString::fromUtf8("PluginGui"));
        PluginGui->resize(319, 530);
        gridLayout = new QGridLayout(PluginGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(PluginGui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        threshSlider = new QSlider(PluginGui);
        threshSlider->setObjectName(QString::fromUtf8("threshSlider"));
        threshSlider->setMaximum(255);
        threshSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(threshSlider, 2, 1, 1, 1);

        threshAdaptiveCombo = new QComboBox(PluginGui);
        threshAdaptiveCombo->setObjectName(QString::fromUtf8("threshAdaptiveCombo"));

        gridLayout->addWidget(threshAdaptiveCombo, 0, 1, 1, 1);

        threshAdaptiveCheck = new QCheckBox(PluginGui);
        threshAdaptiveCheck->setObjectName(QString::fromUtf8("threshAdaptiveCheck"));

        gridLayout->addWidget(threshAdaptiveCheck, 0, 0, 1, 1);

        threshMaxSlider = new QSlider(PluginGui);
        threshMaxSlider->setObjectName(QString::fromUtf8("threshMaxSlider"));
        threshMaxSlider->setMaximum(255);
        threshMaxSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(threshMaxSlider, 3, 1, 1, 1);

        label_3 = new QLabel(PluginGui);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(PluginGui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        threshTypeCombo = new QComboBox(PluginGui);
        threshTypeCombo->setObjectName(QString::fromUtf8("threshTypeCombo"));

        gridLayout->addWidget(threshTypeCombo, 1, 1, 1, 1);


        retranslateUi(PluginGui);

        QMetaObject::connectSlotsByName(PluginGui);
    } // setupUi

    void retranslateUi(QWidget *PluginGui)
    {
        PluginGui->setWindowTitle(QApplication::translate("PluginGui", "Form", nullptr));
        label_2->setText(QApplication::translate("PluginGui", "Thresh :", nullptr));
        threshAdaptiveCheck->setText(QApplication::translate("PluginGui", "Adaptive", nullptr));
        label_3->setText(QApplication::translate("PluginGui", "Max :", nullptr));
        label->setText(QApplication::translate("PluginGui", "Threshold Type :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginGui: public Ui_PluginGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_H
