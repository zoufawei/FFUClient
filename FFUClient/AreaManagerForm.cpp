#include "AreaManagerForm.h"
#include "ui_AreaManagerForm.h"

AreaManagerForm::AreaManagerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AreaManagerForm)
{
    ui->setupUi(this);
}

AreaManagerForm::~AreaManagerForm()
{
    delete ui;
}
