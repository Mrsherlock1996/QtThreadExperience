#pragma once

#include <QWidget>
#include "ui_Mession.h"
#include <qdebug.h>
#include <qtimer.h>
#include <qthread.h>
class Mession : public QWidget
{
	Q_OBJECT

public:
	Mession(QWidget *parent = Q_NULLPTR);
	~Mession();
	double _version;
	void printInfo();

private:
	Ui::Mession ui;
};
