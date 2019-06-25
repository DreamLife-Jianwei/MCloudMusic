/********************************************************************************
** Form generated from reading UI file 'messageform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEFORM_H
#define UI_MESSAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageForm
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_atMy;
    QLabel *label;
    QWidget *tab_sixin;
    QListWidget *listWidget_sixin;
    QWidget *tab_pinglun;
    QWidget *tab_tongzhi;

    void setupUi(QWidget *MessageForm)
    {
        if (MessageForm->objectName().isEmpty())
            MessageForm->setObjectName(QStringLiteral("MessageForm"));
        MessageForm->resize(350, 591);
        tabWidget = new QTabWidget(MessageForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 350, 571));
        tab_atMy = new QWidget();
        tab_atMy->setObjectName(QStringLiteral("tab_atMy"));
        label = new QLabel(tab_atMy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 80, 351, 31));
        label->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_atMy, QString());
        tab_sixin = new QWidget();
        tab_sixin->setObjectName(QStringLiteral("tab_sixin"));
        listWidget_sixin = new QListWidget(tab_sixin);
        listWidget_sixin->setObjectName(QStringLiteral("listWidget_sixin"));
        listWidget_sixin->setGeometry(QRect(0, 0, 350, 571));
        tabWidget->addTab(tab_sixin, QString());
        tab_pinglun = new QWidget();
        tab_pinglun->setObjectName(QStringLiteral("tab_pinglun"));
        tabWidget->addTab(tab_pinglun, QString());
        tab_tongzhi = new QWidget();
        tab_tongzhi->setObjectName(QStringLiteral("tab_tongzhi"));
        tabWidget->addTab(tab_tongzhi, QString());

        retranslateUi(MessageForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MessageForm);
    } // setupUi

    void retranslateUi(QWidget *MessageForm)
    {
        MessageForm->setWindowTitle(QApplication::translate("MessageForm", "Form", nullptr));
        label->setText(QApplication::translate("MessageForm", "\346\232\202\346\227\240@\346\210\221\347\232\204\345\206\205\345\256\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_atMy), QApplication::translate("MessageForm", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_sixin), QApplication::translate("MessageForm", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_pinglun), QApplication::translate("MessageForm", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_tongzhi), QApplication::translate("MessageForm", "\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageForm: public Ui_MessageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEFORM_H
