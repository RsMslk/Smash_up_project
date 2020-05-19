#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QLine>
#include "game_window.h"
#include "settings.h"

QString player_nickname_mainwindow = NULL;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    game_window game;
    game.setModal(true);
    game.exec();

}

void MainWindow::on_online_button_clicked()
{
 //   close();
  //  hide();
    game_window game;
    game.setModal(true);
    game.exec();
}



void MainWindow::on_settings_button_clicked()
{
     Settings settings;
     settings.setModal(true);
     settings.exec();

}
