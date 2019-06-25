#ifndef MESSAGEFORM_SIXIN_ITEM_H
#define MESSAGEFORM_SIXIN_ITEM_H

#include <QWidget>

namespace Ui {
class MessageForm_SiXin_Item;
}

class MessageForm_SiXin_Item : public QWidget
{
    Q_OBJECT

public:
    explicit MessageForm_SiXin_Item(QWidget *parent = 0);
    ~MessageForm_SiXin_Item();

private:
    Ui::MessageForm_SiXin_Item *ui;
};

#endif // MESSAGEFORM_SIXIN_ITEM_H
