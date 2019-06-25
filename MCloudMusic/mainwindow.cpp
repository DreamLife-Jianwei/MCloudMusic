#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::FramelessWindowHint);

    //初始化音乐条范围和位置
    ui->horizontalSlider_music->setMaximum(100);
    ui->horizontalSlider_music->setMinimum(0);
    ui->horizontalSlider_music->setValue(50);

    //初始化音量条范围和位置
    ui->horizontalSlider_sound->setMaximum(100);
    ui->horizontalSlider_sound->setMinimum(0);
    ui->horizontalSlider_sound->setValue(30);

    //初始化音乐模块
    musicform = new MusicForm(this);
    connect(musicform,&MusicForm::full_show,this,&MainWindow::slot_musicform_resize);
    musicform->setGeometry(0,565,200,55);
    musicform->set_Music_Picture("./images/pretty_girl.png");
    musicform->set_Music_Name_Singer("我记得我爱过","何润东");
    musicform->show();

    //播放列表模块
    playlistform = new PlayListForm(this);
    playlistform->setGeometry(454,149,568,472);
    playlistform->hide();

    //主窗口tabwidgte
    ui->tabWidget_main->setTabText(0,"个性推荐");
    ui->tabWidget_main->setTabText(1,"歌单");
    ui->tabWidget_main->setTabText(2,"主播电台");
    ui->tabWidget_main->setTabText(3,"排行榜");
    ui->tabWidget_main->setTabText(4,"歌手");
    ui->tabWidget_main->setTabText(5,"最新音乐");
    ui->tabWidget_main->setStyleSheet("QTabBar::tab {background: #00000000;border: none;border-bottom: 2px solid #003c3e42;min-width: 10px;margin-right: 20px;"
                                      "padding-left:20px;padding-right:20px;padding-top:5px;padding-bottom:5px;color:#686a6e;}"
                                      "QTabBar::tab:hover {background: #3a3a3f;}"
                                      "QTabBar::tab:selected {border-color: #3a3a3f;color:#dcdde4;border-bottom-color: #dcdde4;}");


    //个性推荐里面照片墙
    picturewall = new PictureWallForm(ui->tab_tuijian);
    picturewall->setGeometry(23,0,766,220);
    picturewall->show();



    //滚动模块
    scrollArea = new QScrollArea(this);
    scrollArea->setGeometry(0,50,200,510);
    scrollArea->viewport()->setStyleSheet("background-color:transparent;");
    scrollArea->setStyleSheet("QScrollArea {background-color:transparent;border: none;}");
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollArea->setWidget(ui->widget_list);

    //展开按钮样式
    ui->pushButton_unfold->setStyleSheet("QPushButton{border-image:url(images/btn_right_1_n.png);}"
                                         "QPushButton::hover{border-image:url(images/btn_right_1_h.png);}"
                                         "QPushButton::pressed{border-image:url(images/btn_right_1_n.png);}");
    //收藏展开按钮样式
    ui->pushButton_unfold_collect->setStyleSheet("QPushButton{border-image:url(images/btn_right_1_n.png);}"
                                                 "QPushButton::hover{border-image:url(images/btn_right_1_h.png);}"
                                                 "QPushButton::pressed{border-image:url(images/btn_right_1_n.png);}");

    //推荐列表 列表样式
    ui->listWidget->setStyleSheet("QListWidget{color:rgb(173,175,178); background:rgb(25,27,31);border:0px solid gray;}"
                                  "QListWidget::Item{height:30px;border:0px solid gray;padding-left:15;}"
                                  "QListWidget::Item:hover{color:rgb(255,255,255);background:transparent;border:0px solid gray;}"
                                  "QListWidget::Item:selected{border-image:url(images/listwidget_h.png); color:rgb(255,255,255);border:0px solid gray;}"
                                  "QListWidget::Item:selected:active{background:#00FFFFFF;color:#FFFFFF;border-width:0;}"
                                  );
    //去掉滚动条
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    QListWidgetItem *add_item_1 = new QListWidgetItem(ui->listWidget);
    add_item_1->setIcon(QIcon("./images/music.png"));
    add_item_1->setText("发现音乐");


    QListWidgetItem *add_item_2 = new QListWidgetItem(ui->listWidget);
    add_item_2->setIcon(QIcon("./images/fm.png"));
    add_item_2->setText("私人FM");

    QListWidgetItem *add_item_3 = new QListWidgetItem(ui->listWidget);
    add_item_3->setIcon(QIcon("./images/video.png"));
    add_item_3->setText("MV");

    QListWidgetItem *add_item_4 = new QListWidgetItem(ui->listWidget);
    add_item_4->setIcon(QIcon("./images/friend.png"));
    add_item_4->setText("朋友");
    //我的音乐列表
    ui->listWidget_mymusic->setStyleSheet("QListWidget{color:rgb(173,175,178); background:rgb(25,27,31);border:0px solid gray;}"
                                          "QListWidget::Item{height:30px;border:0px solid gray;padding-left:15;}"
                                          "QListWidget::Item:hover{color:rgb(255,255,255);background:transparent;border:0px solid gray;}"
                                          "QListWidget::Item:selected{border-image:url(images/listwidget_h.png); color:rgb(255,255,255);border:0px solid gray;}"
                                          "QListWidget::Item:selected:active{background:#00FFFFFF;color:#FFFFFF;border-width:0;}");
    //去掉滚动条
    ui->listWidget_mymusic->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget_mymusic->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QListWidgetItem *add_item_5 = new QListWidgetItem(ui->listWidget_mymusic);
    add_item_5->setIcon(QIcon("./images/music_1.png"));
    add_item_5->setText("本地音乐");
    QListWidgetItem *add_item_6 = new QListWidgetItem(ui->listWidget_mymusic);
    add_item_6->setIcon(QIcon("./images/download.png"));
    add_item_6->setText("下载管理");

    QListWidgetItem *add_item_7 = new QListWidgetItem(ui->listWidget_mymusic);
    add_item_7->setIcon(QIcon("./images/yun.png"));
    add_item_7->setText("我的音乐云盘");

    QListWidgetItem *add_item_8 = new QListWidgetItem(ui->listWidget_mymusic);
    add_item_8->setIcon(QIcon("./images/diantai.png"));
    add_item_8->setText("我的电台");

    QListWidgetItem *add_item_9 = new QListWidgetItem(ui->listWidget_mymusic);
    add_item_9->setIcon(QIcon("./images/shoucang.png"));
    add_item_9->setText("我的搜藏");
    //创建的歌单
    my_Create_Music_List = new QListWidget(ui->widget_list);
    connect(my_Create_Music_List,&QListWidget::itemClicked,this,&MainWindow::slot_my_Create_Music_List_itemClicked);
    my_Create_Music_List->setStyleSheet("QListWidget{color:rgb(173,175,178); background:rgb(25,27,31);border:0px solid gray;}"
                                        "QListWidget::Item{height:30px;border:0px solid gray;padding-left:15;}"
                                        "QListWidget::Item:hover{color:rgb(255,255,255);background:transparent;border:0px solid gray;}"
                                        "QListWidget::Item:selected{border-image:url(images/listwidget_h.png); color:rgb(255,255,255);border:0px solid gray;}"
                                        "QListWidget::Item:selected:active{background:#00FFFFFF;color:#FFFFFF;border-width:0;}");
    //去掉滚动条
    my_Create_Music_List->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    my_Create_Music_List->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    my_Create_Music_List->hide();

    //创建列表测试
    QListWidgetItem *add_item_10 = new QListWidgetItem(my_Create_Music_List);
    add_item_10->setIcon(QIcon("./images/musicform/btn_like_n.png"));
    add_item_10->setText("我喜欢的音乐");
    QListWidgetItem *add_item_11 = new QListWidgetItem(my_Create_Music_List);
    add_item_11->setIcon(QIcon("./images/lock.png"));
    add_item_11->setText("我的音乐");

    QListWidgetItem *add_item_12 = new QListWidgetItem(my_Create_Music_List);
    add_item_12->setIcon(QIcon("./images/musiclist.png"));
    add_item_12->setText("我创建的歌单1");

    QListWidgetItem *add_item_13 = new QListWidgetItem(my_Create_Music_List);
    add_item_13->setIcon(QIcon("./images/musiclist.png"));
    add_item_13->setText("我创建的歌单2");

    QListWidgetItem *add_item_14 = new QListWidgetItem(my_Create_Music_List);
    add_item_14->setIcon(QIcon("./images/musiclist.png"));
    add_item_14->setText("我创建的歌单3");



    //收藏的歌单
    my_Collect_Music_List = new QListWidget(ui->widget_list);
    connect(my_Collect_Music_List,&QListWidget::itemClicked,this,&MainWindow::slot_my_my_Collect_Music_List_itemClicked);
    my_Collect_Music_List->setStyleSheet("QListWidget{color:rgb(173,175,178); background:rgb(25,27,31);border:0px solid gray;}"
                                         "QListWidget::Item{height:30px;border:0px solid gray;padding-left:15;}"
                                         "QListWidget::Item:hover{color:rgb(255,255,255);background:transparent;border:0px solid gray;}"
                                         "QListWidget::Item:selected{border-image:url(images/listwidget_h.png); color:rgb(255,255,255);border:0px solid gray;}"
                                         "QListWidget::Item:selected:active{background:#00FFFFFF;color:#FFFFFF;border-width:0;}");
    //去掉滚动条
    my_Collect_Music_List->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    my_Collect_Music_List->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    my_Collect_Music_List->hide();

    //收藏歌单测试
    QListWidgetItem *add_item_15 = new QListWidgetItem(my_Collect_Music_List);
    add_item_15->setIcon(QIcon("./images/musiclist.png"));
    add_item_15->setText("我收藏的歌单1");

    QListWidgetItem *add_item_16 = new QListWidgetItem(my_Collect_Music_List);
    add_item_16->setIcon(QIcon("./images/musiclist.png"));
    add_item_16->setText("我收藏的歌单2");

    QListWidgetItem *add_item_17 = new QListWidgetItem(my_Collect_Music_List);
    add_item_17->setIcon(QIcon("./images/musiclist.png"));
    add_item_17->setText("我收藏的歌单3");


}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
 * 绘制函数
 * 绘制程序北京
 */
void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter_mainback(this);
    painter_mainback.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/mianwindow/images/mainback.png"));
    ui->pushButton_people_1->setMask(QRegion(0,0,25,25,QRegion::Ellipse));              //设置遮罩

}
/*
 * 鼠标按下操作
 * 记录当前坐标
 */
static QPoint last(0,0);        //保存坐标
const int TITLE_HEIGHT = 50;    //这里也可以使用宏定义，保存标题高度，也就是鼠标点击区域的高度
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->y()<TITLE_HEIGHT)
    {
        last = event->globalPos();
    }
}
/*
 * 鼠标移动函数
 * 这里实时修改窗口的坐标
 */
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->y()<TITLE_HEIGHT)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        last = event->globalPos();
        this->move(this->x()+dx,this->y()+dy);
    }
}
/*
 * 鼠标释放函数
 */
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->y()<TITLE_HEIGHT)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        this->move(this->x()+dx,this->y()+dy);
    }
}
/*
 * 关闭按钮槽函数
 */
void MainWindow::on_pushButton_close_clicked()
{
    this->close();
}
/*
 * 最大化按钮参函数
 */
void MainWindow::on_pushButton_max_clicked()
{

}
/*
 * 最小化槽函数
 */
void MainWindow::on_pushButton_min_clicked()
{
    this->showMinimized();
}
/*
 * 迷你槽函数
 */
void MainWindow::on_pushButton_mini_clicked()
{

}
/*
 * 设置按钮槽函数
 */
void MainWindow::on_pushButton_set_clicked()
{

}
/*
 * 消息按钮槽函数
 */
void MainWindow::on_pushButton_message_clicked()
{
    if(messageform)
    {
        if(messageform->isHidden())
        {
            if(personform)
            {
                if(!personform->isHidden())
                {
                    personform->hide();
                }
            }
            messageform->show();
        }
        else
        {
            messageform->hide();
        }
    }
    else
    {
        messageform = new MessageForm(this);
        messageform->setGeometry(672,40,350,591);
        messageform->raise();
        if(personform)
        {
            if(!personform->isHidden())
            {
                personform->hide();
            }
        }
        messageform->show();
    }

}
/*
 * 皮肤主题按钮槽函数
 */
void MainWindow::on_pushButton_skin_clicked()
{

}
/*
 * 个人中心头像点击按钮
 */
void MainWindow::on_pushButton_people_1_clicked()
{

}
/*
 * 搜索按钮
 */
void MainWindow::on_pushButton_search_clicked()
{

}
/*
 * 上一曲按钮
 */
void MainWindow::on_pushButton_last_clicked()
{

}
/*
 * 播放暂停按钮
 */
void MainWindow::on_pushButton_play_clicked()
{

}
/*
 * 下一曲按钮
 */
void MainWindow::on_pushButton_next_clicked()
{

}
/*
 * 静音按钮
 */
void MainWindow::on_pushButton_horn_clicked()
{

}
/*
 * 循环模式按钮
 */
void MainWindow::on_pushButton_circulation_clicked()
{

}
/*
 * 显示歌词按钮
 */
void MainWindow::on_pushButton_lyric_clicked()
{

}
/*
 * 播放列表按钮
 */
void MainWindow::on_pushButton_list_clicked()
{
    if(playlistform)
    {
        if(playlistform->isHidden())
        {
            playlistform->show();
        }
        else
        {
            playlistform->hide();
        }
    }
    else
    {
        playlistform = new PlayListForm(this);
        playlistform->setGeometry(454,149,568,472);
        playlistform->show();
    }
}
/*
 * 改变音乐模块显示方式
 */
void MainWindow::slot_musicform_resize(bool full_show_state)
{
    if(full_show_state == true)
    {

        scrollArea->hide();
        if(musicform != NULL)
        {
            musicform->setGeometry(0,50,1022,570);
        }
    }
    else
    {
        scrollArea->show();
        if(musicform != NULL)
        {
            musicform->setGeometry(0,565,200,55);
        }
    }

}
/*
 * 推荐列表
 */
void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
//    qDebug()<<item->text();
    ui->listWidget_mymusic->clearSelection();
    my_Collect_Music_List->clearSelection();
    my_Create_Music_List->clearSelection();
}
/*
 * 我的音乐列表
 */
void MainWindow::on_listWidget_mymusic_itemClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
//    qDebug()<<item->text();
    ui->listWidget->clearSelection();
    my_Collect_Music_List->clearSelection();
    my_Create_Music_List->clearSelection();
}
/*
 * 我创建的列表点击
 */
void MainWindow::slot_my_Create_Music_List_itemClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
//    qDebug()<<item->text();
    ui->listWidget_mymusic->clearSelection();
    ui->listWidget->clearSelection();
    my_Collect_Music_List->clearSelection();
}
/*
 * 我收藏的列表点击
 */
void MainWindow::slot_my_my_Collect_Music_List_itemClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
//    qDebug()<<item->text();
    ui->listWidget_mymusic->clearSelection();
    ui->listWidget->clearSelection();
    my_Create_Music_List->clearSelection();
}
/*
 * 创建歌单
 */
void MainWindow::on_pushButton_add_clicked()
{

}
/*
 * 创建列表展开列表
 */
static bool unfold_Flag = false;
void MainWindow::on_pushButton_unfold_clicked()
{
    if(!unfold_Flag)
    {
        if(my_Create_Music_List->isHidden())
        {
            my_Create_Music_List->setGeometry(0,360,200,30*my_Create_Music_List->count());
            my_Create_Music_List->show();
        }
        unfold_Flag = !unfold_Flag;
        ui->pushButton_unfold->setStyleSheet("QPushButton{border-image:url(images/btn_down_n.png);}"
                                             "QPushButton::hover{border-image:url(images/btn_down_h.png);}"
                                             "QPushButton::pressed{border-image:url(images/btn_down_n.png);}");
        ui->widget_list->resize(200,ui->widget_list->height() + 30*my_Create_Music_List->count());
        ui->widget_Collect_form->setGeometry(0,my_Create_Music_List->y()+30*my_Create_Music_List->count(),200,30);
        if(!my_Collect_Music_List->isHidden())
        {
            my_Collect_Music_List->setGeometry(0,ui->widget_Collect_form->y()+30,200,30*my_Collect_Music_List->count());
        }
    }
    else
    {
        my_Create_Music_List->hide();
        unfold_Flag = !unfold_Flag;
        ui->pushButton_unfold->setStyleSheet("QPushButton{border-image:url(images/btn_right_1_n.png);}"
                                             "QPushButton::hover{border-image:url(images/btn_right_1_h.png);}"
                                             "QPushButton::pressed{border-image:url(images/btn_right_1_n.png);}");
        ui->widget_list->resize(200,ui->widget_list->height() - 30*my_Create_Music_List->count());
        ui->widget_Collect_form->setGeometry(0,370,200,30);
        if(!my_Collect_Music_List->isHidden())
        {
            my_Collect_Music_List->setGeometry(0,ui->widget_Collect_form->y()+30,200,30*my_Collect_Music_List->count());
        }
    }

}
/*
 * 收藏列表展开按钮
 */
static bool unfold_collect_Flag = false;
void MainWindow::on_pushButton_unfold_collect_clicked()
{
    if(!unfold_collect_Flag)
    {
        if(my_Collect_Music_List->isHidden())
        {
            my_Collect_Music_List->setGeometry(0,ui->widget_Collect_form->y()+30,200,30*my_Collect_Music_List->count());
            my_Collect_Music_List->show();
        }
        unfold_collect_Flag = !unfold_collect_Flag;
        ui->pushButton_unfold_collect->setStyleSheet("QPushButton{border-image:url(images/btn_down_n.png);}"
                                                     "QPushButton::hover{border-image:url(images/btn_down_h.png);}"
                                                     "QPushButton::pressed{border-image:url(images/btn_down_n.png);}");
        ui->widget_list->resize(200,ui->widget_list->height() + 30*my_Create_Music_List->count());


    }
    else
    {
        my_Collect_Music_List->hide();
        unfold_collect_Flag = !unfold_collect_Flag;
        ui->pushButton_unfold_collect->setStyleSheet("QPushButton{border-image:url(images/btn_right_1_n.png);}"
                                                     "QPushButton::hover{border-image:url(images/btn_right_1_h.png);}"
                                                     "QPushButton::pressed{border-image:url(images/btn_right_1_n.png);}");
        ui->widget_list->resize(200,ui->widget_list->height() - 30*my_Create_Music_List->count());
    }

}
/*
 * 个人信息按钮
 */
void MainWindow::on_pushButton_people_clicked()
{
    if(personform)
    {
        if(personform->isHidden())
        {
            if(messageform)
            {
                if(!messageform->isHidden())
                {
                    messageform->hide();
                }
            }
            personform->show();
        }
        else
        {
            personform->hide();
        }
    }
    else
    {
        personform = new PersonForm(this);
        personform->setGeometry(588,40,267,367);
        personform->raise();                //提升显示层数
        if(messageform)
        {
            if(!messageform->isHidden())
            {
                messageform->hide();
            }
        }
        personform->show();
    }

}
