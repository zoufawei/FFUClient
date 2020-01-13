/********************************************************************************
** Form generated from reading UI file 'AreaManagerForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREAMANAGERFORM_H
#define UI_AREAMANAGERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AreaManagerForm
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *AreaManagerForm)
    {
        if (AreaManagerForm->objectName().isEmpty())
            AreaManagerForm->setObjectName(QString::fromUtf8("AreaManagerForm"));
        AreaManagerForm->resize(702, 440);
        treeWidget = new QTreeWidget(AreaManagerForm);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 191, 421));
        treeWidget->setColumnCount(1);

        retranslateUi(AreaManagerForm);

        QMetaObject::connectSlotsByName(AreaManagerForm);
    } // setupUi

    void retranslateUi(QWidget *AreaManagerForm)
    {
        AreaManagerForm->setWindowTitle(QApplication::translate("AreaManagerForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AreaManagerForm: public Ui_AreaManagerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREAMANAGERFORM_H
