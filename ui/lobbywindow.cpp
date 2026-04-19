#include "lobbywindow.h"
#include "ui_lobbywindow.h"

LobbyWindow::LobbyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LobbyWindow)
{
    ui->setupUi(this);
}

LobbyWindow::~LobbyWindow()
{
    delete ui;
}

void LobbyWindow::on_btn_start_clicked()
{
    emit onGameStarted();
}

void LobbyWindow::on_btn_leave_clicked()
{
    emit onLeave();
}

