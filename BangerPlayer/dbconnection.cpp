#include "dbconnection.h"

DBConnection::DBConnection(QObject *parent) : QObject(parent)
{
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("54.38.50.59");
    database.setDatabaseName("www2699_bangerplayer");
    database.setUserName("www2699_bangerplayer");
    database.setPassword("Fda7lMGXw9Ri3UHXU6sx");
    ok = database.open();
}
