#ifndef ADDLAYOUTFORM_H
#define ADDLAYOUTFORM_H

#include <QWidget>
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class AddLayoutForm;
}

class AddLayoutForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddLayoutForm(QWidget *parent = nullptr);
    ~AddLayoutForm();

private:
    Ui::AddLayoutForm *ui;
    QString rgb2Hexstr(QColor rgb);
public slots:
    void onFormLoad();
private slots:
    void on_pushButtonBkColor_clicked();
    void on_pushButtonBkImg_clicked();
    void on_pushButtonDXF_clicked();
};

#endif // ADDLAYOUTFORM_H
