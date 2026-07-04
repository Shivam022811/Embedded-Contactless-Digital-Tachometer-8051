/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : timer.c
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 ******************************************************************************/

#include "timer.h"

/******************************************************************************
 * Initialize Timer0
 ******************************************************************************/

void Timer0_Init(void)
{
    TMOD &= 0xF0;      // Clear Timer0 bits
    TMOD |= 0x01;      // Timer0 Mode-1 (16-bit)

    TR0 = 0;           // Stop Timer
    TF0 = 0;           // Clear Overflow Flag
}
/******************************************************************************
 * Start Timer0
 ******************************************************************************/

void Timer0_Start(void)
{
    TR0 = 1;
}
/******************************************************************************
 * Stop Timer0
 ******************************************************************************/

void Timer0_Stop(void)
{
    TR0 = 0;
}
/******************************************************************************
 * Generate Delay using Timer0
 ******************************************************************************/

void Timer0_DelayMs(unsigned int ms)
{
    while(ms--)
    {
        TH0 = 0xFC;
        TL0 = 0x66;

        TF0 = 0;       // Clear overflow flag
        TR0 = 1;       // Start timer

        while(TF0 == 0);

        TR0 = 0;       // Stop timer
        TF0 = 0;       // Clear overflow flag
    }
}