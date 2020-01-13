#include "SensorEditForm.h"
#include "ui_SensorEditForm.h"

SensorEditForm::SensorEditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SensorEditForm)
{
    ui->setupUi(this);

    // 默认设置
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(this->width(),this->height());
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->groupBox->setTitle(QString::fromLocal8Bit("传感器编辑"));
}

SensorEditForm::~SensorEditForm()
{
    delete ui;
}

void SensorEditForm::on_pushButtonOk_clicked()
{
    QUuid id = QUuid::createUuid();
    QString uuid = id.toString();
    QString name = ui->lineEditSensorName->text();
    QString no = ui->lineEditSensorNO->text();
    QString sensortype = ui->lineEditSensorType->text();
    QString areatype = ui->lineEditAreaType->text();
    QString colortype = ui->lineEditColorType->text();
    QString ip = ui->lineEditIP->text();
    QString port = ui->lineEditPort->text();
    QString valuemin = ui->lineEditValueMin->text();
    QString valuemax = ui->lineEditValueMax->text();
    QString waringup = ui->lineEditWaringUp->text();
    QString waringdn = ui->lineEditWaringDn->text();
    bool isEnable = false;
    if(ui->checkBoxEnable->isChecked()) isEnable = true;

    QSqlQuery query;
    QString sql = QString("INSERT INTO ComSensor (SensorID, Title, No, Type, AreaType, ColorType, GatewayIP, Port, MinValue, MaxValue, UpSafe, DownSafe, IsEnable) VALUES ('%1', '%2', %3, '%4', '%5', '%6','%7', %8, %9, %10, %11, %12, %13)")
            .arg(uuid).arg(name).arg(no.toInt()).arg(sensortype).arg(areatype).arg(colortype).arg(ip).arg(port.toInt()).arg(valuemin.toFloat()).arg(valuemax.toFloat()).arg(waringup.toFloat()).arg(waringdn.toFloat()).arg(isEnable);
    if(!query.exec(sql))
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("添加传感器失败！"));
        delete msgBox;
        return;
    }

    emit editFinish();

    close();
}

void SensorEditForm::on_pushButtonCancel_clicked()
{
    close();
}

void SensorEditForm::onEdit(QString uuid)
{
    qDebug()<<uuid;
}
