#include "messageform.h"
#include "ui_messageform.h"
#include <QDebug>
MessageForm::MessageForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageForm)
{
    ui->setupUi(this);
    ui->tabWidget->setTabText(0,"@我");
    ui->tabWidget->setTabText(1,"私信");
    ui->tabWidget->setTabText(2,"评论");
    ui->tabWidget->setTabText(3,"通知");

    ui->listWidget_sixin->setStyleSheet("QListWidget{color:rgb(173,175,178); background:rgb(25,27,31,0);border:0px solid gray;}"
                                        "QListWidget::Item{height:30px;border:0px solid gray;}"
                                        "QListWidget::Item:hover{color:rgb(255,255,255);background:transparent;border:0px solid gray;}"
                                        "QListWidget::Item:selected{ color:rgb(255,255,255);border:0px solid gray;}"
                                        "QListWidget::Item:selected:active{background:#00FFFFFF;color:#FFFFFF;border-width:0;}");

    //测试数据
    MessageForm_SiXin_Item *sixinItem = new MessageForm_SiXin_Item;
    MessageForm_SiXin_Item *sixinItem1 = new MessageForm_SiXin_Item;
    QListWidgetItem *item = new QListWidgetItem(ui->listWidget_sixin);
    ui->listWidget_sixin->addItem(item);
    ui->listWidget_sixin->setItemWidget(item,sixinItem);
    item->setSizeHint(QSize(0,60));

    QListWidgetItem *item1 = new QListWidgetItem(ui->listWidget_sixin);
    ui->listWidget_sixin->addItem(item1);
    ui->listWidget_sixin->setItemWidget(item1,sixinItem1);
    item1->setSizeHint(QSize(0,60));

}

MessageForm::~MessageForm()
{
    delete ui;
}
/*
 * 绘制背景
 */
void MessageForm::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter_mainback(this);
    painter_mainback.drawPixmap(0,0,this->width(),this->height(),QPixmap("./images/Messageform/mainback.png"));
}
/*
 * 鼠标离开
 */
void MessageForm::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    this->close();
}
