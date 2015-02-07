#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QTimer *timer;
    
private:
    Ui::MainWindow *ui;

private slots:
    void timerslot();
};

#endif // MAINWINDOW_H
