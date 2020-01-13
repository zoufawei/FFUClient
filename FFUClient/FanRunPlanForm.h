#ifndef FANRUNPLANFORM_H
#define FANRUNPLANFORM_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSqlQuery>
#include "PlanCreateForm.h"

namespace Ui {
class FanRunPlanForm;
}

class FanRunPlanForm : public QWidget
{
    Q_OBJECT

public:
    explicit FanRunPlanForm(QWidget *parent = nullptr);
    ~FanRunPlanForm();

private slots:
    void on_pushButtonCreatePlan_clicked();

private:
    Ui::FanRunPlanForm *ui;
    QStandardItemModel *m_itemModel;

    /**
     * @brief initTableView 初始化列表
     */
    void initTableView();

    /**
     * @brief updateTableView 更新列表
     */
    void updateTableView();
};

#endif // FANRUNPLANFORM_H
