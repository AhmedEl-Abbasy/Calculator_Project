/******************************************************************************
 * Module: Library
 *
 * File Name: std_types.h
 *
 * Description: Contains essential standard types
 *
 * Created: 10/20/2023 10:06:10 AM
 *
 * Author: Ahmed El-Abbasy
 *
 *******************************************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define NULL	 		(0u)
//#define STD_LOW			(0u)
//#define STD_HIGH		(1u)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int  u16;
typedef signed short int s16;

typedef unsigned long int  u32;
typedef signed long int s32;

typedef float f32;
typedef double f64;


typedef unsigned char Std_ReturnType;
typedef enum {
	FALSE,
	TRUE
}boolean;

typedef enum
{
	RET_OK,
	RET_NOK,
	RET_NULLPTR
}STD_ReturnState;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* STD_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: std_types.h
 *********************************************************************************************************************/
