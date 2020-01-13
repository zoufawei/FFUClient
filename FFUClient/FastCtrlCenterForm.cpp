#include "FastCtrlCenterForm.h"
#include "ui_FastCtrlCenterForm.h"

FastCtrlCenterForm::FastCtrlCenterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FastCtrlCenterForm)
{
    ui->setupUi(this);
}

FastCtrlCenterForm::~FastCtrlCenterForm()
{
    delete ui;
}
