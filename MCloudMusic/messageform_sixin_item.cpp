#include "messageform_sixin_item.h"
#include "ui_messageform_sixin_item.h"

MessageForm_SiXin_Item::MessageForm_SiXin_Item(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageForm_SiXin_Item)
{
    ui->setupUi(this);
    ui->label_read_point->setMask(QRegion(0,0,10,10,QRegion::Ellipse));
    ui->label_sixin_head->setMask(QRegion(0,0,50,50,QRegion::Ellipse));

}

MessageForm_SiXin_Item::~MessageForm_SiXin_Item()
{
    delete ui;
}
