#include <Arduino.h>
#define TIMER_STATE_EMBRY    0
#define TIMER_STATE_RUNNING  1
#define TIMER_STATE_BLOCKED  2
#define TIMER_STATE_WAITING  4
#define TIMER_STATE_ZOMBY    8
#define STATE_DOWN           0
#define STATE_UP             1

int t_up;
int t_down;

void timerBegin(100, 100);
void timerRun(void);

void ledOn(void);
void ledOff(void);
