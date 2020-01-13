#include "SensorManageForm.h"
#include "ui_SensorManageForm.h"

SensorManageForm::SensorManageForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SensorManageForm)
{
    ui->setupUi(this);

    // 默认设置
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(this->width(),this->height());
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->groupBox->setTitle(QString::fromLocal8Bit("传感器管理"));

    initTableView();
    updateTableView();

}

SensorManageForm::~SensorManageForm()
{
    delete ui;
}

/**
 * @brief initTableView 初始化列表
 */
void SensorManageForm::initTableView()
{
    m_itemModel= new QStandardItemModel(this);
    m_itemModel->setColumnCount(15);
    m_itemModel->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("UUID"));
    m_itemModel->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("名称"));
    m_itemModel->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("类型"));
    m_itemModel->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("区域类型"));
    m_itemModel->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("颜色分类"));
    m_itemModel->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("网关IP"));
    m_itemModel->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("端口"));
    m_itemModel->setHeaderData(7, Qt::Horizontal, QString::fromLocal8Bit("传感器编号"));
    m_itemModel->setHeaderData(8, Qt::Horizontal, QString::fromLocal8Bit("最小值"));
    m_itemModel->setHeaderData(9, Qt::Horizontal, QString::fromLocal8Bit("最大值"));
    m_itemModel->setHeaderData(10, Qt::Horizontal, QString::fromLocal8Bit("安全上限"));
    m_itemModel->setHeaderData(11, Qt::Horizontal, QString::fromLocal8Bit("安全下限"));
    m_itemModel->setHeaderData(12, Qt::Horizontal, QString::fromLocal8Bit("数值"));
    m_itemModel->setHeaderData(13, Qt::Horizontal, QString::fromLocal8Bit("是否在线"));
    m_itemModel->setHeaderData(14, Qt::Horizontal, QString::fromLocal8Bit("是否启用"));
    ui->tableViewSensor->setModel(m_itemModel);
    ui->tableViewSensor->setColumnHidden(0, true);
}

/**
 * @brief updateTableView 更新列表
 */
void SensorManageForm::updateTableView()
{
    m_itemModel->removeRows(0, m_itemModel->rowCount());

    QSqlQuery query;
    query.exec("SELECT SensorID,Title,Type,AreaType,ColorType,GatewayIP,Port,No,MinValue,MaxValue,UpSafe,DownSafe,Value,IsOnline,IsEnable FROM ComSensor");
    while (query.next())
    {
        QString strUUID = query.value(0).toString();
        QString strTitle = query.value(1).toString();
        QString strType = query.value(2).toString();
        QString strAreaType = query.value(3).toString();
        QString strColorType = query.value(4).toString();
        QString strGatewayIP = query.value(5).toString();
        QString strPort = query.value(6).toString();
        QString strNo = query.value(7).toString();
        QString strMinValue = query.value(8).toString();
        QString strMaxValue = query.value(9).toString();
        QString strUpSafe = query.value(10).toString();
        QString strDownSafe = query.value(11).toString();
        QString strValue = query.value(12).toString();
        bool isOnline = query.value(13).toBool();
        bool isEnable = query.value(14).toBool();
        QString strOnline = QString::fromLocal8Bit("否");
        QString strEnable = QString::fromLocal8Bit("否");
        if(isOnline)
            strOnline = QString::fromLocal8Bit("是");
        if(isEnable)
            strEnable = QString::fromLocal8Bit("是");

        int rowCount = m_itemModel->rowCount();
        m_itemModel->setItem(rowCount, 0, new QStandardItem(strUUID));
        m_itemModel->setItem(rowCount, 1, new QStandardItem(strTitle));
        m_itemModel->setItem(rowCount, 2, new QStandardItem(strType));
        m_itemModel->setItem(rowCount, 3, new QStandardItem(strAreaType));
        m_itemModel->setItem(rowCount, 4, new QStandardItem(strColorType));
        m_itemModel->setItem(rowCount, 5, new QStandardItem(strGatewayIP));
        m_itemModel->setItem(rowCount, 6, new QStandardItem(strPort));
        m_itemModel->setItem(rowCount, 7, new QStandardItem(strNo));
        m_itemModel->setItem(rowCount, 8, new QStandardItem(strMinValue));
        m_itemModel->setItem(rowCount, 9, new QStandardItem(strMaxValue));
        m_itemModel->setItem(rowCount, 10, new QStandardItem(strUpSafe));
        m_itemModel->setItem(rowCount, 11, new QStandardItem(strDownSafe));
        m_itemModel->setItem(rowCount, 12, new QStandardItem(strValue));
        m_itemModel->setItem(rowCount, 13, new QStandardItem(strOnline));
        m_itemModel->setItem(rowCount, 14, new QStandardItem(strEnable));
    }

}

void SensorManageForm::on_pushButtonAdd_clicked()
{
    SensorEditForm *sensorEditForm = new SensorEditForm();
    connect(sensorEditForm, SIGNAL(editFinish()), this, SLOT(onEditFinish()));
    sensorEditForm->setWindowModality(Qt::ApplicationModal);
    sensorEditForm->show();

}

void SensorManageForm::on_pushButtonColor_clicked()
{
    SensorColorForm *sensorColorForm = new SensorColorForm();
    sensorColorForm->setWindowModality(Qt::ApplicationModal);
    sensorColorForm->show();
}

void SensorManageForm::on_pushButtonClose_clicked()
{
    close();
}

void SensorManageForm::onEditFinish()
{
    updateTableView();
}

void SensorManageForm::on_pushButtonEdit_clicked()
{
    QModelIndex modelIndex = ui->tableViewSensor->currentIndex();
    if(!modelIndex.isValid())
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("请选择要编辑的项！"));
        delete msgBox;
        return;
    }

    modelIndex = m_itemModel->index(modelIndex.row(), 0);
    QString strUUID = m_itemModel->data(modelIndex).toString();

    SensorEditForm *sensorEditForm = new SensorEditForm();
    connect(sensorEditForm, SIGNAL(editFinish()), this, SLOT(onEditFinish()));
    connect(this, SIGNAL(edit(QString)), sensorEditForm, SLOT(onEdit(QString)));
    sensorEditForm->setWindowModality(Qt::ApplicationModal);
    sensorEditForm->show();

    emit edit(strUUID);

    return;
}
