#include "musicform.h"
#include "ui_musicform.h"

/*
 * 构造函数
 */
MusicForm::MusicForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicForm)
{
    ui->setupUi(this);
    if(music_Like_State == false)
    {
        ui->pushButton_like->setStyleSheet("QPushButton{border-image:url(images/musicform/btn_like_n.png);}"
                                           "QPushButton::hover{border-image:url(images/musicform/btn_like_h.png);}"
                                           "QPushButton::pressed{border-image:url(images/musicform/btn_like_n.png);}");
    }
}

MusicForm::~MusicForm()
{
    delete ui;
}
/*
 * 这是音乐头像
 */
void MusicForm::set_Music_Picture(QString picPath)
{
    QString qss = "QLabel{border-image:url("+picPath+");}";
    ui->label_music_picture->setStyleSheet(qss);
}
/*
 * 设置歌曲名称和歌手
 */
void MusicForm::set_Music_Name_Singer(QString musicName, QString musicSinger)
{

    ui->label_music_name->setText(getText(ui->label_music_name->font(),musicName,90));
    ui->label_music_singer->setText(getText(ui->label_music_singer->font(),musicSinger,90));

}
/*
 * 正常显示，把我的按钮还给我
 */
void MusicForm::slot_show_Normal()
{

    emit full_show(false);
    ui->label_music_singer->show();
    ui->label_music_name->show();
    ui->label_music_picture->show();
    ui->pushButton_like->show();
    ui->pushButton_music_picture->show();
    ui->pushButton_share->show();


    btn_Show_Normal->hide();
    music_Form->hide();
}
/*
 * 绘制背景函数
 */
void MusicForm::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter_mainback(this);
    painter_mainback.setPen(Qt::NoPen);
    painter_mainback.setBrush(QColor(25,27,31));
    painter_mainback.drawRect(0,0,this->width(),this->height());
}
/*
 * 省略号函数
 */
QString MusicForm::getText(QFont font, QString str, int MaxWidth)
{
    QFontMetrics fontWidth(font);
    int width = fontWidth.width(str);  //计算字符串宽度
    if(width>=MaxWidth)  //当字符串宽度大于最大宽度时进行转换
    {
        str = fontWidth.elidedText(str,Qt::ElideRight,MaxWidth);  //右部显示省略号
    }
    return str;   //返回处理后的字符串
}
/*
 * 全屏按钮按下
 */
void MusicForm::on_pushButton_music_picture_clicked()
{
    if(full_Show_State == false)
    {
        emit full_show(true);
        ui->label_music_singer->hide();
        ui->label_music_name->hide();
        ui->label_music_picture->hide();
        ui->pushButton_like->hide();
        ui->pushButton_music_picture->hide();
        ui->pushButton_share->hide();



        if(music_Form)
        {
            music_Form->show();
        }
        else
        {
            music_Form = new QWidget(this);
            music_Form->setGeometry(0,0,this->width(),this->height());
            music_Form->setStyleSheet("QWidget{background-color: rgb(255, 0, 0);}");
            music_Form->show();
        }
        if(btn_Show_Normal == NULL)
        {
            btn_Show_Normal = new QPushButton(this);
            btn_Show_Normal->setGeometry(958,33,34,24);
            btn_Show_Normal->setStyleSheet("QPushButton{border-image:url(./images/show_music.png);}"
                                           "QPushButton:hover{border-image:url(./images/show_music_n.png);}"
                                           "QPushButton:pressed{border-image:url(./images/show_music.png);}");
            btn_Show_Normal->show();
            connect(btn_Show_Normal,&QPushButton::clicked,this,&MusicForm::slot_show_Normal);
        }
        else
        {
            btn_Show_Normal->setGeometry(958,33,34,24);
            btn_Show_Normal->show();
        }
    }
}
/*
 * 喜欢按钮
 */
void MusicForm::on_pushButton_like_clicked()
{
    if(music_Like_State == false)
    {
        music_Like_State = true;
        ui->pushButton_like->setStyleSheet("QPushButton{border-image:url(images/musicform/btn_unlike_n.png);}"
                                           "QPushButton::hover{border-image:url(images/musicform/btn_unlike_h.png);}"
                                           "QPushButton::pressed{border-image:url(images/musicform/btn_unlike_n.png);}");

    }
    else
    {
        music_Like_State = false;
        ui->pushButton_like->setStyleSheet("QPushButton{border-image:url(images/musicform/btn_like_n.png);}"
                                           "QPushButton::hover{border-image:url(images/musicform/btn_like_h.png);}"
                                           "QPushButton::pressed{border-image:url(images/musicform/btn_like_n.png);}");
    }
}
/*
 * 分享按钮
 */
void MusicForm::on_pushButton_share_clicked()
{

}
