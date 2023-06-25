#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ResponseSurface.h"

class ResponseSurface : public QMainWindow
{
    Q_OBJECT

public:
    ResponseSurface(QWidget *parent = nullptr);
    ~ResponseSurface();

private:
    Ui::ResponseSurfaceClass ui;

public slots:
    void handleButtonClicked();

};