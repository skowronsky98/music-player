#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->userlabel->setText(DataStore::login);
    //ui->songTitle->setText("Mis Malis");

    player = new QMediaPlayer(this);
    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &MainWindow::on_durationChanged);
    connect(player, &QMediaPlayer::audioAvailableChanged, this, &MainWindow::on_songChanged);

    SetupVolumeSlider();

    library = new QMediaPlaylist(this);
    userLibrary = new Playlist(this);

    dbConnection = new DBConnection(this);
    dbConnection->GetUserLibrary(userLibrary);
    //userLibrary->ShowPlaylist();

    userLibrary->SetPlaylist(library,player);
    dbConnection->CloseConnection();
    //userLibrary->ShowPlaylist();

    QSqlQueryModel * library_query = new QSqlQueryModel();

    library_query->setQuery("SELECT l.title FROM global_library l JOIN authors a on a.id = l.id");

    ui->libraryList->setModel(library_query);
    ui->libraryList->show();

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
        ui->songTitle->setText(userLibrary->getCurrentMusic(library).musicTitle);
        ui->songAuthor->setText(userLibrary->getAuthor(library));
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

    userLibrary->ShowPlaylist();

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
    if (library->currentIndex() < userLibrary->getSongs().size() - 1)
        library->next();
    else
        library->setCurrentIndex(0);

    //ui->songTitle->setText(userLibrary->getCurrentMusic(library).musicTitle);
    //ui->songAuthor->setText(userLibrary->getAuthor(library));
}

void MainWindow::on_prevSongBtn_clicked()
{
    if (library->currentIndex() > 0)
        library->previous();
    else
        library->setCurrentIndex(userLibrary->getSongs().size() - 1);

    //ui->songTitle->setText(userLibrary->getCurrentMusic(library).musicTitle);
    //ui->songAuthor->setText(userLibrary->getAuthor(library));
}

void MainWindow::on_songChanged(bool avaible)
{
    if (library->currentIndex() == userLibrary->getSongs().size() - 1){
        ui->songTitle->setText(userLibrary->getCurrentMusic(library).musicTitle);
        ui->songAuthor->setText(userLibrary->getAuthor(library));
        is_end = true;
        //library->setCurrentIndex(0);
        //player->stop();
    }
    else
    {
        if (is_end)
        {
            library->setCurrentIndex(0);
            player->stop();
            is_end = false;
        }
        ui->songTitle->setText(userLibrary->getCurrentMusic(library).musicTitle);
        ui->songAuthor->setText(userLibrary->getAuthor(library));
    }
}

void MainWindow::SetupVolumeSlider()
{
    ui->volumeSlider->setRange(0,100);
    ui->volumeSlider->setFixedWidth(100);
    ui->volumeSlider->setValue(50);
    connect(ui->volumeSlider, SIGNAL(valueChanged(int)),player, SLOT(setVolume(int)));
}
