#include "playlist.h"


Playlist::Playlist(QObject *parent) : QObject(parent)
{

}

void Playlist::GetUserLibraryData(int musicId, QString musicTitle, QString musicSource, QString albumTitle){
    this->playlistName = albumTitle;
    this->listOfSongs.push_back(Music(musicId,musicTitle,musicSource));
}

void Playlist::ShowPlaylist()
{
    for (int i = 0; i < listOfSongs.size(); ++i) {
        qDebug() << listOfSongs.at(i).musicId;
        qDebug() << listOfSongs.at(i).musicTitle;
        qDebug() << listOfSongs.at(i).musicSource;
    }
}
