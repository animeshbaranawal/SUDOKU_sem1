#include "canvas.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	simplecpp::QTCanvas::initCanvas();
	a.exec();

	simplecpp::QTCanvas::closeCanvas();
}
