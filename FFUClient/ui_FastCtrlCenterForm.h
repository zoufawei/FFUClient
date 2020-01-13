/********************************************************************************
** Form generated from reading UI file 'FastCtrlCenterForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FASTCTRLCENTERFORM_H
#define UI_FASTCTRLCENTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FastCtrlCenterForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *labelNumberMotor;
    QLabel *labelNumberFan;
    QLabel *labelNumberZeroRs;
    QLabel *labelNumberLowRs;
    QLabel *labelNumberTem;
    QLabel *labelNumberSensor;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QWidget *FastCtrlCenterForm)
    {
        if (FastCtrlCenterForm->objectName().isEmpty())
            FastCtrlCenterForm->setObjectName(QString::fromUtf8("FastCtrlCenterForm"));
        FastCtrlCenterForm->resize(512, 681);
        label = new QLabel(FastCtrlCenterForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 54, 12));
        label_2 = new QLabel(FastCtrlCenterForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 180, 54, 12));
        label_3 = new QLabel(FastCtrlCenterForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 230, 54, 12));
        label_4 = new QLabel(FastCtrlCenterForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 230, 54, 12));
        label_5 = new QLabel(FastCtrlCenterForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 230, 54, 12));
        label_6 = new QLabel(FastCtrlCenterForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 320, 54, 12));
        label_7 = new QLabel(FastCtrlCenterForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 320, 54, 12));
        label_8 = new QLabel(FastCtrlCenterForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 320, 71, 16));
        labelNumberMotor = new QLabel(FastCtrlCenterForm);
        labelNumberMotor->setObjectName(QString::fromUtf8("labelNumberMotor"));
        labelNumberMotor->setGeometry(QRect(50, 270, 41, 16));
        labelNumberFan = new QLabel(FastCtrlCenterForm);
        labelNumberFan->setObjectName(QString::fromUtf8("labelNumberFan"));
        labelNumberFan->setGeometry(QRect(150, 270, 41, 16));
        labelNumberZeroRs = new QLabel(FastCtrlCenterForm);
        labelNumberZeroRs->setObjectName(QString::fromUtf8("labelNumberZeroRs"));
        labelNumberZeroRs->setGeometry(QRect(250, 270, 41, 16));
        labelNumberLowRs = new QLabel(FastCtrlCenterForm);
        labelNumberLowRs->setObjectName(QString::fromUtf8("labelNumberLowRs"));
        labelNumberLowRs->setGeometry(QRect(50, 360, 41, 16));
        labelNumberTem = new QLabel(FastCtrlCenterForm);
        labelNumberTem->setObjectName(QString::fromUtf8("labelNumberTem"));
        labelNumberTem->setGeometry(QRect(150, 360, 41, 16));
        labelNumberSensor = new QLabel(FastCtrlCenterForm);
        labelNumberSensor->setObjectName(QString::fromUtf8("labelNumberSensor"));
        labelNumberSensor->setGeometry(QRect(250, 360, 41, 16));
        label_9 = new QLabel(FastCtrlCenterForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 440, 54, 12));
        label_10 = new QLabel(FastCtrlCenterForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 550, 71, 16));

        retranslateUi(FastCtrlCenterForm);

        QMetaObject::connectSlotsByName(FastCtrlCenterForm);
    } // setupUi

    void retranslateUi(QWidget *FastCtrlCenterForm)
    {
        FastCtrlCenterForm->setWindowTitle(QApplication::translate("FastCtrlCenterForm", "Form", nullptr));
        label->setText(QApplication::translate("FastCtrlCenterForm", "\345\234\250\347\272\277\347\216\207\357\274\232", nullptr));
        label_2->setText(QApplication::translate("FastCtrlCenterForm", "\345\274\202\345\270\270\347\273\237\350\256\241\357\274\232", nullptr));
        label_3->setText(QApplication::translate("FastCtrlCenterForm", "\351\251\254\350\276\276\345\274\202\345\270\270", nullptr));
        label_4->setText(QApplication::translate("FastCtrlCenterForm", "\351\243\216\346\234\272\345\274\202\345\270\270", nullptr));
        label_5->setText(QApplication::translate("FastCtrlCenterForm", "\351\233\266\350\275\254\351\200\237", nullptr));
        label_6->setText(QApplication::translate("FastCtrlCenterForm", "\344\275\216\350\275\254\351\200\237", nullptr));
        label_7->setText(QApplication::translate("FastCtrlCenterForm", "\346\270\251\345\272\246\345\274\202\345\270\270", nullptr));
        label_8->setText(QApplication::translate("FastCtrlCenterForm", "\344\274\240\346\204\237\345\231\250\347\246\273\347\272\277", nullptr));
        labelNumberMotor->setText(QApplication::translate("FastCtrlCenterForm", "0", nullptr));
        labelNumberFan->setText(QApplication::translate("FastCtrlCenterForm", "0", nullptr));
        labelNumberZeroRs->setText(QApplication::translate("FastCtrlCenterForm", "0", nullptr));
        labelNumberLowRs->setText(QApplication::translate("FastCtrlCenterForm", "0", nullptr));
        labelNumberTem->setText(QApplication::translate("FastCtrlCenterForm", "0", nullptr));
        labelNumberSensor->setText(QApplication::translate("FastCtrlCenterForm", "0", nullptr));
        label_9->setText(QApplication::translate("FastCtrlCenterForm", "\346\212\245\350\255\246\344\277\241\346\201\257\357\274\232", nullptr));
        label_10->setText(QApplication::translate("FastCtrlCenterForm", "\344\274\240\346\204\237\345\231\250\346\212\245\350\255\246\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FastCtrlCenterForm: public Ui_FastCtrlCenterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FASTCTRLCENTERFORM_H
