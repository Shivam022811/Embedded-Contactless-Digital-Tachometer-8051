/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : sensor.h
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 * Description : Provides IR sensor driver function declarations for pulse counting.
 ******************************************************************************/

#ifndef SENSOR_H
#define SENSOR_H

#include "config.h"

/* Sensor Functions */

void Sensor_Init(void);
void Sensor_ResetCount(void);
unsigned int Sensor_GetCount(void);

#endif