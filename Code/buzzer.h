/******************************************************************************
 * Project     : Embedded Contactless Digital Tachometer
 * File        : buzzer.h
 * Author      : Shivam Kumar
 * Target      : AT89S52
 * Compiler    : SDCC
 * Version     : 1.0
 * Description : Provides buzzer control function declarations.
 ******************************************************************************/

#ifndef BUZZER_H
#define BUZZER_H

#include "config.h"

/* Buzzer Functions */

void Buzzer_Init(void);
void Buzzer_On(void);
void Buzzer_Off(void);

#endif