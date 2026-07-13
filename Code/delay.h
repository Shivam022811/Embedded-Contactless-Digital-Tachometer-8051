/******************************************************************************
 * Project  : Embedded Contactless Digital Tachometer
 * File     : delay.h
 * Author   : Shivam Kumar
 * Target   : AT89S52
 * Compiler : SDCC
 * Version  : 1.0
 *
 * Description:
 * Function prototypes for software delay routines.
 ******************************************************************************/

#ifndef DELAY_H
#define DELAY_H

/* Delay Function Prototypes */

void Delay_us(unsigned int us);
void Delay_ms(unsigned int ms);

#endif