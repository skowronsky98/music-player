#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <playlist.h>


class DBConnection : public QObject
{
    Q_OBJECT
public:
    explicit DBConnection(QObject *parent = nullptr);
    void CloseConnection();
    void GetUserLibrary(Playlist *userLibrary);
private:
    QSqlDatabase database;
    bool ok;


signals:

public slots:
};

#endif // DBCONNECTION_H
