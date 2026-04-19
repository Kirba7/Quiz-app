#ifndef LOBBYWINDOW_H
#define LOBBYWINDOW_H

#include <QMainWindow>

namespace Ui {
class LobbyWindow;
}

class LobbyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LobbyWindow(QWidget *parent = nullptr);
    ~LobbyWindow();

signals:
    void onGameStarted();
    void onLeave();

private slots:
    void on_btn_start_clicked();

    void on_btn_leave_clicked();

private:
    Ui::LobbyWindow *ui;
};

#endif // LOBBYWINDOW_H
