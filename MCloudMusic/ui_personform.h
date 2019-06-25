/********************************************************************************
** Form generated from reading UI file 'personform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONFORM_H
#define UI_PERSONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonForm
{
public:
    QPushButton *pushButton_person_head_image;
    QLabel *label_user_name;
    QLabel *label_user_member_icon;
    QPushButton *pushButton;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_dynamic;
    QPushButton *pushButton_attention;
    QPushButton *pushButton_fans;
    QLabel *labelline_1;
    QLabel *label_dynamic;
    QLabel *label_attention;
    QLabel *label_fans;
    QPushButton *pushButton_mymember;
    QLabel *labelline_2;
    QLabel *labelline_3;
    QLabel *label_my_menber;
    QLabel *label_my_member;
    QLabel *label_my_member_time;
    QLabel *label_L_1;
    QPushButton *pushButton_dengji;
    QPushButton *pushButton_shop;
    QPushButton *pushButton_person_infor;
    QPushButton *pushButton_bend;
    QPushButton *pushButton_off;
    QLabel *label_my_dengji;
    QLabel *label_my_dengji_1;
    QLabel *label_L_2;
    QLabel *label_my_dengji_2;
    QLabel *label_my_shop;
    QLabel *label_my_shop2;
    QLabel *label_L_3;
    QLabel *label_L_4;
    QLabel *label_my_setup2;
    QLabel *label_my_setup;
    QLabel *label_my_bend;
    QLabel *label_my_bend2;
    QLabel *label_L_5;
    QLabel *label_my_bend_3;
    QLabel *label_my_bend_4;
    QLabel *label_my_off;
    QLabel *label_my_off2;

    void setupUi(QWidget *PersonForm)
    {
        if (PersonForm->objectName().isEmpty())
            PersonForm->setObjectName(QStringLiteral("PersonForm"));
        PersonForm->resize(276, 376);
        pushButton_person_head_image = new QPushButton(PersonForm);
        pushButton_person_head_image->setObjectName(QStringLiteral("pushButton_person_head_image"));
        pushButton_person_head_image->setGeometry(QRect(20, 30, 40, 40));
        label_user_name = new QLabel(PersonForm);
        label_user_name->setObjectName(QStringLiteral("label_user_name"));
        label_user_name->setGeometry(QRect(70, 43, 60, 15));
        label_user_name->setMinimumSize(QSize(60, 15));
        label_user_member_icon = new QLabel(PersonForm);
        label_user_member_icon->setObjectName(QStringLiteral("label_user_member_icon"));
        label_user_member_icon->setGeometry(QRect(130, 43, 15, 15));
        label_user_member_icon->setMinimumSize(QSize(15, 15));
        pushButton = new QPushButton(PersonForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 43, 75, 15));
        pushButton_sign = new QPushButton(PersonForm);
        pushButton_sign->setObjectName(QStringLiteral("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(197, 37, 64, 26));
        pushButton_dynamic = new QPushButton(PersonForm);
        pushButton_dynamic->setObjectName(QStringLiteral("pushButton_dynamic"));
        pushButton_dynamic->setGeometry(QRect(0, 80, 90, 60));
        pushButton_attention = new QPushButton(PersonForm);
        pushButton_attention->setObjectName(QStringLiteral("pushButton_attention"));
        pushButton_attention->setGeometry(QRect(93, 80, 90, 60));
        pushButton_fans = new QPushButton(PersonForm);
        pushButton_fans->setObjectName(QStringLiteral("pushButton_fans"));
        pushButton_fans->setGeometry(QRect(186, 80, 90, 60));
        labelline_1 = new QLabel(PersonForm);
        labelline_1->setObjectName(QStringLiteral("labelline_1"));
        labelline_1->setGeometry(QRect(0, 142, 276, 1));
        label_dynamic = new QLabel(PersonForm);
        label_dynamic->setObjectName(QStringLiteral("label_dynamic"));
        label_dynamic->setGeometry(QRect(0, 80, 90, 20));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_dynamic->setFont(font);
        label_dynamic->setAlignment(Qt::AlignCenter);
        label_attention = new QLabel(PersonForm);
        label_attention->setObjectName(QStringLiteral("label_attention"));
        label_attention->setGeometry(QRect(93, 80, 90, 20));
        label_attention->setFont(font);
        label_attention->setAlignment(Qt::AlignCenter);
        label_fans = new QLabel(PersonForm);
        label_fans->setObjectName(QStringLiteral("label_fans"));
        label_fans->setGeometry(QRect(186, 80, 90, 20));
        label_fans->setFont(font);
        label_fans->setAlignment(Qt::AlignCenter);
        pushButton_mymember = new QPushButton(PersonForm);
        pushButton_mymember->setObjectName(QStringLiteral("pushButton_mymember"));
        pushButton_mymember->setGeometry(QRect(0, 142, 276, 36));
        labelline_2 = new QLabel(PersonForm);
        labelline_2->setObjectName(QStringLiteral("labelline_2"));
        labelline_2->setGeometry(QRect(0, 251, 276, 1));
        labelline_3 = new QLabel(PersonForm);
        labelline_3->setObjectName(QStringLiteral("labelline_3"));
        labelline_3->setGeometry(QRect(0, 324, 276, 1));
        label_my_menber = new QLabel(PersonForm);
        label_my_menber->setObjectName(QStringLiteral("label_my_menber"));
        label_my_menber->setGeometry(QRect(20, 152, 18, 16));
        label_my_member = new QLabel(PersonForm);
        label_my_member->setObjectName(QStringLiteral("label_my_member"));
        label_my_member->setGeometry(QRect(50, 152, 100, 16));
        label_my_member_time = new QLabel(PersonForm);
        label_my_member_time->setObjectName(QStringLiteral("label_my_member_time"));
        label_my_member_time->setGeometry(QRect(140, 152, 100, 16));
        label_my_member_time->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_L_1 = new QLabel(PersonForm);
        label_L_1->setObjectName(QStringLiteral("label_L_1"));
        label_L_1->setGeometry(QRect(255, 152, 16, 16));
        pushButton_dengji = new QPushButton(PersonForm);
        pushButton_dengji->setObjectName(QStringLiteral("pushButton_dengji"));
        pushButton_dengji->setGeometry(QRect(0, 178, 276, 36));
        pushButton_shop = new QPushButton(PersonForm);
        pushButton_shop->setObjectName(QStringLiteral("pushButton_shop"));
        pushButton_shop->setGeometry(QRect(0, 214, 276, 36));
        pushButton_person_infor = new QPushButton(PersonForm);
        pushButton_person_infor->setObjectName(QStringLiteral("pushButton_person_infor"));
        pushButton_person_infor->setGeometry(QRect(0, 253, 276, 36));
        pushButton_bend = new QPushButton(PersonForm);
        pushButton_bend->setObjectName(QStringLiteral("pushButton_bend"));
        pushButton_bend->setGeometry(QRect(0, 289, 276, 36));
        pushButton_off = new QPushButton(PersonForm);
        pushButton_off->setObjectName(QStringLiteral("pushButton_off"));
        pushButton_off->setGeometry(QRect(0, 326, 276, 50));
        label_my_dengji = new QLabel(PersonForm);
        label_my_dengji->setObjectName(QStringLiteral("label_my_dengji"));
        label_my_dengji->setGeometry(QRect(20, 188, 18, 16));
        label_my_dengji_1 = new QLabel(PersonForm);
        label_my_dengji_1->setObjectName(QStringLiteral("label_my_dengji_1"));
        label_my_dengji_1->setGeometry(QRect(50, 188, 100, 16));
        label_L_2 = new QLabel(PersonForm);
        label_L_2->setObjectName(QStringLiteral("label_L_2"));
        label_L_2->setGeometry(QRect(255, 188, 16, 16));
        label_my_dengji_2 = new QLabel(PersonForm);
        label_my_dengji_2->setObjectName(QStringLiteral("label_my_dengji_2"));
        label_my_dengji_2->setGeometry(QRect(140, 188, 100, 16));
        label_my_dengji_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_my_shop = new QLabel(PersonForm);
        label_my_shop->setObjectName(QStringLiteral("label_my_shop"));
        label_my_shop->setGeometry(QRect(20, 224, 18, 16));
        label_my_shop2 = new QLabel(PersonForm);
        label_my_shop2->setObjectName(QStringLiteral("label_my_shop2"));
        label_my_shop2->setGeometry(QRect(50, 224, 100, 16));
        label_L_3 = new QLabel(PersonForm);
        label_L_3->setObjectName(QStringLiteral("label_L_3"));
        label_L_3->setGeometry(QRect(255, 224, 16, 16));
        label_L_4 = new QLabel(PersonForm);
        label_L_4->setObjectName(QStringLiteral("label_L_4"));
        label_L_4->setGeometry(QRect(255, 263, 16, 16));
        label_my_setup2 = new QLabel(PersonForm);
        label_my_setup2->setObjectName(QStringLiteral("label_my_setup2"));
        label_my_setup2->setGeometry(QRect(50, 263, 100, 16));
        label_my_setup = new QLabel(PersonForm);
        label_my_setup->setObjectName(QStringLiteral("label_my_setup"));
        label_my_setup->setGeometry(QRect(20, 263, 18, 16));
        label_my_bend = new QLabel(PersonForm);
        label_my_bend->setObjectName(QStringLiteral("label_my_bend"));
        label_my_bend->setGeometry(QRect(20, 299, 18, 16));
        label_my_bend2 = new QLabel(PersonForm);
        label_my_bend2->setObjectName(QStringLiteral("label_my_bend2"));
        label_my_bend2->setGeometry(QRect(50, 299, 100, 16));
        label_L_5 = new QLabel(PersonForm);
        label_L_5->setObjectName(QStringLiteral("label_L_5"));
        label_L_5->setGeometry(QRect(255, 299, 16, 16));
        label_my_bend_3 = new QLabel(PersonForm);
        label_my_bend_3->setObjectName(QStringLiteral("label_my_bend_3"));
        label_my_bend_3->setGeometry(QRect(200, 299, 18, 16));
        label_my_bend_4 = new QLabel(PersonForm);
        label_my_bend_4->setObjectName(QStringLiteral("label_my_bend_4"));
        label_my_bend_4->setGeometry(QRect(220, 299, 18, 16));
        label_my_off = new QLabel(PersonForm);
        label_my_off->setObjectName(QStringLiteral("label_my_off"));
        label_my_off->setGeometry(QRect(20, 339, 18, 16));
        label_my_off2 = new QLabel(PersonForm);
        label_my_off2->setObjectName(QStringLiteral("label_my_off2"));
        label_my_off2->setGeometry(QRect(50, 339, 100, 16));
        pushButton_person_head_image->raise();
        label_user_name->raise();
        label_user_member_icon->raise();
        pushButton->raise();
        pushButton_sign->raise();
        labelline_1->raise();
        label_dynamic->raise();
        label_attention->raise();
        label_fans->raise();
        pushButton_fans->raise();
        pushButton_dynamic->raise();
        pushButton_attention->raise();
        labelline_2->raise();
        labelline_3->raise();
        label_my_menber->raise();
        label_my_member->raise();
        label_my_member_time->raise();
        label_L_1->raise();
        pushButton_mymember->raise();
        label_my_dengji->raise();
        label_my_dengji_1->raise();
        label_L_2->raise();
        label_my_dengji_2->raise();
        pushButton_dengji->raise();
        label_my_shop->raise();
        label_my_shop2->raise();
        label_L_3->raise();
        pushButton_shop->raise();
        label_L_4->raise();
        label_my_setup2->raise();
        label_my_setup->raise();
        pushButton_person_infor->raise();
        label_my_bend->raise();
        label_my_bend2->raise();
        label_L_5->raise();
        label_my_bend_3->raise();
        label_my_bend_4->raise();
        pushButton_bend->raise();
        label_my_off->raise();
        label_my_off2->raise();
        pushButton_off->raise();

        retranslateUi(PersonForm);

        QMetaObject::connectSlotsByName(PersonForm);
    } // setupUi

    void retranslateUi(QWidget *PersonForm)
    {
        PersonForm->setWindowTitle(QApplication::translate("PersonForm", "Form", nullptr));
        pushButton_person_head_image->setText(QString());
        label_user_name->setText(QApplication::translate("PersonForm", "\346\242\246\346\203\263\345\260\221\345\271\264", nullptr));
        label_user_member_icon->setText(QString());
        pushButton->setText(QString());
        pushButton_sign->setText(QString());
        pushButton_dynamic->setText(QApplication::translate("PersonForm", "\345\212\250\346\200\201", nullptr));
        pushButton_attention->setText(QApplication::translate("PersonForm", "\345\205\263\346\263\250", nullptr));
        pushButton_fans->setText(QApplication::translate("PersonForm", "\347\262\211\344\270\235", nullptr));
        labelline_1->setText(QString());
        label_dynamic->setText(QApplication::translate("PersonForm", "123", nullptr));
        label_attention->setText(QApplication::translate("PersonForm", "2000", nullptr));
        label_fans->setText(QApplication::translate("PersonForm", "10000", nullptr));
        pushButton_mymember->setText(QString());
        labelline_2->setText(QString());
        labelline_3->setText(QString());
        label_my_menber->setText(QString());
        label_my_member->setText(QApplication::translate("PersonForm", "\346\210\221\347\232\204\344\274\232\345\221\230", nullptr));
        label_my_member_time->setText(QApplication::translate("PersonForm", "2019.05.05\345\210\260\346\234\237", nullptr));
        label_L_1->setText(QApplication::translate("PersonForm", ">", nullptr));
        pushButton_dengji->setText(QString());
        pushButton_shop->setText(QString());
        pushButton_person_infor->setText(QString());
        pushButton_bend->setText(QString());
        pushButton_off->setText(QString());
        label_my_dengji->setText(QString());
        label_my_dengji_1->setText(QApplication::translate("PersonForm", "\347\255\211\347\272\247", nullptr));
        label_L_2->setText(QApplication::translate("PersonForm", ">", nullptr));
        label_my_dengji_2->setText(QApplication::translate("PersonForm", "LV.9", nullptr));
        label_my_shop->setText(QString());
        label_my_shop2->setText(QApplication::translate("PersonForm", "\345\225\206\345\237\216", nullptr));
        label_L_3->setText(QApplication::translate("PersonForm", ">", nullptr));
        label_L_4->setText(QApplication::translate("PersonForm", ">", nullptr));
        label_my_setup2->setText(QApplication::translate("PersonForm", "\344\270\252\344\272\272\344\277\241\346\201\257\350\256\276\347\275\256", nullptr));
        label_my_setup->setText(QString());
        label_my_bend->setText(QString());
        label_my_bend2->setText(QApplication::translate("PersonForm", "\347\273\221\345\256\232\347\244\276\344\272\244\350\264\246\345\217\267", nullptr));
        label_L_5->setText(QApplication::translate("PersonForm", ">", nullptr));
        label_my_bend_3->setText(QString());
        label_my_bend_4->setText(QString());
        label_my_off->setText(QString());
        label_my_off2->setText(QApplication::translate("PersonForm", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonForm: public Ui_PersonForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONFORM_H
