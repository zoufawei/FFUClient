#include "baseslots.h"

BaseSlots::BaseSlots()
{
    // 更新日志窗体响应
    UpdateLogForm *updateLogForm = new UpdateLogForm();
    connect(this, SIGNAL(loadUpdateLogForm()), updateLogForm, SLOT(onFormLoad()));


    // 新增布局
    AddLayoutForm *addLayoutForm = new AddLayoutForm();
    connect(this, SIGNAL(loadAddLayoutForm()), addLayoutForm, SLOT(onFormLoad()));

}


// 更新日志
void BaseSlots::onActionUpdatelog()
{
    emit loadUpdateLogForm();
}
// 更改用户
void BaseSlots::onActionChangeuser()
{
    qDebug()<<QString::fromLocal8Bit("切换用户");
}

// 退出
void BaseSlots::onActionExit()
{
    QApplication::quit();
}

// 系统监视中心
void BaseSlots::onActionSysMonCenter()
{
    qDebug()<<QString::fromLocal8Bit("系统监视中心");
}
// 网关管理器
void BaseSlots::onActionGetwayManager()
{
    qDebug()<<QString::fromLocal8Bit("网关管理器");
}
// 区域管理器
void BaseSlots::onAreaManager()
{
    qDebug()<<QString::fromLocal8Bit("区域管理器");
}
// 快速操作中心
void BaseSlots::onFastCtrlCenter()
{
    qDebug()<<QString::fromLocal8Bit("快速操作中心");
}
// 报警
void BaseSlots::onWaring()
{
    qDebug()<<QString::fromLocal8Bit("报警");
}

// 新增布局
void BaseSlots::onAddLayout()
{
    emit loadAddLayoutForm();
}

// 编辑网关
void BaseSlots::onEditGateway()
{
    qDebug()<<QString::fromLocal8Bit("编辑网关");
}
// 添加风机
void BaseSlots::onAddFan()
{
    qDebug()<<QString::fromLocal8Bit("添加风机");
}


// 风机日志管理
void BaseSlots::onFanLogManage()
{
    qDebug()<<QString::fromLocal8Bit("风机日志管理");
}
// 风机操作日志
void BaseSlots::onFanCtrlLog()
{
    qDebug()<<QString::fromLocal8Bit("风机操作日志");
}
// 风机功率分析
void BaseSlots::onFanPowerAnal()
{
    qDebug()<<QString::fromLocal8Bit("风机功率分析");
}
// 用户日志管理
void BaseSlots::onUserLogManage()
{
    qDebug()<<QString::fromLocal8Bit("用户日志管理");
}

// 风机运行计划
void BaseSlots::onFanRunPlan()
{
    FanRunPlanForm *fanRunPlanForm = new FanRunPlanForm();
    fanRunPlanForm->setWindowModality(Qt::ApplicationModal);
    fanRunPlanForm->show();
}
// 传感器管理
void BaseSlots::onSensorManage()
{
    SensorManageForm *sensorManageForm = new SensorManageForm();
    sensorManageForm->setWindowModality(Qt::ApplicationModal);
    sensorManageForm->show();
}

// 原始参数设置
void BaseSlots::onOriParamManage()
{
    qDebug()<<QString::fromLocal8Bit("原始参数设置");
}

// 图形模板管理
void BaseSlots::onGraTemManage()
{
    qDebug()<<QString::fromLocal8Bit("图形模板管理");
}

// 颜色状态管理
void BaseSlots::onColorStaManage()
{
    qDebug()<<QString::fromLocal8Bit("颜色状态管理");
}

// 用户管理
void BaseSlots::onUserManage()
{
    qDebug()<<QString::fromLocal8Bit("用户管理");
}

// 权限管理
void BaseSlots::onLimitManage()
{
    qDebug()<<QString::fromLocal8Bit("权限管理");
}


// 系统设置
void BaseSlots::onSysSet()
{
    qDebug()<<QString::fromLocal8Bit("系统设置");
}

// 密码修改
void BaseSlots::onPwdModify()
{
    qDebug()<<QString::fromLocal8Bit("密码修改");
}
