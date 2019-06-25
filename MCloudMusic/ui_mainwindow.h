/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *label_title_back;
    QPushButton *pushButton_close;
    QPushButton *pushButton_max;
    QPushButton *pushButton_min;
    QPushButton *pushButton_mini;
    QLabel *label_title_logo;
    QLabel *label_shuxian;
    QPushButton *pushButton_set;
    QPushButton *pushButton_message;
    QPushButton *pushButton_skin;
    QLabel *label_message_Tip;
    QPushButton *pushButton_people;
    QLabel *label_people;
    QPushButton *pushButton_people_1;
    QPushButton *pushButton_title_left;
    QPushButton *pushButton_title_right;
    QLineEdit *lineEdit_title_input;
    QPushButton *pushButton_search;
    QLabel *label_input_back;
    QLabel *label_bottom_back;
    QPushButton *pushButton_play;
    QPushButton *pushButton_next;
    QPushButton *pushButton_last;
    QLabel *label_time;
    QSlider *horizontalSlider_music;
    QLabel *label_time_long;
    QPushButton *pushButton_horn;
    QSlider *horizontalSlider_sound;
    QPushButton *pushButton_circulation;
    QPushButton *pushButton_lyric;
    QPushButton *pushButton_list;
    QLabel *label_sound_count;
    QLabel *label_part;
    QWidget *widget_list;
    QListWidget *listWidget_mymusic;
    QLabel *label_text_mymusic;
    QLabel *label_text_recommend;
    QListWidget *listWidget;
    QWidget *widget_Create_form;
    QPushButton *pushButton_unfold;
    QLabel *label_text_create_music_list;
    QPushButton *pushButton_add;
    QWidget *widget_Collect_form;
    QPushButton *pushButton_unfold_collect;
    QLabel *label_text_create_music_list_collect;
    QTabWidget *tabWidget_main;
    QWidget *tab_tuijian;
    QLabel *label;
    QWidget *tab_gedan;
    QLabel *label_2;
    QWidget *tab_zhubodiantai;
    QLabel *label_3;
    QWidget *tab_paihangbang;
    QLabel *label_4;
    QWidget *tab_geshou;
    QLabel *label_5;
    QWidget *tab_zuixinyinyue;
    QLabel *label_6;
    QLabel *label_line;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1022, 670);
        label_title_back = new QLabel(MainWindow);
        label_title_back->setObjectName(QStringLiteral("label_title_back"));
        label_title_back->setGeometry(QRect(0, 0, 1022, 50));
        pushButton_close = new QPushButton(MainWindow);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(991, 17, 16, 15));
        pushButton_max = new QPushButton(MainWindow);
        pushButton_max->setObjectName(QStringLiteral("pushButton_max"));
        pushButton_max->setGeometry(QRect(968, 17, 16, 15));
        pushButton_min = new QPushButton(MainWindow);
        pushButton_min->setObjectName(QStringLiteral("pushButton_min"));
        pushButton_min->setGeometry(QRect(943, 17, 16, 15));
        pushButton_mini = new QPushButton(MainWindow);
        pushButton_mini->setObjectName(QStringLiteral("pushButton_mini"));
        pushButton_mini->setGeometry(QRect(922, 17, 16, 15));
        label_title_logo = new QLabel(MainWindow);
        label_title_logo->setObjectName(QStringLiteral("label_title_logo"));
        label_title_logo->setGeometry(QRect(10, 10, 128, 30));
        label_shuxian = new QLabel(MainWindow);
        label_shuxian->setObjectName(QStringLiteral("label_shuxian"));
        label_shuxian->setGeometry(QRect(907, 17, 16, 17));
        label_shuxian->setStyleSheet(QStringLiteral("color: rgb(56, 56, 56);"));
        pushButton_set = new QPushButton(MainWindow);
        pushButton_set->setObjectName(QStringLiteral("pushButton_set"));
        pushButton_set->setGeometry(QRect(872, 17, 16, 15));
        pushButton_message = new QPushButton(MainWindow);
        pushButton_message->setObjectName(QStringLiteral("pushButton_message"));
        pushButton_message->setGeometry(QRect(829, 17, 18, 18));
        pushButton_skin = new QPushButton(MainWindow);
        pushButton_skin->setObjectName(QStringLiteral("pushButton_skin"));
        pushButton_skin->setGeometry(QRect(788, 17, 18, 18));
        label_message_Tip = new QLabel(MainWindow);
        label_message_Tip->setObjectName(QStringLiteral("label_message_Tip"));
        label_message_Tip->setGeometry(QRect(840, 10, 20, 15));
        label_message_Tip->setStyleSheet(QStringLiteral(""));
        pushButton_people = new QPushButton(MainWindow);
        pushButton_people->setObjectName(QStringLiteral("pushButton_people"));
        pushButton_people->setGeometry(QRect(696, 18, 70, 16));
        label_people = new QLabel(MainWindow);
        label_people->setObjectName(QStringLiteral("label_people"));
        label_people->setGeometry(QRect(696, 18, 53, 16));
        pushButton_people_1 = new QPushButton(MainWindow);
        pushButton_people_1->setObjectName(QStringLiteral("pushButton_people_1"));
        pushButton_people_1->setGeometry(QRect(667, 12, 25, 25));
        pushButton_title_left = new QPushButton(MainWindow);
        pushButton_title_left->setObjectName(QStringLiteral("pushButton_title_left"));
        pushButton_title_left->setGeometry(QRect(192, 14, 27, 22));
        pushButton_title_right = new QPushButton(MainWindow);
        pushButton_title_right->setObjectName(QStringLiteral("pushButton_title_right"));
        pushButton_title_right->setGeometry(QRect(218, 14, 27, 22));
        lineEdit_title_input = new QLineEdit(MainWindow);
        lineEdit_title_input->setObjectName(QStringLiteral("lineEdit_title_input"));
        lineEdit_title_input->setGeometry(QRect(255, 14, 200, 22));
        pushButton_search = new QPushButton(MainWindow);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setGeometry(QRect(452, 16, 20, 20));
        label_input_back = new QLabel(MainWindow);
        label_input_back->setObjectName(QStringLiteral("label_input_back"));
        label_input_back->setGeometry(QRect(255, 14, 220, 22));
        label_bottom_back = new QLabel(MainWindow);
        label_bottom_back->setObjectName(QStringLiteral("label_bottom_back"));
        label_bottom_back->setGeometry(QRect(0, 620, 1022, 50));
        pushButton_play = new QPushButton(MainWindow);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setGeometry(QRect(83, 628, 34, 34));
        pushButton_next = new QPushButton(MainWindow);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(141, 630, 30, 30));
        pushButton_last = new QPushButton(MainWindow);
        pushButton_last->setObjectName(QStringLiteral("pushButton_last"));
        pushButton_last->setGeometry(QRect(29, 630, 30, 30));
        label_time = new QLabel(MainWindow);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(203, 640, 40, 16));
        QFont font;
        font.setPointSize(10);
        label_time->setFont(font);
        horizontalSlider_music = new QSlider(MainWindow);
        horizontalSlider_music->setObjectName(QStringLiteral("horizontalSlider_music"));
        horizontalSlider_music->setGeometry(QRect(248, 640, 437, 17));
        horizontalSlider_music->setOrientation(Qt::Horizontal);
        label_time_long = new QLabel(MainWindow);
        label_time_long->setObjectName(QStringLiteral("label_time_long"));
        label_time_long->setGeometry(QRect(693, 640, 40, 16));
        label_time_long->setFont(font);
        pushButton_horn = new QPushButton(MainWindow);
        pushButton_horn->setObjectName(QStringLiteral("pushButton_horn"));
        pushButton_horn->setGeometry(QRect(748, 639, 20, 20));
        horizontalSlider_sound = new QSlider(MainWindow);
        horizontalSlider_sound->setObjectName(QStringLiteral("horizontalSlider_sound"));
        horizontalSlider_sound->setGeometry(QRect(770, 646, 100, 5));
        horizontalSlider_sound->setOrientation(Qt::Horizontal);
        pushButton_circulation = new QPushButton(MainWindow);
        pushButton_circulation->setObjectName(QStringLiteral("pushButton_circulation"));
        pushButton_circulation->setGeometry(QRect(890, 639, 20, 20));
        pushButton_lyric = new QPushButton(MainWindow);
        pushButton_lyric->setObjectName(QStringLiteral("pushButton_lyric"));
        pushButton_lyric->setGeometry(QRect(926, 639, 20, 20));
        pushButton_list = new QPushButton(MainWindow);
        pushButton_list->setObjectName(QStringLiteral("pushButton_list"));
        pushButton_list->setGeometry(QRect(959, 638, 20, 20));
        label_sound_count = new QLabel(MainWindow);
        label_sound_count->setObjectName(QStringLiteral("label_sound_count"));
        label_sound_count->setGeometry(QRect(970, 638, 40, 20));
        label_sound_count->setStyleSheet(QStringLiteral(""));
        label_sound_count->setAlignment(Qt::AlignCenter);
        label_part = new QLabel(MainWindow);
        label_part->setObjectName(QStringLiteral("label_part"));
        label_part->setGeometry(QRect(200, 50, 1, 570));
        widget_list = new QWidget(MainWindow);
        widget_list->setObjectName(QStringLiteral("widget_list"));
        widget_list->setGeometry(QRect(0, 50, 200, 401));
        listWidget_mymusic = new QListWidget(widget_list);
        listWidget_mymusic->setObjectName(QStringLiteral("listWidget_mymusic"));
        listWidget_mymusic->setGeometry(QRect(0, 180, 200, 150));
        label_text_mymusic = new QLabel(widget_list);
        label_text_mymusic->setObjectName(QStringLiteral("label_text_mymusic"));
        label_text_mymusic->setGeometry(QRect(0, 150, 200, 30));
        label_text_mymusic->setFont(font);
        label_text_recommend = new QLabel(widget_list);
        label_text_recommend->setObjectName(QStringLiteral("label_text_recommend"));
        label_text_recommend->setGeometry(QRect(0, 0, 200, 30));
        label_text_recommend->setFont(font);
        listWidget = new QListWidget(widget_list);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 30, 200, 120));
        widget_Create_form = new QWidget(widget_list);
        widget_Create_form->setObjectName(QStringLiteral("widget_Create_form"));
        widget_Create_form->setGeometry(QRect(0, 330, 200, 30));
        pushButton_unfold = new QPushButton(widget_Create_form);
        pushButton_unfold->setObjectName(QStringLiteral("pushButton_unfold"));
        pushButton_unfold->setGeometry(QRect(170, 10, 16, 16));
        label_text_create_music_list = new QLabel(widget_Create_form);
        label_text_create_music_list->setObjectName(QStringLiteral("label_text_create_music_list"));
        label_text_create_music_list->setGeometry(QRect(0, 3, 200, 30));
        label_text_create_music_list->setFont(font);
        pushButton_add = new QPushButton(widget_Create_form);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(140, 8, 20, 20));
        label_text_create_music_list->raise();
        pushButton_add->raise();
        pushButton_unfold->raise();
        widget_Collect_form = new QWidget(widget_list);
        widget_Collect_form->setObjectName(QStringLiteral("widget_Collect_form"));
        widget_Collect_form->setGeometry(QRect(0, 370, 200, 30));
        widget_Collect_form->setStyleSheet(QStringLiteral(""));
        pushButton_unfold_collect = new QPushButton(widget_Collect_form);
        pushButton_unfold_collect->setObjectName(QStringLiteral("pushButton_unfold_collect"));
        pushButton_unfold_collect->setGeometry(QRect(170, 10, 16, 16));
        label_text_create_music_list_collect = new QLabel(widget_Collect_form);
        label_text_create_music_list_collect->setObjectName(QStringLiteral("label_text_create_music_list_collect"));
        label_text_create_music_list_collect->setGeometry(QRect(0, 3, 200, 30));
        label_text_create_music_list_collect->setFont(font);
        label_text_create_music_list_collect->raise();
        pushButton_unfold_collect->raise();
        tabWidget_main = new QTabWidget(MainWindow);
        tabWidget_main->setObjectName(QStringLiteral("tabWidget_main"));
        tabWidget_main->setGeometry(QRect(200, 60, 822, 561));
        tabWidget_main->setStyleSheet(QStringLiteral(""));
        tab_tuijian = new QWidget();
        tab_tuijian->setObjectName(QStringLiteral("tab_tuijian"));
        label = new QLabel(tab_tuijian);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 160, 261, 181));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        tabWidget_main->addTab(tab_tuijian, QString());
        tab_gedan = new QWidget();
        tab_gedan->setObjectName(QStringLiteral("tab_gedan"));
        label_2 = new QLabel(tab_gedan);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 120, 401, 241));
        label_2->setFont(font1);
        tabWidget_main->addTab(tab_gedan, QString());
        tab_zhubodiantai = new QWidget();
        tab_zhubodiantai->setObjectName(QStringLiteral("tab_zhubodiantai"));
        label_3 = new QLabel(tab_zhubodiantai);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 260, 341, 131));
        label_3->setFont(font1);
        tabWidget_main->addTab(tab_zhubodiantai, QString());
        tab_paihangbang = new QWidget();
        tab_paihangbang->setObjectName(QStringLiteral("tab_paihangbang"));
        label_4 = new QLabel(tab_paihangbang);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 220, 221, 111));
        label_4->setFont(font1);
        tabWidget_main->addTab(tab_paihangbang, QString());
        tab_geshou = new QWidget();
        tab_geshou->setObjectName(QStringLiteral("tab_geshou"));
        label_5 = new QLabel(tab_geshou);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 170, 361, 171));
        label_5->setFont(font1);
        tabWidget_main->addTab(tab_geshou, QString());
        tab_zuixinyinyue = new QWidget();
        tab_zuixinyinyue->setObjectName(QStringLiteral("tab_zuixinyinyue"));
        label_6 = new QLabel(tab_zuixinyinyue);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(300, 240, 251, 81));
        label_6->setFont(font1);
        tabWidget_main->addTab(tab_zuixinyinyue, QString());
        label_line = new QLabel(MainWindow);
        label_line->setObjectName(QStringLiteral("label_line"));
        label_line->setGeometry(QRect(223, 82, 776, 2));
        label_line->setStyleSheet(QStringLiteral("background-color: rgb(32, 34, 38);"));
        label_title_back->raise();
        pushButton_close->raise();
        pushButton_max->raise();
        pushButton_min->raise();
        pushButton_mini->raise();
        label_title_logo->raise();
        label_shuxian->raise();
        pushButton_set->raise();
        pushButton_message->raise();
        pushButton_skin->raise();
        label_message_Tip->raise();
        label_people->raise();
        pushButton_people->raise();
        pushButton_people_1->raise();
        pushButton_title_left->raise();
        pushButton_title_right->raise();
        label_input_back->raise();
        lineEdit_title_input->raise();
        pushButton_search->raise();
        label_bottom_back->raise();
        pushButton_play->raise();
        pushButton_next->raise();
        pushButton_last->raise();
        label_time->raise();
        horizontalSlider_music->raise();
        label_time_long->raise();
        pushButton_horn->raise();
        horizontalSlider_sound->raise();
        pushButton_circulation->raise();
        pushButton_lyric->raise();
        label_sound_count->raise();
        pushButton_list->raise();
        label_part->raise();
        widget_list->raise();
        label_line->raise();
        tabWidget_main->raise();

        retranslateUi(MainWindow);

        tabWidget_main->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_title_back->setText(QString());
        pushButton_close->setText(QString());
        pushButton_max->setText(QString());
        pushButton_min->setText(QString());
        pushButton_mini->setText(QString());
        label_title_logo->setText(QString());
        label_shuxian->setText(QApplication::translate("MainWindow", "|", nullptr));
        pushButton_set->setText(QString());
        pushButton_message->setText(QString());
        pushButton_skin->setText(QString());
        label_message_Tip->setText(QApplication::translate("MainWindow", "11", nullptr));
        pushButton_people->setText(QString());
        label_people->setText(QApplication::translate("MainWindow", "\346\242\246\346\203\263\345\260\221\345\271\264", nullptr));
        pushButton_people_1->setText(QString());
        pushButton_title_left->setText(QString());
        pushButton_title_right->setText(QString());
        pushButton_search->setText(QString());
        label_input_back->setText(QString());
        label_bottom_back->setText(QString());
        pushButton_play->setText(QString());
        pushButton_next->setText(QString());
        pushButton_last->setText(QString());
        label_time->setText(QApplication::translate("MainWindow", "00:00", nullptr));
        label_time_long->setText(QApplication::translate("MainWindow", "00:00", nullptr));
        pushButton_horn->setText(QString());
        pushButton_circulation->setText(QString());
        pushButton_lyric->setText(QString());
        pushButton_list->setText(QString());
        label_sound_count->setText(QApplication::translate("MainWindow", "111", nullptr));
        label_part->setText(QString());
        label_text_mymusic->setText(QApplication::translate("MainWindow", " \346\210\221\347\232\204\351\237\263\344\271\220", nullptr));
        label_text_recommend->setText(QApplication::translate("MainWindow", " \346\216\250\350\215\220", nullptr));
        pushButton_unfold->setText(QString());
        label_text_create_music_list->setText(QApplication::translate("MainWindow", " \345\210\233\345\273\272\347\232\204\346\255\214\345\215\225", nullptr));
        pushButton_add->setText(QString());
        pushButton_unfold_collect->setText(QString());
        label_text_create_music_list_collect->setText(QApplication::translate("MainWindow", " \346\224\266\350\227\217\347\232\204\346\255\214\345\215\225", nullptr));
        label->setText(QApplication::translate("MainWindow", "\344\270\252\346\200\247\346\216\250\350\215\220", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_tuijian), QApplication::translate("MainWindow", "Tab 1", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\255\214\345\215\225", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_gedan), QApplication::translate("MainWindow", "Tab 2", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\273\346\222\255\347\224\265\345\217\260", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_zhubodiantai), QApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_paihangbang), QApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\346\255\214\346\211\213", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_geshou), QApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\346\234\200\346\226\260\351\237\263\344\271\220", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_zuixinyinyue), QApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_line->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
