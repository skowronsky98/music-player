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
    bool UserAuth(QString login, QString password);
    bool UserAuthRegister(QString login,QString password,QString name,QString surname,QString nickname);
    QString GetUserNick(QString login);
private:
    QSqlDatabase database;
    QString db_login;
    QString db_password;
    bool ok;


signals:

public slots:
};

#endif // DBCONNECTION_H
