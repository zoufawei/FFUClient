#ifndef QLAYOUTMANAGER_H
#define QLAYOUTMANAGER_H

#include <QMainWindow>
#include <QToolBar>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class QLayoutManager; }
QT_END_NAMESPACE

class QLayoutManager : public QMainWindow
{
    Q_OBJECT

public:
    QLayoutManager(QWidget *parent = nullptr);
    ~QLayoutManager();

private:
    Ui::QLayoutManager *ui;
private:
    QToolBar* m_toolBar;    /*!< 工具栏 */
private:
    QPushButton* m_pbutCtrl;    /*!< 操作菜单按钮 */
    QPushButton* m_pbutFrom;    /*!< 插入图形菜单按钮 */
    QPushButton* m_pbutSelect;  /*!< 切换当前图层菜单按钮 */
private:
    QAction* m_actAlignLeft;    /*!< 左对齐选项 */
    QAction* m_actAlignRight;   /*!< 右对齐选项 */
    QAction* m_actAlignTop;     /*!< 顶对齐选项 */
    QAction* m_actAlignBottom;   /*!< 底对齐选项 */
    QAction* m_actAlignVcenter; /*!< 垂直对齐选项 */
    QAction* m_actAlignHcenter; /*!< 水平对齐选项 */
    QAction* m_actWidth;    /*!< 等宽选项 */
    QAction* m_actHeight;   /*!< 等高选项 */
    QAction* m_actSize;     /*!< 等尺寸选项 */
    QAction* m_actVequal;   /*!< 水平等距 */
    QAction* m_actHequal;   /*!< 垂直等距 */
private:
    /*!
     * @brief 初始化窗口
     * @date 2020-01-14
     * @author FanKaiyu
     */
    void Initialize();
private slots:
    /*!
     * @brief 点击移除选定风机选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckRemoveFan(bool checked = false);

    /*!
     * @brief 点击移除选定图形选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckRemoveForm(bool checked = false);

    /*!
     * @brief 点击移除选定传感器V2选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckRemoveSensor(bool checked = false);

    /*!
     * @brief 点击保存布局选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckSave(bool checked = false);

    /*!
     * @brief 点击保存风机默认大小为当前风机选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckSaveFanSize(bool checked = false);

    /*!
     * @brief 点击编辑布局设置选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckEdit(bool checked = false);

    /*!
     * @brief 点击删除布局选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckDelete(bool checked = false);

    /*!
     * @brief 点击左对齐选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckAlignLeft(bool checked = false);

    /*!
     * @brief 点击右对齐选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckAlignRight(bool checked = false);

    /*!
     * @brief 点击顶对齐选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckAlignTop(bool checked = false);

    /*!
     * @brief 点击底对齐选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckAlignBottom(bool checked = false);

    /*!
     * @brief 点击水平对齐选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckAlignHcenter(bool checked = false);

    /*!
     * @brief 点击垂直对齐选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckAlignVcenter(bool checked = false);

    /*!
     * @brief 点击等宽选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckEqualWidth(bool checked = false);

    /*!
     * @brief 点击等高选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckEqualHeight(bool checked = false);

    /*!
     * @brief 点击等尺寸选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckEqualSize(bool checked = false);

    /*!
     * @brief 点击锁定布局选项时触发的槽函数
     * @date 2020-01-14
     * @author FanKaiyu
     * @param bool 选项的选中状态
     */
    void onClieckLock(bool checked = false);
};
#endif // QLAYOUTMANAGER_H
