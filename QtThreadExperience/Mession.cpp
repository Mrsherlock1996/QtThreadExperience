#include "Mession.h"

Mession::Mession(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Mession::~Mession()
{
}

void Mession::printInfo()
{
	int i = 0;
	while (i<10)
	{
		qDebug() << "version: " << _version << endl;
		qDebug() << "Mession current thread" << QThread::currentThread() << endl;
		i++;
	}
}
