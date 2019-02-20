#include "canvas.h"
#include "line.h"
#include "rectangle.h"
#include "turtleSim.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	simplecpp::turtleSim();

	simplecpp::penDown(true);
	simplecpp::left(90);
	simplecpp::forward(100);

	a.exec();
	
	simplecpp::closeCanvas();
}
