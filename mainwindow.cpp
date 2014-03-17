#include <QTime>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clock.h"
#include "types.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	m_inc(new CommandIncrement),
	m_undo(new CommandUndo),
	m_redo(new CommandRedo),
	m_show(new CommandShow),
	m_dec(new CommandDecrement),
	m_set(new CommandSet),
	m_help(new CommandHelp)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete m_help;
	delete m_set;
	delete m_dec;
	delete m_show;
	delete m_redo;
	delete m_undo;
	delete m_inc;
	delete ui;
}

void MainWindow::on_pushButton_clicked()
{
	m_show->setCoordinates(ui->spinBox->value(), ui->spinBox_2->value());
	m_show->execute();
}

void MainWindow::on_pushButton_2_clicked()
{
	m_inc->execute();
}

void MainWindow::on_pushButton_3_clicked()
{
	m_undo->execute();
}

void MainWindow::on_pushButton_4_clicked()
{

	m_redo->execute();
}

void MainWindow::closeEvent(QCloseEvent *)
{
	qApp->quit();
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
	if(arg1 == "Analog")
		m_show->setClockType(clock_type::ANALOG);
	else
		m_show->setClockType(clock_type::DIGITAL);
}

void MainWindow::on_pushButton_5_clicked()
{
	m_dec->execute();
}

void MainWindow::on_pushButton_6_clicked()
{
	m_set->setHMS(ui->hour->value(), ui->minute->value(), ui->second->value());
	m_set->execute();
}

void MainWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
	m_show->setTimeZone(arg1);
}

void MainWindow::on_actionShow_Help_triggered()
{
	m_help->execute();
}
