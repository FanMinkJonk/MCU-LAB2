/*
 * software_timer.c
 *
 *  Created on: Oct 17, 2024
 *      Author: ACER
 */

//--- main header --------------------------------

#include "software_timer.h"

//--- Variables ----------------------------------

int timer0_counter = 0;
int timer0_flag = 0;

//--- Functions Definition -----------------------

void setTimer0(int duration){
	timer0_flag = 0;
	timer0_counter = duration/TIMECYCLE;
}

void timerRun(){
	timer0_counter--;
	if(timer0_counter <= 0){
		timer0_flag = 1;
	}
}

