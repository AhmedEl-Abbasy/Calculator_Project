/*
 * Calculator_Project.h
 *
 *  Created on: Oct 26, 2023
 *      Author: ahmed
 */

#ifndef APP_CALCULATOR_PROJECT_CALCULATOR_PROJECT_H_
#define APP_CALCULATOR_PROJECT_CALCULATOR_PROJECT_H_
///////////////////////////////////////////////////////////////////
#include "00.APP.h"
#include "lcd.h"
#include "keypad.h"

///////////////////////////////////////////////////////////////////
typedef enum {
	first_number,
	second_number,
	oberator,
	excution
}calculator_stage_t;

///////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////
int power(u8 base,u8 po);
void DisplayResult(u32 result);
void DisplayOperator(u8 keypad_value);
u32 SubtractOberator(u16 number1,u16 number2);
void Calculator_Project_init();
void Calculator_Project_loop();


#endif /* APP_CALCULATOR_PROJECT_CALCULATOR_PROJECT_H_ */
