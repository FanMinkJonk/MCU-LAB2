/*
 * seg7_controller.c
 *
 *  Created on: Oct 17, 2024
 *      Author: ACER
 */

//--- main header --------------------------------

#include "seg7_controller.h"

//--- Extern Variables ---------------------------

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1,7,0,4};

//--- Functions Definition -----------------------

void display7SEG(int num){
	//---0---
	//-5   1-
	//---6---
	//-4   2-
	//---3---
	switch(num){
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 1);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		default:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
			break;
	}
}

void update7SEG(int index){
	switch(index){
	case 0:
		display7SEG(led_buffer[0]);
	    break;
	case 1:
		display7SEG(led_buffer[1]);
	    break;
	case 2:
		display7SEG(led_buffer[2]);
	    break;
	case 3:
		display7SEG(led_buffer[3]);
	    break;
	default:
		display7SEG(led_buffer[0]);
		break;
	}
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, !(0 == index));
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, !(1 == index));
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, !(2 == index));
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, !(3 == index));
}










