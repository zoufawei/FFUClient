#include "AddLayoutForm.h"
#include "ui_AddLayoutForm.h"

AddLayoutForm::AddLayoutForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddLayoutForm)
{
    ui->setupUi(this);


    ui->comboBoxDrawZoom->addItem(QString::fromLocal8Bit("放大10倍"));
    ui->comboBoxDrawZoom->addItem(QString::fromLocal8Bit("放大5倍"));
    ui->comboBoxDrawZoom->addItem(QString::fromLocal8Bit("放大2倍"));
    ui->comboBoxDrawZoom->addItem(QString::fromLocal8Bit("原始尺寸"));
    ui->comboBoxDrawZoom->addItem(QString::fromLocal8Bit("缩小2倍"));
    ui->comboBoxDrawZoom->addItem(QString::fromLocal8Bit("缩小5倍"));
    ui->comboBoxDrawZoom->addItem(QString::fromLocal8Bit("缩小10倍"));
    ui->comboBoxDrawZoom->setCurrentIndex(3);

    ui->spinBoxDrawWidth->setRange(0,1000);
    ui->spinBoxDrawWidth->setValue(100);
    ui->spinBoxDrawHigh->setRange(0,1000);
    ui->spinBoxDrawHigh->setValue(200);
    ui->spinBoxIconWidth->setRange(0,1000);
    ui->spinBoxIconWidth->setValue(100);
    ui->spinBoxIconHigh->setRange(0,1000);
    ui->spinBoxIconHigh->setValue(100);

}

AddLayoutForm::~AddLayoutForm()
{
    delete ui;
}


void AddLayoutForm::onFormLoad()
{
    this->setWindowModality(Qt::ApplicationModal);
    this->show();
}

QString AddLayoutForm::rgb2Hexstr(QColor rgb)
{
    QString r = QString("%1").arg(rgb.red(), 2, 16, QChar('0'));
    QString g = QString("%1").arg(rgb.green(), 2, 16, QChar('0'));
    QString b = QString("%1").arg(rgb.blue(), 2, 16, QChar('0'));
    return "#"+r+g+b;
}

void AddLayoutForm::on_pushButtonBkColor_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this);
    QString colorHex = rgb2Hexstr(color);
    QString strStyle = QString("QPushButton{background:%1}").arg(colorHex);
    ui->pushButtonBkColor->setStyleSheet(strStyle);
}

void AddLayoutForm::on_pushButtonBkImg_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("打开背景图"), "", QString::fromLocal8Bit("图片文件(*jpg *png *wmf);"));
    if(fileName.isEmpty())
        return;
    QImage img(fileName);
    QPixmap pixmap = QPixmap::fromImage(img);
    QPixmap fitPixmap = pixmap.scaled(ui->labelPreview->width(), ui->labelPreview->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
    //QPixmap fitPixmap = pixmap.scaled(ui->labelPreview->width(), ui->labelPreview->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    ui->labelPreview->setPixmap(fitPixmap);
}

void AddLayoutForm::on_pushButtonDXF_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("打开图纸"), "", QString::fromLocal8Bit("图纸文件(*dxf);"));
}
