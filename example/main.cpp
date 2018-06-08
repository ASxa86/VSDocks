#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QMainWindow window;
	window.resize(1280, 720);
	window.show();

	return app.exec();
}
