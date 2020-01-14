/********************************************************************************
** Form generated from reading UI file 'UpdateLogForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATELOGFORM_H
#define UI_UPDATELOGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "ctrls/GroupBoxEx.h"
#include "ctrls/PushButtonEx.h"

QT_BEGIN_NAMESPACE

class Ui_UpdateLogForm
{
public:
    QGridLayout *gridLayout_2;
    GroupBoxEx *groupBox;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer;
    PushButtonEx *pushButton;

    void setupUi(QWidget *UpdateLogForm)
    {
        if (UpdateLogForm->objectName().isEmpty())
            UpdateLogForm->setObjectName(QString::fromUtf8("UpdateLogForm"));
        UpdateLogForm->resize(662, 779);
        gridLayout_2 = new QGridLayout(UpdateLogForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new GroupBoxEx(UpdateLogForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 70, -1, -1);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(527, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new PushButtonEx(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(UpdateLogForm);

        QMetaObject::connectSlotsByName(UpdateLogForm);
    } // setupUi

    void retranslateUi(QWidget *UpdateLogForm)
    {
        UpdateLogForm->setWindowTitle(QApplication::translate("UpdateLogForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("UpdateLogForm", "GroupBox", nullptr));
        pushButton->setText(QApplication::translate("UpdateLogForm", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateLogForm: public Ui_UpdateLogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATELOGFORM_H
