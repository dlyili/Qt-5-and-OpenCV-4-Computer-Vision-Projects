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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginGui
{
public:
    QGridLayout *gridLayout;
    QRadioButton *affineRadio;
    QLabel *label_2;
    QLabel *label;
    QComboBox *interpolationCombo;
    QRadioButton *resizeHalfRadio;
    QRadioButton *resizeDoubleRadio;
    QRadioButton *remapRadio;
    QComboBox *borderTypeCombo;
    QRadioButton *perspectiveRadio;

    void setupUi(QWidget *PluginGui)
    {
        if (PluginGui->objectName().isEmpty())
            PluginGui->setObjectName(QString::fromUtf8("PluginGui"));
        PluginGui->resize(321, 539);
        gridLayout = new QGridLayout(PluginGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        affineRadio = new QRadioButton(PluginGui);
        affineRadio->setObjectName(QString::fromUtf8("affineRadio"));

        gridLayout->addWidget(affineRadio, 3, 0, 1, 2);

        label_2 = new QLabel(PluginGui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        label = new QLabel(PluginGui);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        interpolationCombo = new QComboBox(PluginGui);
        interpolationCombo->setObjectName(QString::fromUtf8("interpolationCombo"));

        gridLayout->addWidget(interpolationCombo, 6, 1, 1, 1);

        resizeHalfRadio = new QRadioButton(PluginGui);
        resizeHalfRadio->setObjectName(QString::fromUtf8("resizeHalfRadio"));
        resizeHalfRadio->setChecked(true);

        gridLayout->addWidget(resizeHalfRadio, 0, 0, 1, 2);

        resizeDoubleRadio = new QRadioButton(PluginGui);
        resizeDoubleRadio->setObjectName(QString::fromUtf8("resizeDoubleRadio"));

        gridLayout->addWidget(resizeDoubleRadio, 1, 0, 1, 2);

        remapRadio = new QRadioButton(PluginGui);
        remapRadio->setObjectName(QString::fromUtf8("remapRadio"));

        gridLayout->addWidget(remapRadio, 2, 0, 1, 2);

        borderTypeCombo = new QComboBox(PluginGui);
        borderTypeCombo->setObjectName(QString::fromUtf8("borderTypeCombo"));

        gridLayout->addWidget(borderTypeCombo, 5, 1, 1, 1);

        perspectiveRadio = new QRadioButton(PluginGui);
        perspectiveRadio->setObjectName(QString::fromUtf8("perspectiveRadio"));

        gridLayout->addWidget(perspectiveRadio, 4, 0, 1, 2);


        retranslateUi(PluginGui);

        QMetaObject::connectSlotsByName(PluginGui);
    } // setupUi

    void retranslateUi(QWidget *PluginGui)
    {
        PluginGui->setWindowTitle(QApplication::translate("PluginGui", "Form", nullptr));
        affineRadio->setText(QApplication::translate("PluginGui", "Affine", nullptr));
        label_2->setText(QApplication::translate("PluginGui", "Interpolation :", nullptr));
        label->setText(QApplication::translate("PluginGui", "Border Type :", nullptr));
        resizeHalfRadio->setText(QApplication::translate("PluginGui", "Resize (1/2 X)", nullptr));
        resizeDoubleRadio->setText(QApplication::translate("PluginGui", "Resize (2 X)", nullptr));
        remapRadio->setText(QApplication::translate("PluginGui", "Remap", nullptr));
        perspectiveRadio->setText(QApplication::translate("PluginGui", "Perspective", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginGui: public Ui_PluginGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_H
