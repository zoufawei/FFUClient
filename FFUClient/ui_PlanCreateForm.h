/********************************************************************************
** Form generated from reading UI file 'PlanCreateForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANCREATEFORM_H
#define UI_PLANCREATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanCreateForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QSpinBox *spinBox;

    void setupUi(QWidget *PlanCreateForm)
    {
        if (PlanCreateForm->objectName().isEmpty())
            PlanCreateForm->setObjectName(QString::fromUtf8("PlanCreateForm"));
        PlanCreateForm->resize(681, 295);
        gridLayout = new QGridLayout(PlanCreateForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(PlanCreateForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(PlanCreateForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(PlanCreateForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label_7);

        checkBox_3 = new QCheckBox(PlanCreateForm);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(PlanCreateForm);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(PlanCreateForm);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(checkBox_5);

        checkBox_7 = new QCheckBox(PlanCreateForm);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(PlanCreateForm);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(checkBox_8);

        checkBox_6 = new QCheckBox(PlanCreateForm);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(checkBox_6);

        checkBox_9 = new QCheckBox(PlanCreateForm);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(checkBox_9);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        checkBox = new QCheckBox(PlanCreateForm);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMinimumSize(QSize(0, 30));
        checkBox->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PlanCreateForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(PlanCreateForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(190, 30));

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(PlanCreateForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(PlanCreateForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(PlanCreateForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_3);

        dateTimeEdit = new QDateTimeEdit(PlanCreateForm);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setMinimumSize(QSize(190, 30));

        horizontalLayout_3->addWidget(dateTimeEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(PlanCreateForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_4);

        timeEdit = new QTimeEdit(PlanCreateForm);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(timeEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(PlanCreateForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(PlanCreateForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(170, 30));
        lineEdit_3->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(lineEdit_3);

        pushButton = new QPushButton(PlanCreateForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_6 = new QLabel(PlanCreateForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_6);

        spinBox = new QSpinBox(PlanCreateForm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(spinBox);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        retranslateUi(PlanCreateForm);

        QMetaObject::connectSlotsByName(PlanCreateForm);
    } // setupUi

    void retranslateUi(QWidget *PlanCreateForm)
    {
        PlanCreateForm->setWindowTitle(QApplication::translate("PlanCreateForm", "Form", nullptr));
        pushButton_2->setText(QApplication::translate("PlanCreateForm", "\347\241\256\345\256\232", nullptr));
        pushButton_3->setText(QApplication::translate("PlanCreateForm", "\345\217\226\346\266\210", nullptr));
        label_7->setText(QApplication::translate("PlanCreateForm", "\351\207\215\345\244\215\357\274\232", nullptr));
        checkBox_3->setText(QApplication::translate("PlanCreateForm", "\345\221\250\344\270\200", nullptr));
        checkBox_4->setText(QApplication::translate("PlanCreateForm", "\345\221\250\344\272\214", nullptr));
        checkBox_5->setText(QApplication::translate("PlanCreateForm", "\345\221\250\344\270\211", nullptr));
        checkBox_7->setText(QApplication::translate("PlanCreateForm", "\345\221\250\345\233\233", nullptr));
        checkBox_8->setText(QApplication::translate("PlanCreateForm", "\345\221\250\344\272\224", nullptr));
        checkBox_6->setText(QApplication::translate("PlanCreateForm", "\345\221\250\345\205\255", nullptr));
        checkBox_9->setText(QApplication::translate("PlanCreateForm", "\345\221\250\346\227\245", nullptr));
        checkBox->setText(QApplication::translate("PlanCreateForm", "\345\220\257\347\224\250", nullptr));
        label->setText(QApplication::translate("PlanCreateForm", "\350\256\241\345\210\222\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QApplication::translate("PlanCreateForm", "\345\244\207\346\263\250\357\274\232", nullptr));
        label_3->setText(QApplication::translate("PlanCreateForm", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QApplication::translate("PlanCreateForm", "\346\211\247\350\241\214\346\227\266\351\227\264\357\274\232", nullptr));
        label_5->setText(QApplication::translate("PlanCreateForm", "\346\216\247\345\210\266\345\214\272\345\237\237\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("PlanCreateForm", "...", nullptr));
        label_6->setText(QApplication::translate("PlanCreateForm", "\350\256\241\345\210\222\350\275\254\351\200\237\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlanCreateForm: public Ui_PlanCreateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANCREATEFORM_H
