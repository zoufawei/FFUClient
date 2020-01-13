/********************************************************************************
** Form generated from reading UI file 'SensorColorForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCOLORFORM_H
#define UI_SENSORCOLORFORM_H

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

class Ui_SensorColorForm
{
public:
    QGridLayout *gridLayout_2;
    GroupBoxEx *groupBox;
    QGridLayout *gridLayout;
    PushButtonEx *pushButtonClose;
    PushButtonEx *pushButtonDel;
    TableViewEx *tableViewColor;
    PushButtonEx *pushButtonAdd;
    PushButtonEx *pushButtonEdit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SensorColorForm)
    {
        if (SensorColorForm->objectName().isEmpty())
            SensorColorForm->setObjectName(QString::fromUtf8("SensorColorForm"));
        SensorColorForm->resize(817, 477);
        gridLayout_2 = new QGridLayout(SensorColorForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new GroupBoxEx(SensorColorForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 70, -1, -1);
        pushButtonClose = new PushButtonEx(groupBox);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonClose, 0, 4, 1, 1);

        pushButtonDel = new PushButtonEx(groupBox);
        pushButtonDel->setObjectName(QString::fromUtf8("pushButtonDel"));
        pushButtonDel->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonDel, 0, 2, 1, 1);

        tableViewColor = new TableViewEx(groupBox);
        tableViewColor->setObjectName(QString::fromUtf8("tableViewColor"));

        gridLayout->addWidget(tableViewColor, 1, 0, 1, 6);

        pushButtonAdd = new PushButtonEx(groupBox);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonAdd, 0, 0, 1, 1);

        pushButtonEdit = new PushButtonEx(groupBox);
        pushButtonEdit->setObjectName(QString::fromUtf8("pushButtonEdit"));
        pushButtonEdit->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonEdit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(364, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SensorColorForm);

        QMetaObject::connectSlotsByName(SensorColorForm);
    } // setupUi

    void retranslateUi(QWidget *SensorColorForm)
    {
        SensorColorForm->setWindowTitle(QApplication::translate("SensorColorForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SensorColorForm", "GroupBox", nullptr));
        pushButtonClose->setText(QApplication::translate("SensorColorForm", "\345\205\263\351\227\255", nullptr));
        pushButtonDel->setText(QApplication::translate("SensorColorForm", "\345\210\240\351\231\244\351\242\234\350\211\262", nullptr));
        pushButtonAdd->setText(QApplication::translate("SensorColorForm", "\346\267\273\345\212\240\351\242\234\350\211\262", nullptr));
        pushButtonEdit->setText(QApplication::translate("SensorColorForm", "\347\274\226\350\276\221\351\242\234\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SensorColorForm: public Ui_SensorColorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCOLORFORM_H
