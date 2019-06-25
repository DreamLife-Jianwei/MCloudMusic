/********************************************************************************
** Form generated from reading UI file 'messageform_sixin_item.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEFORM_SIXIN_ITEM_H
#define UI_MESSAGEFORM_SIXIN_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageForm_SiXin_Item
{
public:
    QLabel *label_read_point;
    QLabel *label_sixin_name;
    QLabel *label_sixin_head;
    QLabel *label_sixin_name_2;
    QLabel *label_sixin_time;

    void setupUi(QWidget *MessageForm_SiXin_Item)
    {
        if (MessageForm_SiXin_Item->objectName().isEmpty())
            MessageForm_SiXin_Item->setObjectName(QStringLiteral("MessageForm_SiXin_Item"));
        MessageForm_SiXin_Item->resize(350, 60);
        label_read_point = new QLabel(MessageForm_SiXin_Item);
        label_read_point->setObjectName(QStringLiteral("label_read_point"));
        label_read_point->setGeometry(QRect(10, 25, 10, 10));
        label_read_point->setStyleSheet(QStringLiteral("background-color: rgb(170, 0, 0);"));
        label_sixin_name = new QLabel(MessageForm_SiXin_Item);
        label_sixin_name->setObjectName(QStringLiteral("label_sixin_name"));
        label_sixin_name->setGeometry(QRect(90, 10, 100, 20));
        label_sixin_head = new QLabel(MessageForm_SiXin_Item);
        label_sixin_head->setObjectName(QStringLiteral("label_sixin_head"));
        label_sixin_head->setGeometry(QRect(30, 5, 50, 50));
        label_sixin_head->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));
        label_sixin_name_2 = new QLabel(MessageForm_SiXin_Item);
        label_sixin_name_2->setObjectName(QStringLiteral("label_sixin_name_2"));
        label_sixin_name_2->setGeometry(QRect(90, 30, 261, 20));
        label_sixin_time = new QLabel(MessageForm_SiXin_Item);
        label_sixin_time->setObjectName(QStringLiteral("label_sixin_time"));
        label_sixin_time->setGeometry(QRect(240, 10, 100, 20));
        label_sixin_time->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(MessageForm_SiXin_Item);

        QMetaObject::connectSlotsByName(MessageForm_SiXin_Item);
    } // setupUi

    void retranslateUi(QWidget *MessageForm_SiXin_Item)
    {
        MessageForm_SiXin_Item->setWindowTitle(QApplication::translate("MessageForm_SiXin_Item", "Form", nullptr));
        label_read_point->setText(QString());
        label_sixin_name->setText(QApplication::translate("MessageForm_SiXin_Item", "\347\275\221\346\230\223\344\272\221\351\237\263\344\271\220", nullptr));
        label_sixin_head->setText(QString());
        label_sixin_name_2->setText(QApplication::translate("MessageForm_SiXin_Item", "\346\264\273\345\212\250\357\274\232\346\210\221\350\246\201\345\235\232\346\214\201\344\270\215\344\270\213\345\216\273\344\272\206\357\274\214\347\216\260\345\234\250\345\245\275\345\203\217\346\211\276\344\270\252\344\272\272\346\212\261\346\212\261", nullptr));
        label_sixin_time->setText(QApplication::translate("MessageForm_SiXin_Item", "7\346\234\2103\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageForm_SiXin_Item: public Ui_MessageForm_SiXin_Item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEFORM_SIXIN_ITEM_H
