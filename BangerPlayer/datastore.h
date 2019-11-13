#ifndef DATASTORE_H
#define DATASTORE_H

#include "mainwindow.h"


class DataStore
{
public:
    DataStore();
    static QString login;
    static void setData(QString auth_login);
    static void getData(QString auth_login);
};

#endif // DATASTORE_H
