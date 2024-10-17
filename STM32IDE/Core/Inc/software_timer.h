/*
 * software_timer.h
 *
 *  Created on: Oct 17, 2024
 *      Author: ACER
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

//--- Private Include ----------------------------

#include "main.h"

//--- Variables ----------------------------------

extern int timer_flag_clock;
extern int timer_flag_output_dots;
extern int timer_flag_output_7segled;
extern int clockSpeed;

//--- Functions Declaration ----------------------

void resetFlag_dots();
void resetFlag_clock();
void resetFlag_7segled();
void setTimer_clockSpeed(int duration);
void setTimer_output_7segled(int duration);

void timerRun();

//--- Private Defines ----------------------------

#define TIMECYCLE 10

#endif /* INC_SOFTWARE_TIMER_H_ */
