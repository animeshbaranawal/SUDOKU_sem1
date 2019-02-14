#include "canvas.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	simplecpp::initCanvas();
	
	simplecpp::drawLine(QPointF(0, 0), QPointF(100, 100), 0, 30);
	simplecpp::drawPoint(QPointF(150, 150), 50);
	simplecpp::drawCircle(QPointF(90, 90), 50, 40, true, 2);
	
	a.exec();
	simplecpp::closeCanvas();
}
