/******************************************************************************
 * Project  : Embedded Contactless Digital Tachometer
 * File     : delay.c
 * Author   : Shivam Kumar
 * Target   : AT89S52
 * Compiler : SDCC
 * Version  : 1.0
 *
 * Description:
 * Software delay functions for LCD timing and short delays.
 ******************************************************************************/

#include "delay.h"

/******************************************************************************
 * Generate Microsecond Delay
 ******************************************************************************/

void Delay_us(unsigned int us)
{
    while(us--)
    {
        ;
    }
}

/******************************************************************************
 * Generate Millisecond Delay
 ******************************************************************************/

void Delay_ms(unsigned int ms)
{
    unsigned int i;

    while(ms--)
    {
        for(i = 0; i < 120; i++)
        {
            ;
        }
    }
}