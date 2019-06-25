#ifndef PICTUREWALLFORM_H
#define PICTUREWALLFORM_H

#include <QWidget>

namespace Ui {
class PictureWallForm;
}

class PictureWallForm : public QWidget
{
    Q_OBJECT

public:
    explicit PictureWallForm(QWidget *parent = 0);
    ~PictureWallForm();

private slots:
    void on_pushButton_plus_clicked();

    void on_pushButton_subtract_clicked();

private:
    Ui::PictureWallForm *ui;
};

#endif // PICTUREWALLFORM_H
