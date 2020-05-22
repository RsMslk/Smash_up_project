#include "fr_sel.h"
#include "ui_fr_sel.h"
#include <QPixmap>
#include <QIcon>
#include <QString>
#include "game_window.h"
extern QString player_nickname_mainwindow;



int player_number_picking = 0;
int player_0_fr_1, player_0_fr_2, player_1_fr_1, player_1_fr_2;

fr_sel::fr_sel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fr_sel)
{
    QPixmap pirate_pic(":/images/images/Pirates.png");
    QPixmap Dino_pic(":/images/images/Dinos.png");
    QPixmap goblin_pic(":/images/images/goblins.png");
    QPixmap ninja_pic(":/images/images/Ninjas.png");

    ui->setupUi(this);
    QIcon ButtonIcon_1(pirate_pic);
    ui->FR_1->setIcon(ButtonIcon_1);
    ui->FR_1->setIconSize(pirate_pic.rect().size());

    QIcon ButtonIcon_2(Dino_pic);
    ui->FR_2->setIcon(ButtonIcon_2);
    ui->FR_2->setIconSize(Dino_pic.rect().size());

    QIcon ButtonIcon_3(goblin_pic);
    ui->FR_3->setIcon(ButtonIcon_3);
    ui->FR_3->setIconSize(goblin_pic.rect().size());

    QIcon ButtonIcon_4(ninja_pic);
    ui->FR_4->setIcon(ButtonIcon_4);
    ui->FR_4->setIconSize(ninja_pic.rect().size());
    ui->current_player->setText(player_nickname_mainwindow);
    ui->p1_fr_list->setText(player_nickname_mainwindow);
}

fr_sel::~fr_sel()
{
    delete ui;
}


void fr_sel::on_FR_1_clicked()
{
    QPixmap pirate_pic(":/images/images/Pirates.png");
    QPixmap Dino_pic(":/images/images/Dinos.png");
    QPixmap goblin_pic(":/images/images/goblins.png");
    QPixmap ninja_pic(":/images/images/ninjas.png");

    if(player_number_picking == 0){
       player_0_fr_1 = 0;
       ui->FR_1->setVisible(0);
       ui->current_player->setText("Default");
       ui->fr_11->setPixmap(pirate_pic);
    }
    if(player_number_picking == 1){
       player_1_fr_1 = 0;
       ui->FR_1->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
       ui->fr_21->setPixmap(pirate_pic);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 0;
       ui->FR_1->setVisible(0);
       ui->current_player->setText("Default");
       ui->fr_12->setPixmap(pirate_pic);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 0;
       ui->FR_1->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
       ui->fr_22->setPixmap(pirate_pic);
    }
    player_number_picking ++;
}

void fr_sel::on_FR_2_clicked()
{
    QPixmap pirate_pic(":/images/images/Pirates.png");
    QPixmap Dino_pic(":/images/images/Dinos.png");
    QPixmap goblin_pic(":/images/images/goblins.png");
    QPixmap ninja_pic(":/images/images/ninjas.png");

    if(player_number_picking == 0){
       player_0_fr_1 = 1;
       ui->FR_2->setVisible(0);
       ui->current_player->setText("Default");
       ui->fr_11->setPixmap(Dino_pic);

    }
    if(player_number_picking == 1){
       player_1_fr_1 = 1;
       ui->FR_2->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
       ui->fr_21->setPixmap(Dino_pic);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 1;
       ui->FR_2->setVisible(0);
       ui->current_player->setText("Default");
       ui->fr_12->setPixmap(Dino_pic);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 1;
       ui->FR_2->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
       ui->fr_22->setPixmap(Dino_pic);
    }
    player_number_picking ++;
}

void fr_sel::on_FR_3_clicked()
{
    QPixmap pirate_pic(":/images/images/Pirates.png");
    QPixmap Dino_pic(":/images/images/Dinos.png");
    QPixmap goblin_pic(":/images/images/goblins.png");
    QPixmap ninja_pic(":/images/images/ninjas.png");

    if(player_number_picking == 0){
       player_0_fr_1 = 2;
       ui->FR_3->setVisible(0);
       ui->current_player->setText("Default");
       ui->fr_11->setPixmap(goblin_pic);
    }
    if(player_number_picking == 1){
       player_1_fr_1 = 2;
       ui->FR_3->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
        ui->fr_21->setPixmap(goblin_pic);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 2;
       ui->FR_3->setVisible(0);
       ui->current_player->setText("Default");
       ui->fr_12->setPixmap(goblin_pic);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 2;
       ui->FR_3->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
       ui->fr_22->setPixmap(goblin_pic);
    }
    player_number_picking ++;
}

void fr_sel::on_FR_4_clicked()
{
    QPixmap pirate_pic(":/images/images/Pirates.png");
    QPixmap Dino_pic(":/images/images/Dinos.png");
    QPixmap goblin_pic(":/images/images/goblins.png");
    QPixmap ninja_pic(":/images/images/Ninjas.png");

    if(player_number_picking == 0){
       player_0_fr_1 = 3;
       ui->FR_4->setVisible(0);
       ui->current_player->setText("Default");
        ui->fr_11->setPixmap(ninja_pic);
    }
    if(player_number_picking == 1){
       player_1_fr_1 = 3;
       ui->FR_4->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
       ui->fr_21->setPixmap(ninja_pic);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 3;
       ui->FR_4->setVisible(0);
       ui->current_player->setText("Default");
       ui->fr_12->setPixmap(ninja_pic);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 3;
       ui->FR_4->setVisible(0);
       ui->current_player->setText(player_nickname_mainwindow);
       ui->fr_22->setPixmap(ninja_pic);
    }
    player_number_picking ++;
}

void fr_sel::on_pushButton_clicked()
{
    hide();
    game_window Game;
    Game.setModal(1);
    Game.exec();
}
