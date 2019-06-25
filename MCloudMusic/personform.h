#ifndef PERSONFORM_H
#define PERSONFORM_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
namespace Ui {
class PersonForm;
}

class PersonForm : public QWidget
{
    Q_OBJECT

public:
    explicit PersonForm(QWidget *parent = 0);
    ~PersonForm();
protected:
    void paintEvent(QPaintEvent *event);
    void leaveEvent(QEvent *event);
private slots:
    void on_pushButton_person_head_image_clicked();

    void on_pushButton_clicked();

    void on_pushButton_sign_clicked();

    void on_pushButton_fans_clicked();

    void on_pushButton_attention_clicked();

    void on_pushButton_dynamic_clicked();

    void on_pushButton_mymember_clicked();

    void on_pushButton_dengji_clicked();

    void on_pushButton_shop_clicked();

    void on_pushButton_person_infor_clicked();

    void on_pushButton_bend_clicked();

    void on_pushButton_off_clicked();

private:
    Ui::PersonForm *ui;
};

#endif // PERSONFORM_H
