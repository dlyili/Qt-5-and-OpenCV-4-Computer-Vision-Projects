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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qenhancedgraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenImage;
    QAction *actionSaveImage;
    QAction *actionExit;
    QAction *actionAboutQt;
    QAction *actionLanguage;
    QAction *actionTheme;
    QAction *action_Camera;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QGroupBox *pluginGroup;
    QGridLayout *gridLayout_4;
    QVBoxLayout *pluginLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QEnhancedGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QCheckBox *viewOriginalCheck;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Plugins;
    QMenu *menu_Options;
    QMenu *menu_Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        MainWindow->setMinimumSize(QSize(1024, 768));
        actionOpenImage = new QAction(MainWindow);
        actionOpenImage->setObjectName(QString::fromUtf8("actionOpenImage"));
        actionSaveImage = new QAction(MainWindow);
        actionSaveImage->setObjectName(QString::fromUtf8("actionSaveImage"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionLanguage = new QAction(MainWindow);
        actionLanguage->setObjectName(QString::fromUtf8("actionLanguage"));
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName(QString::fromUtf8("actionTheme"));
        action_Camera = new QAction(MainWindow);
        action_Camera->setObjectName(QString::fromUtf8("action_Camera"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pluginGroup = new QGroupBox(centralWidget);
        pluginGroup->setObjectName(QString::fromUtf8("pluginGroup"));
        gridLayout_4 = new QGridLayout(pluginGroup);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pluginLayout = new QVBoxLayout();
        pluginLayout->setSpacing(6);
        pluginLayout->setObjectName(QString::fromUtf8("pluginLayout"));

        gridLayout_4->addLayout(pluginLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(pluginGroup, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        graphicsView = new QEnhancedGraphicsView(groupBox);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout_6->addWidget(graphicsView, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        viewOriginalCheck = new QCheckBox(groupBox);
        viewOriginalCheck->setObjectName(QString::fromUtf8("viewOriginalCheck"));

        horizontalLayout->addWidget(viewOriginalCheck);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 5);

        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Plugins = new QMenu(menuBar);
        menu_Plugins->setObjectName(QString::fromUtf8("menu_Plugins"));
        menu_Options = new QMenu(menuBar);
        menu_Options->setObjectName(QString::fromUtf8("menu_Options"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Plugins->menuAction());
        menuBar->addAction(menu_Options->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionOpenImage);
        menu_File->addSeparator();
        menu_File->addAction(actionSaveImage);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        menu_Options->addAction(actionLanguage);
        menu_Options->addAction(actionTheme);
        menu_Help->addAction(actionAboutQt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Computer Vision", nullptr));
        actionOpenImage->setText(QApplication::translate("MainWindow", "&Open Image", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpenImage->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveImage->setText(QApplication::translate("MainWindow", "&Save Image", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSaveImage->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", nullptr));
        actionAboutQt->setText(QApplication::translate("MainWindow", "&About Qt", nullptr));
        actionLanguage->setText(QApplication::translate("MainWindow", "Language", nullptr));
        actionTheme->setText(QApplication::translate("MainWindow", "Theme", nullptr));
        action_Camera->setText(QApplication::translate("MainWindow", "&Camera", nullptr));
        pluginGroup->setTitle(QApplication::translate("MainWindow", "Plugin UI", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        viewOriginalCheck->setText(QApplication::translate("MainWindow", "View Original Image", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menu_Plugins->setTitle(QApplication::translate("MainWindow", "&Plugins", nullptr));
        menu_Options->setTitle(QApplication::translate("MainWindow", "O&ptions", nullptr));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
