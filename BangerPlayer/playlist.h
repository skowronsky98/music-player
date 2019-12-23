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
    void GetUserLibraryData(int musicId, QString musicTitle, QString musicSource, QString albumTitle, QString musicAuthorN, QString musicAuthorS);
    void ShowPlaylist();
    QString playlistName;
    QList<Music> listOfSongs;
    void SetPlaylist(QMediaPlaylist *playlist, QMediaPlayer *player);

    const QList<Music> & getSongs();
    const Music & getCurrentMusic(QMediaPlaylist * library);
    QString getAuthor(QMediaPlaylist * library){
        auto & lib = listOfSongs[library->currentIndex()];
        return lib.authorName + " " + lib.authorSurname;
    }
signals:

public slots:
};

#endif // PLAYLIST_H
