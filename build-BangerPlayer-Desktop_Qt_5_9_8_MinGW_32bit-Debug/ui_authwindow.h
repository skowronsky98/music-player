/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthWindow
{
public:
    QWidget *centralwidget;
    QPushButton *loginOptionButton;
    QPushButton *registerOptionButton;
    QStackedWidget *authframe;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QPushButton *loginButton;
    QLineEdit *loginData;
    QLineEdit *passwordData;
    QWidget *page_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *registerButton;
    QLineEdit *registerLoginData;
    QLineEdit *registerPasswordData;
    QLineEdit *registerNameData;
    QLineEdit *registerSurnameData;
    QLineEdit *registerNicknameData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AuthWindow)
    {
        if (AuthWindow->objectName().isEmpty())
            AuthWindow->setObjectName(QStringLiteral("AuthWindow"));
        AuthWindow->resize(800, 600);
        centralwidget = new QWidget(AuthWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        loginOptionButton = new QPushButton(centralwidget);
        loginOptionButton->setObjectName(QStringLiteral("loginOptionButton"));
        loginOptionButton->setGeometry(QRect(230, 80, 88, 27));
        registerOptionButton = new QPushButton(centralwidget);
        registerOptionButton->setObjectName(QStringLiteral("registerOptionButton"));
        registerOptionButton->setGeometry(QRect(450, 80, 88, 27));
        authframe = new QStackedWidget(centralwidget);
        authframe->setObjectName(QStringLiteral("authframe"));
        authframe->setGeometry(QRect(160, 150, 441, 331));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 71, 20));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 71, 21));
        loginButton = new QPushButton(page);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(140, 180, 171, 27));
        loginData = new QLineEdit(page);
        loginData->setObjectName(QStringLiteral("loginData"));
        loginData->setGeometry(QRect(140, 70, 231, 27));
        passwordData = new QLineEdit(page);
        passwordData->setObjectName(QStringLiteral("passwordData"));
        passwordData->setGeometry(QRect(140, 110, 231, 27));
        authframe->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 50, 91, 21));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 90, 91, 21));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 130, 91, 21));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 170, 91, 21));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 210, 91, 21));
        registerButton = new QPushButton(page_2);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(150, 290, 161, 27));
        registerLoginData = new QLineEdit(page_2);
        registerLoginData->setObjectName(QStringLiteral("registerLoginData"));
        registerLoginData->setGeometry(QRect(180, 50, 231, 27));
        registerPasswordData = new QLineEdit(page_2);
        registerPasswordData->setObjectName(QStringLiteral("registerPasswordData"));
        registerPasswordData->setGeometry(QRect(180, 90, 231, 27));
        registerNameData = new QLineEdit(page_2);
        registerNameData->setObjectName(QStringLiteral("registerNameData"));
        registerNameData->setGeometry(QRect(180, 130, 231, 27));
        registerSurnameData = new QLineEdit(page_2);
        registerSurnameData->setObjectName(QStringLiteral("registerSurnameData"));
        registerSurnameData->setGeometry(QRect(180, 170, 231, 27));
        registerNicknameData = new QLineEdit(page_2);
        registerNicknameData->setObjectName(QStringLiteral("registerNicknameData"));
        registerNicknameData->setGeometry(QRect(180, 210, 231, 27));
        authframe->addWidget(page_2);
        AuthWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AuthWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        AuthWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AuthWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AuthWindow->setStatusBar(statusbar);

        retranslateUi(AuthWindow);

        authframe->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AuthWindow)
    {
        AuthWindow->setWindowTitle(QApplication::translate("AuthWindow", "MainWindow", Q_NULLPTR));
        loginOptionButton->setText(QApplication::translate("AuthWindow", "Logowanie", Q_NULLPTR));
        registerOptionButton->setText(QApplication::translate("AuthWindow", "Rejestracja", Q_NULLPTR));
        label->setText(QApplication::translate("AuthWindow", "Login:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AuthWindow", "Haslo:", Q_NULLPTR));
        loginButton->setText(QApplication::translate("AuthWindow", "Zaloguj", Q_NULLPTR));
        label_3->setText(QApplication::translate("AuthWindow", "Login:", Q_NULLPTR));
        label_4->setText(QApplication::translate("AuthWindow", "Haslo:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AuthWindow", "Imie:", Q_NULLPTR));
        label_6->setText(QApplication::translate("AuthWindow", "Nazwisko:", Q_NULLPTR));
        label_7->setText(QApplication::translate("AuthWindow", "Nick:", Q_NULLPTR));
        registerButton->setText(QApplication::translate("AuthWindow", "Zarejestruj", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
