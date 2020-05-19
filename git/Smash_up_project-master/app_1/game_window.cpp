#include "game_window.h"
#include "ui_game_window.h"
#include "mainwindow.h"

game_window::game_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game_window)
{
    ui->setupUi(this);
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
