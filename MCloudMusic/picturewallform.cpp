#include "picturewallform.h"
#include "ui_picturewallform.h"



int static picture_index = 2;       //当前图片索引值
PictureWallForm::PictureWallForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PictureWallForm)
{
    ui->setupUi(this);

    QString qss_1 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index);
    QString qss_2 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index-1);
    QString qss_3 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index+1);

    ui->label_main->setStyleSheet(qss_1);
    ui->label_main_l->setStyleSheet(qss_2);
    ui->label_main_r->setStyleSheet(qss_3);

}

PictureWallForm::~PictureWallForm()
{
    delete ui;
}

void PictureWallForm::on_pushButton_plus_clicked()
{
    picture_index++;
    if(picture_index==8)
    {
        QString qss_1 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index);
        QString qss_2 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index-1);
        QString qss_3 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg("1");
        ui->label_main->setStyleSheet(qss_1);
        ui->label_main_l->setStyleSheet(qss_2);
        ui->label_main_r->setStyleSheet(qss_3);
        picture_index = 0;
    }
    else
    {
        QString qss_1 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index);
        QString qss_2 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index-1);
        QString qss_3 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index+1);
        ui->label_main->setStyleSheet(qss_1);
        ui->label_main_l->setStyleSheet(qss_2);
        ui->label_main_r->setStyleSheet(qss_3);
    }

}

void PictureWallForm::on_pushButton_subtract_clicked()
{
    picture_index--;

    if(picture_index==1)
    {
        QString qss_1 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index);
        QString qss_2 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg("8");
        QString qss_3 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index+1);
        ui->label_main->setStyleSheet(qss_1);
        ui->label_main_l->setStyleSheet(qss_2);
        ui->label_main_r->setStyleSheet(qss_3);
        picture_index = 8;
    }
    else
    {
        QString qss_1 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index);
        QString qss_2 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index-1);
        QString qss_3 = QString("QLabel{border-image:url(./images/picturewall/00%1.png);}").arg(picture_index+1);
        ui->label_main->setStyleSheet(qss_1);
        ui->label_main_l->setStyleSheet(qss_2);
        ui->label_main_r->setStyleSheet(qss_3);
    }
}
