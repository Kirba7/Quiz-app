#include <QApplication>
#include "ui/window.h"

#include <QFile>
#include <QWidget>

void setStyleFromFile(QWidget *w, QString res)
{
    QFile file(res);
    if (file.open(QFile::ReadOnly | QFile::Text))
    {
        QTextStream ts(&file);
        w->setStyleSheet(ts.readAll());
        file.close();
    }
    else qWarning("Unable to open stylesheet file.");
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Window w;
    setStyleFromFile(&w, ":/ui/Styles.qss");
    w.show();
    return a.exec();
}
