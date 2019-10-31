#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setMedia(QUrl("http://site4933.web1.titanaxe.com/music/song.mp3"));
    player->setVolume(40);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_playBtn_clicked()
{
    if(!clickedPlay){
        clickedPlay = true;
        player->play();
        ui->playBtn->setStyleSheet("border-image:url("+ pauseImageUrl +");");

    }
    else {
        clickedPlay = false;
        player->pause();
        ui->playBtn->setStyleSheet("border-image:url("+ playImageUrl +");");
    }
}



void MainWindow::on_pushButton_clicked()
{
    ui->page->hide();
    ui->page_2->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->page_2->hide();
    ui->page->show();
}
