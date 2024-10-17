/*
 * seg7_controller.h
 *
 *  Created on: Oct 17, 2024
 *      Author: ACER
 */

#ifndef INC_SEG7_CONTROLLER_H_
#define INC_SEG7_CONTROLLER_H_

//--- Private Include ----------------------------

#include "main.h"

//--- Extern Variables ---------------------------

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

//--- Functions Declaration ----------------------

void display7SEG(int num);
void update7SEG(int index);

#endif /* INC_SEG7_CONTROLLER_H_ */
