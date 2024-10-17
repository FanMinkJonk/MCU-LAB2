/*
 * clock.c
 *
 *  Created on: Oct 17, 2024
 *      Author: ACER
 */

//--- main header --------------------------------

#include "clock.h"

//--- Variables ----------------------------------

int hour = 17;
int minute = 04;
int second = 50;

//--- Functions Definition -----------------------

void setClock(){
	updateClockBuffer(hour, minute);
	showTime();
}

void updateClockBuffer(int hour, int minute){
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = minute/10;
	led_buffer[3] = minute%10;
}

void runClock(){
    second++;
    if(second >= 60){
      second = 0;
      minute++;
    }
    if(minute >= 60){
      minute = 0;
      hour++;
    }
    if(hour >= 24){
      hour = 0;
    }
    updateClockBuffer(hour, minute);
}

void blinkDots(){
    HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
}

void showTime(){
	update7SEG(index_led);
	index_led = (index_led+1)%MAX_LED;
}





