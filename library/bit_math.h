/******************************************************************************
 * Module: Library
 *
 * File Name: bit_math.h
 *
 * Description: Contains essential macro-like functions
 *
 * Created: 10/20/2023 10:06:10 AM
 *
 * Author: Ahmed El-Abbasy
 *
 *******************************************************************************/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_
/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define SET_BIT(REG,BIT_NO)				(REG |=  (1<<BIT_NO))	/// Set a certain bit in any register 
#define CLEAR_BIT(REG,BIT_NO)			(REG &= ~(1<<BIT_NO))	/// Clear a certain bit in any register 
#define CHECK_BIT(REG,BIT_NO)			((REG >> BIT_NO) & 1)	/// Check a certain bit in any register 
#define FLIP_BIT(REG,BIT_NO)			(REG ^=  (1<<BIT_NO))	/// Toggle a certain bit in any register 
#define BIT_IS_SET(REG,BIT)				(REG & (1<<BIT))		/// Check if a specific bit is set in any register and return true if yes 
#define BIT_IS_CLEAR(REG,BIT)			(!(REG & (1<<BIT)))		/// Check if a specific bit is cleared in any register and return true if yes 

/*******************************************************************************
 *                      Global Data Types and Structures                       *
 *******************************************************************************/


/*******************************************************************************
 *                      Global Data Prototypes                                 *
 *******************************************************************************/


/*******************************************************************************
 *                      Global Function Prototypes                             *
 *******************************************************************************/
 

#endif /* BIT_MATH_H_ */
