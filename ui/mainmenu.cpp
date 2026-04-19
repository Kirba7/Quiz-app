#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_btn_settings_clicked()
{
    emit onSettingsClicked();
}


void MainMenu::on_btn_create_game_clicked()
{
    emit onCreateGameClicked();
}

