#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();

private slots:
    void onSettingsOpened();
    void onSettingsClosed();
    void onLobbyOpened();
    void onLobbyClosed();

private:
    Ui::Window *ui;
    class MainMenu* main;
    class Settings* settings;
    class LobbyWindow* lobby;
};

#endif // WINDOW_H
