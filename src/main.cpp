#include "DominionLinux.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DominionLinux w;
	w.show();
	
	return a.exec();
}
