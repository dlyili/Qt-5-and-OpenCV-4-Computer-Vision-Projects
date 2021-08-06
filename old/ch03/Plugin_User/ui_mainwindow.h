/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *line;
    QHBoxLayout *topLayout;
    QLabel *inputImgLabel;
    QLineEdit *inputImgEdit;
    QPushButton *inputImgButton;
    QVBoxLayout *bottomLayout;
    QLabel *filtersLabel;
    QListWidget *filtersList;
    QHBoxLayout *centerLayout;
    QPushButton *helpButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *filterButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(522, 360);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 1);

        topLayout = new QHBoxLayout();
        topLayout->setSpacing(6);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        inputImgLabel = new QLabel(centralWidget);
        inputImgLabel->setObjectName(QString::fromUtf8("inputImgLabel"));

        topLayout->addWidget(inputImgLabel);

        inputImgEdit = new QLineEdit(centralWidget);
        inputImgEdit->setObjectName(QString::fromUtf8("inputImgEdit"));

        topLayout->addWidget(inputImgEdit);

        inputImgButton = new QPushButton(centralWidget);
        inputImgButton->setObjectName(QString::fromUtf8("inputImgButton"));

        topLayout->addWidget(inputImgButton);


        gridLayout->addLayout(topLayout, 1, 0, 1, 1);

        bottomLayout = new QVBoxLayout();
        bottomLayout->setSpacing(6);
        bottomLayout->setObjectName(QString::fromUtf8("bottomLayout"));
        filtersLabel = new QLabel(centralWidget);
        filtersLabel->setObjectName(QString::fromUtf8("filtersLabel"));
        filtersLabel->setAlignment(Qt::AlignCenter);

        bottomLayout->addWidget(filtersLabel);

        filtersList = new QListWidget(centralWidget);
        filtersList->setObjectName(QString::fromUtf8("filtersList"));

        bottomLayout->addWidget(filtersList);


        gridLayout->addLayout(bottomLayout, 4, 0, 1, 1);

        centerLayout = new QHBoxLayout();
        centerLayout->setSpacing(6);
        centerLayout->setObjectName(QString::fromUtf8("centerLayout"));
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));

        centerLayout->addWidget(helpButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        centerLayout->addItem(horizontalSpacer);

        filterButton = new QPushButton(centralWidget);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        centerLayout->addWidget(filterButton);


        gridLayout->addLayout(centerLayout, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        inputImgLabel->setText(QApplication::translate("MainWindow", "Input Image", nullptr));
        inputImgButton->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        filtersLabel->setText(QApplication::translate("MainWindow", "Filter Plugins", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "Help", nullptr));
        filterButton->setText(QApplication::translate("MainWindow", "Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
