/********************************************************************************
** Form generated from reading UI file 'musicform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICFORM_H
#define UI_MUSICFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicForm
{
public:
    QLabel *label_music_picture;
    QPushButton *pushButton_music_picture;
    QLabel *label_music_name;
    QLabel *label_music_singer;
    QPushButton *pushButton_like;
    QPushButton *pushButton_share;

    void setupUi(QWidget *MusicForm)
    {
        if (MusicForm->objectName().isEmpty())
            MusicForm->setObjectName(QStringLiteral("MusicForm"));
        MusicForm->resize(200, 55);
        label_music_picture = new QLabel(MusicForm);
        label_music_picture->setObjectName(QStringLiteral("label_music_picture"));
        label_music_picture->setGeometry(QRect(5, 5, 45, 45));
        pushButton_music_picture = new QPushButton(MusicForm);
        pushButton_music_picture->setObjectName(QStringLiteral("pushButton_music_picture"));
        pushButton_music_picture->setGeometry(QRect(5, 5, 45, 45));
        label_music_name = new QLabel(MusicForm);
        label_music_name->setObjectName(QStringLiteral("label_music_name"));
        label_music_name->setGeometry(QRect(60, 10, 101, 16));
        label_music_singer = new QLabel(MusicForm);
        label_music_singer->setObjectName(QStringLiteral("label_music_singer"));
        label_music_singer->setGeometry(QRect(60, 30, 101, 16));
        pushButton_like = new QPushButton(MusicForm);
        pushButton_like->setObjectName(QStringLiteral("pushButton_like"));
        pushButton_like->setGeometry(QRect(175, 5, 20, 20));
        pushButton_share = new QPushButton(MusicForm);
        pushButton_share->setObjectName(QStringLiteral("pushButton_share"));
        pushButton_share->setGeometry(QRect(175, 30, 20, 20));

        retranslateUi(MusicForm);

        QMetaObject::connectSlotsByName(MusicForm);
    } // setupUi

    void retranslateUi(QWidget *MusicForm)
    {
        MusicForm->setWindowTitle(QApplication::translate("MusicForm", "Form", nullptr));
        label_music_picture->setText(QString());
        pushButton_music_picture->setText(QString());
        label_music_name->setText(QApplication::translate("MusicForm", "\346\210\221\350\256\260\345\276\227\346\210\221\347\210\261\350\277\207", nullptr));
        label_music_singer->setText(QApplication::translate("MusicForm", "\344\275\225\346\266\246\344\270\234", nullptr));
        pushButton_like->setText(QString());
        pushButton_share->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MusicForm: public Ui_MusicForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICFORM_H
