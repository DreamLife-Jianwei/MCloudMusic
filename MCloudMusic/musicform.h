#ifndef MUSICFORM_H
#define MUSICFORM_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPushButton>
#include <QFontMetrics>
namespace Ui {
class MusicForm;
}

class MusicForm : public QWidget
{
    Q_OBJECT

public:
    explicit MusicForm(QWidget *parent = 0);
    ~MusicForm();


    void set_Music_Picture(QString picPath);

    void set_Music_Name_Singer(QString musicName,QString musicSinger);
protected slots:
    void slot_show_Normal();
signals:
    void full_show(bool full_show_state);       //音乐模块全屏显示
protected:
    void paintEvent(QPaintEvent* event);

    QString getText(QFont font,QString str,int MaxWidth);

private slots:
    void on_pushButton_music_picture_clicked();

    void on_pushButton_like_clicked();

    void on_pushButton_share_clicked();

private:
    Ui::MusicForm *ui;



    bool music_Like_State = false;
    bool full_Show_State = false;



    QPushButton *btn_Show_Normal = NULL;

    QWidget *music_Form = NULL;
};

#endif // MUSICFORM_H
