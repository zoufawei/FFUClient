#ifndef AREAMANAGERFORM_H
#define AREAMANAGERFORM_H

#include <QWidget>

namespace Ui {
class AreaManagerForm;
}

class AreaManagerForm : public QWidget
{
    Q_OBJECT

public:
    explicit AreaManagerForm(QWidget *parent = nullptr);
    ~AreaManagerForm();

private:
    Ui::AreaManagerForm *ui;
};

#endif // AREAMANAGERFORM_H
