#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	qDebug() << "MainWindow Thread: " << QThread::currentThread() << endl;
	_startM1 = new StartMession(this);
	_startM1->start();
}
