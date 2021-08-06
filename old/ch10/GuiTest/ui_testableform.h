/********************************************************************************
** Form generated from reading UI file 'testableform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTABLEFORM_H
#define UI_TESTABLEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestableForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *nextBtn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *infoLabel;

    void setupUi(QWidget *TestableForm)
    {
        if (TestableForm->objectName().isEmpty())
            TestableForm->setObjectName(QString::fromUtf8("TestableForm"));
        TestableForm->resize(400, 300);
        gridLayout = new QGridLayout(TestableForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        nextBtn = new QPushButton(TestableForm);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));

        horizontalLayout->addWidget(nextBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        infoLabel = new QLabel(TestableForm);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(infoLabel);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(TestableForm);

        QMetaObject::connectSlotsByName(TestableForm);
    } // setupUi

    void retranslateUi(QWidget *TestableForm)
    {
        TestableForm->setWindowTitle(QApplication::translate("TestableForm", "Form", nullptr));
        nextBtn->setText(QApplication::translate("TestableForm", "Next", nullptr));
        infoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TestableForm: public Ui_TestableForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTABLEFORM_H
