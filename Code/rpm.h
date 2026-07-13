/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : rpm.h
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 * Description : Provides RPM calculation function declarations.
 ******************************************************************************/

#ifndef RPM_H
#define RPM_H

#include "sensor.h"

/* RPM Functions */

void RPM_Update(void);
unsigned int RPM_GetValue(void);

#endif