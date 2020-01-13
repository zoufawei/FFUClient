#include "FanRunPlanForm.h"
#include "ui_FanRunPlanForm.h"

FanRunPlanForm::FanRunPlanForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FanRunPlanForm)
{
    ui->setupUi(this);


    setWindowTitle(QString::fromLocal8Bit("风机运行计划"));
    initTableView();
    updateTableView();

}

FanRunPlanForm::~FanRunPlanForm()
{
    delete ui;
}

/**
 * @brief initTableView 初始化列表
 */
void FanRunPlanForm::initTableView()
{
    m_itemModel= new QStandardItemModel(this);
    m_itemModel->setColumnCount(16);
    m_itemModel->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("计划名称"));
    m_itemModel->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("开始时间"));
    m_itemModel->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("运行时间"));
    m_itemModel->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("备注"));
    m_itemModel->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("1"));
    m_itemModel->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("2"));
    m_itemModel->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("3"));
    m_itemModel->setHeaderData(7, Qt::Horizontal, QString::fromLocal8Bit("4"));
    m_itemModel->setHeaderData(8, Qt::Horizontal, QString::fromLocal8Bit("5"));
    m_itemModel->setHeaderData(9, Qt::Horizontal, QString::fromLocal8Bit("6"));
    m_itemModel->setHeaderData(10, Qt::Horizontal, QString::fromLocal8Bit("7"));
    m_itemModel->setHeaderData(11, Qt::Horizontal, QString::fromLocal8Bit("目标速度"));
    m_itemModel->setHeaderData(12, Qt::Horizontal, QString::fromLocal8Bit("控制区域"));
    m_itemModel->setHeaderData(13, Qt::Horizontal, QString::fromLocal8Bit("是否循环"));
    m_itemModel->setHeaderData(14, Qt::Horizontal, QString::fromLocal8Bit("是否激活"));
    m_itemModel->setHeaderData(15, Qt::Horizontal, QString::fromLocal8Bit("是否启用"));
    ui->tableViewPlan->setModel(m_itemModel);
}

/**
 * @brief updateTableView 更新列表
 */
void FanRunPlanForm::updateTableView()
{
    m_itemModel->removeRows(0, m_itemModel->rowCount());

    QSqlQuery query;
    query.exec("SELECT Title,PlanStartTime,RunTime,Description,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday,Targetrpm,LogicalGroup,IsLoop,IsActivate,IsEnable FROM LoopPlan");
    while (query.next())
    {
        QString strPlanName = query.value(0).toString();
        QString strStartTime = query.value(1).toString();
        QString strRunTime = query.value(2).toString();
        QString strRemark = query.value(3).toString();
        QString strMonday = query.value(4).toString();
        QString strTuesday = query.value(5).toString();
        QString strWednesday = query.value(6).toString();
        QString strThursday = query.value(7).toString();
        QString strFriday = query.value(8).toString();
        QString strSaturday = query.value(9).toString();
        QString strSunday = query.value(10).toString();
        QString strTargetRpm = query.value(11).toString();
        QString strCtrlArea = query.value(12).toString();
        bool isLoop = query.value(13).toBool();
        bool isActive = query.value(14).toBool();
        bool isEnable = query.value(15).toBool();
        QString strLoop = QString::fromLocal8Bit("否");
        QString strActive = QString::fromLocal8Bit("否");
        QString strEnable = QString::fromLocal8Bit("否");
        if(isLoop)
            strLoop = QString::fromLocal8Bit("是");
        if(isActive)
            strActive = QString::fromLocal8Bit("是");
        if(isEnable)
            strEnable = QString::fromLocal8Bit("是");


        int rowCount = m_itemModel->rowCount();
        m_itemModel->setItem(rowCount, 0, new QStandardItem(strPlanName));
        m_itemModel->setItem(rowCount, 1, new QStandardItem(strStartTime));
        m_itemModel->setItem(rowCount, 2, new QStandardItem(strRunTime));
        m_itemModel->setItem(rowCount, 3, new QStandardItem(strRemark));
        m_itemModel->setItem(rowCount, 4, new QStandardItem(strMonday));
        m_itemModel->setItem(rowCount, 5, new QStandardItem(strTuesday));
        m_itemModel->setItem(rowCount, 6, new QStandardItem(strWednesday));
        m_itemModel->setItem(rowCount, 7, new QStandardItem(strThursday));
        m_itemModel->setItem(rowCount, 8, new QStandardItem(strFriday));
        m_itemModel->setItem(rowCount, 9, new QStandardItem(strSaturday));
        m_itemModel->setItem(rowCount, 10, new QStandardItem(strSunday));
        m_itemModel->setItem(rowCount, 11, new QStandardItem(strTargetRpm));
        m_itemModel->setItem(rowCount, 12, new QStandardItem(strCtrlArea));
        m_itemModel->setItem(rowCount, 13, new QStandardItem(strLoop));
        m_itemModel->setItem(rowCount, 14, new QStandardItem(strActive));
        m_itemModel->setItem(rowCount, 15, new QStandardItem(strEnable));
    }
}

void FanRunPlanForm::on_pushButtonCreatePlan_clicked()
{
    PlanCreateForm *planCreateForm = new PlanCreateForm();
    planCreateForm->setWindowModality(Qt::ApplicationModal);
    planCreateForm->show();
}
