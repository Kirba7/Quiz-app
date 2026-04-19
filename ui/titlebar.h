#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QWidget>

namespace Ui {
class TitleBar;
}

class TitleBar : public QWidget
{
    Q_OBJECT

    QWidget* wndw;
    QPoint dragPosition;

public:
    explicit TitleBar(QWidget *parent = nullptr);
    ~TitleBar();

private:
    Ui::TitleBar *ui;

    void mousePressEvent(QMouseEvent* event);

    void mouseMoveEvent(QMouseEvent* event);

    void mouseDoubleClickEvent(QMouseEvent*);
};

#endif // TITLEBAR_H
