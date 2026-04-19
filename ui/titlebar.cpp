#include "titlebar.h"
#include "qevent.h"
#include "ui_titlebar.h"

TitleBar::TitleBar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TitleBar)
{
    wndw = this->window();
    ui->setupUi(this);

    connect(ui->btn_collapse, &QPushButton::clicked, this, [this]()
            {
                wndw->showMinimized();
            });

    connect(ui->btn_mode, &QPushButton::clicked, this, [this]()
            {
                if (wndw->isMaximized())
                    wndw->showNormal();
                else
                    wndw->showMaximized();
            });

    connect(ui->btn_close, &QPushButton::clicked, this, [this]()
            {
                wndw->close();
            });
}

TitleBar::~TitleBar()
{
    delete ui;
}

void TitleBar::mousePressEvent(QMouseEvent* event)
{
    dragPosition = event->globalPosition().toPoint();
}

void TitleBar::mouseMoveEvent(QMouseEvent* event)
{
    QPoint delta = event->globalPosition().toPoint() - dragPosition;
    wndw->move(wndw->pos() + delta);
    dragPosition = event->globalPosition().toPoint();
}

void TitleBar::mouseDoubleClickEvent(QMouseEvent*)
{
    if (wndw->isMaximized())
        wndw->showNormal();
    else
        wndw->showMaximized();
}
