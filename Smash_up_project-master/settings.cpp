#include "settings.h"
#include "ui_settings.h"
#include "mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>
#include <QPalette>
extern QString  player_nickname_mainwindow;
//extern QPixmap player_avatar_mainwindow;
extern QString player_avatar_file_path;

QString new_nickname_global = NULL;
//QPixmap new_avatar;
QString file_name = ":/images/images/avatar_default.png";

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    ui->old_nickname->setText(player_nickname_mainwindow);

    ui->old_avatar->setPixmap(QPixmap (player_avatar_file_path));
}

Settings::~Settings()
{
    delete ui;

}

void Settings::on_change_avatar_button_clicked()
{
    file_name = QFileDialog::getOpenFileName(this, QString::fromUtf8("Имя файла"), "file.txt");
    qDebug()<< file_name;
    ui->old_avatar->setPixmap(QPixmap(file_name));



}


void Settings::on_buttonBox_accepted()
{
    QString new_nickname = ui->new_nickname_line->text();
    new_nickname_global =  ui->new_nickname_line->text();
 //   new_avatar = QPixmap(file_name);
   // emit nicknameChanged(new_nickname);
   //QObject::connect(ui->new_nickname_line->text(), nicknameChanged(new_nickname),mainwindow->nickname_field->text());
}

