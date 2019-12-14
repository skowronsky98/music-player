#include "music.h"


Music::Music(int mId, QString mTitle, QString mSource, QString musicAuthorN, QString musicAuthorS) : Author()
{
    musicId = mId;
    musicTitle = mTitle;
    musicSource = mSource;
    authorName = musicAuthorN;
    authorSurname = musicAuthorS;

    //qDebug() << musicId + " " + mTitle + " " + mSource + " " + musicAuthorN + " " + musicAuthorS;
}
