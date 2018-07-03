#ifdef WIN32
#pragma warning(push, 0)
#endif

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

#ifdef WIN32
#pragma warning(pop)
#endif

#include <VSDockManager.h>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QMainWindow window;
	window.setCentralWidget(new vsdocks::VSDockManager());
	window.resize(1280, 720);
	window.show();

	return app.exec();
}
