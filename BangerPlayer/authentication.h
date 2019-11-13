#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QObject>
#include <dbconnection.h>
#include <datastore.h>

class Authentication : public QObject
{
    Q_OBJECT
public:
    explicit Authentication(QObject *parent = nullptr);
    bool Login(QString login, QString password);
    bool Register(QString login,QString password,QString name,QString surname,QString nickname);
    bool SendData(QString login);
    DBConnection db;

signals:

public slots:
};

#endif // AUTHENTICATION_H
