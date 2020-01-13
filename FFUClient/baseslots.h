#ifndef BASESLOTS_H
#define BASESLOTS_H

#include <QObject>
#include <QDebug>
#include <QApplication>

#include "updatelogform.h"
#include "AddLayoutForm.h"
#include "FanRunPlanForm.h"
#include "SensorManageForm.h"


class BaseSlots : public QObject
{
    Q_OBJECT
public:
    BaseSlots();

signals:
    // 加载更新日志窗体
    void loadUpdateLogForm();

    void loadAddLayoutForm();

public slots:
   // 更新日志
   void onActionUpdatelog();
   // 更改用户
   void onActionChangeuser();
   // 退出
   void onActionExit();

   // 系统监视中心
   void onActionSysMonCenter();
   // 网关管理器
   void onActionGetwayManager();
   // 区域管理器
   void onAreaManager();
   // 快速操作中心
   void onFastCtrlCenter();
   // 掉线报警
   void onWaring();

   // 新增布局
   void onAddLayout();

   // 编辑网关
   void onEditGateway();
   // 添加风机
   void onAddFan();

   // 风机日志管理
   void onFanLogManage();
   // 风机操作日志
   void onFanCtrlLog();
   // 风机功率分析
   void onFanPowerAnal();
   // 用户日志管理
   void onUserLogManage();

   // 风机运行计划
   void onFanRunPlan();
   // 传感器管理
   void onSensorManage();
   // 原始参数设置
   void onOriParamManage();
   // 图形模板管理
   void onGraTemManage();
   // 颜色状态管理
   void onColorStaManage();
   // 用户管理
   void onUserManage();
   // 权限管理
   void onLimitManage();
   // 系统设置
   void onSysSet();
   // 密码修改
   void onPwdModify();

};

#endif // BASESLOTS_H
