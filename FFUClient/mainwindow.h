#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include <QAction>

#include "Custom.h"

#include "AreaManagerForm.h"
#include "FastCtrlCenterForm.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QString user, QString passwd, QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    /**
     * @brief initMenu  初始化菜单
     */
    void initMenu();

    /**
     * @brief createDockWidget  创建停靠窗口
     */
    void createDockWidget();

private:
    QAction *m_pActionMenuKey[MENU_KEY_MAX_COUNT];
    QDockWidget *m_pDockWidget[DOCKWIDGET_MAX_COUNT];

    QString m_user;
    QString m_passwd;

private:
    /**
     * @brief updateWidgetVisible   更新窗体显示状态
     * @param menuKey   子菜单序号
     */
    void updateWidgetVisible(qint32 menuKey);

    /**
     * @brief initWidgetVisible 初始化窗体显示状态
     */
    void initWidgetVisible();

private slots:
    /**
     * @brief onActionSysMonCenter  系统监视中心
     */
    void onActionSysMonCenter();

    /**
     * @brief onActionGetwayManager 网关管理器
     */
    void onActionGetwayManager();

    /**
     * @brief onAreaManager 区域管理器
     */
    void onAreaManager();

    /**
     * @brief onFastCtrlCenter  快速操作中心
     */
    void onFastCtrlCenter();

    /**
     * @brief onWaring  报警
     */
    void onWaring();

    /**
     * @brief onFanLogManage    风机日志管理
     */
    void onFanLogManage();

    /**
     * @brief onFanCtrlLog 风机操作日志
     */
    void onFanCtrlLog();

    /**
     * @brief onFanPowerAnal    风机功率分析
     */
    void onFanPowerAnal();

    /**
     * @brief onUserLogManage   用户日志管理
     */
    void onUserLogManage();

    /**
     * @brief onRestart 重启系统
     */
    void onRestart();
};

#endif // MAINWINDOW_H
