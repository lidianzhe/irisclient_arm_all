#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_dialog.h"
#include "eventthread.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_Open_clicked();
    void btnRelay_clicked();

private:
    Ui::MainWindow *ui;
    EMA_HANDLE m_emaHandle;

};

#endif // MAINWINDOW_H
