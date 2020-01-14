#include "PasswordChangeForm.h"
#include "ui_PasswordChangeForm.h"

PasswordChangeForm::PasswordChangeForm(QString user, QString passwd, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PasswordChangeForm),
    m_user(user),
    m_passwd(passwd)
{
    ui->setupUi(this);

    // 默认设置
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(this->width(),this->height());
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->groupBox->setTitle(QString::fromLocal8Bit("密码修改"));
}

PasswordChangeForm::~PasswordChangeForm()
{
    delete ui;
}

void PasswordChangeForm::on_pushButtonCancel_clicked()
{
    this->close();
}

void PasswordChangeForm::on_pushButtonOk_clicked()
{
    QString passwdOld = ui->lineEditPasswdOld->text();
    QString passwdNew = ui->lineEditPasswdNew->text();
    QString passMakesure = ui->lineEditPasswdMakeSure->text();
    if(passwdOld.isEmpty() || passwdNew.isEmpty() || passMakesure.isEmpty())
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("所有输入框不可为空!"));
        delete msgBox;
        return;
    }

    Qt::CaseSensitivity cs = Qt::CaseSensitive;
    if (passwdOld.compare(m_passwd, cs) != 0)
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("输入的旧密码与当前登录密码不一致!"));
        delete msgBox;
        return;
    }

    if(passwdNew.compare(passMakesure, cs) != 0)
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("输入的新密码与确认密码不一致!"));
        delete msgBox;
        return;
    }

    if(passwdOld == passwdNew)
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("旧密码与新密码不可相同!"));
        delete msgBox;
        return;
    }

    QSqlQuery query;
    if(!query.exec(QString("UPDATE FFU_INFO_USER SET Password='%1' WHERE UserName='%2'").arg(passwdNew).arg(m_user)))
    {
        QSqlError err = query.lastError();
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("修改密码失败, 描述【%1】").arg(err.text()));
        delete msgBox;
        return;
    }

    QSqlError err = query.lastError();
    MsgBoxEx *msgBox = new MsgBoxEx();
    msgBox->setMsgBoxMode(QString::fromLocal8Bit("修改密码成功！"));
    delete msgBox;

    this->close();
}
