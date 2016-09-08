#ifndef DISPLAY_RESULT_QT_H
#define DISPLAY_RESULT_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_Display_Result_Qt.h"
#include "PCLViewer.h"

class Display_Result_Qt : public QMainWindow
{
	Q_OBJECT

public:
	Display_Result_Qt(QWidget *parent = 0);
	~Display_Result_Qt();

private:
	Ui::Display_Result_QtClass ui;

	PCLViewer viewer3D;

	private slots:
	void slot_IO_OpenFilePCD();

};

#endif // DISPLAY_RESULT_QT_H
