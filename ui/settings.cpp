#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_btn_cancel_clicked()
{
    emit onRejected();
}


void Settings::on_btn_save_clicked()
{
    emit onAccepted();
}

