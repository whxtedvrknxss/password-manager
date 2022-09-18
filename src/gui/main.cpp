#include <QtWidgets/QApplication>

#include "main_window.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  gui::MainWindow w;
  w.show();

  return a.exec();
}
