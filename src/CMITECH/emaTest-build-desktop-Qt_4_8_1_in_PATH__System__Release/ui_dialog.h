/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed Oct 15 23:39:23 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_Open;
    QPushButton *pushButton_Close;
    QPlainTextEdit *plainTextEdit_Log;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *lineEdit_NumOfBitsWrite;
    QLabel *label_5;
    QLineEdit *lineEdit_PulseWidthWrite;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_PulseIntervalWrite;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_WiegandDataWrite;
    QPushButton *pushButton_WriteWiegand;
    QPushButton *pushButton_WiegandSetConfig;
    QPushButton *pushButton_WiegandGetConfig;
    QPushButton *pushButton_WiegandAutoDetect;
    QLineEdit *lineEdit_PulseIntervalRead;
    QLineEdit *lineEdit_PulseWidthRead;
    QLineEdit *lineEdit_NumOfBitsRead;
    QLineEdit *lineEdit_WiegandDataRead;
    QLabel *label_12;
    QSpinBox *spinBox_ChannelWrite;
    QLineEdit *lineEdit_ChannelRead;
    QLabel *label_13;
    QGroupBox *groupBox_3;
    QLabel *label_18;
    QLineEdit *lineEdit_GPI1;
    QLabel *label_19;
    QLineEdit *lineEdit_GPI2;
    QLineEdit *lineEdit_GPO2;
    QLabel *label_20;
    QLineEdit *lineEdit_GPO1;
    QLabel *label_21;
    QPushButton *pushButton_WriteGPO1;
    QPushButton *pushButton_WriteGPO2;
    QPushButton *pushButton_WriteGPO12;
    QPushButton *pushButton_USBPowerOff;
    QPushButton *pushButton_USBPowerOn;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton_Normal;
    QRadioButton *radioButton_Abnormal;
    QSpinBox *spinBox_RelayInterval;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *pushButton_WriteRelay;
    QLabel *label_25;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1016, 585);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        Dialog->setFont(font);
        Dialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton_Open = new QPushButton(Dialog);
        pushButton_Open->setObjectName(QString::fromUtf8("pushButton_Open"));
        pushButton_Open->setGeometry(QRect(70, 30, 111, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        pushButton_Open->setFont(font1);
        pushButton_Close = new QPushButton(Dialog);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));
        pushButton_Close->setGeometry(QRect(210, 30, 111, 61));
        pushButton_Close->setFont(font1);
        plainTextEdit_Log = new QPlainTextEdit(Dialog);
        plainTextEdit_Log->setObjectName(QString::fromUtf8("plainTextEdit_Log"));
        plainTextEdit_Log->setGeometry(QRect(360, 20, 631, 131));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 180, 951, 191));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(16);
        groupBox->setFont(font2);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 40, 121, 31));
        label_4->setFont(font2);
        lineEdit_NumOfBitsWrite = new QLineEdit(groupBox);
        lineEdit_NumOfBitsWrite->setObjectName(QString::fromUtf8("lineEdit_NumOfBitsWrite"));
        lineEdit_NumOfBitsWrite->setGeometry(QRect(140, 40, 51, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Courier New"));
        font3.setPointSize(14);
        lineEdit_NumOfBitsWrite->setFont(font3);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 40, 121, 31));
        label_5->setFont(font2);
        lineEdit_PulseWidthWrite = new QLineEdit(groupBox);
        lineEdit_PulseWidthWrite->setObjectName(QString::fromUtf8("lineEdit_PulseWidthWrite"));
        lineEdit_PulseWidthWrite->setGeometry(QRect(390, 40, 61, 31));
        lineEdit_PulseWidthWrite->setFont(font3);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(530, 40, 51, 31));
        label_6->setFont(font2);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(880, 40, 51, 31));
        label_7->setFont(font2);
        lineEdit_PulseIntervalWrite = new QLineEdit(groupBox);
        lineEdit_PulseIntervalWrite->setObjectName(QString::fromUtf8("lineEdit_PulseIntervalWrite"));
        lineEdit_PulseIntervalWrite->setGeometry(QRect(740, 40, 61, 31));
        lineEdit_PulseIntervalWrite->setFont(font3);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(600, 40, 141, 31));
        label_8->setFont(font2);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 90, 111, 31));
        label_9->setFont(font2);
        lineEdit_WiegandDataWrite = new QLineEdit(groupBox);
        lineEdit_WiegandDataWrite->setObjectName(QString::fromUtf8("lineEdit_WiegandDataWrite"));
        lineEdit_WiegandDataWrite->setGeometry(QRect(140, 90, 311, 31));
        lineEdit_WiegandDataWrite->setFont(font3);
        pushButton_WriteWiegand = new QPushButton(groupBox);
        pushButton_WriteWiegand->setObjectName(QString::fromUtf8("pushButton_WriteWiegand"));
        pushButton_WriteWiegand->setGeometry(QRect(760, 140, 171, 31));
        pushButton_WriteWiegand->setFont(font2);
        pushButton_WiegandSetConfig = new QPushButton(groupBox);
        pushButton_WiegandSetConfig->setObjectName(QString::fromUtf8("pushButton_WiegandSetConfig"));
        pushButton_WiegandSetConfig->setGeometry(QRect(250, 140, 141, 31));
        pushButton_WiegandSetConfig->setFont(font2);
        pushButton_WiegandGetConfig = new QPushButton(groupBox);
        pushButton_WiegandGetConfig->setObjectName(QString::fromUtf8("pushButton_WiegandGetConfig"));
        pushButton_WiegandGetConfig->setGeometry(QRect(410, 140, 141, 31));
        pushButton_WiegandGetConfig->setFont(font2);
        pushButton_WiegandAutoDetect = new QPushButton(groupBox);
        pushButton_WiegandAutoDetect->setObjectName(QString::fromUtf8("pushButton_WiegandAutoDetect"));
        pushButton_WiegandAutoDetect->setGeometry(QRect(580, 140, 151, 31));
        pushButton_WiegandAutoDetect->setFont(font2);
        lineEdit_PulseIntervalRead = new QLineEdit(groupBox);
        lineEdit_PulseIntervalRead->setObjectName(QString::fromUtf8("lineEdit_PulseIntervalRead"));
        lineEdit_PulseIntervalRead->setEnabled(false);
        lineEdit_PulseIntervalRead->setGeometry(QRect(810, 40, 61, 31));
        lineEdit_PulseIntervalRead->setFont(font3);
        lineEdit_PulseWidthRead = new QLineEdit(groupBox);
        lineEdit_PulseWidthRead->setObjectName(QString::fromUtf8("lineEdit_PulseWidthRead"));
        lineEdit_PulseWidthRead->setEnabled(false);
        lineEdit_PulseWidthRead->setGeometry(QRect(460, 40, 61, 31));
        lineEdit_PulseWidthRead->setFont(font3);
        lineEdit_NumOfBitsRead = new QLineEdit(groupBox);
        lineEdit_NumOfBitsRead->setObjectName(QString::fromUtf8("lineEdit_NumOfBitsRead"));
        lineEdit_NumOfBitsRead->setEnabled(false);
        lineEdit_NumOfBitsRead->setGeometry(QRect(200, 40, 51, 31));
        lineEdit_NumOfBitsRead->setFont(font3);
        lineEdit_WiegandDataRead = new QLineEdit(groupBox);
        lineEdit_WiegandDataRead->setObjectName(QString::fromUtf8("lineEdit_WiegandDataRead"));
        lineEdit_WiegandDataRead->setEnabled(false);
        lineEdit_WiegandDataRead->setGeometry(QRect(560, 90, 371, 31));
        lineEdit_WiegandDataRead->setFont(font3);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 140, 101, 31));
        label_12->setFont(font2);
        spinBox_ChannelWrite = new QSpinBox(groupBox);
        spinBox_ChannelWrite->setObjectName(QString::fromUtf8("spinBox_ChannelWrite"));
        spinBox_ChannelWrite->setGeometry(QRect(120, 140, 51, 31));
        QFont font4;
        font4.setPointSize(14);
        spinBox_ChannelWrite->setFont(font4);
        spinBox_ChannelWrite->setMinimum(1);
        spinBox_ChannelWrite->setMaximum(2);
        spinBox_ChannelWrite->setValue(1);
        lineEdit_ChannelRead = new QLineEdit(groupBox);
        lineEdit_ChannelRead->setObjectName(QString::fromUtf8("lineEdit_ChannelRead"));
        lineEdit_ChannelRead->setEnabled(false);
        lineEdit_ChannelRead->setGeometry(QRect(180, 140, 41, 31));
        lineEdit_ChannelRead->setFont(font3);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(460, 90, 81, 31));
        label_13->setFont(font2);
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 390, 601, 131));
        groupBox_3->setFont(font2);
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 30, 71, 31));
        label_18->setFont(font2);
        lineEdit_GPI1 = new QLineEdit(groupBox_3);
        lineEdit_GPI1->setObjectName(QString::fromUtf8("lineEdit_GPI1"));
        lineEdit_GPI1->setEnabled(false);
        lineEdit_GPI1->setGeometry(QRect(90, 30, 51, 31));
        lineEdit_GPI1->setFont(font3);
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(160, 30, 71, 31));
        label_19->setFont(font2);
        lineEdit_GPI2 = new QLineEdit(groupBox_3);
        lineEdit_GPI2->setObjectName(QString::fromUtf8("lineEdit_GPI2"));
        lineEdit_GPI2->setEnabled(false);
        lineEdit_GPI2->setGeometry(QRect(230, 30, 51, 31));
        lineEdit_GPI2->setFont(font3);
        lineEdit_GPO2 = new QLineEdit(groupBox_3);
        lineEdit_GPO2->setObjectName(QString::fromUtf8("lineEdit_GPO2"));
        lineEdit_GPO2->setEnabled(true);
        lineEdit_GPO2->setGeometry(QRect(540, 30, 51, 31));
        lineEdit_GPO2->setFont(font3);
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(320, 30, 71, 31));
        label_20->setFont(font2);
        lineEdit_GPO1 = new QLineEdit(groupBox_3);
        lineEdit_GPO1->setObjectName(QString::fromUtf8("lineEdit_GPO1"));
        lineEdit_GPO1->setEnabled(true);
        lineEdit_GPO1->setGeometry(QRect(400, 30, 51, 31));
        lineEdit_GPO1->setFont(font3);
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(460, 30, 71, 31));
        label_21->setFont(font2);
        pushButton_WriteGPO1 = new QPushButton(groupBox_3);
        pushButton_WriteGPO1->setObjectName(QString::fromUtf8("pushButton_WriteGPO1"));
        pushButton_WriteGPO1->setGeometry(QRect(360, 80, 111, 31));
        pushButton_WriteGPO1->setFont(font);
        pushButton_WriteGPO2 = new QPushButton(groupBox_3);
        pushButton_WriteGPO2->setObjectName(QString::fromUtf8("pushButton_WriteGPO2"));
        pushButton_WriteGPO2->setGeometry(QRect(480, 80, 111, 31));
        pushButton_WriteGPO2->setFont(font);
        pushButton_WriteGPO12 = new QPushButton(groupBox_3);
        pushButton_WriteGPO12->setObjectName(QString::fromUtf8("pushButton_WriteGPO12"));
        pushButton_WriteGPO12->setGeometry(QRect(220, 80, 131, 31));
        pushButton_WriteGPO12->setFont(font);
        pushButton_USBPowerOff = new QPushButton(groupBox_3);
        pushButton_USBPowerOff->setObjectName(QString::fromUtf8("pushButton_USBPowerOff"));
        pushButton_USBPowerOff->setGeometry(QRect(0, 80, 91, 31));
        pushButton_USBPowerOff->setFont(font);
        pushButton_USBPowerOn = new QPushButton(groupBox_3);
        pushButton_USBPowerOn->setObjectName(QString::fromUtf8("pushButton_USBPowerOn"));
        pushButton_USBPowerOn->setGeometry(QRect(100, 80, 81, 31));
        pushButton_USBPowerOn->setFont(font);
        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(660, 390, 331, 131));
        groupBox_4->setFont(font2);
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 40, 131, 81));
        groupBox_5->setFont(font);
        radioButton_Normal = new QRadioButton(groupBox_5);
        radioButton_Normal->setObjectName(QString::fromUtf8("radioButton_Normal"));
        radioButton_Normal->setGeometry(QRect(10, 20, 101, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(12);
        radioButton_Normal->setFont(font5);
        radioButton_Abnormal = new QRadioButton(groupBox_5);
        radioButton_Abnormal->setObjectName(QString::fromUtf8("radioButton_Abnormal"));
        radioButton_Abnormal->setGeometry(QRect(10, 50, 101, 21));
        QFont font6;
        font6.setPointSize(12);
        radioButton_Abnormal->setFont(font6);
        radioButton_Abnormal->setChecked(true);
        spinBox_RelayInterval = new QSpinBox(groupBox_4);
        spinBox_RelayInterval->setObjectName(QString::fromUtf8("spinBox_RelayInterval"));
        spinBox_RelayInterval->setGeometry(QRect(150, 50, 81, 31));
        spinBox_RelayInterval->setFont(font4);
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(150, 20, 71, 21));
        label_23->setFont(font4);
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(240, 50, 81, 21));
        label_24->setFont(font4);
        pushButton_WriteRelay = new QPushButton(groupBox_4);
        pushButton_WriteRelay->setObjectName(QString::fromUtf8("pushButton_WriteRelay"));
        pushButton_WriteRelay->setGeometry(QRect(160, 90, 151, 31));
        pushButton_WriteRelay->setFont(font2);
        label_25 = new QLabel(Dialog);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(220, 550, 781, 21));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_25->setPalette(palette);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial"));
        font7.setPointSize(11);
        label_25->setFont(font7);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_Open->setText(QApplication::translate("Dialog", "Open", 0, QApplication::UnicodeUTF8));
        pushButton_Close->setText(QApplication::translate("Dialog", "Close", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "Wiegand", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "Num of Bits:", 0, QApplication::UnicodeUTF8));
        lineEdit_NumOfBitsWrite->setText(QApplication::translate("Dialog", "26", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "Pulse Width:", 0, QApplication::UnicodeUTF8));
        lineEdit_PulseWidthWrite->setText(QApplication::translate("Dialog", "100", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "uSec", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "uSec", 0, QApplication::UnicodeUTF8));
        lineEdit_PulseIntervalWrite->setText(QApplication::translate("Dialog", "1100", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "Pulse Interval:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "Write Data:", 0, QApplication::UnicodeUTF8));
        lineEdit_WiegandDataWrite->setText(QApplication::translate("Dialog", "12 AB 34 C3", 0, QApplication::UnicodeUTF8));
        pushButton_WriteWiegand->setText(QApplication::translate("Dialog", "Write Wiegand", 0, QApplication::UnicodeUTF8));
        pushButton_WiegandSetConfig->setText(QApplication::translate("Dialog", "Set Config", 0, QApplication::UnicodeUTF8));
        pushButton_WiegandGetConfig->setText(QApplication::translate("Dialog", "Get Config", 0, QApplication::UnicodeUTF8));
        pushButton_WiegandAutoDetect->setText(QApplication::translate("Dialog", "Auto Detect", 0, QApplication::UnicodeUTF8));
        lineEdit_PulseIntervalRead->setText(QString());
        lineEdit_PulseWidthRead->setText(QString());
        lineEdit_NumOfBitsRead->setText(QString());
        lineEdit_WiegandDataRead->setText(QString());
        label_12->setText(QApplication::translate("Dialog", "Channel:", 0, QApplication::UnicodeUTF8));
        lineEdit_ChannelRead->setText(QString());
        label_13->setText(QApplication::translate("Dialog", "(Hexa)", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Dialog", "GPIO", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Dialog", "GPI 1:", 0, QApplication::UnicodeUTF8));
        lineEdit_GPI1->setText(QApplication::translate("Dialog", "Low", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Dialog", "GPI 2:", 0, QApplication::UnicodeUTF8));
        lineEdit_GPI2->setText(QApplication::translate("Dialog", "Low", 0, QApplication::UnicodeUTF8));
        lineEdit_GPO2->setText(QApplication::translate("Dialog", "High", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Dialog", "GPO 1:", 0, QApplication::UnicodeUTF8));
        lineEdit_GPO1->setText(QApplication::translate("Dialog", "High", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Dialog", "GPO 2:", 0, QApplication::UnicodeUTF8));
        pushButton_WriteGPO1->setText(QApplication::translate("Dialog", "Write GPO1", 0, QApplication::UnicodeUTF8));
        pushButton_WriteGPO2->setText(QApplication::translate("Dialog", "Write GPO2", 0, QApplication::UnicodeUTF8));
        pushButton_WriteGPO12->setText(QApplication::translate("Dialog", "Write GPO12", 0, QApplication::UnicodeUTF8));
        pushButton_USBPowerOff->setText(QApplication::translate("Dialog", "USB OFF", 0, QApplication::UnicodeUTF8));
        pushButton_USBPowerOn->setText(QApplication::translate("Dialog", "USB ON", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Dialog", "Relay", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Dialog", "Value", 0, QApplication::UnicodeUTF8));
        radioButton_Normal->setText(QApplication::translate("Dialog", "Normal", 0, QApplication::UnicodeUTF8));
        radioButton_Abnormal->setText(QApplication::translate("Dialog", "Abnormal", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Dialog", "Interval: ", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Dialog", "(0.1 sec)", 0, QApplication::UnicodeUTF8));
        pushButton_WriteRelay->setText(QApplication::translate("Dialog", "Write Relay", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Dialog", "* Relay Interval: after this seconds, it will return to previous state. If the interval is 0, it will not return to the previous state. ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
