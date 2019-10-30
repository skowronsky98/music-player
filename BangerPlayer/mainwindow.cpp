#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));

    player->setMedia(QUrl("https://file-examples.com/wp-content/uploads/2017/11/file_example_MP3_700KB.mp3"));
    player->setVolume(30);
    player->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}

