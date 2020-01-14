#include "LoginForm.h"
#include <QApplication>
#include "Custom.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginForm login;
    login.show();

    // return a.exec();
    int e = a.exec();
    if(e == RETCODE_RESTART)
    {
        QProcess::startDetached(qApp->applicationFilePath(), QStringList());
        return 0;
    }
}
