/*
 * Calculator_Project.c
 *
 *  Created on: Oct 25, 2023
 *      Author: ahmed
 */


#include "Calculator_Project.h"


calculator_stage_t  calculator_stage =first_number;

static u16 number = 0;
static u16 number1 = 0;
static u16 number2 = 0;
u8 oberator_varible='+';

u32 result =0;


void Calculator_Project_init()
{
	lcd_vidInit();
	keypad_vidInit();
}
void Calculator_Project_loop()
{
	u8 keypad_value = keypad_u8GetKey();

	if((keypad_value == '1') || (keypad_value == '2') || (keypad_value == '3') ||
			(keypad_value == '4') || (keypad_value == '5') || (keypad_value == '6')||
			(keypad_value == '7') || (keypad_value == '8') || (keypad_value == '9') || (keypad_value == '0'))
	{
		lcd_vidSendData(keypad_value);
		if(calculator_stage == first_number )
		{
			number = keypad_value - 48;
			number1 = number1 * 10;
			number1 = number1 +number;
			number =0;
		}
		else if(calculator_stage == second_number)
		{
			number = keypad_value - 48;
			number2 = number2 *10;
			number2 = number2 +number;
			number =0;
		}
		else if(calculator_stage == oberator)
		{
			calculator_stage = second_number;
			number = keypad_value - 48;
			number2 = number2 *10;
			number2 = number2 +number;
			number =0;

		}
		else if(calculator_stage == excution)
		{
			calculator_stage = first_number;
			lcd_vidSendCmd(_LCD_CLEAR);
			lcd_vidSendData(keypad_value);
			number1 =0;
			number2 =0;
			result =0;
			number = keypad_value - 48;
			number1 = number1 *10;
			number1 = number1 +number;
			number =0;
		}
	}
	else if ((keypad_value == 'A') || (keypad_value == 'B') ||
			(keypad_value == 'C')  || (keypad_value == 'D'))
	{
		DisplayOperator(keypad_value);

		if(calculator_stage == first_number)
		{
			oberator_varible = keypad_value;
			calculator_stage = oberator;
		}
		else if(calculator_stage == second_number)
		{

		}
		else if(calculator_stage == oberator)
		{

		}
		else if(calculator_stage == excution)
		{

		}
	}
	else if((keypad_value == 'E'))
	{
		lcd_vidSendData('=');
		if(calculator_stage == first_number)
		{

		}
		else if(calculator_stage == second_number)
		{
			switch(oberator_varible)
			{
				case('A'):
					result = number1 / number2 ;
					break;
				case('B'):
					result = number1 * number2 ;
					break;
				case('C'):
					result =SubtractOberator(number1,number2);
					break;
				case('D'):
					result = number1 + number2 ;
					break;
			}
			DisplayResult(result);
			calculator_stage = excution;
		}
		else if(calculator_stage == oberator)
		{

		}
		else if(calculator_stage == excution)
		{

		}
	}
	else if((keypad_value == 'F'))
	{
		calculator_stage = first_number;
		lcd_vidSendCmd(_LCD_CLEAR);
		number1 =0;
		number2 =0;
		result =0;
	}


}

/*
	else if(keypad_value == 'A')
	{
		lcd_vidSendData('/');
	}
	else if(keypad_value == 'B')
	{
		lcd_vidSendData('x');
	}
	else if(keypad_value == 'C')
	{
		lcd_vidSendData('-');
	}

	else if(keypad_value == 'D')
	{
		lcd_vidSendData('+');
	}
	else if(keypad_value == 'E')
	{
		lcd_vidSendData('=');
	}

	else if(keypad_value == 'F')
	{
		lcd_vidSendData('%');
	}

*/



