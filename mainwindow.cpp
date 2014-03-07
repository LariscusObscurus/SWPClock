#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clock.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	m_analog(new AnalogClockWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
	delete m_analog;
}

void MainWindow::on_pushButton_clicked()
{
	m_analog->show();
	Clock& clock = Clock::getInstance();
	clock.set(10, 10, 10);
	clock.notify();
}
