
/*
 * main.c
 *
 *  Created on: Oct 24, 2023
 *      Author: ahmed
 */

#include "00.APP.h"


int main()
{
	Calculator_Project_init();

	while(1)
	{
		Calculator_Project_loop();
	}
	return 0;

}
