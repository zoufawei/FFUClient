#ifndef SENSORMANAGEFORM_H
#define SENSORMANAGEFORM_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSqlQuery>
#include "SensorEditForm.h"
#include "SensorColorForm.h"

namespace Ui {
class SensorManageForm;
}

class SensorManageForm : public QWidget
{
    Q_OBJECT

public:
    explicit SensorManageForm(QWidget *parent = nullptr);
    ~SensorManageForm();

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonColor_clicked();

    void on_pushButtonClose_clicked();

    void onEditFinish();

    void on_pushButtonEdit_clicked();

private:
    Ui::SensorManageForm *ui;
    QStandardItemModel *m_itemModel;

    /**
     * @brief initTableView 初始化列表
     */
    void initTableView();

    /**
     * @brief updateTableView 更新列表
     */
    void updateTableView();

signals:
    void edit(QString uuid);
};

#endif // SENSORMANAGEFORM_H
