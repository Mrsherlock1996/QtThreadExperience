#pragma once
//�������������run()���������Զ���������Ա������,�ó�Ա������Ȼ�����߳���
//����run(){}�������ڵ���������߳���
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
