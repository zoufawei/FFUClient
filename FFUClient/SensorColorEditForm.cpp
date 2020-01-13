#include "SensorColorEditForm.h"
#include "ui_SensorColorEditForm.h"

SensorColorEditForm::SensorColorEditForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SensorColorEditForm)
{
    ui->setupUi(this);

    // 默认设置
    m_isEditModal = false;
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(this->width(),this->height());
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->groupBox->setTitle(QString::fromLocal8Bit("传感器颜色编辑"));
}

SensorColorEditForm::~SensorColorEditForm()
{
    delete ui;
}

void SensorColorEditForm::on_pushButtonOk_clicked()
{
    // 名称、值
    QString name = ui->lineEditName->text();
    QString value = ui->lineEditValue->text();
    if(name.isEmpty() || value.isEmpty())
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("信息不完整！"));
        delete msgBox;
        return;
    }

    // 颜色
    QColor bgColor = ui->pushButtonColor->palette().color(QPalette::Background);
    QString color = rgb2Hexstr(bgColor);

    QSqlQuery query;
    if(!m_isEditModal)
    {
        // uuid
        QUuid id = QUuid::createUuid();
        QString strUuid = id.toString();

        // 插入
        if (!query.exec(QString("INSERT INTO ComSensorStateColor (ComSensorStateColorID, Type, Color, LowValue) VALUES ('%1', '%2', '%3', %4)").arg(strUuid).arg(name).arg(color).arg(value)))
        {
            QSqlError err = query.lastError();
            qDebug()<<err.text();
            return;
        }
    }
    else
    {
        // 更新
        if (!query.exec(QString("UPDATE ComSensorStateColor SET Type='%1', Color='%2', LowValue=%3 WHERE ComSensorStateColorID='%4'").arg(name).arg(color).arg(value).arg(m_uuid)))
        {
            MsgBoxEx *msgBox = new MsgBoxEx();
            msgBox->setMsgBoxMode(QString::fromLocal8Bit("修改传感器颜色失败！"));
            delete msgBox;
            return;
        }
    }

    emit editFinish();

    close();
}

void SensorColorEditForm::on_pushButtonColor_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this);
    QString colorHex = rgb2Hexstr(color);
    QString strStyle = QString("QPushButton{background:%1}").arg(colorHex);
    ui->pushButtonColor->setStyleSheet(strStyle);
}

QString SensorColorEditForm::rgb2Hexstr(QColor rgb)
{
    QString r = QString("%1").arg(rgb.red(), 2, 16, QChar('0'));
    QString g = QString("%1").arg(rgb.green(), 2, 16, QChar('0'));
    QString b = QString("%1").arg(rgb.blue(), 2, 16, QChar('0'));
    return "#"+r+g+b;
}

void SensorColorEditForm::on_pushButtonCancel_clicked()
{
    close();
}

void SensorColorEditForm::onEdit(QString uuid)
{
    m_isEditModal = true;
    m_uuid = uuid;
    QSqlQuery query;
    query.exec(QString("SELECT Type,Color,LowValue FROM ComSensorStateColor WHERE ComSensorStateColorID = '%1'").arg(uuid));
    if(query.next())
    {
        QString strName = query.value(0).toString();
        QString strColor = query.value(1).toString();
        QString strValue = query.value(2).toString();

        ui->lineEditName->setText(strName);
        ui->lineEditValue->setText(strValue);
        QString strStyle = QString("QPushButton{background:%1}").arg(strColor);
        ui->pushButtonColor->setStyleSheet(strStyle);
    }
}
