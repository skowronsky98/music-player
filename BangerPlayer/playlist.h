#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QObject>
#include <QList>
#include "author.h"
#include "music.h"

class Playlist : public QObject
{
    Q_OBJECT
public:
    explicit Playlist(QObject *parent = nullptr);
protected:
    QString playlistName;
    QList<Music> listOfSongs;

signals:

public slots:
};

#endif // PLAYLIST_H
