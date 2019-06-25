/********************************************************************************
** Form generated from reading UI file 'playlistform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTFORM_H
#define UI_PLAYLISTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayListForm
{
public:
    QPushButton *pushButton_close;
    QTabWidget *tabWidget;
    QWidget *play_list;
    QLabel *label_PL_back;
    QLabel *label_PL_conut;
    QPushButton *pushButton_PL_shoucang;
    QPushButton *pushButton_PL_delete;
    QLabel *label_PL_conut_2;
    QTableWidget *tableWidget_playlist;
    QWidget *history_list;
    QLabel *label_PL_back_2;
    QPushButton *pushButton_PL_delete_2;
    QLabel *label_PL_conut_3;
    QTableWidget *tableWidget_historylist;

    void setupUi(QWidget *PlayListForm)
    {
        if (PlayListForm->objectName().isEmpty())
            PlayListForm->setObjectName(QStringLiteral("PlayListForm"));
        PlayListForm->resize(568, 472);
        PlayListForm->setStyleSheet(QStringLiteral(""));
        pushButton_close = new QPushButton(PlayListForm);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(550, 10, 16, 15));
        tabWidget = new QTabWidget(PlayListForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 571, 471));
        play_list = new QWidget();
        play_list->setObjectName(QStringLiteral("play_list"));
        label_PL_back = new QLabel(play_list);
        label_PL_back->setObjectName(QStringLiteral("label_PL_back"));
        label_PL_back->setGeometry(QRect(0, 0, 567, 30));
        label_PL_back->setStyleSheet(QStringLiteral("background-color: rgb(45, 47, 51);"));
        label_PL_conut = new QLabel(play_list);
        label_PL_conut->setObjectName(QStringLiteral("label_PL_conut"));
        label_PL_conut->setGeometry(QRect(20, 6, 61, 16));
        label_PL_conut->setStyleSheet(QStringLiteral("color: rgb(130, 131, 133);"));
        pushButton_PL_shoucang = new QPushButton(play_list);
        pushButton_PL_shoucang->setObjectName(QStringLiteral("pushButton_PL_shoucang"));
        pushButton_PL_shoucang->setGeometry(QRect(410, 5, 80, 20));
        pushButton_PL_delete = new QPushButton(play_list);
        pushButton_PL_delete->setObjectName(QStringLiteral("pushButton_PL_delete"));
        pushButton_PL_delete->setGeometry(QRect(509, 5, 61, 20));
        label_PL_conut_2 = new QLabel(play_list);
        label_PL_conut_2->setObjectName(QStringLiteral("label_PL_conut_2"));
        label_PL_conut_2->setGeometry(QRect(498, 5, 16, 16));
        label_PL_conut_2->setStyleSheet(QStringLiteral("color: rgb(130, 131, 133);"));
        tableWidget_playlist = new QTableWidget(play_list);
        tableWidget_playlist->setObjectName(QStringLiteral("tableWidget_playlist"));
        tableWidget_playlist->setGeometry(QRect(0, 30, 567, 411));
        tabWidget->addTab(play_list, QString());
        history_list = new QWidget();
        history_list->setObjectName(QStringLiteral("history_list"));
        label_PL_back_2 = new QLabel(history_list);
        label_PL_back_2->setObjectName(QStringLiteral("label_PL_back_2"));
        label_PL_back_2->setGeometry(QRect(0, 0, 567, 30));
        label_PL_back_2->setStyleSheet(QStringLiteral("background-color: rgb(45, 47, 51);"));
        pushButton_PL_delete_2 = new QPushButton(history_list);
        pushButton_PL_delete_2->setObjectName(QStringLiteral("pushButton_PL_delete_2"));
        pushButton_PL_delete_2->setGeometry(QRect(509, 5, 61, 20));
        label_PL_conut_3 = new QLabel(history_list);
        label_PL_conut_3->setObjectName(QStringLiteral("label_PL_conut_3"));
        label_PL_conut_3->setGeometry(QRect(20, 6, 61, 16));
        label_PL_conut_3->setStyleSheet(QStringLiteral("color: rgb(130, 131, 133);"));
        tableWidget_historylist = new QTableWidget(history_list);
        tableWidget_historylist->setObjectName(QStringLiteral("tableWidget_historylist"));
        tableWidget_historylist->setGeometry(QRect(0, 30, 567, 411));
        tabWidget->addTab(history_list, QString());
        tabWidget->raise();
        pushButton_close->raise();

        retranslateUi(PlayListForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PlayListForm);
    } // setupUi

    void retranslateUi(QWidget *PlayListForm)
    {
        PlayListForm->setWindowTitle(QApplication::translate("PlayListForm", "Form", nullptr));
        pushButton_close->setText(QString());
        label_PL_back->setText(QString());
        label_PL_conut->setText(QApplication::translate("PlayListForm", "\346\200\273100\351\246\226", nullptr));
        pushButton_PL_shoucang->setText(QApplication::translate("PlayListForm", "\346\224\266\350\227\217\345\205\250\351\203\250", nullptr));
        pushButton_PL_delete->setText(QApplication::translate("PlayListForm", "\346\270\205\347\251\272", nullptr));
        label_PL_conut_2->setText(QApplication::translate("PlayListForm", "|", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(play_list), QApplication::translate("PlayListForm", "Tab 1", nullptr));
        label_PL_back_2->setText(QString());
        pushButton_PL_delete_2->setText(QApplication::translate("PlayListForm", "\346\270\205\347\251\272", nullptr));
        label_PL_conut_3->setText(QApplication::translate("PlayListForm", "\346\200\273100\351\246\226", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(history_list), QApplication::translate("PlayListForm", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayListForm: public Ui_PlayListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTFORM_H
