#ifndef PASSWORDCHANGEFORM_H
#define PASSWORDCHANGEFORM_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include "Custom.h"
#include "ctrls/MsgBoxEx.h"

namespace Ui {
class PasswordChangeForm;
}

class PasswordChangeForm : public QWidget
{
    Q_OBJECT

public:
    explicit PasswordChangeForm(QString user, QString passwd, QWidget *parent = nullptr);
    ~PasswordChangeForm();

private slots:
    void on_pushButtonCancel_clicked();

    void on_pushButtonOk_clicked();

private:
    Ui::PasswordChangeForm *ui;
    QString m_user;
    QString m_passwd;
};

#endif // PASSWORDCHANGEFORM_H
