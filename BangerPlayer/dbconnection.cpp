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
    struct dataAuthor
    {
        QString name;
        QString surname;
    };

    std::vector<dataAuthor> lista_autorow;

    int i = 0;

    QSqlQuery query2("SELECT name, surname FROM authors");
    while (query2.next())
    {
        QString authorN = query2.value(0).toString();
        QString authorS = query2.value(1).toString();

        lista_autorow.push_back({authorN, authorS});
        qDebug() << lista_autorow[i].name + " " + lista_autorow[i].surname;
        ++i;
    }

    QSqlQuery query("SELECT m.id, m.title, m.source_song, a.name FROM user_library l JOIN global_library m on l.id_music = m.id JOIN users u on u.id = l.id_user JOIN authors a on a.id = m.id_author WHERE u.id = 1");

    i = 0;
    while (query.next()) {
       int musicId = query.value(0).toInt();
       QString musicTitle = query.value(1).toString();
       QString musicSource = query.value(2).toString();
       QString albumTitle = query.value(3).toString();
       userLibrary->GetUserLibraryData(musicId,musicTitle,musicSource,"Library", lista_autorow[i].name, lista_autorow[i].surname);
       ++i;
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



