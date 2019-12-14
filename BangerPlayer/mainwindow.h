#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QDebug>
#include <QString>
#include <QStackedWidget>
#include <QMediaPlaylist>
#include <QMediaContent>

#include <playlist.h>
#include "dbconnection.h"
#include "datastore.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_playBtn_clicked();

    void on_volumeSlider_valueChanged(int value);

    void on_libraryBtn_clicked();

    void on_playlistsBtn_clicked();

    void on_pushButton_clicked();

    void on_durationChanged(qint64 position);

    void on_positionChanged(qint64 position);

    void on_songSlider_sliderMoved(int position);

    void on_searchBtn_clicked();

    void on_nextSongBtn_clicked();

    void on_prevSongBtn_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    Playlist *userLibrary;
    DBConnection *dbConnection;
    QMediaPlaylist *library;
    QMediaContent *content;

    void SetupVolumeSlider();
    bool clickedPlay = false;

    const QString playImageUrl = ":/img/imgPlay.png";
    const QString pauseImageUrl = ":/img/imgPause.png";
    const QString volumeImageUrl = ":/img/imgVolume.png";
    const QString muteImageUrl = ":/img/imgMute.png";
};
#endif // MAINWINDOW_H
