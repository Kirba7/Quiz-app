#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainMenu;
}
QT_END_NAMESPACE

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

signals:
    void onSettingsClicked();
    void onCreateGameClicked();

private slots:
    void on_btn_settings_clicked();

    void on_btn_create_game_clicked();

private:
    Ui::MainMenu *ui;
};
#endif // MAINMENU_H
