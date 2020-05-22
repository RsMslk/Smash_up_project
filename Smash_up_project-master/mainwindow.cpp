#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QLine>
#include "game_window.h"
#include "settings.h"
#include <QPixmap>
#include <QPalette>
#include <QPainter>
#include <QPaintEvent>
#include <select_player.h>
#include <select_fraction.h>
#include <fr_sel.h>
extern QString  new_nickname_global;
//extern QPixmap new_avatar;
extern QString file_name;

QString player_nickname_mainwindow = NULL;
//QPixmap player_avatar_mainwindow = QPixmap(":/images/images/avatar_default.png");
QString player_avatar_file_path = ":/images/images/avatar_default.png";


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->profile_pic_label->setPixmap(player_avatar_file_path);
    QPixmap background (":/images/images/background.jpg");
    //background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);
    ui->nickname_label->setStyleSheet("font-size:72px; "
                                      " color: rgb(255, 255, 255)");
    ui->insert_nickname_label ->setStyleSheet("font-size:16px; color: rgb(255, 255, 255)");
    ui->quit_button->setStyleSheet("font-size: 16px");
    ui->online_button->setStyleSheet("font-size: 16px");
    ui->offline_button->setStyleSheet("font-size: 16px");
    ui-> settings_button ->setStyleSheet("font-size: 16px");

   // m_pMyWidget = new QWidget(this);
   //ui->profile_pic_label->setText(NULL);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_quit_button_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Smash up", "Quit?",QMessageBox::Yes | QMessageBox::No);//critical, info, about, warning, question - otvet ot plzovatelia
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }else{
        qDebug()<<"exit = 0";
    }
}


void MainWindow::on_nickname_field_returnPressed()
{
    on_nickname_button_clicked();
}

void MainWindow::on_nickname_button_clicked()
{

    QString nickname = ui->nickname_field->text();
    if(nickname == NULL){
        QMessageBox::warning(this,"Smash_up", "Enter your nickname") ;
    }else{
        player_nickname_mainwindow = ui->nickname_field->text();
        delete ui->nickname_field;
        delete ui->nickname_button;
        delete ui->insert_nickname_label;
        ui->nickname_label->setText(player_nickname_mainwindow);
    }

}

void MainWindow::on_offline_button_clicked()
{
//    close();
//    hide();
    select_player select;
    select.setModal(true);
    select.exec();
    fr_sel frac_sel;
    frac_sel.setModal(true);
    frac_sel.exec();
    //select_fraction select_fr;
    //select_fr.setModal(true);
   // select_frac = new select_fraction(this);
   // select_frac->show();



   // game_window game;
   // game.setModal(true);
   // game.exec();

}

void MainWindow::on_online_button_clicked()
{
 //   close();
  //  hide();
    select_player select;
    select .exec();
    game_window game;
    game.setModal(true);
    game.exec();
}



void MainWindow::on_settings_button_clicked()
{
     Settings settings;
     settings.setModal(true);
     settings.exec();
     while(1){
        if(new_nickname_global != NULL){
            player_nickname_mainwindow = new_nickname_global;
            player_avatar_file_path = file_name;
            ui->profile_pic_label->setPixmap(QPixmap (player_avatar_file_path));
            ui->nickname_label->setText(player_nickname_mainwindow);
            break;
        }else{
            player_avatar_file_path = file_name;
            ui->profile_pic_label->setPixmap(QPixmap (player_avatar_file_path));
            break;
        }
     }

}
