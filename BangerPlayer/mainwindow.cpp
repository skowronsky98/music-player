#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->userlabel->setText(DataStore::login);


    player = new QMediaPlayer(this);
    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &MainWindow::on_durationChanged);

    SetupVolumeSlider();

    library = new QMediaPlaylist(this);
    userLibrary = new Playlist(this);

    dbConnection = new DBConnection(this);
    dbConnection->GetUserLibrary(userLibrary);
    //userLibrary->ShowPlaylist();

    userLibrary->SetPlaylist(library,player);
    dbConnection->CloseConnection();

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

void MainWindow::on_volumeSlider_valueChanged(int value)
{
    if(value == 0)
        ui->volumeBtn->setStyleSheet("border-image:url("+ muteImageUrl +");");
    else
        ui->volumeBtn->setStyleSheet("border-image:url("+ volumeImageUrl +");");
}

void MainWindow::on_libraryBtn_clicked()
{
    ui->frame->setCurrentIndex(0);
}

void MainWindow::on_playlistsBtn_clicked()
{
    ui->frame->setCurrentIndex(1);
}

void MainWindow::on_searchBtn_clicked()
{
    ui->frame->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked()
{
    //Debuging Button



}

void MainWindow::on_durationChanged(qint64 position)
{
    ui->songSlider->setMaximum((int)position);
}

void MainWindow::on_positionChanged(qint64 position)
{
    ui->songSlider->setValue((int)position);
    //if(player->duration() != 0 && position == player->duration())
        //on_playBtn_clicked();
}

void MainWindow::on_songSlider_sliderMoved(int position)
{
    player->setPosition(position);
}


void MainWindow::on_nextSongBtn_clicked()
{
    library->next();
}

void MainWindow::on_prevSongBtn_clicked()
{
    library->previous();
}

void MainWindow::SetupVolumeSlider()
{
    ui->volumeSlider->setRange(0,100);
    ui->volumeSlider->setFixedWidth(100);
    ui->volumeSlider->setValue(50);
    connect(ui->volumeSlider, SIGNAL(valueChanged(int)),player, SLOT(setVolume(int)));
}
