#include <QApplication>
#include "scene3d.h"

int main(int argc, char** argv)
{
   QApplication app(argc, argv);

   Scene3D scene1;
   scene1.setWindowTitle("test");
   scene1.resize(500, 500);
   scene1.show();
   
   //scenel.getfile();

   return app.exec();
}
