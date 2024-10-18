/*
 * led_matrix8x8.c
 *
 *  Created on: Oct 18, 2024
 *      Author: ACER
 */

//--- main header --------------------------------

#include "led_matrix8x8.h"

//--- Variables ----------------------------------

int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x66, 0x66, 0x7e, 0x7e, 0x66, 0x66, 0x3c, 0x18};

//--- Private Functions --------------------------

void turnOnCol(int index){
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, !(index == 0));
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, !(index == 1));
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, !(index == 2));
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, !(index == 3));
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, !(index == 4));
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, !(index == 5));
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, !(index == 6));
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, !(index == 7));
}

//--- Functions Definition -----------------------

void updateLEDMatrix(int index){
	turnOnCol(index);
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, !(matrix_buffer[7] & 0b10000000>>index));
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, !(matrix_buffer[6] & 0b10000000>>index));
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, !(matrix_buffer[5] & 0b10000000>>index));
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, !(matrix_buffer[4] & 0b10000000>>index));
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, !(matrix_buffer[3] & 0b10000000>>index));
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, !(matrix_buffer[2] & 0b10000000>>index));
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, !(matrix_buffer[1] & 0b10000000>>index));
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, !(matrix_buffer[0] & 0b10000000>>index));
}







