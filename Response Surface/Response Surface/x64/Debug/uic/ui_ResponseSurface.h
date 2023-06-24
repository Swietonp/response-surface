/********************************************************************************
** Form generated from reading UI file 'ResponseSurface.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESPONSESURFACE_H
#define UI_RESPONSESURFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResponseSurfaceClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ResponseSurfaceClass)
    {
        if (ResponseSurfaceClass->objectName().isEmpty())
            ResponseSurfaceClass->setObjectName("ResponseSurfaceClass");
        ResponseSurfaceClass->resize(600, 400);
        menuBar = new QMenuBar(ResponseSurfaceClass);
        menuBar->setObjectName("menuBar");
        ResponseSurfaceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ResponseSurfaceClass);
        mainToolBar->setObjectName("mainToolBar");
        ResponseSurfaceClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ResponseSurfaceClass);
        centralWidget->setObjectName("centralWidget");
        ResponseSurfaceClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ResponseSurfaceClass);
        statusBar->setObjectName("statusBar");
        ResponseSurfaceClass->setStatusBar(statusBar);

        retranslateUi(ResponseSurfaceClass);

        QMetaObject::connectSlotsByName(ResponseSurfaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *ResponseSurfaceClass)
    {
        ResponseSurfaceClass->setWindowTitle(QCoreApplication::translate("ResponseSurfaceClass", "ResponseSurface", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResponseSurfaceClass: public Ui_ResponseSurfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESPONSESURFACE_H
