#ifndef SENSORCOLORFORM_H
#define SENSORCOLORFORM_H

#include <QWidget>
#include "SensorColorEditForm.h"
#include <QStandardItemModel>
#include <QSqlQuery>


namespace Ui {
class SensorColorForm;
}

class SensorColorForm : public QWidget
{
    Q_OBJECT

public:
    explicit SensorColorForm(QWidget *parent = nullptr);
    ~SensorColorForm();

private slots:
    void on_pushButtonAdd_clicked();

    void onEditFinish();

    void on_pushButtonClose_clicked();

    void on_pushButtonEdit_clicked();

    void on_pushButtonDel_clicked();

private:
    Ui::SensorColorForm *ui;
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

#endif // SENSORCOLORFORM_H
