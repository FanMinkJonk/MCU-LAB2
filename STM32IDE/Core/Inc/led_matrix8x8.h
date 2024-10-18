/*
 * led_matrix8x8.h
 *
 *  Created on: Oct 18, 2024
 *      Author: ACER
 */

#ifndef INC_LED_MATRIX8X8_H_
#define INC_LED_MATRIX8X8_H_

//--- Private Include ----------------------------

#include "main.h"

//--- Variables ----------------------------------

extern int index_led_matrix;

//--- Functions Declaration ----------------------

void turnOnCol(int index);
void updateLEDMatrix_hehe();
void updateLEDMatrix(int index);

//--- Private Defines ----------------------------

#define MAX_LED_MATRIX 8

#endif /* INC_LED_MATRIX8X8_H_ */
