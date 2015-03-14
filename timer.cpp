#include "utime.h"

long timediff(struct timespec start struct timespec end) {
  long acum = 1e3 * (end.tv_sec -start.tv_sec);
  acum += (end.tv_nsec - start.tv_nsec)/1e3;

  return acum;
}

void timerBegin(int time_up, int time_down) {
  clock(CLOCK_REALTIME, &last);	
  timeState = STATE_DOWN;
  t_up      = time_up;
  t_down    = time_down
}

void timerRun(void) {
  clock(CLOCK_REALTIME, &now);
  switch(timerState) {
    case TIMER_STATE_EMBRY:
      break;
    case TIMER_STATE_RUNNING:
      switch(timeState) {
        case STATE_UP:
          if(diff(last, now) > t_up) {
            timeState = STATTE_DOWN;
          }
          break;
        case STATE_DOWN:
          if(diff(last, now) > t_down) {
            timeState = STATE_UP;
          }
          break;
      }
      last = now;
      break;
    case TIMER_STATE_BLOCKED:
      break;
    case TIMER_STATE_WAITING:
      break;
    case TIMER_STATE_ZOMBY:
      break;
  }
}

void ledOn(void);
void ledOff(void);
