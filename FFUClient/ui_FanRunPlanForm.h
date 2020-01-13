/********************************************************************************
** Form generated from reading UI file 'FanRunPlanForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANRUNPLANFORM_H
#define UI_FANRUNPLANFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FanRunPlanForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonCreatePlan;
    QPushButton *pushButtonEditPlan;
    QPushButton *pushButtonDelPlan;
    QSpacerItem *horizontalSpacer;
    QTableView *tableViewPlan;

    void setupUi(QWidget *FanRunPlanForm)
    {
        if (FanRunPlanForm->objectName().isEmpty())
            FanRunPlanForm->setObjectName(QString::fromUtf8("FanRunPlanForm"));
        FanRunPlanForm->resize(908, 575);
        gridLayout = new QGridLayout(FanRunPlanForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonCreatePlan = new QPushButton(FanRunPlanForm);
        pushButtonCreatePlan->setObjectName(QString::fromUtf8("pushButtonCreatePlan"));
        pushButtonCreatePlan->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButtonCreatePlan, 0, 0, 1, 1);

        pushButtonEditPlan = new QPushButton(FanRunPlanForm);
        pushButtonEditPlan->setObjectName(QString::fromUtf8("pushButtonEditPlan"));
        pushButtonEditPlan->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButtonEditPlan, 0, 1, 1, 1);

        pushButtonDelPlan = new QPushButton(FanRunPlanForm);
        pushButtonDelPlan->setObjectName(QString::fromUtf8("pushButtonDelPlan"));
        pushButtonDelPlan->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButtonDelPlan, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        tableViewPlan = new QTableView(FanRunPlanForm);
        tableViewPlan->setObjectName(QString::fromUtf8("tableViewPlan"));

        gridLayout->addWidget(tableViewPlan, 1, 0, 1, 4);


        retranslateUi(FanRunPlanForm);

        QMetaObject::connectSlotsByName(FanRunPlanForm);
    } // setupUi

    void retranslateUi(QWidget *FanRunPlanForm)
    {
        FanRunPlanForm->setWindowTitle(QApplication::translate("FanRunPlanForm", "Form", nullptr));
        pushButtonCreatePlan->setText(QApplication::translate("FanRunPlanForm", "\345\210\233\345\273\272\350\256\241\345\210\222", nullptr));
        pushButtonEditPlan->setText(QApplication::translate("FanRunPlanForm", "\347\274\226\350\276\221\350\256\241\345\210\222", nullptr));
        pushButtonDelPlan->setText(QApplication::translate("FanRunPlanForm", "\345\210\240\351\231\244\350\256\241\345\210\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FanRunPlanForm: public Ui_FanRunPlanForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANRUNPLANFORM_H
