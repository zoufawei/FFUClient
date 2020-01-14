#ifndef CUSTOM_H
#define CUSTOM_H

#include <QString>


static const int RETCODE_RESTART = 773;

#define MENU_KEY_MAX_COUNT      50      // 子菜单最大数量
#define DOCKWIDGET_MAX_COUNT    50      // 停靠窗口最大数量

enum MENU_KEY
{
    MENU_KEY_UPDATELOG = 0, // 更新日志
    MENU_KEY_CHANGEUSE,     // 切换用户
    MENU_KEY_SYSEXIT,       // 退出
    MENU_KEY_SYSMONCEN,     // 系统监视中心
    MENU_KEY_GETWAYMANAGE,  // 网关管理
    MENU_KEY_AREAMANAGE,    // 区域管理
    MENU_KEY_FASTCTRLCEN,   // 快速操作中心
    MENU_KEY_WARING,        // 报警
    MENU_KEY_ADDLAYOUT,     // 新增布局
    MENU_KEY_EDITGETWAY,    // 编辑网关
    MENU_KEY_ADDFAN,        // 添加风机
    MENU_KEY_FANLOGMANAGE,  // 风机日志管理
    MENU_KEY_FANCTRLLOG,    // 风机操作日志
    MENU_KEY_FANPOWANAL,    // 风机功率分析
    MENU_KEY_USERLOGMANAGE, // 用户日志管理
    MENU_KEY_FANRUNPLAN,    // 风机运行计划
    MENU_KEY_SENSORMANAGE,  // 传感器管理
    MENU_KEY_ORIPARAMSET,   // 原始参数设置
    MENU_KEY_GRATEMMANAGE,  // 图形模板管理
    MENU_KEY_COLSTAMANAGE,  // 颜色状态管理
    MENU_KEY_USERMANAGE,    // 用户管理
    MENU_KEY_LIMITMANAGE,   // 权限管理
    MENU_KEY_SYSSET,        // 系统设置
    MENU_KEY_PWDMODIFY      // 密码修改


};

#endif // CUSTOM_H
