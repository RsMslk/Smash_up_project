#include "select_player.h"
#include "ui_select_player.h"
#include <QPushButton>
#include <select_fraction.h>

int number_of_players = 0;

select_player::select_player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::select_player)
{
    ui->setupUi(this);
}

select_player::~select_player()
{
    delete ui;
}

void select_player::on_buttonBox_accepted()
{
    number_of_players = ui->player_counter_box->value();
    select_fraction select_fr;
    //select_fr.setModal(true);
    //select_fr.show();

}

