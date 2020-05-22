#include "fr_sel.h"
#include "ui_fr_sel.h"
#include <QPixmap>
#include <QIcon>


int player_number_picking = 0;
int player_0_fr_1, player_0_fr_2, player_1_fr_1, player_1_fr_2;
fr_sel::fr_sel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fr_sel)
{
    ui->setupUi(this);
    QPixmap ninja_pic(":/images/images/Pirates.png");
    QIcon ButtonIcon_1(ninja_pic);
    ui->FR_1->setIcon(ButtonIcon_1);
    ui->FR_1->setIconSize(ninja_pic.rect().size());
    QPixmap pirate_pic(":/images/images/Ninjas.png");
    QIcon ButtonIcon_2(pirate_pic);
    ui->FR_2->setIcon(ButtonIcon_2);
    ui->FR_2->setIconSize(pirate_pic.rect().size());
    QPixmap Dino_pic(":/images/images/goblins.png");
    QIcon ButtonIcon_3(Dino_pic);
    ui->FR_3->setIcon(ButtonIcon_3);
    ui->FR_3->setIconSize(Dino_pic.rect().size());
    QPixmap pony_pic(":/images/images/ninjas.png");
    QIcon ButtonIcon_4(pony_pic);
    ui->FR_4->setIcon(ButtonIcon_1);
    ui->FR_4->setIconSize(pony_pic.rect().size());

}

fr_sel::~fr_sel()
{
    delete ui;
}


void fr_sel::on_FR_1_clicked()
{
    if(player_number_picking == 0){
       player_0_fr_1 = 0;
       ui->FR_1->setVisible(0);
    }
    if(player_number_picking == 1){
       player_1_fr_1 = 0;
       ui->FR_1->setVisible(0);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 0;
       ui->FR_1->setVisible(0);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 0;
       ui->FR_1->setVisible(0);
    }
    player_number_picking ++;
}

void fr_sel::on_FR_2_clicked()
{
    if(player_number_picking == 0){
       player_0_fr_1 = 1;
       ui->FR_2->setVisible(0);
    }
    if(player_number_picking == 1){
       player_1_fr_1 = 1;
       ui->FR_2->setVisible(0);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 1;
       ui->FR_2->setVisible(0);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 1;
       ui->FR_2->setVisible(0);
    }
    player_number_picking ++;
}

void fr_sel::on_FR_3_clicked()
{
    if(player_number_picking == 0){
       player_0_fr_1 = 2;
       ui->FR_3->setVisible(0);
    }
    if(player_number_picking == 1){
       player_1_fr_1 = 2;
       ui->FR_3->setVisible(0);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 2;
       ui->FR_3->setVisible(0);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 2;
       ui->FR_3->setVisible(0);
    }
    player_number_picking ++;
}

void fr_sel::on_FR_4_clicked()
{
    if(player_number_picking == 0){
       player_0_fr_1 = 3;
       ui->FR_4->setVisible(0);
    }
    if(player_number_picking == 1){
       player_1_fr_1 = 3;
       ui->FR_4->setVisible(0);
    }
    if(player_number_picking == 2){
       player_0_fr_2 = 3;
       ui->FR_4->setVisible(0);
    }
    if(player_number_picking == 3){
       player_1_fr_2 = 3;
       ui->FR_4->setVisible(0);
    }
    player_number_picking ++;
}
