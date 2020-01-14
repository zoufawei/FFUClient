#include "QLayoutManager.h"
#include "ui_QLayoutManager.h"
#include <QMenuBar>

#include <QMenu>

QLayoutManager::QLayoutManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QLayoutManager)
    , m_toolBar(nullptr)

    , m_pbutCtrl(nullptr)
    , m_pbutFrom(nullptr)
    , m_pbutSelect(nullptr)

    , m_actAlignLeft(nullptr)
    , m_actAlignRight(nullptr)
    , m_actAlignTop(nullptr)
    , m_actAlignBottom(nullptr)
    , m_actAlignVcenter(nullptr)
    , m_actAlignHcenter(nullptr)
    , m_actWidth(nullptr)
    , m_actHeight(nullptr)
    , m_actSize(nullptr)
    , m_actVequal(nullptr)
    , m_actHequal(nullptr)
{
    ui->setupUi(this);
    Initialize();
}

QLayoutManager::~QLayoutManager()
{
    delete ui;
}

void QLayoutManager::Initialize()
{
    // 隐藏菜单栏
    menuBar()->hide();

    // 创建菜单栏
    m_toolBar = addToolBar(QString::fromLocal8Bit("布局管理"));

    // 固定工具栏
    m_toolBar->setMovable(false);

    // 创建菜单
    QMenu* _menuCtrl = new QMenu(); /*!< 操作菜单 */
    QMenu* _menuFrom = new QMenu(); /*!< 图形菜单 */
    QMenu* _menuSelect = new QMenu();   /*!< 切换当前图层菜单 */
    QMenu* _menuShow = new QMenu(); /*!< 显示/隐藏图层菜单 */
    QMenu* _menuMode = new QMenu(); /*!< 显示模式菜单 */
    QMenu* _menuSettrings = new QMenu(QString::fromLocal8Bit("布局设置"));    /*!< 布局设置菜单 */

    // 创建下拉按钮
    m_pbutCtrl = new QPushButton(QString::fromLocal8Bit("操作"));
    m_pbutFrom = new QPushButton(QString::fromLocal8Bit("插入图形"));
    m_pbutSelect = new QPushButton(QString::fromLocal8Bit("切换当前图层"));
    QPushButton* _pbutShow = new QPushButton(QString::fromLocal8Bit("显示/隐藏图层"));    /*!< 显示/隐藏图层菜单按钮 */
    QPushButton* _pbutMode = new QPushButton(QString::fromLocal8Bit("显示模式"));   /*!< 显示模式菜单按钮 */

     // 为菜单添加选项
    QAction* _actRmFan =_menuCtrl->addAction(QString::fromLocal8Bit("移除选定风机"));
    QAction* _actRmForm =_menuCtrl->addAction(QString::fromLocal8Bit("移除选定图形"));
    QAction* _actRmSensor =_menuCtrl->addAction(QString::fromLocal8Bit("移除选定传感器V2"));
    _menuCtrl->addSeparator();
    QAction* _actSave =_menuCtrl->addAction(QString::fromLocal8Bit("保存布局"));
    _menuCtrl->addSeparator();
    _menuCtrl->addMenu(_menuSettrings);

    QAction* _actSaveFanSize =_menuSettrings->addAction(QString::fromLocal8Bit("保存风机默认大小为当前风机"));
    QAction* _actEdit = _menuSettrings->addAction(QString::fromLocal8Bit("编辑布局设置"));
    _menuSettrings->addSeparator();
    QAction* _actDelete = _menuSettrings->addAction(QString::fromLocal8Bit("删除布局"));

    // TODO 加载图形菜单选项

    QAction* _actFan = _menuSelect->addAction(QString::fromLocal8Bit("风机图层"));
    QAction* _actForm = _menuSelect->addAction(QString::fromLocal8Bit("形状图层"));
    QAction* _actSensor = _menuSelect->addAction(QString::fromLocal8Bit("传感器图层V2"));

    QAction* _actShowFan = _menuShow->addAction(QString::fromLocal8Bit("风机图层"));
    QAction* _actShowForm = _menuShow->addAction(QString::fromLocal8Bit("形状图层"));
    QAction* _actShowSensor = _menuShow->addAction(QString::fromLocal8Bit("传感器图层V2"));

    QAction* _actModeFan = _menuMode->addAction(QString::fromLocal8Bit("风机显示模式"));
    QAction* _actModeStandard = _menuMode->addAction(QString::fromLocal8Bit("标准风机模式"));
    QAction* _actModeLogic = _menuMode->addAction(QString::fromLocal8Bit("逻辑分区模式"));
    QAction* _actModeSensor = _menuMode->addAction(QString::fromLocal8Bit("传感器模式"));
    _menuMode->addSeparator();
    QAction* _actModeArea = _menuMode->addAction(QString::fromLocal8Bit("区域显示模式"));
    QAction* _actModeNone = _menuMode->addAction(QString::fromLocal8Bit("不显示"));
    QAction* _actModeBoundary = _menuMode->addAction(QString::fromLocal8Bit("边界模式"));

    // 为工具栏增加选项
    m_toolBar->addWidget(m_pbutCtrl);
    m_toolBar->addSeparator();
    m_toolBar->addWidget(m_pbutFrom);
    m_toolBar->addSeparator();
    m_actAlignLeft = m_toolBar->addAction(QString::fromLocal8Bit("左对齐"));
    m_actAlignRight = m_toolBar->addAction(QString::fromLocal8Bit("右对齐"));
    m_actAlignTop = m_toolBar->addAction(QString::fromLocal8Bit("顶对齐"));
    m_actAlignBottom = m_toolBar->addAction(QString::fromLocal8Bit("底对齐"));
    m_actAlignVcenter = m_toolBar->addAction(QString::fromLocal8Bit("垂直对齐"));
    m_actAlignHcenter = m_toolBar->addAction(QString::fromLocal8Bit("水平对齐"));
    m_toolBar->addSeparator();
    m_actWidth = m_toolBar->addAction(QString::fromLocal8Bit("等宽"));
    m_actHeight = m_toolBar->addAction(QString::fromLocal8Bit("等高"));
    m_actSize = m_toolBar->addAction(QString::fromLocal8Bit("等尺寸"));
    m_toolBar->addSeparator();
    m_actVequal = m_toolBar->addAction(QString::fromLocal8Bit("水平等距"));
    m_actHequal = m_toolBar->addAction(QString::fromLocal8Bit("垂直等距"));
    QAction* _actSaveCurFanSize = m_toolBar->addAction(QString::fromLocal8Bit("保存当前风机尺寸"));
    m_toolBar->addSeparator();
    QAction* _actLock = m_toolBar->addAction(QString::fromLocal8Bit("锁定布局"));
    m_toolBar->addSeparator();
    QAction* _actShowFull = m_toolBar->addAction(QString::fromLocal8Bit("完整显示"));
    QAction* _actShowActually = m_toolBar->addAction(QString::fromLocal8Bit("实际大小"));
    m_toolBar->addSeparator();
    QAction* _actZoomOut = m_toolBar->addAction(QString::fromLocal8Bit("缩小"));
    QAction* _actZoomIn = m_toolBar->addAction(QString::fromLocal8Bit("放大"));
    m_toolBar->addSeparator();
    QAction* _actShowLegend = m_toolBar->addAction(QString::fromLocal8Bit("显示/隐藏图例"));
    m_toolBar->addWidget(m_pbutSelect);
    m_toolBar->addWidget(_pbutShow);
    m_toolBar->addWidget(_pbutMode);

    // 为按钮设置样式
    m_pbutCtrl->setFlat(true);
    m_pbutFrom->setFlat(true);
    m_pbutSelect->setFlat(true);
    _pbutShow->setFlat(true);
    _pbutMode->setFlat(true);

    // 为按钮增加菜单
    m_pbutCtrl->setMenu(_menuCtrl);
    m_pbutFrom->setMenu(_menuFrom);
    m_pbutSelect->setMenu(_menuSelect);
    _pbutShow->setMenu(_menuShow);
    _pbutMode->setMenu(_menuMode);

    // 为选项设置样式
    _actLock->setCheckable(true);
    _actShowLegend->setCheckable(true);
    _actFan->setCheckable(true);
    _actForm->setCheckable(true);
    _actSensor->setCheckable(true);
    _actShowFan->setCheckable(true);
    _actShowForm->setCheckable(true);
    _actShowSensor->setCheckable(true);
    _actModeStandard->setCheckable(true);
    _actModeLogic->setCheckable(true);
    _actModeSensor->setCheckable(true);
    _actModeNone->setCheckable(true);
    _actModeBoundary->setCheckable(true);
    _actModeFan->setEnabled(false);
    _actModeArea->setEnabled(false);

    // 增加提示信息
    m_pbutCtrl->setToolTip(m_pbutCtrl->text());
    m_pbutFrom->setToolTip(m_pbutFrom->text());
    m_pbutSelect->setToolTip(m_pbutSelect->text());
    _pbutShow->setToolTip(_pbutShow->text());
    _pbutMode->setToolTip(_pbutMode->text());

    // 为选项连接槽函数
    QObject::connect(_actRmFan,&QAction::triggered,this,&QLayoutManager::onClieckRemoveFan);
    QObject::connect(_actRmForm,&QAction::triggered,this,&QLayoutManager::onClieckRemoveForm);
    QObject::connect(_actRmSensor,&QAction::triggered,this,&QLayoutManager::onClieckRemoveSensor);
    QObject::connect(_actLock,&QAction::triggered,this,&QLayoutManager::onClieckLock);

    // 设置选项的默认状态
    _actLock->setChecked(true);

    onClieckLock(_actLock->isChecked());

    return;
}

void QLayoutManager::onClieckRemoveFan(bool checked)
{
    // TODO 移除所有选中的风机
    return;
}

void QLayoutManager::onClieckRemoveForm(bool checked)
{
    // TODO 移除所有选中的图形
    return;
}

void QLayoutManager::onClieckRemoveSensor(bool checked)
{
    // TODO 移除所有选中的传感器V2
    return;
}

void QLayoutManager::onClieckLock(bool checked)
{
    if(checked)
    {
        m_pbutCtrl->setEnabled(false);
        m_pbutFrom->setEnabled(false);
        m_actAlignLeft->setEnabled(false);
        m_actAlignRight->setEnabled(false);
        m_actAlignTop->setEnabled(false);
        m_actAlignBottom->setEnabled(false);
        m_actAlignVcenter->setEnabled(false);
        m_actAlignHcenter->setEnabled(false);
        m_actWidth->setEnabled(false);
        m_actHeight->setEnabled(false);
        m_actSize->setEnabled(false);
        m_actVequal->setEnabled(false);
        m_actHequal->setEnabled(false);
        return;
    }

    m_pbutCtrl->setEnabled(true);
    m_pbutFrom->setEnabled(true);
    m_actAlignLeft->setEnabled(true);
    m_actAlignRight->setEnabled(true);
    m_actAlignTop->setEnabled(true);
    m_actAlignBottom->setEnabled(true);
    m_actAlignVcenter->setEnabled(true);
    m_actAlignHcenter->setEnabled(true);
    m_actWidth->setEnabled(true);
    m_actHeight->setEnabled(true);
    m_actSize->setEnabled(true);
    m_actVequal->setEnabled(true);
    m_actHequal->setEnabled(true);

    return;
}

