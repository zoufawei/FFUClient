#include "QLayoutManager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLayoutManager w;
    w.show();
    return a.exec();
}
