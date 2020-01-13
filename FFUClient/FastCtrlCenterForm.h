#ifndef FASTCTRLCENTERFORM_H
#define FASTCTRLCENTERFORM_H

#include <QWidget>

namespace Ui {
class FastCtrlCenterForm;
}

class FastCtrlCenterForm : public QWidget
{
    Q_OBJECT

public:
    explicit FastCtrlCenterForm(QWidget *parent = nullptr);
    ~FastCtrlCenterForm();



private:
    Ui::FastCtrlCenterForm *ui;
};

#endif // FASTCTRLCENTERFORM_H
