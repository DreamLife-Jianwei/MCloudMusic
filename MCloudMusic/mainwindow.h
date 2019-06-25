#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QMouseEvent>
#include <QPushButton>
#include <QListWidgetItem>
#include <QListWidget>
#include <QScrollArea>

#include "musicform.h"
#include "playlistform.h"
#include "personform.h"
#include "messageform.h"
#include "picturewallform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_max_clicked();

    void on_pushButton_min_clicked();

    void on_pushButton_mini_clicked();

    void on_pushButton_set_clicked();

    void on_pushButton_message_clicked();

    void on_pushButton_skin_clicked();

    void on_pushButton_people_1_clicked();

    void on_pushButton_search_clicked();

    void on_pushButton_last_clicked();

    void on_pushButton_play_clicked();

    void on_pushButton_next_clicked();

    void on_pushButton_horn_clicked();

    void on_pushButton_circulation_clicked();

    void on_pushButton_lyric_clicked();

    void on_pushButton_list_clicked();

    void slot_musicform_resize(bool full_show_state);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_listWidget_mymusic_itemClicked(QListWidgetItem *item);

    void slot_my_Create_Music_List_itemClicked(QListWidgetItem *item);

    void slot_my_my_Collect_Music_List_itemClicked(QListWidgetItem *item);

    void on_pushButton_add_clicked();

    void on_pushButton_unfold_clicked();

    void on_pushButton_unfold_collect_clicked();

    void on_pushButton_people_clicked();

private:
    //绘制背景函数
    void paintEvent(QPaintEvent* event);
    //鼠标按下
    void mousePressEvent(QMouseEvent* event);
    //鼠标移动
    void mouseMoveEvent(QMouseEvent* event);
    //鼠标释放
    void mouseReleaseEvent(QMouseEvent* event);


private:
    Ui::MainWindow *ui;
    QPushButton *btn_search;






    MusicForm *musicform = NULL;                //音乐名片模块
    PlayListForm *playlistform = NULL;          //播放列表模块
    PersonForm *personform = NULL;              //个人信息按钮
    MessageForm *messageform = NULL;            //消息界面
    PictureWallForm *picturewall = NULL;


    QScrollArea *scrollArea = NULL;             //滚动区域
    QListWidget *my_Create_Music_List = NULL;   //创建的歌单
    QListWidget *my_Collect_Music_List = NULL;  //收藏的歌单


};

#endif // MAINWINDOW_H
