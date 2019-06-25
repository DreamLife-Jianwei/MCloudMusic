#ifndef MESSAGEFORM_H
#define MESSAGEFORM_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QMouseEvent>

#include "messageform_sixin_item.h"
namespace Ui {
class MessageForm;
}

class MessageForm : public QWidget
{
    Q_OBJECT

public:
    explicit MessageForm(QWidget *parent = 0);
    ~MessageForm();
protected:
    void paintEvent(QPaintEvent *event);
    void leaveEvent(QEvent *event);
private:
    Ui::MessageForm *ui;

};

#endif // MESSAGEFORM_H
