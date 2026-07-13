/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : main.c
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 ******************************************************************************/

#include "config.h"
#include "delay.h"
#include "lcd.h"
#include "timer.h"
#include "sensor.h"
#include "rpm.h"
#include "status.h"

/******************************************************************************
 * Initialize Complete System
 ******************************************************************************/

void System_Init(void)
{
    LCD_Init();

    Timer0_Init();

    Sensor_Init();
}

void main(void)
{
    System_Init();

    LCD_Clear();

    LCD_String("Digital");

    LCD_SetCursor(1,0);

    LCD_String("Tachometer");

    Delay_ms(2000);

    LCD_Clear();

    while(1)
    {

    }
}