#include "UpdateLogForm.h"
#include "ui_UpdateLogForm.h"

UpdateLogForm::UpdateLogForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateLogForm)
{
    ui->setupUi(this);

    // 默认设置
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(this->width(),this->height());
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->groupBox->setTitle(QString::fromLocal8Bit("更新日志"));

    ui->textEdit->setReadOnly(true);
    ui->textEdit->setStyleSheet(QString::fromUtf8 ("QTextEdit{background-color:#2D3035; color:#CCCCCC; font:10pt Microsoft YaHei; border:none}"));
}

UpdateLogForm::~UpdateLogForm()
{
    delete ui;
}

void UpdateLogForm::onFormLoad()
{
    QFile file("./res/set/updatelog.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "The file can't open!" << endl;
        return;
    }
    QTextStream ts(&file);
    ui->textEdit->setText(ts.readAll());
    ui->textEdit->setAlignment(Qt::AlignLeft);
    ui->textEdit->setFont(QFont("Fixed[Misc]"));

    this->setWindowModality(Qt::ApplicationModal);
    this->show();
}

void UpdateLogForm::on_pushButton_clicked()
{
    this->close();
}
