#include "LoginForm.h"
#include "ui_LoginForm.h"

LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);

    init();
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::init()
{
    setWindowIcon(QIcon("./res/icon/sys.png"));
    setWindowTitle(QString::fromLocal8Bit("系统登录"));
    setWindowFlags(Qt::FramelessWindowHint);
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    ui->pushButtonTitle->setStyleSheet("QPushButton:!enabled{background:#DB6574; font-size:18pt; font-family:Microsoft YaHei; color:#FFFFFF}");
    ui->pushButtonTitle->setEnabled(false);
    ui->pushButtonTitle->setText(QString::fromLocal8Bit("FFU控制系统"));

    ui->lineEdit_userName->setText("Admin");
    ui->lineEdit_passwd->setText("Admin");


    ui->toolButtonEye->setStyleSheet("QToolButton{background:transparent;}\
                                     QToolButton:!checked{border-image:url(./res/icon/eye_close.png);}\
                                     QToolButton:checked{border-image:url(./res/icon/eye_open.png);}");
                                     connect(ui->toolButtonEye, SIGNAL(toggled(bool)), this, SLOT(onEyeToggled(bool)));
}

void LoginForm::on_pushButton_login_clicked()
{
    if(!linkdb())
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("连接数据库失败，请检查服务器参数配置！"), 3000);
        delete msgBox;
        return;
    }

    // 空字符校验
    QString strName = ui->lineEdit_userName->text();
    QString strPasswd = ui->lineEdit_passwd->text();
    if (strName.isEmpty() || strPasswd.isEmpty())
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("用户名或密码不可为空！"));
        delete msgBox;
        return;
    }


    // 查询用户表
    bool bOk = false;
    QSqlQuery query;
    query.exec(tr("SELECT * FROM FFU_INFO_USER WHERE UserName = '%1' AND Password = '%2'").arg(strName).arg(strPasswd));
    while (query.next())
    {
        m_userName = query.value(0).toString();
        m_userPasswd = query.value(1).toString();
        m_userLevel = query.value(2).toInt();
        Qt::CaseSensitivity cs = Qt::CaseSensitive;
        if (strName.compare(m_userName, cs) == 0 && strPasswd.compare(m_userPasswd, cs) == 0)
        {
            bOk = true;
            break;
        }
    }

    if(!bOk)
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("用户名或密码错误，请重新输入!"));
        delete msgBox;
        ui->lineEdit_userName->clear();
        ui->lineEdit_passwd->clear();
        return;
    }
    else
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("登录成功！"));
        delete msgBox;
        this->setEnabled(false);
        QTimer::singleShot(500, this, SLOT(onLoginMainWindow()));
    }
}

void LoginForm::on_pushButton_exit_clicked()
{
    MsgBoxEx *msgBox = new MsgBoxEx();
    connect(msgBox, SIGNAL(btnOkClicked()), this, SLOT(onBtnOkClicked()));
    connect(msgBox, SIGNAL(btnCancelClicked()), this, SLOT(onBtnCancelClicked()));
    msgBox->setMsgBoxMode(QString::fromLocal8Bit("确定要退出系统吗？"), "", MsgBoxBtnType::MsgBoxBtnType_OkCancle);
    delete msgBox;
}

void LoginForm::onBtnOkClicked()
{
    close();
}

void LoginForm::onBtnCancelClicked(){}

void LoginForm::onLoginMainWindow()
{
    this->close();
    MainWindow *mainWindow = new MainWindow(ui->lineEdit_userName->text(), ui->lineEdit_passwd->text());
    mainWindow->show();
}


void LoginForm::onEyeToggled(bool checked)
{
    if(checked)
    {
        ui->lineEdit_passwd->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->lineEdit_passwd->setEchoMode(QLineEdit::Password);
    }
}

bool LoginForm::linkdb()
{
    // 读取服务器配置参数
    Config config("./res/set/config.ini");
    QString serverName = config.get("DataBase", "ServerName").toString();
    QString databaseName = config.get("DataBase", "DataBaseName").toString();
    QString loginName = config.get("DataBase", "LoginName").toString();
    QString passwd = config.get("DataBase", "Passwd").toString();

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
    db.setDatabaseName(QString("DRIVER={SQL SERVER};"
                               "SERVER=%1;"
                               "DATABASE=%2;"
                               "UID=%3;"
                               "PWD=%4;").arg(serverName).arg(databaseName).arg(loginName).arg(passwd));
    if (!db.open())
    {
        return false;
    }
    return true;
}
