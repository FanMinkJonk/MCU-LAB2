/*
 * clock.h
 *
 *  Created on: Oct 17, 2024
 *      Author: ACER
 */

#ifndef INC_CLOCK_H_
#define INC_CLOCK_H_

//--- Private Include ----------------------------

#include "main.h"
#include "seg7_controller.h"

//--- Variables ----------------------------------

extern int hour;
extern int minute;
extern int second;

//--- Functions Declaration ----------------------

void setClock();
void updateClockBuffer(int, int);
void runClock();
void blinkDots();
void showTime();

#endif /* INC_CLOCK_H_ */
