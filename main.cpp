#include <QCoreApplication>
#include "a4988.h"


a4988 toto;



void myInterrupt(void) {
 // test();
  printf("stop\n");
toto.stopX1 = 1;
}


int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

 toto.init();
 wiringPiISR (25, INT_EDGE_RISING, &myInterrupt); // interuption  axe x start
 toto.PasX(8000,1);
 delay(2000);
toto.PasX(8000,0);
    //return a.exec();
}
