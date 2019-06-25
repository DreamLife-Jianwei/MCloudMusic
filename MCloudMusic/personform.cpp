#include "personform.h"
#include "ui_personform.h"
#include <QDebug>
PersonForm::PersonForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonForm)
{
    ui->setupUi(this);
}

PersonForm::~PersonForm()
{
    delete ui;
}

void PersonForm::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter_mainback(this);
    painter_mainback.drawPixmap(0,0,this->width(),this->height(),QPixmap("./images/Personform/mainback.png"));
    ui->pushButton_person_head_image->setMask(QRegion(0,0,40,40,QRegion::Ellipse));     //设置头像遮罩
}
/*
 * 鼠标离开
 */
void PersonForm::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    this->close();

}
/*
 * 头像点击按钮
 */
void PersonForm::on_pushButton_person_head_image_clicked()
{
    qDebug()<<"头像按钮点击";
}
/*
 * 个人名字点击效果
 */
void PersonForm::on_pushButton_clicked()
{
    qDebug()<<"用户名字点击";
}
/*
 * 签到按钮槽函数
 */
void PersonForm::on_pushButton_sign_clicked()
{
    qDebug()<<"签到按钮点击";
}
/*
 * 粉丝按钮按下
 */
void PersonForm::on_pushButton_fans_clicked()
{
    qDebug()<<"粉丝按钮点击";
}
/*
 * 关注按钮按下
 */
void PersonForm::on_pushButton_attention_clicked()
{
    qDebug()<<"关注按钮点击";
}
/*
 * 动态按钮按下
 */
void PersonForm::on_pushButton_dynamic_clicked()
{
    qDebug()<<"动态按钮点击";
}
/*
 * 我的会员点击按钮
 */
void PersonForm::on_pushButton_mymember_clicked()
{
    qDebug()<<"我的会员按钮点击";
}
/*
 * 等级按钮
 */
void PersonForm::on_pushButton_dengji_clicked()
{
    qDebug()<<"等级按钮点击";
}
/*
 * 商城按钮
 */
void PersonForm::on_pushButton_shop_clicked()
{
    qDebug()<<"商城按钮点击";
}
/*
 * 个人信息按钮设置
 */
void PersonForm::on_pushButton_person_infor_clicked()
{
    qDebug()<<"个人信息设置按钮点击";
}
/*
 * 绑定社交账号按钮
 */
void PersonForm::on_pushButton_bend_clicked()
{
    qDebug()<<"绑定社交账号按钮点击";
}
/*
 * 退出登录按钮
 */
void PersonForm::on_pushButton_off_clicked()
{
    qDebug()<<"退出登录按钮点击";
}
