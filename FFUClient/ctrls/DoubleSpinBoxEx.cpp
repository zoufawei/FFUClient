#include "DoubleSpinBoxEx.h"

DoubleSpinBoxEx::DoubleSpinBoxEx(QWidget *parent) : QDoubleSpinBox (parent)
{
    init();
}

void DoubleSpinBoxEx::init()
{
    setStyleSheet("QDoubleSpinBox {border-radius: 5px; border:1px solid #868E96; background:#2D3035;\
                  font-size:10pt; font-family:Microsoft YaHei; color:#FFEDD6}\
                  QDoubleSpinBox:enabled:hover{background:#868E96; border:1px solid #868E96; color:#F7FDF1}\
                  QDoubleSpinBox:enabled:focus{background:#2D3035; border:1px solid #DB6574; color:#F4FDFF}\
                  QDoubleSpinBox:!enabled {background:#8A8D93; color:#595F65}");
}
