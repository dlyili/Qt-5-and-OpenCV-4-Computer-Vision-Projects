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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginGui
{
public:
    QGridLayout *gridLayout;
    QLabel *borderTypeLabel;
    QComboBox *borderTypeComboBox;

    void setupUi(QWidget *PluginGui)
    {
        if (PluginGui->objectName().isEmpty())
            PluginGui->setObjectName(QString::fromUtf8("PluginGui"));
        PluginGui->resize(320, 207);
        gridLayout = new QGridLayout(PluginGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        borderTypeLabel = new QLabel(PluginGui);
        borderTypeLabel->setObjectName(QString::fromUtf8("borderTypeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(borderTypeLabel->sizePolicy().hasHeightForWidth());
        borderTypeLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(borderTypeLabel, 0, 0, 1, 1);

        borderTypeComboBox = new QComboBox(PluginGui);
        borderTypeComboBox->setObjectName(QString::fromUtf8("borderTypeComboBox"));

        gridLayout->addWidget(borderTypeComboBox, 0, 1, 1, 1);


        retranslateUi(PluginGui);

        QMetaObject::connectSlotsByName(PluginGui);
    } // setupUi

    void retranslateUi(QWidget *PluginGui)
    {
        PluginGui->setWindowTitle(QApplication::translate("PluginGui", "Form", nullptr));
        borderTypeLabel->setText(QApplication::translate("PluginGui", "Border Type :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginGui: public Ui_PluginGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_H
