#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clock.h"
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	m_analog(new AnalogClockWindow)
{
	ui->setupUi(this);
	Clock& clock = Clock::getInstance();
	QTime time = QTime::currentTime();
	clock.set(time.hour(), time.minute(), time.second());
}

MainWindow::~MainWindow()
{
	delete m_analog;
	delete ui;
}

void MainWindow::on_pushButton_clicked()
{
	m_analog->show();
}

void MainWindow::on_pushButton_2_clicked()
{
	Clock::getInstance().increment();
}

void MainWindow::on_pushButton_3_clicked()
{
	Clock::getInstance().undo();
}

void MainWindow::on_pushButton_4_clicked()
{

	Clock::getInstance().redo();
}

void MainWindow::closeEvent(QCloseEvent *)
{
	qApp->quit();
}
