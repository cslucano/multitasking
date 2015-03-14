#include <Arduino.h>
#define TIMER_ESTADO_EMBRY    0
#define TIMER_ESTADO_RUNNING  1
#define TIMER_ESTADO_BLOCKED  2
#define TIMER_ESTADO_WAITING  3
#define TIMER_ESTADO_ZOMBY    4

void timerBegin(void);
void timerRun(void);

void ledOn(void);
void ledOff(void);
