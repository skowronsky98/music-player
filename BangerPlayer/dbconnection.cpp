#include "dbconnection.h"

DBConnection::DBConnection(QObject *parent) : QObject(parent)
{
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("127.0.0.1");
    database.setDatabaseName("siema");
    database.setUserName("root");
    database.setPassword("");
    ok = database.open();
}
