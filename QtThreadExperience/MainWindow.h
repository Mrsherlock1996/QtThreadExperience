#pragma once
//这个案例解释了run()方法调用自定义类对象成员函数是,该成员函数仍然在主线程中
//仅仅run(){}函数体内的语句在子线程中
#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "Mession.h"
#include "StartMession.h"
#include <qthread.h>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);
	StartMession* _startM1;
private:
    Ui::MainWindowClass ui;
};
