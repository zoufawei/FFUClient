#ifndef SENSOREDITFORM_H
#define SENSOREDITFORM_H

#include <QWidget>
#include <QDebug>
#include "ctrls/MsgBoxEx.h"
#include <QUuid>
#include <QSqlQuery>

namespace Ui {
class SensorEditForm;
}

class SensorEditForm : public QWidget
{
    Q_OBJECT

public:
    explicit SensorEditForm(QWidget *parent = nullptr);
    ~SensorEditForm();

private slots:
    void on_pushButtonOk_clicked();

    void on_pushButtonCancel_clicked();

    void onEdit(QString uuid);

private:
    Ui::SensorEditForm *ui;

signals:
    void editFinish();
};

#endif // SENSOREDITFORM_H
