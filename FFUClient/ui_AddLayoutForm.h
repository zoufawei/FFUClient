/********************************************************************************
** Form generated from reading UI file 'AddLayoutForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLAYOUTFORM_H
#define UI_ADDLAYOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddLayoutForm
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QPushButton *pushButtonBkColor;
    QPushButton *pushButtonBkImg;
    QLabel *label_5;
    QPushButton *pushButtonDXF;
    QLabel *labelPreview;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBoxDrawZoom;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBoxDrawWidth;
    QSpinBox *spinBoxDrawHigh;
    QSpinBox *spinBoxIconWidth;
    QSpinBox *spinBoxIconHigh;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AddLayoutForm)
    {
        if (AddLayoutForm->objectName().isEmpty())
            AddLayoutForm->setObjectName(QString::fromUtf8("AddLayoutForm"));
        AddLayoutForm->resize(881, 500);
        label = new QLabel(AddLayoutForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(28, 33, 54, 12));
        lineEdit = new QLineEdit(AddLayoutForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(118, 33, 281, 20));
        label_2 = new QLabel(AddLayoutForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(458, 33, 54, 12));
        label_3 = new QLabel(AddLayoutForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(28, 73, 54, 12));
        textEdit = new QTextEdit(AddLayoutForm);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(118, 73, 281, 70));
        label_4 = new QLabel(AddLayoutForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(28, 173, 54, 12));
        pushButtonBkColor = new QPushButton(AddLayoutForm);
        pushButtonBkColor->setObjectName(QString::fromUtf8("pushButtonBkColor"));
        pushButtonBkColor->setGeometry(QRect(108, 163, 301, 31));
        pushButtonBkImg = new QPushButton(AddLayoutForm);
        pushButtonBkImg->setObjectName(QString::fromUtf8("pushButtonBkImg"));
        pushButtonBkImg->setGeometry(QRect(108, 213, 141, 31));
        label_5 = new QLabel(AddLayoutForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(28, 223, 54, 12));
        pushButtonDXF = new QPushButton(AddLayoutForm);
        pushButtonDXF->setObjectName(QString::fromUtf8("pushButtonDXF"));
        pushButtonDXF->setGeometry(QRect(268, 213, 141, 31));
        labelPreview = new QLabel(AddLayoutForm);
        labelPreview->setObjectName(QString::fromUtf8("labelPreview"));
        labelPreview->setGeometry(QRect(458, 73, 391, 311));
        label_6 = new QLabel(AddLayoutForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(28, 281, 54, 12));
        label_7 = new QLabel(AddLayoutForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(111, 280, 31, 16));
        label_8 = new QLabel(AddLayoutForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 280, 31, 16));
        label_9 = new QLabel(AddLayoutForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(28, 323, 54, 12));
        comboBoxDrawZoom = new QComboBox(AddLayoutForm);
        comboBoxDrawZoom->setObjectName(QString::fromUtf8("comboBoxDrawZoom"));
        comboBoxDrawZoom->setGeometry(QRect(108, 314, 101, 30));
        comboBoxDrawZoom->setMinimumSize(QSize(0, 30));
        label_10 = new QLabel(AddLayoutForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(18, 371, 81, 16));
        label_11 = new QLabel(AddLayoutForm);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(111, 370, 31, 16));
        label_12 = new QLabel(AddLayoutForm);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(280, 370, 31, 16));
        spinBoxDrawWidth = new QSpinBox(AddLayoutForm);
        spinBoxDrawWidth->setObjectName(QString::fromUtf8("spinBoxDrawWidth"));
        spinBoxDrawWidth->setGeometry(QRect(140, 273, 91, 30));
        spinBoxDrawWidth->setMinimumSize(QSize(0, 30));
        spinBoxDrawHigh = new QSpinBox(AddLayoutForm);
        spinBoxDrawHigh->setObjectName(QString::fromUtf8("spinBoxDrawHigh"));
        spinBoxDrawHigh->setGeometry(QRect(310, 273, 91, 30));
        spinBoxDrawHigh->setMinimumSize(QSize(0, 30));
        spinBoxIconWidth = new QSpinBox(AddLayoutForm);
        spinBoxIconWidth->setObjectName(QString::fromUtf8("spinBoxIconWidth"));
        spinBoxIconWidth->setGeometry(QRect(140, 363, 91, 30));
        spinBoxIconWidth->setMinimumSize(QSize(0, 30));
        spinBoxIconHigh = new QSpinBox(AddLayoutForm);
        spinBoxIconHigh->setObjectName(QString::fromUtf8("spinBoxIconHigh"));
        spinBoxIconHigh->setGeometry(QRect(310, 363, 91, 30));
        spinBoxIconHigh->setMinimumSize(QSize(0, 30));
        pushButton = new QPushButton(AddLayoutForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 450, 91, 30));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton_2 = new QPushButton(AddLayoutForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 450, 91, 30));
        pushButton_2->setMinimumSize(QSize(0, 30));

        retranslateUi(AddLayoutForm);

        QMetaObject::connectSlotsByName(AddLayoutForm);
    } // setupUi

    void retranslateUi(QWidget *AddLayoutForm)
    {
        AddLayoutForm->setWindowTitle(QApplication::translate("AddLayoutForm", "Form", nullptr));
        label->setText(QApplication::translate("AddLayoutForm", "\345\270\203\345\261\200\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QApplication::translate("AddLayoutForm", "\351\242\204\350\247\210\357\274\232", nullptr));
        label_3->setText(QApplication::translate("AddLayoutForm", "\350\257\264\346\230\216\357\274\232", nullptr));
        label_4->setText(QApplication::translate("AddLayoutForm", "\350\203\214\346\231\257\350\211\262\357\274\232", nullptr));
        pushButtonBkColor->setText(QApplication::translate("AddLayoutForm", "\350\257\267\347\202\271\345\207\273\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        pushButtonBkImg->setText(QApplication::translate("AddLayoutForm", "\350\257\267\347\202\271\345\207\273\351\200\211\346\213\251\350\203\214\346\231\257", nullptr));
        label_5->setText(QApplication::translate("AddLayoutForm", "\345\233\276\347\272\270\357\274\232", nullptr));
        pushButtonDXF->setText(QApplication::translate("AddLayoutForm", "\350\257\267\347\202\271\345\207\273\351\200\211\346\213\251DXF", nullptr));
        labelPreview->setText(QString());
        label_6->setText(QApplication::translate("AddLayoutForm", "\345\233\276\347\272\270\345\244\247\345\260\217\357\274\232", nullptr));
        label_7->setText(QApplication::translate("AddLayoutForm", "\345\256\275\357\274\232", nullptr));
        label_8->setText(QApplication::translate("AddLayoutForm", "\351\253\230\357\274\232", nullptr));
        label_9->setText(QApplication::translate("AddLayoutForm", "\345\233\276\347\272\270\347\274\251\346\224\276\357\274\232", nullptr));
        label_10->setText(QApplication::translate("AddLayoutForm", "\345\233\276\347\272\270\345\233\276\346\240\207\350\256\276\347\275\256\357\274\232", nullptr));
        label_11->setText(QApplication::translate("AddLayoutForm", "\345\256\275\357\274\232", nullptr));
        label_12->setText(QApplication::translate("AddLayoutForm", "\351\253\230\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("AddLayoutForm", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("AddLayoutForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddLayoutForm: public Ui_AddLayoutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLAYOUTFORM_H
