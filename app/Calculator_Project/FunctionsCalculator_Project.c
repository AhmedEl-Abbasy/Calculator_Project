/*
 * FunctionsCalculator_Project.c
 *
 *  Created on: Oct 26, 2023
 *      Author: ahmed
 */

#include "Calculator_Project.h"

int power(u8 base,u8 po)
{
	int resultpower =1;
	for(int i =0; i<po; i++)
	{
		resultpower = resultpower * base;
	}
	return resultpower;
}
void DisplayResult(u32 result)
{
	u32 result1 =0;
	int i;
	for(i =0;i<100;i++)
	{
		result1 =result1 *10;
		result1 = result1 +(result % 10);
		result = result/10;
		if(result == 0)
			break;
	}
	for(;i>=0;i--)
	{
		lcd_vidDisplyChar((result1%10)+48);
		result1 = result1 /10;
	}
}

void DisplayOperator(u8 keypad_value)
{
	switch(keypad_value)
	{
	case 'A':
		lcd_vidDisplyChar('/');		break;
	case 'B':
		lcd_vidDisplyChar('x');		break;
	case 'C':
		lcd_vidDisplyChar('-');		break;
	case 'D':
		lcd_vidDisplyChar('+');		break;
	}
}
u32 SubtractOberator(u16 number1,u16 number2)
{
	u32 result;
	if(number1>=number2)
	{
		result = number1 - number2 ;
	}
	else
	{
		lcd_vidDisplyChar('-');
		result =  number2 - number1;
	}
	return result;
}

