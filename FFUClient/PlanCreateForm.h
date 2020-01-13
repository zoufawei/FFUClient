#ifndef PLANCREATEFORM_H
#define PLANCREATEFORM_H

#include <QWidget>

namespace Ui {
class PlanCreateForm;
}

class PlanCreateForm : public QWidget
{
    Q_OBJECT

public:
    explicit PlanCreateForm(QWidget *parent = nullptr);
    ~PlanCreateForm();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::PlanCreateForm *ui;
};

#endif // PLANCREATEFORM_H
