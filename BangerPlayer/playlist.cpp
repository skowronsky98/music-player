#include "playlist.h"


Playlist::Playlist(QObject *parent) : QObject(parent)
{

}

void Playlist::GetUserLibraryData(int musicId, QString musicTitle, QString musicSource, QString albumTitle, QString musicAuthorN, QString musicAuthorS){
    this->playlistName = albumTitle;
    this->listOfSongs.push_back(Music(musicId,musicTitle,musicSource, musicAuthorN, musicAuthorS));
}

void Playlist::ShowPlaylist()
{
    for (int i = 0; i < listOfSongs.size(); ++i) {
        qDebug() << listOfSongs.at(i).musicId;
        qDebug() << listOfSongs.at(i).musicTitle;
        qDebug() << listOfSongs.at(i).musicSource;
    }
}

void Playlist::SetPlaylist(QMediaPlaylist *playlist, QMediaPlayer *player)
{
    for (int i = 0; i < listOfSongs.size(); ++i)
        playlist->addMedia(QUrl(listOfSongs[i].musicSource));
    playlist->setCurrentIndex(0);
    player->setMedia(playlist);

}

const QList<Music> & Playlist::getSongs()
{
    return listOfSongs;
}

const Music & Playlist::getCurrentMusic(QMediaPlaylist * library)
{
    return listOfSongs[library->currentIndex()];
}
