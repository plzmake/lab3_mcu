/*
 * input_reading.h
 *
 *  Created on: Nov 15, 2022
 *      Author: Admin
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_
#include "main.h"
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
void isB0Nor();
void isB1Nor();
void isB2Nor();
extern int ac_flagB0;
extern int ac_flagB1;
extern int ac_flagB2;

//extern int KeyRegB10 ;
//extern int KeyRegB11 ;
//extern int KeyRegB12 ;
//extern int KeyRegB13 ;
//
//extern int KeyRegB00 ;
//extern int KeyRegB01 ;
//extern int KeyRegB02 ;
//extern int KeyRegB03 ;

#endif /* INC_INPUT_READING_H_ */
