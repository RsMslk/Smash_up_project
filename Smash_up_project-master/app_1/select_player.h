#ifndef SELECT_PLAYER_H
#define SELECT_PLAYER_H

#include <QDialog>


namespace Ui {
class select_player;
}

class select_player : public QDialog
{
    Q_OBJECT

public:
    explicit select_player(QWidget *parent = nullptr);
   // int number_of_players;
    ~select_player();

private slots:
    void on_buttonBox_accepted();

    //void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::select_player *ui;
};

#endif // SELECT_PLAYER_H
