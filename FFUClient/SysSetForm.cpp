#include "SysSetForm.h"
#include "ui_SysSetForm.h"

SysSetForm::SysSetForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SysSetForm)
{
    ui->setupUi(this);

    // 默认设置
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(this->width(),this->height());
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->groupBox->setTitle(QString::fromLocal8Bit("系统设置"));


    ui->lineEditProName->setText(QString::fromLocal8Bit("FFU控制系统"));
}

SysSetForm::~SysSetForm()
{
    delete ui;
}

void SysSetForm::on_pushButton_clicked()
{
    this->close();
}

void SysSetForm::on_pushButton_2_clicked()
{
    this->close();
}
