/********************************************************************************
** Form generated from reading UI file 'picturewallform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREWALLFORM_H
#define UI_PICTUREWALLFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureWallForm
{
public:
    QLabel *label_main;
    QLabel *label_main_r;
    QLabel *label_main_l;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_plus;

    void setupUi(QWidget *PictureWallForm)
    {
        if (PictureWallForm->objectName().isEmpty())
            PictureWallForm->setObjectName(QStringLiteral("PictureWallForm"));
        PictureWallForm->resize(776, 220);
        label_main = new QLabel(PictureWallForm);
        label_main->setObjectName(QStringLiteral("label_main"));
        label_main->setGeometry(QRect(118, 10, 540, 200));
        label_main_r = new QLabel(PictureWallForm);
        label_main_r->setObjectName(QStringLiteral("label_main_r"));
        label_main_r->setGeometry(QRect(236, 20, 540, 180));
        label_main_l = new QLabel(PictureWallForm);
        label_main_l->setObjectName(QStringLiteral("label_main_l"));
        label_main_l->setGeometry(QRect(0, 20, 540, 180));
        pushButton_subtract = new QPushButton(PictureWallForm);
        pushButton_subtract->setObjectName(QStringLiteral("pushButton_subtract"));
        pushButton_subtract->setGeometry(QRect(20, 60, 80, 81));
        pushButton_plus = new QPushButton(PictureWallForm);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(690, 60, 80, 81));
        label_main_r->raise();
        label_main_l->raise();
        label_main->raise();
        pushButton_subtract->raise();
        pushButton_plus->raise();

        retranslateUi(PictureWallForm);

        QMetaObject::connectSlotsByName(PictureWallForm);
    } // setupUi

    void retranslateUi(QWidget *PictureWallForm)
    {
        PictureWallForm->setWindowTitle(QApplication::translate("PictureWallForm", "Form", nullptr));
        label_main->setText(QString());
        label_main_r->setText(QString());
        label_main_l->setText(QString());
        pushButton_subtract->setText(QApplication::translate("PictureWallForm", "<<", nullptr));
        pushButton_plus->setText(QApplication::translate("PictureWallForm", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PictureWallForm: public Ui_PictureWallForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREWALLFORM_H
