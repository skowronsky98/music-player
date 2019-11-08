/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton;
    QWidget *page_2;
    QLabel *playlistsTitle;
    QFrame *playerBar;
    QPushButton *playBtn;
    QLabel *songNameTxt;
    QLabel *artistNameTxt;
    QPushButton *nextSongBtn;
    QPushButton *prevSongBtn;
    QSlider *songSlider;
    QPushButton *volumeBtn;
    QSlider *volumeSlider;
    QFrame *menu;
    QPushButton *playlistsBtn;
    QPushButton *libraryBtn;
    QFrame *frame_2;
    QLabel *albumImg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 24, 24);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QStackedWidget(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(170, 0, 681, 521));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 24, 24);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        libraryTitle = new QLabel(page);
        libraryTitle->setObjectName(QString::fromUtf8("libraryTitle"));
        libraryTitle->setGeometry(QRect(30, 30, 351, 61));
        libraryTitle->setStyleSheet(QString::fromUtf8("font: 75 italic 14pt \"Arial\";\n"
"color:white;"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(169, 250, 211, 131));
        pushButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(255, 255, 127);"));
        frame->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        playlistsTitle = new QLabel(page_2);
        playlistsTitle->setObjectName(QString::fromUtf8("playlistsTitle"));
        playlistsTitle->setGeometry(QRect(30, 40, 351, 61));
        playlistsTitle->setStyleSheet(QString::fromUtf8("font: 75 italic 14pt \"Arial\";\n"
"color:white;"));
        frame->addWidget(page_2);
        playerBar = new QFrame(centralwidget);
        playerBar->setObjectName(QString::fromUtf8("playerBar"));
        playerBar->setGeometry(QRect(0, 520, 850, 80));
        playerBar->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);\n"
""));
        playerBar->setFrameShape(QFrame::StyledPanel);
        playerBar->setFrameShadow(QFrame::Raised);
        playBtn = new QPushButton(playerBar);
        playBtn->setObjectName(QString::fromUtf8("playBtn"));
        playBtn->setGeometry(QRect(420, 10, 25, 25));
        playBtn->setStyleSheet(QString::fromUtf8("\n"
"background-color: transparent;\n"
"border-image: url(:/img/imgPlay.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"\n"
""));
        playBtn->setAutoDefault(false);
        songNameTxt = new QLabel(playerBar);
        songNameTxt->setObjectName(QString::fromUtf8("songNameTxt"));
        songNameTxt->setGeometry(QRect(10, 10, 211, 31));
        songNameTxt->setStyleSheet(QString::fromUtf8("\n"
"font: 75 12pt \"Arial\";\n"
"color: white;"));
        artistNameTxt = new QLabel(playerBar);
        artistNameTxt->setObjectName(QString::fromUtf8("artistNameTxt"));
        artistNameTxt->setGeometry(QRect(10, 40, 171, 21));
        artistNameTxt->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";\n"
"color: white;"));
        nextSongBtn = new QPushButton(playerBar);
        nextSongBtn->setObjectName(QString::fromUtf8("nextSongBtn"));
        nextSongBtn->setGeometry(QRect(490, 12, 20, 20));
        nextSongBtn->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/img/imgNextSong.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));
        nextSongBtn->setAutoDefault(false);
        prevSongBtn = new QPushButton(playerBar);
        prevSongBtn->setObjectName(QString::fromUtf8("prevSongBtn"));
        prevSongBtn->setGeometry(QRect(350, 12, 20, 20));
        prevSongBtn->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/img/imgPrevSong.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));
        prevSongBtn->setAutoDefault(false);
        songSlider = new QSlider(playerBar);
        songSlider->setObjectName(QString::fromUtf8("songSlider"));
        songSlider->setGeometry(QRect(260, 50, 351, 20));
        songSlider->setStyleSheet(QString::fromUtf8(""));
        songSlider->setOrientation(Qt::Horizontal);
        volumeBtn = new QPushButton(playerBar);
        volumeBtn->setObjectName(QString::fromUtf8("volumeBtn"));
        volumeBtn->setGeometry(QRect(700, 50, 17, 17));
        volumeBtn->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/img/imgVolume.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        volumeSlider = new QSlider(playerBar);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setGeometry(QRect(730, 50, 101, 16));
        volumeSlider->setOrientation(Qt::Horizontal);
        menu = new QFrame(centralwidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(-1, -1, 171, 341));
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 18, 18);"));
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        playlistsBtn = new QPushButton(menu);
        playlistsBtn->setObjectName(QString::fromUtf8("playlistsBtn"));
        playlistsBtn->setGeometry(QRect(0, 150, 171, 51));
        playlistsBtn->setStyleSheet(QString::fromUtf8("color:white;"));
        libraryBtn = new QPushButton(menu);
        libraryBtn->setObjectName(QString::fromUtf8("libraryBtn"));
        libraryBtn->setGeometry(QRect(0, 100, 171, 51));
        libraryBtn->setStyleSheet(QString::fromUtf8("color:white;"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 349, 171, 171));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        albumImg = new QLabel(frame_2);
        albumImg->setObjectName(QString::fromUtf8("albumImg"));
        albumImg->setGeometry(QRect(0, 0, 170, 170));
        albumImg->setStyleSheet(QString::fromUtf8("image: url(:/img/imgAlbum.png);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        frame->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        libraryTitle->setText(QApplication::translate("MainWindow", "My Library", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        playlistsTitle->setText(QApplication::translate("MainWindow", "Playlists", nullptr));
        playBtn->setText(QString());
        songNameTxt->setText(QApplication::translate("MainWindow", "Song Title", nullptr));
        artistNameTxt->setText(QApplication::translate("MainWindow", "Artist", nullptr));
        nextSongBtn->setText(QString());
        prevSongBtn->setText(QString());
        volumeBtn->setText(QString());
        playlistsBtn->setText(QApplication::translate("MainWindow", "Playlists", nullptr));
        libraryBtn->setText(QApplication::translate("MainWindow", "My Library", nullptr));
        albumImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
