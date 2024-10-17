/*
 * software_timer.c
 *
 *  Created on: Oct 17, 2024
 *      Author: ACER
 */

//--- main header --------------------------------

#include "software_timer.h"

//--- Variables ----------------------------------

int timer_counter_clock = 0;
int clockSpeed = 0;

int timer_flag_clock = 0;
int timer_flag_output_dots = 0;

//--- Functions Definition -----------------------

void resetFlag_dots(){
	timer_flag_output_dots = 0;
}

void resetFlag_clock(){
	timer_flag_clock = 0;
	timer_counter_clock = clockSpeed;
}

void setTimer_clockSpeed(int duration){
	timer_flag_clock = 0;
	clockSpeed = duration/TIMECYCLE;
	timer_counter_clock = duration/TIMECYCLE;
}

void timerRun(){
	timer_counter_clock--;

	if(timer_counter_clock <= 0){
		timer_flag_clock = 1;
	}
	if(timer_counter_clock == 0 || timer_counter_clock == clockSpeed/2){
		timer_flag_output_dots = 1;
	}
}

