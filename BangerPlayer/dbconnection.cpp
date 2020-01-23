#include "dbconnection.h"
#include <vector>

DBConnection::DBConnection(QObject *parent) : QObject(parent)
{

}

void DBConnection::CloseConnection()
{
    database.close();
}
bool DBConnection::Connect(){
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("54.38.50.59");
    database.setDatabaseName("www2699_bangerplayer");
    database.setUserName("www2699_bangerplayer");
    database.setPassword("Fda7lMGXw9Ri3UHXU6sx");
    ok = database.open();
    qDebug() << endl << "DBConnection: " << ok << endl;
}

void DBConnection::GetUserLibrary(Playlist *userLibrary)
{
    QSqlQuery query("SELECT m.id, m.title, m.source_song, a.name, a.surname FROM user_library l JOIN global_library m on l.id_music = m.id JOIN users u on u.id = l.id_user JOIN authors a on a.id = m.id_author WHERE u.id = 1");

    while (query.next()) {
       int musicId = query.value(0).toInt();
       QString musicTitle = query.value(1).toString();
       QString musicSource = query.value(2).toString();
       QString albumTitle = query.value(3).toString();
       QString author_surname = query.value(4).toString();

       //qDebug() << albumTitle;// << " " << musicTitle << " " << authorsa;

       userLibrary->GetUserLibraryData(musicId,musicTitle,musicSource,"Library", albumTitle, author_surname);
    }
}
bool DBConnection::UserAuth(QString login, QString password)
{
    QSqlQuery query("SELECT login, password FROM users");
    while (query.next()){
        if(query.value(0)==login)
        {
            db_login = query.value(0).toString();
            db_password = query.value(1).toString();
            if(login == db_login && password == db_password)
                return true;
            else
                return false;
            }
        }

    return false;
}
bool DBConnection::UserAuthRegister(QString login,QString password,QString name,QString surname,QString nickname){
    QSqlQuery query;
    query.prepare("INSERT INTO users(login,password,name,surname,nickname)"
                  "VALUES(:login,:password,:name,:surname,:nickname)");
    query.bindValue(":login",login);
    query.bindValue(":password",password);
    query.bindValue(":name",name);
    query.bindValue(":surname",surname);
    query.bindValue(":nickname",nickname);
    if(query.exec())
        return true;
    else
        return false;

}
QString DBConnection::GetUserNick(QString login){
    QString nick;
    QSqlQuery query("SELECT login,nickname FROM users");
    while (query.next())
    {
        if(query.value(0)==login)
        {
            nick = query.value(1).toString();
            return nick;
        }

    }
    return nick;
}



