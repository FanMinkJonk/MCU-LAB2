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

extern int timer0_flag;

//--- Functions Declaration ----------------------

void setTimer0(int duration);
void timerRun();

//--- Private Defines ----------------------------

#define TIMECYCLE 10

#endif /* INC_SOFTWARE_TIMER_H_ */
