#include "proadmin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ProAdmin w;
	w.show();
	return a.exec();
}
