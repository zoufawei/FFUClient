/********************************************************************************
** Form generated from reading UI file 'SysSetForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSSETFORM_H
#define UI_SYSSETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ctrls/CheckBoxEx.h"
#include "ctrls/DoubleSpinBoxEx.h"
#include "ctrls/GroupBoxEx.h"
#include "ctrls/LabelEx.h"
#include "ctrls/LineEditEx.h"
#include "ctrls/PushButtonEx.h"
#include "ctrls/SpinBoxEx.h"

QT_BEGIN_NAMESPACE

class Ui_SysSetForm
{
public:
    QGridLayout *gridLayout_2;
    GroupBoxEx *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    CheckBoxEx *checkBox;
    CheckBoxEx *checkBox_2;
    CheckBoxEx *checkBox_3;
    CheckBoxEx *checkBox_5;
    CheckBoxEx *checkBox_4;
    QHBoxLayout *horizontalLayout_2;
    LabelEx *label;
    DoubleSpinBoxEx *doubleSpinBox;
    QSpacerItem *horizontalSpacer;
    LabelEx *label_5;
    SpinBoxEx *spinBox;
    QSpacerItem *horizontalSpacer_2;
    LabelEx *label_3;
    DoubleSpinBoxEx *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_3;
    LabelEx *label_7;
    QSpacerItem *horizontalSpacer_4;
    LineEditEx *lineEditProName;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    PushButtonEx *pushButton;
    PushButtonEx *pushButton_2;

    void setupUi(QWidget *SysSetForm)
    {
        if (SysSetForm->objectName().isEmpty())
            SysSetForm->setObjectName(QString::fromUtf8("SysSetForm"));
        SysSetForm->resize(633, 336);
        gridLayout_2 = new QGridLayout(SysSetForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new GroupBoxEx(SysSetForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 70, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new CheckBoxEx(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new CheckBoxEx(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new CheckBoxEx(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        checkBox_5 = new CheckBoxEx(groupBox);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        horizontalLayout->addWidget(checkBox_5);

        checkBox_4 = new CheckBoxEx(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        horizontalLayout->addWidget(checkBox_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new LabelEx(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        doubleSpinBox = new DoubleSpinBoxEx(groupBox);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(doubleSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_5 = new LabelEx(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        spinBox = new SpinBoxEx(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(spinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new LabelEx(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        doubleSpinBox_2 = new DoubleSpinBoxEx(groupBox);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(doubleSpinBox_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new LabelEx(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lineEditProName = new LineEditEx(groupBox);
        lineEditProName->setObjectName(QString::fromUtf8("lineEditProName"));
        lineEditProName->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(lineEditProName);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton = new PushButtonEx(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new PushButtonEx(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 30));

        horizontalLayout_4->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SysSetForm);

        QMetaObject::connectSlotsByName(SysSetForm);
    } // setupUi

    void retranslateUi(QWidget *SysSetForm)
    {
        SysSetForm->setWindowTitle(QApplication::translate("SysSetForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SysSetForm", "GroupBox", nullptr));
        checkBox->setText(QApplication::translate("SysSetForm", "\347\241\256\350\256\244\346\217\220\347\244\272\346\241\206", nullptr));
        checkBox_2->setText(QApplication::translate("SysSetForm", "\345\215\261\351\231\251\350\255\246\345\221\212", nullptr));
        checkBox_3->setText(QApplication::translate("SysSetForm", "\346\212\245\350\255\246\346\217\220\347\244\272", nullptr));
        checkBox_5->setText(QApplication::translate("SysSetForm", "\345\243\260\351\237\263\346\212\245\350\255\246", nullptr));
        checkBox_4->setText(QApplication::translate("SysSetForm", "\351\253\230\350\264\250\351\207\217\345\233\276\347\272\270\347\274\251\346\224\276", nullptr));
        label->setText(QApplication::translate("SysSetForm", "\347\246\273\347\272\277\347\216\207\350\256\276\347\275\256\357\274\232", nullptr));
        label_5->setText(QApplication::translate("SysSetForm", "\344\275\216\350\275\254\351\200\237\351\230\200\345\200\274\357\274\232", nullptr));
        label_3->setText(QApplication::translate("SysSetForm", "\344\275\216\350\275\254\351\200\237\346\257\224\347\216\207\357\274\232", nullptr));
        label_7->setText(QApplication::translate("SysSetForm", "\347\263\273\347\273\237\345\220\215\347\247\260\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("SysSetForm", "\345\217\226\346\266\210", nullptr));
        pushButton_2->setText(QApplication::translate("SysSetForm", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SysSetForm: public Ui_SysSetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSSETFORM_H
