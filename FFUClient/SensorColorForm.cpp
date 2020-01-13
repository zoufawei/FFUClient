#include "SensorColorForm.h"
#include "ui_SensorColorForm.h"

SensorColorForm::SensorColorForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SensorColorForm)
{
    ui->setupUi(this);

    // 默认设置
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(this->width(),this->height());
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->groupBox->setTitle(QString::fromLocal8Bit("传感器颜色管理"));

    ui->tableViewColor->setStyleSheet("QTableView {border: 1px solid #22252A; background: #2D3035; alternate-background-color: #2D3035;}\
                                      QTableView::item {font: 15pt Microsoft YaHei; color: #CCCCCC;}\
                                          QTableView::item:selected {background: #DB6574; color:#FFFFFF;}\
                                          QTableView::item:selected:!active {color: #FFFFFF;}\
                                          QHeaderView::section{background:#2D3035; color:#FFFFFF; height:40px; font:12pt Microsoft YaHei;}\
                                          QHeaderView{background:#2D3035}");

    initTableView();
    updateTableView();
}

SensorColorForm::~SensorColorForm()
{
    delete ui;
}
/**
 * @brief initTableView 初始化列表
 */
void SensorColorForm::initTableView()
{
    m_itemModel= new QStandardItemModel(this);
    m_itemModel->setColumnCount(4);
    m_itemModel->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("UUID"));
    m_itemModel->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("传感器分区"));
    m_itemModel->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("颜色"));
    m_itemModel->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("值"));
    ui->tableViewColor->setModel(m_itemModel);
}


/**
 * @brief updateTableView 更新列表
 */
void SensorColorForm::updateTableView()
{
    m_itemModel->removeRows(0, m_itemModel->rowCount());

    QSqlQuery query;
    query.exec("SELECT ComSensorStateColorID, Type,Color,LowValue FROM ComSensorStateColor");
    while (query.next())
    {
        QString strUUID = query.value(0).toString();
        QString strType = query.value(1).toString();
        QString strColor = query.value(2).toString();
        double dValue = query.value(3).toDouble();
        QString strValue = QString("%1").arg(dValue);
        QStandardItem *colorItem = new QStandardItem();
        QBrush brush = QColor(strColor);
        colorItem->setBackground(brush);

        int rowCount = m_itemModel->rowCount();
        m_itemModel->setItem(rowCount, 0, new QStandardItem(strUUID));
        m_itemModel->setItem(rowCount, 1, new QStandardItem(strType));
        m_itemModel->setItem(rowCount, 2, colorItem);
        m_itemModel->setItem(rowCount, 3, new QStandardItem(strValue));
    }
}

void SensorColorForm::on_pushButtonAdd_clicked()
{
    SensorColorEditForm *sensorColorEditForm = new SensorColorEditForm();
    connect(sensorColorEditForm, SIGNAL(editFinish()), this, SLOT(onEditFinish()));
    sensorColorEditForm->setWindowModality(Qt::ApplicationModal);
    sensorColorEditForm->show();
}

void SensorColorForm::onEditFinish()
{
    updateTableView();
}

void SensorColorForm::on_pushButtonClose_clicked()
{
    close();
}

void SensorColorForm::on_pushButtonEdit_clicked()
{
    QModelIndex modelIndex = ui->tableViewColor->currentIndex();
    if(!modelIndex.isValid())
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("请选择要编辑的项！"));
        delete msgBox;
        return;
    }

    modelIndex = m_itemModel->index(modelIndex.row(), 0);
    QString strUUID = m_itemModel->data(modelIndex).toString();

    SensorColorEditForm *sensorColorEditForm = new SensorColorEditForm();
    connect(sensorColorEditForm, SIGNAL(editFinish()), this, SLOT(onEditFinish()));
    connect(this, SIGNAL(edit(QString)), sensorColorEditForm, SLOT(onEdit(QString)));
    sensorColorEditForm->setWindowModality(Qt::ApplicationModal);
    sensorColorEditForm->show();

    emit edit(strUUID);

    return;
}

void SensorColorForm::on_pushButtonDel_clicked()
{
    QModelIndex modelIndex = ui->tableViewColor->currentIndex();
    if(!modelIndex.isValid())
    {
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("请选择要删除的项！"));
        delete msgBox;
        return;
    }

    modelIndex = m_itemModel->index(modelIndex.row(), 0);
    QString strUUID = m_itemModel->data(modelIndex).toString();

    QSqlQuery query;
    query.prepare(QString("DELETE FROM ComSensorStateColor WHERE ComSensorStateColorID = '%1'").arg(strUUID));
    if(!query.exec())
    {
        QSqlError err = query.lastError();
        MsgBoxEx *msgBox = new MsgBoxEx();
        msgBox->setMsgBoxMode(QString::fromLocal8Bit("删除失败: 错误描述[ %1 ]").arg(err.text()));
        delete msgBox;
        return;
    }

    updateTableView();

    return;
}
