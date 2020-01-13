#include "updatelogform.h"
#include "ui_updatelogform.h"

UpdateLogForm::UpdateLogForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateLogForm)
{
    ui->setupUi(this);
}

UpdateLogForm::~UpdateLogForm()
{
    delete ui;
}

void UpdateLogForm::onFormLoad()
{
    //设置窗体模态，要求该窗体没有父类，否则无效
    this->setWindowModality(Qt::ApplicationModal);
    this->show();
}
