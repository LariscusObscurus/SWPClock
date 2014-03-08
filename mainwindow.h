#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "commandincrement.h"
#include "commandundo.h"
#include "commandredo.h"
#include "commandshow.h"
#include "commanddecrement.h"
#include "commandset.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void on_pushButton_clicked();

	void on_pushButton_2_clicked();

	void on_pushButton_3_clicked();

	void on_pushButton_4_clicked();

	void on_comboBox_currentIndexChanged(const QString &arg1);

	void on_pushButton_5_clicked();

	void on_pushButton_6_clicked();

	void on_comboBox_2_currentIndexChanged(const QString &arg1);

private:
	Ui::MainWindow *ui;

	CommandIncrement *m_inc;
	CommandUndo *m_undo;
	CommandRedo *m_redo;
	CommandShow *m_show;
	CommandDecrement *m_dec;
	CommandSet *m_set;
protected:
	void closeEvent(QCloseEvent *);
};

#endif // MAINWINDOW_H
