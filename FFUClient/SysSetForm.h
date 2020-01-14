#ifndef SYSSETFORM_H
#define SYSSETFORM_H

#include <QWidget>

namespace Ui {
class SysSetForm;
}

class SysSetForm : public QWidget
{
    Q_OBJECT

public:
    explicit SysSetForm(QWidget *parent = nullptr);
    ~SysSetForm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SysSetForm *ui;
};

#endif // SYSSETFORM_H
