/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : main.c
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Description : Main application entry point and system initialization.
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
    LCD_Init();     /* Initialize LCD Module */

    Timer0_Init();  /* Initialize Timer0 */

    Sensor_Init();  /* Initialize IR Sensor */
}

void main(void)
{

/* Display Startup Message */

LCD_Clear();

LCD_String("Digital");

LCD_SetCursor(1,0);

LCD_String("Tachometer");

Delay_ms(2000);

/* Clear Display */

LCD_Clear();

    while(1)
    {

    }
}