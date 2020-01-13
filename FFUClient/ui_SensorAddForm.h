/********************************************************************************
** Form generated from reading UI file 'SensorAddForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORADDFORM_H
#define UI_SENSORADDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SensorAddForm
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox_2;
    QSpinBox *spinBox_5;
    QLabel *label_11;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QSpinBox *spinBox_6;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButtonOk;
    QLabel *label_10;
    QSpinBox *spinBox;
    QSpinBox *spinBox_4;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QCheckBox *checkBox;

    void setupUi(QWidget *SensorAddForm)
    {
        if (SensorAddForm->objectName().isEmpty())
            SensorAddForm->setObjectName(QString::fromUtf8("SensorAddForm"));
        SensorAddForm->resize(531, 391);
        gridLayout = new QGridLayout(SensorAddForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox_2 = new QComboBox(SensorAddForm);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox_2, 3, 4, 1, 2);

        spinBox_5 = new QSpinBox(SensorAddForm);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_5, 7, 1, 1, 1);

        label_11 = new QLabel(SensorAddForm);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        label_5 = new QLabel(SensorAddForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBox_3 = new QComboBox(SensorAddForm);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox_3, 4, 1, 1, 1);

        label_9 = new QLabel(SensorAddForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 3, 1, 1);

        pushButton_2 = new QPushButton(SensorAddForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(110, 30));

        gridLayout->addWidget(pushButton_2, 8, 5, 1, 1);

        lineEdit = new QLineEdit(SensorAddForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        spinBox_6 = new QSpinBox(SensorAddForm);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_6, 7, 4, 1, 2);

        label_2 = new QLabel(SensorAddForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        comboBox = new QComboBox(SensorAddForm);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        pushButtonOk = new QPushButton(SensorAddForm);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(0, 30));
        pushButtonOk->setMaximumSize(QSize(110, 16777215));

        gridLayout->addWidget(pushButtonOk, 8, 3, 1, 2);

        label_10 = new QLabel(SensorAddForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 7, 3, 1, 1);

        spinBox = new QSpinBox(SensorAddForm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(160, 30));

        gridLayout->addWidget(spinBox, 2, 4, 1, 2);

        spinBox_4 = new QSpinBox(SensorAddForm);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_4, 6, 4, 1, 2);

        label_6 = new QLabel(SensorAddForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label = new QLabel(SensorAddForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_8 = new QLabel(SensorAddForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        label_4 = new QLabel(SensorAddForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        spinBox_2 = new QSpinBox(SensorAddForm);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_2, 5, 4, 1, 2);

        label_3 = new QLabel(SensorAddForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        spinBox_3 = new QSpinBox(SensorAddForm);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_3, 6, 1, 1, 1);

        lineEdit_2 = new QLineEdit(SensorAddForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit_2, 5, 1, 1, 1);

        label_7 = new QLabel(SensorAddForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 3, 1, 1);

        checkBox = new QCheckBox(SensorAddForm);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMaximumSize(QSize(50, 16777215));
        checkBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(checkBox, 1, 5, 1, 1);


        retranslateUi(SensorAddForm);

        QMetaObject::connectSlotsByName(SensorAddForm);
    } // setupUi

    void retranslateUi(QWidget *SensorAddForm)
    {
        SensorAddForm->setWindowTitle(QApplication::translate("SensorAddForm", "Form", nullptr));
        label_11->setText(QApplication::translate("SensorAddForm", "\346\212\245\350\255\246\344\270\212\351\231\220\357\274\232", nullptr));
        label_5->setText(QApplication::translate("SensorAddForm", "\351\242\234\350\211\262\347\261\273\345\236\213\357\274\232", nullptr));
        label_9->setText(QApplication::translate("SensorAddForm", "\346\234\200\345\244\247\345\200\274\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("SensorAddForm", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QApplication::translate("SensorAddForm", "\344\274\240\346\204\237\345\231\250\347\274\226\345\217\267\357\274\232", nullptr));
        pushButtonOk->setText(QApplication::translate("SensorAddForm", "\347\241\256\345\256\232", nullptr));
        label_10->setText(QApplication::translate("SensorAddForm", "\346\212\245\350\255\246\344\270\213\351\231\220\357\274\232", nullptr));
        label_6->setText(QApplication::translate("SensorAddForm", "\347\275\221\345\205\263IP\357\274\232", nullptr));
        label->setText(QApplication::translate("SensorAddForm", "\344\274\240\346\204\237\345\231\250\345\220\215\347\247\260\357\274\232", nullptr));
        label_8->setText(QApplication::translate("SensorAddForm", "\346\234\200\345\260\217\345\200\274\357\274\232", nullptr));
        label_4->setText(QApplication::translate("SensorAddForm", "\345\214\272\345\237\237\347\261\273\345\236\213\357\274\232", nullptr));
        label_3->setText(QApplication::translate("SensorAddForm", "\344\274\240\346\204\237\345\231\250\347\261\273\345\236\213\357\274\232", nullptr));
        label_7->setText(QApplication::translate("SensorAddForm", "\347\253\257\345\217\243\357\274\232", nullptr));
        checkBox->setText(QApplication::translate("SensorAddForm", "\345\220\257\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SensorAddForm: public Ui_SensorAddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORADDFORM_H
