#ifndef FR_SEL_H
#define FR_SEL_H

#include <QDialog>

namespace Ui {
class fr_sel;
}

class fr_sel : public QDialog
{
    Q_OBJECT

public:
    explicit fr_sel(QWidget *parent = nullptr);
    ~fr_sel();

private slots:
    void on_FR_1_clicked();

    void on_FR_2_clicked();

    void on_FR_3_clicked();

    void on_FR_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::fr_sel *ui;
};

#endif // FR_SEL_H
