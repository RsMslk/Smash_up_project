#include "settings.h"
#include "ui_settings.h"
#include "mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QPixmap>

extern QString  player_nickname_mainwindow;

QString new_nickname_global = "Default";

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    ui->old_nickname->setText(player_nickname_mainwindow);
}

Settings::~Settings()
{
    delete ui;

}

void Settings::on_change_avatar_button_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, QString::fromUtf8("Имя файла"), "file.txt");
    qDebug()<< file_name;



}


void Settings::on_buttonBox_accepted()
{
    QString new_nickname = ui->new_nickname_line->text();
    new_nickname_global =  ui->new_nickname_line->text();
   // emit nicknameChanged(new_nickname);
    //QObject::connect(ui->new_nickname_line->text(), nicknameChanged(new_nickname),mainwindow->nickname_field->text());
}

