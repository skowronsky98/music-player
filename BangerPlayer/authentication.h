#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QObject>
#include <dbconnection.h>

class Authentication : public QObject
{
    Q_OBJECT
public:
    explicit Authentication(QObject *parent = nullptr);
    bool Login(QString login, QString password);
    bool Register(QString login,QString password,QString name,QString surname,QString nickname);
    DBConnection db;

signals:

public slots:
};

#endif // AUTHENTICATION_H
