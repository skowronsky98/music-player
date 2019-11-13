#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QObject>
#include <QList>
#include <QDebug>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include "author.h"
#include "music.h"

class Playlist : public QObject
{
    Q_OBJECT
public:
    explicit Playlist(QObject *parent = nullptr);
    void GetUserLibraryData(int musicId, QString musicTitle, QString musicSource, QString albumTitle);
    void ShowPlaylist();
    QString playlistName;
    QList<Music> listOfSongs;
    void SetPlaylist(QMediaPlaylist *playlist, QMediaPlayer *player);

signals:

public slots:
};

#endif // PLAYLIST_H
