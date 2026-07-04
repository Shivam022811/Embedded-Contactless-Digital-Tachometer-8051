/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : timer.h
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 ******************************************************************************/

#ifndef TIMER_H
#define TIMER_H

#include "config.h"

/* Timer0 Functions */

void Timer0_Init(void);
void Timer0_Start(void);
void Timer0_Stop(void);
void Timer0_DelayMs(unsigned int ms);

#endif