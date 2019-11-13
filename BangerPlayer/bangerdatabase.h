#ifndef BANGERDATABASE_H
#define BANGERDATABASE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QString>
#include <QMessageBox>


class BangerDataBase
{
public:
    BangerDataBase(int xd);
    void Connect();
private:

    QString msg;
};

#endif // BANGERDATABASE_H
