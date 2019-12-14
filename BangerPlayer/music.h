#ifndef MUSIC_H
#define MUSIC_H

#include <author.h>
#include <QObject>

class Music : public Author
{

public:
    explicit Music(int mId = 999, QString mTitle = "error", QString mSource = "error", QString musicAuthorN = "error", QString musicAuthorS = "error");
    QString musicTitle;
    QString musicSource;
    int musicId;

signals:

public slots:
};

#endif // MUSIC_H
