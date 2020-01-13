#include "PlanCreateForm.h"
#include "ui_PlanCreateForm.h"

PlanCreateForm::PlanCreateForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlanCreateForm)
{
    ui->setupUi(this);

    setWindowTitle(QString::fromLocal8Bit("创建计划"));
    setWindowFlags(windowFlags()&~Qt::WindowMinMaxButtonsHint);
    setFixedSize(this->width(),this->height());
}

PlanCreateForm::~PlanCreateForm()
{
    delete ui;
}

void PlanCreateForm::on_pushButton_2_clicked()
{
    this->close();
}
