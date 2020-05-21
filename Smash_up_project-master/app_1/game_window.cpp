#include "game_window.h"
#include "ui_game_window.h"
#include "mainwindow.h"
#include <QtWidgets>
#include <QLayoutItem>
#include <QSpacerItem>
extern int number_of_players;

int Num;

game_window::game_window(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::game_window)
{
    ui->setupUi(this);



    if(number_of_players ==2){

        delete ui->player_2_avatar;
        delete ui->player_2_fr_1;
        delete ui->player_2_fr_2;
        delete ui->player_3_fr_1;
        delete ui->player_3_fr_2;
        delete ui->player_3_avatar;
       // delete ui->player_2_VP;
       //delete ui->player_3_VP;
    }
    if(number_of_players == 3){
        delete ui->player_3_fr_1;
        delete ui->player_3_fr_2;
        delete ui->player_3_avatar;
       // delete ui->player_3_VP;
    }



}

game_window::~game_window()
{

    delete ui;
    MainWindow main;
    main.show();
}


void game_window::on_game_window_finished(int result)
{
   MainWindow main;
   main.show();
  // ui ->setupUi(main);
}
