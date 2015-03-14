/*Implementación de un sistema multitarea
Metodología:
Loop infinito
Llamado consecutivo de tareas (funciones "run")
Cambio de contexto por interrupción
*/

#include "led.h"
#include "timer.h"

void setup(){
  Serial.begin(9600);
  // tareaBegin();
  ledBegin(13);
}

void loop(){
  // tareaRun();
  ledRun();
  timerRun();
}

void serialEvent(){
  switch(Serial.read()){
    case 'A':
      ledOn();
      break;
    case 'B':
      ledOff();
      break;
    default:
      break;
  }
}
