/********************************************************************************
** Form generated from reading UI file 'QTCanvas_class.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCANVAS_CLASS_H
#define UI_QTCANVAS_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTCanvas_class
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTCanvas_class)
    {
        if (QTCanvas_class->objectName().isEmpty())
            QTCanvas_class->setObjectName(QString::fromUtf8("QTCanvas_class"));
        QTCanvas_class->resize(608, 390);
        centralWidget = new QWidget(QTCanvas_class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMouseTracking(true);
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QTCanvas_class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTCanvas_class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QTCanvas_class->setStatusBar(statusBar);

        retranslateUi(QTCanvas_class);

        QMetaObject::connectSlotsByName(QTCanvas_class);
    } // setupUi

    void retranslateUi(QMainWindow *QTCanvas_class)
    {
        QTCanvas_class->setWindowTitle(QApplication::translate("QTCanvas_class", "simplecpp_qt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTCanvas_class: public Ui_QTCanvas_class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCANVAS_CLASS_H
