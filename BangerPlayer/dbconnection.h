#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>

class DBConnection : public QObject
{
    Q_OBJECT
public:
    explicit DBConnection(QObject *parent = nullptr);
private:
    QSqlDatabase database;
    bool ok;

signals:

public slots:
};

#endif // DBCONNECTION_H
