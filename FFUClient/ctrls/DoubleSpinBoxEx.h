#ifndef DOUBLESPINBOXEX_H
#define DOUBLESPINBOXEX_H

#include <QDoubleSpinBox>

class DoubleSpinBoxEx : public QDoubleSpinBox
{
    Q_OBJECT
public:
    explicit DoubleSpinBoxEx(QWidget *parent = 0);

private:
    void init();
};

#endif // DOUBLESPINBOXEX_H
