#include "dbconnection.h"

DBConnection::DBConnection(QObject *parent) : QObject(parent)
{
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("54.38.50.59");
    database.setDatabaseName("www2699_bangerplayer");
    database.setUserName("www2699_bangerplayer");
    database.setPassword("Fda7lMGXw9Ri3UHXU6sx");
    ok = database.open();
    qDebug() << endl << "DBConnection: " << ok << endl;
}

void DBConnection::CloseConnection()
{
    database.close();
}

void DBConnection::GetUserLibrary(Playlist *userLibrary)
{
    QSqlQuery query("SELECT m.id, m.title, m.source_song, a.name FROM user_library l JOIN global_library m on l.id_music = m.id JOIN users u on u.id = l.id_user JOIN authors a on a.id = m.id_author WHERE u.id = 1");
       while (query.next()) {
           int musicId = query.value(0).toInt();
           QString musicTitle = query.value(1).toString();
           QString musicSource = query.value(2).toString();
           QString albumTitle = query.value(3).toString();
           userLibrary->GetUserLibraryData(musicId,musicTitle,musicSource,"Library");
       }


}



