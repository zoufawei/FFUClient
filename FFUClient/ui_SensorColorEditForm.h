/********************************************************************************
** Form generated from reading UI file 'SensorColorEditForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCOLOREDITFORM_H
#define UI_SENSORCOLOREDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ctrls/GroupBoxEx.h"
#include "ctrls/LabelEx.h"
#include "ctrls/LineEditEx.h"
#include "ctrls/PushButtonEx.h"

QT_BEGIN_NAMESPACE

class Ui_SensorColorEditForm
{
public:
    QGridLayout *gridLayout_2;
    GroupBoxEx *groupBox;
    QGridLayout *gridLayout;
    PushButtonEx *pushButtonColor;
    PushButtonEx *pushButtonOk;
    LineEditEx *lineEditValue;
    LabelEx *label;
    LineEditEx *lineEditName;
    LabelEx *label_3;
    LabelEx *label_2;
    PushButtonEx *pushButtonCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SensorColorEditForm)
    {
        if (SensorColorEditForm->objectName().isEmpty())
            SensorColorEditForm->setObjectName(QString::fromUtf8("SensorColorEditForm"));
        SensorColorEditForm->resize(275, 263);
        gridLayout_2 = new QGridLayout(SensorColorEditForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new GroupBoxEx(SensorColorEditForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 70, -1, -1);
        pushButtonColor = new PushButtonEx(groupBox);
        pushButtonColor->setObjectName(QString::fromUtf8("pushButtonColor"));
        pushButtonColor->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButtonColor, 2, 1, 1, 3);

        pushButtonOk = new PushButtonEx(groupBox);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(90, 30));
        pushButtonOk->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButtonOk, 3, 1, 1, 1);

        lineEditValue = new LineEditEx(groupBox);
        lineEditValue->setObjectName(QString::fromUtf8("lineEditValue"));
        lineEditValue->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEditValue, 1, 1, 1, 3);

        label = new LabelEx(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditName = new LineEditEx(groupBox);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEditName, 0, 1, 1, 3);

        label_3 = new LabelEx(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new LabelEx(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButtonCancel = new PushButtonEx(groupBox);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(90, 30));

        gridLayout->addWidget(pushButtonCancel, 3, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SensorColorEditForm);

        QMetaObject::connectSlotsByName(SensorColorEditForm);
    } // setupUi

    void retranslateUi(QWidget *SensorColorEditForm)
    {
        SensorColorEditForm->setWindowTitle(QApplication::translate("SensorColorEditForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SensorColorEditForm", "GroupBox", nullptr));
        pushButtonColor->setText(QApplication::translate("SensorColorEditForm", "\347\202\271\345\207\273\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        pushButtonOk->setText(QApplication::translate("SensorColorEditForm", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("SensorColorEditForm", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QApplication::translate("SensorColorEditForm", "\351\242\234\350\211\262\357\274\232", nullptr));
        label_2->setText(QApplication::translate("SensorColorEditForm", "\346\225\260\345\200\274\357\274\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("SensorColorEditForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SensorColorEditForm: public Ui_SensorColorEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCOLOREDITFORM_H
