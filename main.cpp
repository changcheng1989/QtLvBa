#include "qtlvba.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtLvBa w;
	w.show();
	return a.exec();
}
