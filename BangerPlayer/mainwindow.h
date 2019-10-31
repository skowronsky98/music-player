#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QDebug>
#include <QString>
#include <QStackedWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_playBtn_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;

    bool clickedPlay = false;

    const QString playImageUrl = ":/img/imgPlay.png";
    const QString pauseImageUrl = ":/img/imgPause.png";
};
#endif // MAINWINDOW_H
