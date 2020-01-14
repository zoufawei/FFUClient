#ifndef SPINBOXEX_H
#define SPINBOXEX_H

#include <QSpinBox>

class SpinBoxEx : public QSpinBox
{
    Q_OBJECT
public:
    explicit SpinBoxEx(QWidget *parent = 0);

private:
    void init();
};

#endif // SPINBOXEX_H
