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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResponseSurfaceClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *input_btn;
    QLabel *input_state;
    QPushButton *generate_RS;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ResponseSurfaceClass)
    {
        if (ResponseSurfaceClass->objectName().isEmpty())
            ResponseSurfaceClass->setObjectName("ResponseSurfaceClass");
        ResponseSurfaceClass->resize(479, 230);
        centralWidget = new QWidget(ResponseSurfaceClass);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        input_btn = new QPushButton(centralWidget);
        input_btn->setObjectName("input_btn");
        QFont font1;
        font1.setPointSize(12);
        input_btn->setFont(font1);

        horizontalLayout->addWidget(input_btn);

        input_state = new QLabel(centralWidget);
        input_state->setObjectName("input_state");
        QFont font2;
        font2.setPointSize(11);
        input_state->setFont(font2);

        horizontalLayout->addWidget(input_state);


        verticalLayout->addLayout(horizontalLayout);

        generate_RS = new QPushButton(centralWidget);
        generate_RS->setObjectName("generate_RS");
        generate_RS->setFont(font2);

        verticalLayout->addWidget(generate_RS);


        horizontalLayout_2->addLayout(verticalLayout);

        ResponseSurfaceClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ResponseSurfaceClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 479, 22));
        ResponseSurfaceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ResponseSurfaceClass);
        mainToolBar->setObjectName("mainToolBar");
        ResponseSurfaceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ResponseSurfaceClass);
        statusBar->setObjectName("statusBar");
        ResponseSurfaceClass->setStatusBar(statusBar);

        retranslateUi(ResponseSurfaceClass);

        QMetaObject::connectSlotsByName(ResponseSurfaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *ResponseSurfaceClass)
    {
        ResponseSurfaceClass->setWindowTitle(QCoreApplication::translate("ResponseSurfaceClass", "ResponseSurface", nullptr));
        label->setText(QCoreApplication::translate("ResponseSurfaceClass", "Response Surface Creator", nullptr));
        input_btn->setText(QCoreApplication::translate("ResponseSurfaceClass", "Input .csv file", nullptr));
        input_state->setText(QString());
        generate_RS->setText(QCoreApplication::translate("ResponseSurfaceClass", "Generate Response Surface", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResponseSurfaceClass: public Ui_ResponseSurfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESPONSESURFACE_H
