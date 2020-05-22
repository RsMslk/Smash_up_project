#ifndef SELECT_FRACTION_H
#define SELECT_FRACTION_H

#include <QWidget>
#include <QDialog>
#include <qdynamicbutton.h>

namespace Ui {
class select_fraction;
}

class select_fraction : public QDialog
{
    Q_OBJECT

public:
    explicit select_fraction(QWidget *parent = nullptr);

    ~select_fraction();

private:
    Ui::select_fraction *ui;
    void on_addButton_clicked();    // СЛОТ-обработчик нажатия кнопки добавления
    void on_deleteButton_clicked(); // СЛОТ-обработчик нажатия кнопки удаления
    void slotGetNumber();           // СЛОТ для получения номера нажатой динамической кнопки
};

#endif // SELECT_FRACTION_H
