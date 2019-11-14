#include "authwindow.h"
#include "ui_authwindow.h"

AuthWindow::AuthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
    ui->passwordData->setEchoMode(QLineEdit::Password);
    ui->registerPasswordData->setEchoMode(QLineEdit::Password);
}

AuthWindow::~AuthWindow()
{
    delete ui;
}

void AuthWindow::on_loginOptionButton_clicked()
{
    ui->authframe->setCurrentIndex(0);
}

void AuthWindow::on_registerOptionButton_clicked()
{
    ui->authframe->setCurrentIndex(1);
}

void AuthWindow::on_loginButton_clicked()
{

    QString login = ui->loginData->text();
    QString password = ui->passwordData->text();
    if(auth.Login(login,password)){
        auth.SendData(login);
        hide();
        mainwindow = new MainWindow(this);
        mainwindow->show();
        //auth.db.CloseConnection();
    }
    else{
        mess.setText("Nie ma takiego użytkownika!");
        mess.exec();
    }

}

void AuthWindow::on_registerButton_clicked()
{
    QString login = ui->registerLoginData->text();
    QString password = ui->registerPasswordData->text();
    QString name = ui->registerNameData->text();
    QString surname = ui->registerSurnameData->text();
    QString nick = ui->registerNicknameData->text();

    if(auth.Register(login,password,name,surname,nick)){
        ui->authframe->setCurrentIndex(0);
        mess.setText("Udalo sie utowrzyc konto!");
        mess.exec();
        auth.db.CloseConnection();
    }
    else{
        mess.setText("Nie udalo sie utworzyc konta :(");
        mess.exec();
    }
}
