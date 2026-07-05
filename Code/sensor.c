/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : sensor.c
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 ******************************************************************************/

#include "sensor.h"

/* Global Pulse Counter */

volatile unsigned int Pulse_Count = 0;

/******************************************************************************
 * Initialize IR Sensor
 ******************************************************************************/

void Sensor_Init(void)
{
    IT0 = 1;      // Falling Edge Trigger
    EX0 = 1;      // Enable External Interrupt 0
    EA  = 1;      // Enable Global Interrupt
}

/******************************************************************************
 * Reset Pulse Counter
 ******************************************************************************/

void Sensor_ResetCount(void)
{
    Pulse_Count = 0;
}

/******************************************************************************
 * Get Pulse Count
 ******************************************************************************/

unsigned int Sensor_GetCount(void)
{
    return Pulse_Count;
}

/******************************************************************************
 * External Interrupt 0 ISR
 ******************************************************************************/

void External0_ISR(void) __interrupt(0)
{
    Pulse_Count++;
}