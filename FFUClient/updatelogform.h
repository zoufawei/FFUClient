#ifndef UPDATELOGFORM_H
#define UPDATELOGFORM_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class UpdateLogForm;
}

class UpdateLogForm : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateLogForm(QWidget *parent = nullptr);
    ~UpdateLogForm();

private:
    Ui::UpdateLogForm *ui;

public slots:
    void onFormLoad();
};

#endif // UPDATELOGFORM_H
