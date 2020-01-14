#include "SpinBoxEx.h"

SpinBoxEx::SpinBoxEx(QWidget *parent) : QSpinBox (parent)
{
    init();
}

void SpinBoxEx::init()
{
    setStyleSheet("QSpinBox {border-radius: 5px; border:1px solid #868E96; background:#2D3035;\
                  font-size:10pt; font-family:Microsoft YaHei; color:#FFEDD6}\
                  QSpinBox:enabled:hover{background:#868E96; border:1px solid #868E96; color:#F7FDF1}\
                  QSpinBox:enabled:focus{background:#2D3035; border:1px solid #DB6574; color:#F4FDFF}\
                  QSpinBox:!enabled {background:#8A8D93; color:#595F65}");
}
