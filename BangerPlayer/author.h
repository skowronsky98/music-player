#ifndef AUTHOR_H
#define AUTHOR_H

#include <QObject>
#include <QString>

class Author : public QObject
{
    Q_OBJECT
public:
    explicit Author(QObject *parent = nullptr);
protected:
    int id;
    QString authorName;
    QString authorSurname;


signals:

public slots:
};

#endif // AUTHOR_H
