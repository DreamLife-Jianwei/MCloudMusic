#include "playlistform.h"
#include "ui_playlistform.h"




PlayListForm::PlayListForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayListForm)
{
    ui->setupUi(this);
    ui->tabWidget->setTabText(0,"播放列表");
    ui->tabWidget->setTabText(1,"历史记录");
    ui->pushButton_PL_shoucang->setIcon(QIcon("./images/btn_shoucang_n.png"));
    ui->pushButton_PL_delete->setIcon(QIcon("./images/btn_delete_n.png"));
    ui->pushButton_PL_delete_2->setIcon(QIcon("./images/btn_delete_n.png"));
    QHeaderView *headview = ui->tableWidget_playlist->verticalHeader();             //隐藏列
    headview->setHidden(true);
    headview = ui->tableWidget_playlist->horizontalHeader();                        //隐藏行
    headview->setHidden(true);
    ui->tableWidget_playlist->setSelectionBehavior(QAbstractItemView::SelectRows);  //选中整行
    ui->tableWidget_playlist->setSelectionMode(QAbstractItemView::SingleSelection); //单行模式
    ui->tableWidget_playlist->setColumnCount(4);
    ui->tableWidget_playlist->setRowCount(20);
    ui->tableWidget_playlist->setShowGrid(false);
    ui->tableWidget_playlist->setStyleSheet("QTableWidget{border-top:0px solid #e8f3f9;background:transparent;alternate-background-color:red;selection-background-color:#3b3d41;}"
                                            "QTableWidget::Item:selected:active{background:#00FFFFFF;color:#FFFFFF;border-width:0;}");
    ui->tableWidget_playlist->horizontalHeader()->resizeSection(0,417);
    ui->tableWidget_playlist->horizontalHeader()->resizeSection(1,50);
    ui->tableWidget_playlist->horizontalHeader()->resizeSection(2,50);
    ui->tableWidget_playlist->horizontalHeader()->resizeSection(3,50);

    headview = ui->tableWidget_historylist->verticalHeader();             //隐藏列
    headview->setHidden(true);
    headview = ui->tableWidget_historylist->horizontalHeader();                        //隐藏行
    headview->setHidden(true);
    ui->tableWidget_historylist->setSelectionBehavior(QAbstractItemView::SelectRows);  //选中整行
    ui->tableWidget_historylist->setSelectionMode(QAbstractItemView::SingleSelection); //单行模式
    ui->tableWidget_historylist->setColumnCount(4);
    ui->tableWidget_historylist->setRowCount(20);
    ui->tableWidget_historylist->setShowGrid(false);
    ui->tableWidget_historylist->setStyleSheet("QTableWidget{border-top:0px solid #e8f3f9;background:transparent;alternate-background-color:red;selection-background-color:#3b3d41;}"
                                            "QTableWidget::Item:selected:active{background:#00FFFFFF;color:#FFFFFF;border-width:0;}");
    ui->tableWidget_historylist->horizontalHeader()->resizeSection(0,417);
    ui->tableWidget_historylist->horizontalHeader()->resizeSection(1,50);
    ui->tableWidget_historylist->horizontalHeader()->resizeSection(2,50);
    ui->tableWidget_historylist->horizontalHeader()->resizeSection(3,50);



    QPalette pal = ui->tableWidget_playlist->palette();
    pal.setBrush(QPalette::Base,QBrush(QColor(255,255,255,0)));
    ui->tableWidget_playlist->setPalette( pal );
    QStringList headers;
    headers<<"name"<<"singer"<<"from"<<"time";

    //测试数据
    QTableWidgetItem *item = new QTableWidgetItem(QIcon("./images/icon_play.png"),"爱的就是你");
    ui->tableWidget_playlist->setItem(0,0,item);
    item->setTextColor(QColor(255,255,255));
    QTableWidgetItem *item1 = new QTableWidgetItem("刘佳");
    item1->setTextColor(QColor(95,95,99));
    ui->tableWidget_playlist->setItem(0,1,item1);
    QTableWidgetItem *item2 = new QTableWidgetItem("来源");
    item2->setTextColor(QColor(95,95,99));
    ui->tableWidget_playlist->setItem(0,2,item2);
    QTableWidgetItem *item3 = new QTableWidgetItem("04:31");
    item3->setTextColor(QColor(95,95,99));
    ui->tableWidget_playlist->setItem(0,3,item3);
    for(int i=1;i<20;i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(QIcon("./images/zanweifu.png"),"爱的就是你");
        item->setTextColor(QColor(255,255,255));
        ui->tableWidget_playlist->setItem(i,0,item);
        QTableWidgetItem *item1 = new QTableWidgetItem("刘佳");
        item1->setTextColor(QColor(95,95,99));
        ui->tableWidget_playlist->setItem(i,1,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem("来源");
        item2->setTextColor(QColor(95,95,99));
        ui->tableWidget_playlist->setItem(i,2,item2);
        QTableWidgetItem *item3 = new QTableWidgetItem("04:31");
        item3->setTextColor(QColor(95,95,99));
        ui->tableWidget_playlist->setItem(i,3,item3);
    }

    //测试数据
    QTableWidgetItem *item11 = new QTableWidgetItem(QIcon("./images/icon_play.png"),"爱的就是你");
    ui->tableWidget_historylist->setItem(0,0,item11);
    item11->setTextColor(QColor(255,255,255));
    QTableWidgetItem *item12 = new QTableWidgetItem("刘佳");
    item12->setTextColor(QColor(95,95,99));
    ui->tableWidget_historylist->setItem(0,1,item12);
    QTableWidgetItem *item13 = new QTableWidgetItem("来源");
    item13->setTextColor(QColor(95,95,99));
    ui->tableWidget_historylist->setItem(0,2,item13);
    QTableWidgetItem *item14 = new QTableWidgetItem("04:31");
    item14->setTextColor(QColor(95,95,99));
    ui->tableWidget_historylist->setItem(0,3,item14);
    for(int i=1;i<20;i++)
    {
        QTableWidgetItem *item11 = new QTableWidgetItem(QIcon("./images/zanweifu.png"),"爱的就是你");
        item11->setTextColor(QColor(255,255,255));
        ui->tableWidget_historylist->setItem(i,0,item11);
        QTableWidgetItem *item12 = new QTableWidgetItem("刘佳");
        item12->setTextColor(QColor(95,95,99));
        ui->tableWidget_historylist->setItem(i,1,item12);
        QTableWidgetItem *item13 = new QTableWidgetItem("来源");
        item13->setTextColor(QColor(95,95,99));
        ui->tableWidget_historylist->setItem(i,2,item13);
        QTableWidgetItem *item14 = new QTableWidgetItem("04:31");
        item14->setTextColor(QColor(95,95,99));
        ui->tableWidget_historylist->setItem(i,3,item14);
    }


}

PlayListForm::~PlayListForm()
{
    delete ui;
}

void PlayListForm::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter_mainback(this);
    painter_mainback.setPen(Qt::NoPen);
    painter_mainback.setBrush(QColor(40,42,46));
    painter_mainback.drawRect(0,0,this->width(),this->height());

}

void PlayListForm::on_pushButton_close_clicked()
{
    this->close();
}
/*
 * 播放列表收藏全部按钮
 */
void PlayListForm::on_pushButton_PL_shoucang_clicked()
{

}
/*
 * 播放列表情况按钮
 */
void PlayListForm::on_pushButton_PL_delete_clicked()
{

}
/*
 * 历史记录列表清除按钮
 */
void PlayListForm::on_pushButton_PL_delete_2_clicked()
{

}
