/*
 * led_cfg.h
 *
 * Created: 10/20/2023 10:18:10 PM
 *  Author: ahmed
 */ 


#ifndef LED_CFG_H_
#define LED_CFG_H_


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define RED_LED_PORT			DIO_PORTB
#define RED_LED_PIN				DIO_PIN7
#define RED_LED_CONNECTION		SOURCE

#define GREEN_LED_PORT			DIO_PORTA
#define GREEN_LED_PIN			DIO_PIN4
#define GREEN_LED_CONNECTION	SOURCE

#define BLUE_LED_PORT			DIO_PORTA
#define BLUE_LED_PIN			DIO_PIN5
#define BLUE_LED_CONNECTION		SOURCE

#define YELLOW_LED_PORT			DIO_PORTA
#define YELLOW_LED_PIN			DIO_PIN6
#define YELLOW_LED_CONNECTION	SOURCE
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/









#endif /* LED_CFG_H_ */