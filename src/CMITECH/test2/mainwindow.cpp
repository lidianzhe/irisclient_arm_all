#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include "eventthread.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnRelay,SIGNAL(clicked()),this,SLOT(btnRelay_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Open_clicked()
{
    int ret=ema_open(m_emaHandle);
    if(ret==EMA_SUCCESS)
        ui->plainTextEdit_Log->appendPlainText("open success");
    else
        ui->plainTextEdit_Log->appendHtml("<p color=\"red\">open error.</p>");
}

void MainWindow::btnRelay_clicked(){
    QMessageBox msgBox;
    msgBox.setText("set relay !");
    msgBox.exec();
}
