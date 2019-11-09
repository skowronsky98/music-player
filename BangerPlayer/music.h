#ifndef MUSIC_H
#define MUSIC_H

#include <author.h>
#include <QObject>

class Music : public Author
{
    Q_OBJECT
public:
    explicit Music(QObject *parent = nullptr);
protected:
    QString musicName;
    int idMusic;

signals:

public slots:
};

#endif // MUSIC_H
