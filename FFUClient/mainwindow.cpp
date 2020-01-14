#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>
#include "BaseSlots.h"
#include <QTextEdit>
#include <QHBoxLayout>
#include <QSqlError>

MainWindow::MainWindow(QString user, QString passwd, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_user(user),
    m_passwd(passwd)
{
    ui->setupUi(this);

    QPalette pal(this->palette());
    pal.setColor(QPalette::Background, QColor("#2D3035"));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    this->setFixedSize(1200,800);
    setWindowTitle("FFUClient");

    initMenu();
    createDockWidget();
    initWidgetVisible();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief initMenu  初始化菜单
 */
void MainWindow::initMenu()
{
    // 新建菜单栏
    QMenuBar *menu = menuBar();
    menu->setStyleSheet("QMenuBar{background-color:#22252A; font-size:10pt; font-family:Microsoft YaHei; color:#CCCCCC}\
                        QMenuBar::item:selected{background-color:#D13C4F; color:white}\
                        QMenu{background:#2D3035; font-size:10pt; font-family:Microsoft YaHei; color:white}\
                        QMenu::item{padding:5px 30px; margin:2px 2px;}\
                        QMenu::item:selected{background:#D13C4F}\
                        QMenu::item:pressed{background:#DB6574;}\
                        QMenu::separator{height:1px; background:#D13C4F; margin:3px 3px;}");
    setMenuBar(menu);
    // 添加菜单
    QMenu *pMenuSystem = menu->addMenu(QString::fromLocal8Bit("系统"));
    QMenu *pMenuView = menu->addMenu(QString::fromLocal8Bit("视图"));
    QMenu *pMenuLayout = menu->addMenu(QString::fromLocal8Bit("布局"));
    QMenu *pMenuGateway = menu->addMenu(QString::fromLocal8Bit("网关/风机"));
    QMenu *pMenuLog = menu->addMenu(QString::fromLocal8Bit("日志"));
    QMenu *pMenuSet = menu->addMenu(QString::fromLocal8Bit("设置"));
    // 添加菜单项
    // 系统子菜单
    m_pActionMenuKey[MENU_KEY_UPDATELOG] = pMenuSystem->addAction(QString::fromLocal8Bit("更新日志"));
    pMenuSystem->addSeparator();
    m_pActionMenuKey[MENU_KEY_CHANGEUSE] = pMenuSystem->addAction(QString::fromLocal8Bit("切换用户"));
    m_pActionMenuKey[MENU_KEY_SYSEXIT] = pMenuSystem->addAction(QString::fromLocal8Bit("退出"));
    // 视图子菜单
    m_pActionMenuKey[MENU_KEY_SYSMONCEN] = pMenuView->addAction(QString::fromLocal8Bit("系统监视中心"));
    m_pActionMenuKey[MENU_KEY_SYSMONCEN]->setCheckable(true);
    m_pActionMenuKey[MENU_KEY_SYSMONCEN]->setChecked(true);
    pMenuView->addSeparator();
    m_pActionMenuKey[MENU_KEY_GETWAYMANAGE] = pMenuView->addAction(QString::fromLocal8Bit("网关管理器"));
    m_pActionMenuKey[MENU_KEY_GETWAYMANAGE]->setCheckable(true);
    m_pActionMenuKey[MENU_KEY_AREAMANAGE] = pMenuView->addAction(QString::fromLocal8Bit("区域管理器"));
    m_pActionMenuKey[MENU_KEY_AREAMANAGE]->setCheckable(true);
    pMenuView->addSeparator();
    m_pActionMenuKey[MENU_KEY_FASTCTRLCEN] = pMenuView->addAction(QString::fromLocal8Bit("快速操作中心"));
    m_pActionMenuKey[MENU_KEY_FASTCTRLCEN]->setCheckable(true);
    pMenuView->addSeparator();
    m_pActionMenuKey[MENU_KEY_WARING] = pMenuView->addAction(QString::fromLocal8Bit("报警"));
    m_pActionMenuKey[MENU_KEY_WARING]->setCheckable(true);

    // 布局子菜单
    m_pActionMenuKey[MENU_KEY_ADDLAYOUT] = pMenuLayout->addAction(QString::fromLocal8Bit("新增布局"));
    // 网关/风机子菜单
    m_pActionMenuKey[MENU_KEY_EDITGETWAY] = pMenuGateway->addAction(QString::fromLocal8Bit("编辑网关"));
    pMenuGateway->addSeparator();
    m_pActionMenuKey[MENU_KEY_ADDFAN] = pMenuGateway->addAction(QString::fromLocal8Bit("添加风机"));
    // 日志子菜单
    m_pActionMenuKey[MENU_KEY_FANLOGMANAGE] = pMenuLog->addAction(QString::fromLocal8Bit("风机日志管理"));
    m_pActionMenuKey[MENU_KEY_FANLOGMANAGE]->setCheckable(true);
    m_pActionMenuKey[MENU_KEY_FANCTRLLOG]= pMenuLog->addAction(QString::fromLocal8Bit("风机操作日志"));
    m_pActionMenuKey[MENU_KEY_FANCTRLLOG]->setCheckable(true);
    m_pActionMenuKey[MENU_KEY_FANPOWANAL] = pMenuLog->addAction(QString::fromLocal8Bit("风机功率分析"));
    m_pActionMenuKey[MENU_KEY_FANPOWANAL]->setCheckable(true);
    m_pActionMenuKey[MENU_KEY_USERLOGMANAGE] = pMenuLog->addAction(QString::fromLocal8Bit("用户日志管理"));
    m_pActionMenuKey[MENU_KEY_USERLOGMANAGE]->setCheckable(true);

    // 设置子菜单
    m_pActionMenuKey[MENU_KEY_FANRUNPLAN] = pMenuSet->addAction(QString::fromLocal8Bit("风机运行计划"));
    m_pActionMenuKey[MENU_KEY_SENSORMANAGE] = pMenuSet->addAction(QString::fromLocal8Bit("传感器管理"));
    pMenuSet->addSeparator();
    m_pActionMenuKey[MENU_KEY_ORIPARAMSET] = pMenuSet->addAction(QString::fromLocal8Bit("原始参数设置"));
    m_pActionMenuKey[MENU_KEY_GRATEMMANAGE] = pMenuSet->addAction(QString::fromLocal8Bit("图形模板管理"));
    m_pActionMenuKey[MENU_KEY_COLSTAMANAGE] = pMenuSet->addAction(QString::fromLocal8Bit("颜色状态管理"));
    pMenuSet->addSeparator();
    m_pActionMenuKey[MENU_KEY_USERMANAGE] = pMenuSet->addAction(QString::fromLocal8Bit("用户管理"));
    m_pActionMenuKey[MENU_KEY_LIMITMANAGE] = pMenuSet->addAction(QString::fromLocal8Bit("权限管理"));
    pMenuSet->addSeparator();
    m_pActionMenuKey[MENU_KEY_SYSSET] = pMenuSet->addAction(QString::fromLocal8Bit("系统设置"));
    m_pActionMenuKey[MENU_KEY_PWDMODIFY] = pMenuSet->addAction(QString::fromLocal8Bit("密码修改"));

    // 信号绑定
    BaseSlots *baseSlots = new BaseSlots(m_user, m_passwd);
    // 系统子菜单信号绑定
    connect(m_pActionMenuKey[MENU_KEY_UPDATELOG], SIGNAL(triggered()), baseSlots, SLOT(onActionUpdatelog()));
    connect(m_pActionMenuKey[MENU_KEY_CHANGEUSE], SIGNAL(triggered()), baseSlots, SLOT(onActionChangeuser()));
    connect(baseSlots, SIGNAL(restart()), this, SLOT(onRestart()));
    connect(m_pActionMenuKey[MENU_KEY_SYSEXIT], SIGNAL(triggered()), baseSlots, SLOT(onActionExit()));
    // 视图子菜单信号绑定
    // 系统监视中心
    connect(m_pActionMenuKey[MENU_KEY_SYSMONCEN], SIGNAL(triggered()), baseSlots, SLOT(onActionSysMonCenter()));
    connect(m_pActionMenuKey[MENU_KEY_SYSMONCEN], SIGNAL(triggered()), this, SLOT(onActionSysMonCenter()));
    // 网关管理器
    connect(m_pActionMenuKey[MENU_KEY_GETWAYMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onActionGetwayManager()));
    connect(m_pActionMenuKey[MENU_KEY_GETWAYMANAGE], SIGNAL(triggered()), this, SLOT(onActionGetwayManager()));
    // 区域管理中心
    connect(m_pActionMenuKey[MENU_KEY_AREAMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onAreaManager()));
    connect(m_pActionMenuKey[MENU_KEY_AREAMANAGE], SIGNAL(triggered()), this, SLOT(onAreaManager()));
    // 快速操作中心
    connect(m_pActionMenuKey[MENU_KEY_FASTCTRLCEN], SIGNAL(triggered()), baseSlots, SLOT(onFastCtrlCenter()));
    connect(m_pActionMenuKey[MENU_KEY_FASTCTRLCEN], SIGNAL(triggered()), this, SLOT(onFastCtrlCenter()));
    // 报警
    connect(m_pActionMenuKey[MENU_KEY_WARING], SIGNAL(triggered()), baseSlots, SLOT(onWaring()));
    connect(m_pActionMenuKey[MENU_KEY_WARING], SIGNAL(triggered()), this, SLOT(onWaring()));

    // 布局子菜单信号绑定
    connect(m_pActionMenuKey[MENU_KEY_ADDLAYOUT], SIGNAL(triggered()), baseSlots, SLOT(onAddLayout()));

    // 网关/风机子菜单信号绑定
    connect(m_pActionMenuKey[MENU_KEY_EDITGETWAY], SIGNAL(triggered()), baseSlots, SLOT(onEditGateway()));
    connect(m_pActionMenuKey[MENU_KEY_ADDFAN], SIGNAL(triggered()), baseSlots, SLOT(onAddFan()));

    // 日志子菜单信号绑定
    // 风机日志管理
    connect(m_pActionMenuKey[MENU_KEY_FANLOGMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onFanLogManage()));
    connect(m_pActionMenuKey[MENU_KEY_FANLOGMANAGE], SIGNAL(triggered()), this, SLOT(onFanLogManage()));
    // 风机操作日志
    connect(m_pActionMenuKey[MENU_KEY_FANCTRLLOG], SIGNAL(triggered()), baseSlots, SLOT(onFanCtrlLog()));
    connect(m_pActionMenuKey[MENU_KEY_FANCTRLLOG], SIGNAL(triggered()), this, SLOT(onFanCtrlLog()));
    // 风机功率分析
    connect(m_pActionMenuKey[MENU_KEY_FANPOWANAL], SIGNAL(triggered()), baseSlots, SLOT(onFanPowerAnal()));
    connect(m_pActionMenuKey[MENU_KEY_FANPOWANAL], SIGNAL(triggered()), this, SLOT(onFanPowerAnal()));
    // 用户日志管理
    connect(m_pActionMenuKey[MENU_KEY_USERLOGMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onUserLogManage()));
    connect(m_pActionMenuKey[MENU_KEY_USERLOGMANAGE], SIGNAL(triggered()), this, SLOT(onUserLogManage()));

    // 设置子菜单信号绑定
    connect(m_pActionMenuKey[MENU_KEY_FANRUNPLAN], SIGNAL(triggered()), baseSlots, SLOT(onFanRunPlan()));
    connect(m_pActionMenuKey[MENU_KEY_SENSORMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onSensorManage()));
    connect(m_pActionMenuKey[MENU_KEY_ORIPARAMSET], SIGNAL(triggered()), baseSlots, SLOT(onOriParamManage()));
    connect(m_pActionMenuKey[MENU_KEY_GRATEMMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onGraTemManage()));
    connect(m_pActionMenuKey[MENU_KEY_COLSTAMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onColorStaManage()));
    connect(m_pActionMenuKey[MENU_KEY_USERMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onUserManage()));
    connect(m_pActionMenuKey[MENU_KEY_LIMITMANAGE], SIGNAL(triggered()), baseSlots, SLOT(onLimitManage()));
    connect(m_pActionMenuKey[MENU_KEY_SYSSET], SIGNAL(triggered()), baseSlots, SLOT(onSysSet()));
    connect(m_pActionMenuKey[MENU_KEY_PWDMODIFY], SIGNAL(triggered()), baseSlots, SLOT(onPwdModify()));
}

/**
 * @brief createDockWidget  创建停靠窗口
 */
void MainWindow::createDockWidget()
{
    //    QHBoxLayout *layout = new QHBoxLayout(this);
    //    layout->addWidget(*m_pDockWidget);
    //    layout->setContentsMargins(0, 0, 0, 0);

    // 区域管理器窗体
    m_pDockWidget[MENU_KEY_AREAMANAGE] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_AREAMANAGE]->setWindowTitle(QString::fromLocal8Bit("区域管理器"));
    m_pDockWidget[MENU_KEY_AREAMANAGE]->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    AreaManagerForm *pAreaManagerForm = new AreaManagerForm();
    m_pDockWidget[MENU_KEY_AREAMANAGE]->setWidget(pAreaManagerForm);
    m_pDockWidget[MENU_KEY_AREAMANAGE]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_AREAMANAGE], Qt::Horizontal);


    // 网关管理器
    m_pDockWidget[MENU_KEY_GETWAYMANAGE] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_GETWAYMANAGE]->setWindowTitle(QString::fromLocal8Bit("网关管理器"));
    m_pDockWidget[MENU_KEY_GETWAYMANAGE]->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QTextEdit *temp2 = new QTextEdit(tr(""));
    m_pDockWidget[MENU_KEY_GETWAYMANAGE]->setWidget(temp2);
    m_pDockWidget[MENU_KEY_GETWAYMANAGE]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_GETWAYMANAGE], Qt::Horizontal);

    // 监视中心窗体
    m_pDockWidget[MENU_KEY_SYSMONCEN] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_SYSMONCEN]->setWindowTitle(QString::fromLocal8Bit("监视中心"));
    m_pDockWidget[MENU_KEY_SYSMONCEN]->setAllowedAreas(Qt::LeftDockWidgetArea);
    QTextEdit *myInfos = new QTextEdit(tr(""));
    m_pDockWidget[MENU_KEY_SYSMONCEN]->setWidget(myInfos);
    m_pDockWidget[MENU_KEY_SYSMONCEN]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_SYSMONCEN], Qt::Horizontal);

    // 快速操作中心
    m_pDockWidget[MENU_KEY_FASTCTRLCEN] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_FASTCTRLCEN]->setWindowTitle(QString::fromLocal8Bit("快速操作中心"));
    m_pDockWidget[MENU_KEY_FASTCTRLCEN]->setAllowedAreas(Qt::LeftDockWidgetArea);
    FastCtrlCenterForm *fastCtrlCenterForm = new FastCtrlCenterForm(this);
    m_pDockWidget[MENU_KEY_FASTCTRLCEN]->setWidget(fastCtrlCenterForm);
    m_pDockWidget[MENU_KEY_FASTCTRLCEN]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_FASTCTRLCEN]);

    // 报警(掉线报警、马达报警、风机报警)
    QWidget *widgetLostconnWaring = new QWidget(this);
    widgetLostconnWaring->setWindowTitle(QString::fromLocal8Bit("掉线报警"));
    QWidget *widgetMotorWaring = new QWidget(this);
    widgetMotorWaring->setWindowTitle(QString::fromLocal8Bit("马达报警"));
    QWidget *widgetFanWaring = new QWidget(this);
    widgetFanWaring->setWindowTitle(QString::fromLocal8Bit("风机报警"));
    QTabWidget *tabWidgetWaring = new QTabWidget();
    QWidget *widgetZeroRoteSpeedWaring = new QWidget(this);
    widgetZeroRoteSpeedWaring->setWindowTitle(QString::fromLocal8Bit("零转速"));
    QWidget *widgetLowRoteSpeedWaring = new QWidget(this);
    widgetLowRoteSpeedWaring->setWindowTitle(QString::fromLocal8Bit("低转速"));
    QWidget *widgetTemperatureWaring = new QWidget(this);
    widgetTemperatureWaring->setWindowTitle(QString::fromLocal8Bit("温度报警"));
    QWidget *widgetOfflineSensorWaring = new QWidget(this);
    widgetOfflineSensorWaring->setWindowTitle(QString::fromLocal8Bit("离线传感器"));

    tabWidgetWaring->addTab(widgetLostconnWaring, QString::fromLocal8Bit("掉线报警"));
    tabWidgetWaring->addTab(widgetMotorWaring, QString::fromLocal8Bit("马达报警"));
    tabWidgetWaring->addTab(widgetFanWaring, QString::fromLocal8Bit("风机报警"));
    tabWidgetWaring->addTab(widgetZeroRoteSpeedWaring, QString::fromLocal8Bit("零转速"));
    tabWidgetWaring->addTab(widgetLowRoteSpeedWaring, QString::fromLocal8Bit("低转速"));
    tabWidgetWaring->addTab(widgetTemperatureWaring, QString::fromLocal8Bit("温度报警"));
    tabWidgetWaring->addTab(widgetOfflineSensorWaring, QString::fromLocal8Bit("离线传感器"));
    m_pDockWidget[MENU_KEY_WARING] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_WARING]->setWindowTitle(QString::fromLocal8Bit("报警"));
    m_pDockWidget[MENU_KEY_WARING]->setAllowedAreas(Qt::BottomDockWidgetArea);
    m_pDockWidget[MENU_KEY_WARING]->setWidget(tabWidgetWaring);
    m_pDockWidget[MENU_KEY_WARING]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::BottomDockWidgetArea, m_pDockWidget[MENU_KEY_WARING]);

    // 日志
    // 风机日志管理
    m_pDockWidget[MENU_KEY_FANLOGMANAGE] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_FANLOGMANAGE]->setWindowTitle(QString::fromLocal8Bit("风机日志管理"));
    m_pDockWidget[MENU_KEY_FANLOGMANAGE]->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QTextEdit *temp6 = new QTextEdit(tr(""));
    m_pDockWidget[MENU_KEY_FANLOGMANAGE]->setWidget(temp6);
    m_pDockWidget[MENU_KEY_FANLOGMANAGE]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_FANLOGMANAGE], Qt::Horizontal);
    // 风机操作日志
    m_pDockWidget[MENU_KEY_FANCTRLLOG] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_FANCTRLLOG]->setWindowTitle(QString::fromLocal8Bit("风机操作日志"));
    m_pDockWidget[MENU_KEY_FANCTRLLOG]->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QTextEdit *temp7 = new QTextEdit(tr(""));
    m_pDockWidget[MENU_KEY_FANCTRLLOG]->setWidget(temp7);
    m_pDockWidget[MENU_KEY_FANCTRLLOG]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_FANCTRLLOG], Qt::Horizontal);
    // 风机功率分析
    m_pDockWidget[MENU_KEY_FANPOWANAL] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_FANPOWANAL]->setWindowTitle(QString::fromLocal8Bit("风机功率分析"));
    m_pDockWidget[MENU_KEY_FANPOWANAL]->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QTextEdit *temp8 = new QTextEdit(tr(""));
    m_pDockWidget[MENU_KEY_FANPOWANAL]->setWidget(temp8);
    m_pDockWidget[MENU_KEY_FANPOWANAL]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_FANPOWANAL], Qt::Horizontal);
    // 用户日志管理
    m_pDockWidget[MENU_KEY_USERLOGMANAGE] = new QDockWidget(this);
    m_pDockWidget[MENU_KEY_USERLOGMANAGE]->setWindowTitle(QString::fromLocal8Bit("用户日志管理"));
    m_pDockWidget[MENU_KEY_USERLOGMANAGE]->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QTextEdit *temp9 = new QTextEdit(tr(""));
    m_pDockWidget[MENU_KEY_USERLOGMANAGE]->setWidget(temp9);
    m_pDockWidget[MENU_KEY_USERLOGMANAGE]->setFeatures(QDockWidget::NoDockWidgetFeatures);
    this->addDockWidget(Qt::LeftDockWidgetArea, m_pDockWidget[MENU_KEY_USERLOGMANAGE], Qt::Horizontal);

    // 合并
    //    tabifyDockWidget(m_pDockWidget[MENU_KEY_SYSMONCEN], m_pDockWidget[MENU_KEY_FANLOGMANAGE]);
    //    tabifyDockWidget(m_pDockWidget[MENU_KEY_FANLOGMANAGE], m_pDockWidget[MENU_KEY_FANCTRLLOG]);
    //    tabifyDockWidget(m_pDockWidget[MENU_KEY_FANCTRLLOG], m_pDockWidget[MENU_KEY_FANPOWANAL]);
    //    tabifyDockWidget(m_pDockWidget[MENU_KEY_FANPOWANAL], m_pDockWidget[MENU_KEY_USERLOGMANAGE]);
}

/**
 * @brief onActionSysMonCenter  系统监视中心
 */
void MainWindow::onActionSysMonCenter()
{
    updateWidgetVisible(MENU_KEY_SYSMONCEN);
}

/**
 * @brief onActionGetwayManager 网关管理器
 */
void MainWindow::onActionGetwayManager()
{
    updateWidgetVisible(MENU_KEY_GETWAYMANAGE);
}

/**
 * @brief onAreaManager 区域管理器
 */
void MainWindow::onAreaManager()
{
    updateWidgetVisible(MENU_KEY_AREAMANAGE);
}

/**
 * @brief onFastCtrlCenter  快速操作中心
 */
void MainWindow::onFastCtrlCenter()
{
    updateWidgetVisible(MENU_KEY_FASTCTRLCEN);
}

/**
 * @brief onWaring  报警
 */
void MainWindow::onWaring()
{
    updateWidgetVisible(MENU_KEY_WARING);
}

/**
 * @brief onFanLogManage    风机日志管理
 */
void MainWindow::onFanLogManage()
{
    updateWidgetVisible(MENU_KEY_FANLOGMANAGE);
}

/**
 * @brief onFanCtrlLog 风机操作日志
 */
void MainWindow::onFanCtrlLog()
{
    updateWidgetVisible(MENU_KEY_FANCTRLLOG);
}

/**
 * @brief onFanPowerAnal    风机功率分析
 */
void MainWindow::onFanPowerAnal()
{
    updateWidgetVisible(MENU_KEY_FANPOWANAL);
}

/**
 * @brief onUserLogManage   用户日志管理
 */
void MainWindow::onUserLogManage()
{
    updateWidgetVisible(MENU_KEY_USERLOGMANAGE);
}

/**
 * @brief updateWidgetVisible   更新窗体显示状态
 * @param menuKey   子菜单序号
 */
void MainWindow::updateWidgetVisible(qint32 menuKey)
{
    switch(menuKey)
    {
    case MENU_KEY_SYSMONCEN:     // 系统监视中心
    {
        if(m_pActionMenuKey[MENU_KEY_SYSMONCEN]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_SYSMONCEN]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_SYSMONCEN]);
        }
    }
        break;
    case MENU_KEY_GETWAYMANAGE:  // 网关管理
    {
        if(m_pActionMenuKey[MENU_KEY_GETWAYMANAGE]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_GETWAYMANAGE]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_GETWAYMANAGE]);
        }
    }
        break;
    case MENU_KEY_AREAMANAGE:    // 区域管理
    {
        if(m_pActionMenuKey[MENU_KEY_AREAMANAGE]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_AREAMANAGE]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_AREAMANAGE]);
        }
    }
        break;
    case MENU_KEY_FASTCTRLCEN:   // 快速操作中心
    {
        if(m_pActionMenuKey[MENU_KEY_FASTCTRLCEN]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_FASTCTRLCEN]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_FASTCTRLCEN]);
        }
    }
        break;
    case MENU_KEY_WARING:        // 报警
    {
        if(m_pActionMenuKey[MENU_KEY_WARING]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_WARING]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_WARING]);
        }
    }
        break;
    case MENU_KEY_FANLOGMANAGE:  // 风机日志管理
    {
        if(m_pActionMenuKey[MENU_KEY_FANLOGMANAGE]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_FANLOGMANAGE]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_FANLOGMANAGE]);
        }
    }
        break;
    case MENU_KEY_FANCTRLLOG:    // 风机操作日志
    {
        if(m_pActionMenuKey[MENU_KEY_FANCTRLLOG]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_FANCTRLLOG]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_FANCTRLLOG]);
        }
    }
        break;
    case MENU_KEY_FANPOWANAL:    // 风机功率分析
    {
        if(m_pActionMenuKey[MENU_KEY_FANPOWANAL]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_FANPOWANAL]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_FANPOWANAL]);
        }
    }
        break;
    case MENU_KEY_USERLOGMANAGE: // 用户日志管理
    {
        if(m_pActionMenuKey[MENU_KEY_USERLOGMANAGE]->isChecked())
        {
            this->restoreDockWidget(m_pDockWidget[MENU_KEY_USERLOGMANAGE]);
        }
        else
        {
            this->removeDockWidget(m_pDockWidget[MENU_KEY_USERLOGMANAGE]);
        }
    }
        break;
    default:
        break;
    }
}

/**
 * @brief initWidgetVisible 初始化窗体显示状态
 */
void MainWindow::initWidgetVisible()
{
    updateWidgetVisible(MENU_KEY_SYSMONCEN);
    updateWidgetVisible(MENU_KEY_GETWAYMANAGE);
    updateWidgetVisible(MENU_KEY_AREAMANAGE);
    updateWidgetVisible(MENU_KEY_FASTCTRLCEN);
    updateWidgetVisible(MENU_KEY_WARING);
    updateWidgetVisible(MENU_KEY_FANLOGMANAGE);
    updateWidgetVisible(MENU_KEY_FANCTRLLOG);
    updateWidgetVisible(MENU_KEY_FANPOWANAL);
    updateWidgetVisible(MENU_KEY_USERLOGMANAGE);
}


/**
 * @brief onRestart 重启系统
 */
void MainWindow::onRestart()
{
    qApp->exit(RETCODE_RESTART);
}
