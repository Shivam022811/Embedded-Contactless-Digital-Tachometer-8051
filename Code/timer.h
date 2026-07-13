/******************************************************************************
 * Project     : Embedded Contactless Digital Tachometer
 * File        : timer.c
 * Author      : Shivam Kumar
 * Target      : AT89S52
 * Compiler    : SDCC
 * Version     : 1.0
 * Description : Function prototypes for Timer0 initialization and delay routines.
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