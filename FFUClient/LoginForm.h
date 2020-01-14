#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QDebug>
#include <QTimer>
#include <QSqlError>
#include "ctrls/MsgBoxEx.h"
#include "Config.h"
#include "MainWindow.h"

namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = nullptr);
    ~LoginForm();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_exit_clicked();

    void onBtnOkClicked();
    void onBtnCancelClicked();

    void onLoginMainWindow();
    void onEyeToggled(bool checked);

private:
    Ui::LoginForm *ui;

    QString m_userName;
    QString m_userPasswd;
    int m_userLevel;

private:
    bool linkdb();
    void init();
};

#endif // LOGINFORM_H
