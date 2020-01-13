#ifndef SENSORCOLOREDITFORM_H
#define SENSORCOLOREDITFORM_H

#include <QWidget>
#include <QUuid>
#include <QDebug>
#include <QColorDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <ctrls/MsgBoxEx.h>

namespace Ui {
class SensorColorEditForm;
}

class SensorColorEditForm : public QWidget
{
    Q_OBJECT

public:
    explicit SensorColorEditForm(QWidget *parent = nullptr);
    ~SensorColorEditForm();

private slots:
    void on_pushButtonOk_clicked();

    void on_pushButtonColor_clicked();

    void on_pushButtonCancel_clicked();

    void onEdit(QString uuid);
signals:
    void editFinish();

private:
    Ui::SensorColorEditForm *ui;
    bool m_isEditModal;
    QString m_uuid;
    QString rgb2Hexstr(QColor rgb);
};

#endif // SENSORCOLOREDITFORM_H
