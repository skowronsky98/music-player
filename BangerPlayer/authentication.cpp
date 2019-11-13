#include "authentication.h"

Authentication::Authentication(QObject *parent) : QObject(parent)
{

}
bool Authentication::Login(QString login, QString password){
    if(db.UserAuth(login,password))
        return true;
    else
        return false;
}
bool Authentication::Register(QString login,QString password,QString name,QString surname,QString nickname){
    if(db.UserAuthRegister(login,password,name,surname,nickname))
        return true;
    else
        return false;
}
bool Authentication::SendData(QString login){
    DataStore::login = db.GetUserNick(login) ;
    return true;
}
