/********************************************************************************
** Form generated from reading UI file 'proadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROADMIN_H
#define UI_PROADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ProAdminClass
{
public:

    void setupUi(QDialog *ProAdminClass)
    {
        if (ProAdminClass->objectName().isEmpty())
            ProAdminClass->setObjectName(QStringLiteral("ProAdminClass"));
        ProAdminClass->resize(600, 400);

        retranslateUi(ProAdminClass);

        QMetaObject::connectSlotsByName(ProAdminClass);
    } // setupUi

    void retranslateUi(QDialog *ProAdminClass)
    {
        ProAdminClass->setWindowTitle(QApplication::translate("ProAdminClass", "ProAdmin", 0));
    } // retranslateUi

};

namespace Ui {
    class ProAdminClass: public Ui_ProAdminClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROADMIN_H
