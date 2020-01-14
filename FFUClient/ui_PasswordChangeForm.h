/********************************************************************************
** Form generated from reading UI file 'PasswordChangeForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDCHANGEFORM_H
#define UI_PASSWORDCHANGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "ctrls/GroupBoxEx.h"
#include "ctrls/LabelEx.h"
#include "ctrls/LineEditEx.h"
#include "ctrls/PushButtonEx.h"

QT_BEGIN_NAMESPACE

class Ui_PasswordChangeForm
{
public:
    QGridLayout *gridLayout_2;
    GroupBoxEx *groupBox;
    QGridLayout *gridLayout;
    LabelEx *label;
    LineEditEx *lineEditPasswdOld;
    LabelEx *label_2;
    LineEditEx *lineEditPasswdNew;
    LabelEx *label_3;
    LineEditEx *lineEditPasswdMakeSure;
    PushButtonEx *pushButtonCancel;
    PushButtonEx *pushButtonOk;

    void setupUi(QWidget *PasswordChangeForm)
    {
        if (PasswordChangeForm->objectName().isEmpty())
            PasswordChangeForm->setObjectName(QString::fromUtf8("PasswordChangeForm"));
        PasswordChangeForm->resize(307, 311);
        gridLayout_2 = new QGridLayout(PasswordChangeForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new GroupBoxEx(PasswordChangeForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 70, -1, -1);
        label = new LabelEx(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditPasswdOld = new LineEditEx(groupBox);
        lineEditPasswdOld->setObjectName(QString::fromUtf8("lineEditPasswdOld"));
        lineEditPasswdOld->setMinimumSize(QSize(0, 30));
        lineEditPasswdOld->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswdOld, 0, 1, 1, 2);

        label_2 = new LabelEx(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditPasswdNew = new LineEditEx(groupBox);
        lineEditPasswdNew->setObjectName(QString::fromUtf8("lineEditPasswdNew"));
        lineEditPasswdNew->setMinimumSize(QSize(0, 30));
        lineEditPasswdNew->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswdNew, 1, 1, 1, 2);

        label_3 = new LabelEx(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditPasswdMakeSure = new LineEditEx(groupBox);
        lineEditPasswdMakeSure->setObjectName(QString::fromUtf8("lineEditPasswdMakeSure"));
        lineEditPasswdMakeSure->setMinimumSize(QSize(0, 30));
        lineEditPasswdMakeSure->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswdMakeSure, 2, 1, 1, 2);

        pushButtonCancel = new PushButtonEx(groupBox);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(0, 30));
        pushButtonCancel->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(pushButtonCancel, 3, 0, 1, 2);

        pushButtonOk = new PushButtonEx(groupBox);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pushButtonOk, 3, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(PasswordChangeForm);

        QMetaObject::connectSlotsByName(PasswordChangeForm);
    } // setupUi

    void retranslateUi(QWidget *PasswordChangeForm)
    {
        PasswordChangeForm->setWindowTitle(QApplication::translate("PasswordChangeForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("PasswordChangeForm", "GroupBox", nullptr));
        label->setText(QApplication::translate("PasswordChangeForm", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("PasswordChangeForm", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("PasswordChangeForm", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("PasswordChangeForm", "\345\217\226\346\266\210", nullptr));
        pushButtonOk->setText(QApplication::translate("PasswordChangeForm", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordChangeForm: public Ui_PasswordChangeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDCHANGEFORM_H
