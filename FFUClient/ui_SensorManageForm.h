/********************************************************************************
** Form generated from reading UI file 'SensorManageForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORMANAGEFORM_H
#define UI_SENSORMANAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ctrls/GroupBoxEx.h"
#include "ctrls/PushButtonEx.h"
#include "ctrls/TableViewEx.h"

QT_BEGIN_NAMESPACE

class Ui_SensorManageForm
{
public:
    QGridLayout *gridLayout_2;
    GroupBoxEx *groupBox;
    QGridLayout *gridLayout;
    PushButtonEx *pushButtonAdd;
    PushButtonEx *pushButtonEdit;
    PushButtonEx *pushButton_3;
    PushButtonEx *pushButtonColor;
    QSpacerItem *horizontalSpacer;
    PushButtonEx *pushButtonClose;
    TableViewEx *tableViewSensor;

    void setupUi(QWidget *SensorManageForm)
    {
        if (SensorManageForm->objectName().isEmpty())
            SensorManageForm->setObjectName(QString::fromUtf8("SensorManageForm"));
        SensorManageForm->resize(1206, 699);
        gridLayout_2 = new QGridLayout(SensorManageForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new GroupBoxEx(SensorManageForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 70, -1, -1);
        pushButtonAdd = new PushButtonEx(groupBox);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonAdd, 0, 0, 1, 1);

        pushButtonEdit = new PushButtonEx(groupBox);
        pushButtonEdit->setObjectName(QString::fromUtf8("pushButtonEdit"));
        pushButtonEdit->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonEdit, 0, 1, 1, 1);

        pushButton_3 = new PushButtonEx(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButtonColor = new PushButtonEx(groupBox);
        pushButtonColor->setObjectName(QString::fromUtf8("pushButtonColor"));
        pushButtonColor->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonColor, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        pushButtonClose = new PushButtonEx(groupBox);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonClose, 0, 5, 1, 1);

        tableViewSensor = new TableViewEx(groupBox);
        tableViewSensor->setObjectName(QString::fromUtf8("tableViewSensor"));

        gridLayout->addWidget(tableViewSensor, 1, 0, 1, 6);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SensorManageForm);

        QMetaObject::connectSlotsByName(SensorManageForm);
    } // setupUi

    void retranslateUi(QWidget *SensorManageForm)
    {
        SensorManageForm->setWindowTitle(QApplication::translate("SensorManageForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SensorManageForm", "GroupBox", nullptr));
        pushButtonAdd->setText(QApplication::translate("SensorManageForm", "\346\267\273\345\212\240\344\274\240\346\204\237\345\231\250", nullptr));
        pushButtonEdit->setText(QApplication::translate("SensorManageForm", "\347\274\226\350\276\221\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_3->setText(QApplication::translate("SensorManageForm", "\345\210\240\351\231\244\344\274\240\346\204\237\345\231\250", nullptr));
        pushButtonColor->setText(QApplication::translate("SensorManageForm", "\351\242\234\350\211\262\347\274\226\350\276\221", nullptr));
        pushButtonClose->setText(QApplication::translate("SensorManageForm", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SensorManageForm: public Ui_SensorManageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORMANAGEFORM_H
