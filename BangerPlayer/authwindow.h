#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "mainwindow.h"
#include "authentication.h"
#include <QMessageBox>
#include <playlist.h>

namespace Ui {
class AuthWindow;
}

class AuthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();

private slots:
    void on_loginButton_clicked();

    void on_loginOptionButton_clicked();

    void on_registerOptionButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::AuthWindow *ui;
    MainWindow *mainwindow;
    Authentication auth;
    QMessageBox mess;
};

#endif // AUTHWINDOW_H
