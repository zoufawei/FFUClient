/********************************************************************************
** Form generated from reading UI file 'updatelogform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATELOGFORM_H
#define UI_UPDATELOGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateLogForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *UpdateLogForm)
    {
        if (UpdateLogForm->objectName().isEmpty())
            UpdateLogForm->setObjectName(QString::fromUtf8("UpdateLogForm"));
        UpdateLogForm->resize(529, 444);
        pushButton = new QPushButton(UpdateLogForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 210, 80, 20));

        retranslateUi(UpdateLogForm);

        QMetaObject::connectSlotsByName(UpdateLogForm);
    } // setupUi

    void retranslateUi(QWidget *UpdateLogForm)
    {
        UpdateLogForm->setWindowTitle(QApplication::translate("UpdateLogForm", "Form", nullptr));
        pushButton->setText(QApplication::translate("UpdateLogForm", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateLogForm: public Ui_UpdateLogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATELOGFORM_H
