/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Oct 20 00:18:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit_Log;
    QPushButton *pushButton_Open;
    QPushButton *btnRelay;
    QMenuBar *menuBar;
    QMenu *menuMain_test;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(654, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        plainTextEdit_Log = new QPlainTextEdit(centralWidget);
        plainTextEdit_Log->setObjectName(QString::fromUtf8("plainTextEdit_Log"));
        plainTextEdit_Log->setGeometry(QRect(10, 90, 631, 251));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit_Log->sizePolicy().hasHeightForWidth());
        plainTextEdit_Log->setSizePolicy(sizePolicy);
        plainTextEdit_Log->setMinimumSize(QSize(631, 131));
        pushButton_Open = new QPushButton(centralWidget);
        pushButton_Open->setObjectName(QString::fromUtf8("pushButton_Open"));
        pushButton_Open->setGeometry(QRect(10, 30, 101, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        pushButton_Open->setFont(font);
        btnRelay = new QPushButton(centralWidget);
        btnRelay->setObjectName(QString::fromUtf8("btnRelay"));
        btnRelay->setGeometry(QRect(160, 30, 101, 41));
        btnRelay->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 25));
        menuMain_test = new QMenu(menuBar);
        menuMain_test->setObjectName(QString::fromUtf8("menuMain_test"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMain_test->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_Open->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        btnRelay->setText(QApplication::translate("MainWindow", "Set Relay", 0, QApplication::UnicodeUTF8));
        menuMain_test->setTitle(QApplication::translate("MainWindow", "main test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
