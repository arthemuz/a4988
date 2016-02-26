#include "a4988.h"





a4988::a4988()
{

}


void a4988::init()
{
    wiringPiSetup();
    pinMode(pinEnable,OUTPUT);
    pinMode(pinstep,OUTPUT);
    pinMode(pinDir,OUTPUT);

    digitalWrite(pinEnable,LOW);


}

void a4988::PasX(int pas, int direction)
{
   if(direction == 1){
       digitalWrite(pinDir,HIGH);
int i = 0;
    for(i=0; i<pas; i++){

        if(stopX1 == 1){pas=0;}  //end stop
        digitalWrite(pinstep,HIGH);
        delay(1);
        digitalWrite(pinstep,LOW);
        delay(1);

    }
   }

   if(direction == 0){
       digitalWrite(pinDir,LOW);

int i = 0;
    for(i=0; i<pas; i++){
        if(stopX2 == 1){pas=0;}  //end stop
        digitalWrite(pinstep,HIGH);
        delay(1);
        digitalWrite(pinstep,LOW);
        delay(1);
    }
   }
}



