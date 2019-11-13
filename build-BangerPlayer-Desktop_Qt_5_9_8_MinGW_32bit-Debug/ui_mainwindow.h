/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *frame;
    QWidget *page;
    QLabel *libraryTitle;
    QListView *libraryList;
    QWidget *page_2;
    QLabel *playlistsTitle;
    QWidget *page_3;
    QFrame *playerBar;
    QPushButton *playBtn;
    QLabel *songNameTxt;
    QLabel *artistNameTxt;
    QPushButton *nextSongBtn;
    QPushButton *prevSongBtn;
    QSlider *songSlider;
    QPushButton *volumeBtn;
    QSlider *volumeSlider;
    QPushButton *pushButton;
    QFrame *menu;
    QPushButton *playlistsBtn;
    QPushButton *libraryBtn;
    QPushButton *searchBtn;
    QLabel *userlabel;
    QFrame *frame_2;
    QLabel *albumImg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 600);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(24, 24, 24);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QStackedWidget(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(170, 0, 681, 521));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(24, 24, 24);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        libraryTitle = new QLabel(page);
        libraryTitle->setObjectName(QStringLiteral("libraryTitle"));
        libraryTitle->setGeometry(QRect(20, 20, 351, 31));
        libraryTitle->setStyleSheet(QLatin1String("font: 75 italic 14pt \"Arial\";\n"
"color:white;"));
        libraryList = new QListView(page);
        libraryList->setObjectName(QStringLiteral("libraryList"));
        libraryList->setGeometry(QRect(0, 60, 681, 461));
        libraryList->setStyleSheet(QStringLiteral("border-color:\"transparent\";"));
        libraryList->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        frame->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        playlistsTitle = new QLabel(page_2);
        playlistsTitle->setObjectName(QStringLiteral("playlistsTitle"));
        playlistsTitle->setGeometry(QRect(30, 40, 351, 61));
        playlistsTitle->setStyleSheet(QLatin1String("font: 75 italic 14pt \"Arial\";\n"
"color:white;"));
        frame->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        frame->addWidget(page_3);
        playerBar = new QFrame(centralwidget);
        playerBar->setObjectName(QStringLiteral("playerBar"));
        playerBar->setGeometry(QRect(0, 520, 850, 80));
        playerBar->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
""));
        playerBar->setFrameShape(QFrame::StyledPanel);
        playerBar->setFrameShadow(QFrame::Raised);
        playBtn = new QPushButton(playerBar);
        playBtn->setObjectName(QStringLiteral("playBtn"));
        playBtn->setGeometry(QRect(420, 10, 25, 25));
        playBtn->setStyleSheet(QLatin1String("\n"
"background-color: transparent;\n"
"border-image: url(:/img/imgPlay.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"\n"
""));
        playBtn->setAutoDefault(false);
        songNameTxt = new QLabel(playerBar);
        songNameTxt->setObjectName(QStringLiteral("songNameTxt"));
        songNameTxt->setGeometry(QRect(10, 10, 211, 31));
        songNameTxt->setStyleSheet(QLatin1String("\n"
"font: 75 12pt \"Arial\";\n"
"color: white;"));
        artistNameTxt = new QLabel(playerBar);
        artistNameTxt->setObjectName(QStringLiteral("artistNameTxt"));
        artistNameTxt->setGeometry(QRect(10, 40, 171, 21));
        artistNameTxt->setStyleSheet(QLatin1String("font: 10pt \"Arial\";\n"
"color: white;"));
        nextSongBtn = new QPushButton(playerBar);
        nextSongBtn->setObjectName(QStringLiteral("nextSongBtn"));
        nextSongBtn->setGeometry(QRect(490, 12, 20, 20));
        nextSongBtn->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:/img/imgNextSong.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));
        nextSongBtn->setAutoDefault(false);
        prevSongBtn = new QPushButton(playerBar);
        prevSongBtn->setObjectName(QStringLiteral("prevSongBtn"));
        prevSongBtn->setGeometry(QRect(350, 12, 20, 20));
        prevSongBtn->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:/img/imgPrevSong.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));
        prevSongBtn->setAutoDefault(false);
        songSlider = new QSlider(playerBar);
        songSlider->setObjectName(QStringLiteral("songSlider"));
        songSlider->setGeometry(QRect(260, 50, 351, 20));
        songSlider->setStyleSheet(QStringLiteral(""));
        songSlider->setOrientation(Qt::Horizontal);
        volumeBtn = new QPushButton(playerBar);
        volumeBtn->setObjectName(QStringLiteral("volumeBtn"));
        volumeBtn->setGeometry(QRect(700, 50, 17, 17));
        volumeBtn->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:/img/imgVolume.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        volumeSlider = new QSlider(playerBar);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setGeometry(QRect(730, 50, 101, 16));
        volumeSlider->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(playerBar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 10, 71, 31));
        pushButton->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(255, 255, 127);"));
        menu = new QFrame(centralwidget);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(-1, -1, 171, 341));
        menu->setStyleSheet(QStringLiteral("background-color: rgb(18, 18, 18);"));
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        playlistsBtn = new QPushButton(menu);
        playlistsBtn->setObjectName(QStringLiteral("playlistsBtn"));
        playlistsBtn->setGeometry(QRect(0, 150, 171, 51));
        playlistsBtn->setStyleSheet(QStringLiteral("color:white;"));
        libraryBtn = new QPushButton(menu);
        libraryBtn->setObjectName(QStringLiteral("libraryBtn"));
        libraryBtn->setGeometry(QRect(0, 100, 171, 51));
        libraryBtn->setStyleSheet(QStringLiteral("color:white;"));
        searchBtn = new QPushButton(menu);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(0, 200, 171, 51));
        searchBtn->setStyleSheet(QStringLiteral("color:white;"));
        userlabel = new QLabel(menu);
        userlabel->setObjectName(QStringLiteral("userlabel"));
        userlabel->setGeometry(QRect(20, 20, 141, 31));
        userlabel->setStyleSheet(QLatin1String("\n"
"font: 75 17pt \"Arial\";\n"
"color: white;"));
        userlabel->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 349, 171, 171));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        albumImg = new QLabel(frame_2);
        albumImg->setObjectName(QStringLiteral("albumImg"));
        albumImg->setGeometry(QRect(0, 0, 170, 170));
        albumImg->setStyleSheet(QStringLiteral("image: url(:/img/imgAlbum.png);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        frame->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        libraryTitle->setText(QApplication::translate("MainWindow", "My Library", Q_NULLPTR));
        playlistsTitle->setText(QApplication::translate("MainWindow", "Playlists", Q_NULLPTR));
        playBtn->setText(QString());
        songNameTxt->setText(QApplication::translate("MainWindow", "Song Title", Q_NULLPTR));
        artistNameTxt->setText(QApplication::translate("MainWindow", "Artist", Q_NULLPTR));
        nextSongBtn->setText(QString());
        prevSongBtn->setText(QString());
        volumeBtn->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        playlistsBtn->setText(QApplication::translate("MainWindow", "Playlists", Q_NULLPTR));
        libraryBtn->setText(QApplication::translate("MainWindow", "My Library", Q_NULLPTR));
        searchBtn->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        userlabel->setText(QApplication::translate("MainWindow", "Uzytkownik", Q_NULLPTR));
        albumImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
