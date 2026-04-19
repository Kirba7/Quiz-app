#include "window.h"
#include "ui_window.h"
#include "mainmenu.h"
#include "settings.h"
#include "lobbywindow.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    main = new MainMenu(parent);
    settings = new Settings(parent);
    lobby = new LobbyWindow(parent);

    ui->SW_stack->insertWidget(0, main);
    ui->SW_stack->insertWidget(1, settings);
    ui->SW_stack->insertWidget(2, lobby);

    ui->SW_stack->setCurrentWidget(main);

    connect(main, &MainMenu::onCreateGameClicked, this, &Window::onLobbyOpened);
    connect(main, &MainMenu::onSettingsClicked, this, &Window::onSettingsOpened);
    connect(settings, &Settings::onAccepted, this, &Window::onSettingsClosed);
    connect(settings, &Settings::onRejected, this, &Window::onSettingsClosed);
    connect(lobby, &LobbyWindow::onLeave, this, &Window::onLobbyClosed);
}

void Window::onSettingsOpened()
{
    ui->SW_stack->setCurrentWidget(settings);
}

void Window::onSettingsClosed()
{
    ui->SW_stack->setCurrentWidget(main);
}

void Window::onLobbyOpened()
{
    ui->SW_stack->setCurrentWidget(lobby);
}

void Window::onLobbyClosed()
{

}

Window::~Window()
{
    delete ui;
    delete main;
    delete settings;
    delete lobby;
}


