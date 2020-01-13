/********************************************************************************
** Form generated from reading UI file 'SensorEditForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOREDITFORM_H
#define UI_SENSOREDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ctrls/CheckBoxEx.h"
#include "ctrls/GroupBoxEx.h"
#include "ctrls/LabelEx.h"
#include "ctrls/LineEditEx.h"
#include "ctrls/PushButtonEx.h"

QT_BEGIN_NAMESPACE

class Ui_SensorEditForm
{
public:
    QGridLayout *gridLayout_2;
    GroupBoxEx *groupBox;
    QGridLayout *gridLayout;
    LineEditEx *lineEditPort;
    LineEditEx *lineEditValueMin;
    LabelEx *label;
    LineEditEx *lineEditWaringUp;
    LabelEx *label_5;
    LabelEx *label_3;
    LabelEx *label_11;
    LabelEx *label_9;
    PushButtonEx *pushButtonOk;
    LineEditEx *lineEditValueMax;
    LabelEx *label_10;
    CheckBoxEx *checkBoxEnable;
    LineEditEx *lineEditWaringDn;
    LabelEx *label_2;
    LabelEx *label_6;
    LineEditEx *lineEditSensorNO;
    LabelEx *label_8;
    LineEditEx *lineEditIP;
    LineEditEx *lineEditSensorName;
    PushButtonEx *pushButtonCancel;
    LabelEx *label_7;
    LabelEx *label_4;
    LineEditEx *lineEditSensorType;
    LineEditEx *lineEditColorType;
    QSpacerItem *horizontalSpacer;
    LineEditEx *lineEditAreaType;

    void setupUi(QWidget *SensorEditForm)
    {
        if (SensorEditForm->objectName().isEmpty())
            SensorEditForm->setObjectName(QString::fromUtf8("SensorEditForm"));
        SensorEditForm->resize(557, 463);
        gridLayout_2 = new QGridLayout(SensorEditForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new GroupBoxEx(SensorEditForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 70, -1, -1);
        lineEditPort = new LineEditEx(groupBox);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditPort->sizePolicy().hasHeightForWidth());
        lineEditPort->setSizePolicy(sizePolicy);
        lineEditPort->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditPort, 5, 5, 1, 1);

        lineEditValueMin = new LineEditEx(groupBox);
        lineEditValueMin->setObjectName(QString::fromUtf8("lineEditValueMin"));
        sizePolicy.setHeightForWidth(lineEditValueMin->sizePolicy().hasHeightForWidth());
        lineEditValueMin->setSizePolicy(sizePolicy);
        lineEditValueMin->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditValueMin, 6, 1, 1, 1);

        label = new LabelEx(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEditWaringUp = new LineEditEx(groupBox);
        lineEditWaringUp->setObjectName(QString::fromUtf8("lineEditWaringUp"));
        sizePolicy.setHeightForWidth(lineEditWaringUp->sizePolicy().hasHeightForWidth());
        lineEditWaringUp->setSizePolicy(sizePolicy);
        lineEditWaringUp->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditWaringUp, 7, 1, 1, 1);

        label_5 = new LabelEx(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new LabelEx(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_11 = new LabelEx(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        label_9 = new LabelEx(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 3, 1, 1);

        pushButtonOk = new PushButtonEx(groupBox);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(0, 30));
        pushButtonOk->setMaximumSize(QSize(110, 16777215));

        gridLayout->addWidget(pushButtonOk, 8, 1, 1, 1);

        lineEditValueMax = new LineEditEx(groupBox);
        lineEditValueMax->setObjectName(QString::fromUtf8("lineEditValueMax"));
        sizePolicy.setHeightForWidth(lineEditValueMax->sizePolicy().hasHeightForWidth());
        lineEditValueMax->setSizePolicy(sizePolicy);
        lineEditValueMax->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditValueMax, 6, 5, 1, 1);

        label_10 = new LabelEx(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 7, 3, 1, 1);

        checkBoxEnable = new CheckBoxEx(groupBox);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));
        checkBoxEnable->setMaximumSize(QSize(50, 16777215));
        checkBoxEnable->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(checkBoxEnable, 0, 5, 1, 1);

        lineEditWaringDn = new LineEditEx(groupBox);
        lineEditWaringDn->setObjectName(QString::fromUtf8("lineEditWaringDn"));
        sizePolicy.setHeightForWidth(lineEditWaringDn->sizePolicy().hasHeightForWidth());
        lineEditWaringDn->setSizePolicy(sizePolicy);
        lineEditWaringDn->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditWaringDn, 7, 5, 1, 1);

        label_2 = new LabelEx(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        label_6 = new LabelEx(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEditSensorNO = new LineEditEx(groupBox);
        lineEditSensorNO->setObjectName(QString::fromUtf8("lineEditSensorNO"));
        sizePolicy.setHeightForWidth(lineEditSensorNO->sizePolicy().hasHeightForWidth());
        lineEditSensorNO->setSizePolicy(sizePolicy);
        lineEditSensorNO->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditSensorNO, 2, 5, 1, 1);

        label_8 = new LabelEx(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        lineEditIP = new LineEditEx(groupBox);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        sizePolicy.setHeightForWidth(lineEditIP->sizePolicy().hasHeightForWidth());
        lineEditIP->setSizePolicy(sizePolicy);
        lineEditIP->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditIP, 5, 1, 1, 1);

        lineEditSensorName = new LineEditEx(groupBox);
        lineEditSensorName->setObjectName(QString::fromUtf8("lineEditSensorName"));
        sizePolicy.setHeightForWidth(lineEditSensorName->sizePolicy().hasHeightForWidth());
        lineEditSensorName->setSizePolicy(sizePolicy);
        lineEditSensorName->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditSensorName, 2, 1, 1, 1);

        pushButtonCancel = new PushButtonEx(groupBox);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(0, 30));
        pushButtonCancel->setMaximumSize(QSize(110, 16777215));

        gridLayout->addWidget(pushButtonCancel, 8, 5, 1, 1);

        label_7 = new LabelEx(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 3, 1, 1);

        label_4 = new LabelEx(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        lineEditSensorType = new LineEditEx(groupBox);
        lineEditSensorType->setObjectName(QString::fromUtf8("lineEditSensorType"));
        sizePolicy.setHeightForWidth(lineEditSensorType->sizePolicy().hasHeightForWidth());
        lineEditSensorType->setSizePolicy(sizePolicy);
        lineEditSensorType->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditSensorType, 3, 1, 1, 1);

        lineEditColorType = new LineEditEx(groupBox);
        lineEditColorType->setObjectName(QString::fromUtf8("lineEditColorType"));
        sizePolicy.setHeightForWidth(lineEditColorType->sizePolicy().hasHeightForWidth());
        lineEditColorType->setSizePolicy(sizePolicy);
        lineEditColorType->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditColorType, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        lineEditAreaType = new LineEditEx(groupBox);
        lineEditAreaType->setObjectName(QString::fromUtf8("lineEditAreaType"));
        sizePolicy.setHeightForWidth(lineEditAreaType->sizePolicy().hasHeightForWidth());
        lineEditAreaType->setSizePolicy(sizePolicy);
        lineEditAreaType->setMinimumSize(QSize(162, 30));

        gridLayout->addWidget(lineEditAreaType, 3, 5, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SensorEditForm);

        QMetaObject::connectSlotsByName(SensorEditForm);
    } // setupUi

    void retranslateUi(QWidget *SensorEditForm)
    {
        SensorEditForm->setWindowTitle(QApplication::translate("SensorEditForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SensorEditForm", "GroupBox", nullptr));
        label->setText(QApplication::translate("SensorEditForm", "\344\274\240\346\204\237\345\231\250\345\220\215\347\247\260\357\274\232", nullptr));
        label_5->setText(QApplication::translate("SensorEditForm", "\351\242\234\350\211\262\347\261\273\345\236\213\357\274\232", nullptr));
        label_3->setText(QApplication::translate("SensorEditForm", "\344\274\240\346\204\237\345\231\250\347\261\273\345\236\213\357\274\232", nullptr));
        label_11->setText(QApplication::translate("SensorEditForm", "\346\212\245\350\255\246\344\270\212\351\231\220\357\274\232", nullptr));
        label_9->setText(QApplication::translate("SensorEditForm", "\346\234\200\345\244\247\345\200\274\357\274\232", nullptr));
        pushButtonOk->setText(QApplication::translate("SensorEditForm", "\347\241\256\345\256\232", nullptr));
        label_10->setText(QApplication::translate("SensorEditForm", "\346\212\245\350\255\246\344\270\213\351\231\220\357\274\232", nullptr));
        checkBoxEnable->setText(QApplication::translate("SensorEditForm", "\345\220\257\347\224\250", nullptr));
        label_2->setText(QApplication::translate("SensorEditForm", "\344\274\240\346\204\237\345\231\250\347\274\226\345\217\267\357\274\232", nullptr));
        label_6->setText(QApplication::translate("SensorEditForm", "\347\275\221\345\205\263IP\357\274\232", nullptr));
        label_8->setText(QApplication::translate("SensorEditForm", "\346\234\200\345\260\217\345\200\274\357\274\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("SensorEditForm", "\345\217\226\346\266\210", nullptr));
        label_7->setText(QApplication::translate("SensorEditForm", "\347\253\257\345\217\243\357\274\232", nullptr));
        label_4->setText(QApplication::translate("SensorEditForm", "\345\214\272\345\237\237\347\261\273\345\236\213\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SensorEditForm: public Ui_SensorEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOREDITFORM_H
