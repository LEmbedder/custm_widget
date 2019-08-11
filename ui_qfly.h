/********************************************************************************
** Form generated from reading UI file 'qfly.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFLY_H
#define UI_QFLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFly
{
public:

    void setupUi(QWidget *QFly)
    {
        if (QFly->objectName().isEmpty())
            QFly->setObjectName(QStringLiteral("QFly"));
        QFly->resize(400, 300);

        retranslateUi(QFly);

        QMetaObject::connectSlotsByName(QFly);
    } // setupUi

    void retranslateUi(QWidget *QFly)
    {
        QFly->setWindowTitle(QApplication::translate("QFly", "QFly", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QFly: public Ui_QFly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFLY_H
