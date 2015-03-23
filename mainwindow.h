#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegExp>
#include <QString>
#include <QWidget>
#include <QCloseEvent>

#include "ui_storage.h"

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
	void check();
	void saveRegExp();
	void openStorage();
	void loadRegExp();
	void deleteRegExp();

private:
	void closeEvent(QCloseEvent*);
	Ui::MainWindow* ui;
	Ui_storageWindow* storageUi;
	QWidget* storageWindow;
};

#endif // MAINWINDOW_H
