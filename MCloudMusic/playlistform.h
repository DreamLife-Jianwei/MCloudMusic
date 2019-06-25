#ifndef PLAYLISTFORM_H
#define PLAYLISTFORM_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QHeaderView>

namespace Ui {
class PlayListForm;
}

class PlayListForm : public QWidget
{
    Q_OBJECT

public:
    explicit PlayListForm(QWidget *parent = 0);
    ~PlayListForm();

protected:
    void paintEvent(QPaintEvent* event);

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_PL_shoucang_clicked();

    void on_pushButton_PL_delete_clicked();

    void on_pushButton_PL_delete_2_clicked();

private:
    Ui::PlayListForm *ui;
};

#endif // PLAYLISTFORM_H
