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
#include "buzzer.h" 

/******************************************************************************
 * Initialize Complete System
 ******************************************************************************/

void System_Init(void)
{
    LCD_Init();     /* Initialize LCD Module */

    Timer0_Init();  /* Initialize Timer0 */

    Sensor_Init();  /* Initialize IR Sensor */

    Buzzer_Init();  /* Initialize Buzzer */

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
    /* Sample Every 1 Second */

    Timer0_DelayMs(1000);

    /* Calculate RPM */

    RPM_Update();

    /* Update System Status */

    Status_Update();

    /* Update LCD */

    LCD_Clear();

    LCD_String("RPM:");

    LCD_Integer(RPM_GetValue());

    LCD_SetCursor(1,0);

    switch(Status_Get())
    {
        case STATUS_READY:
            LCD_String("READY");
            break;

        case STATUS_RUNNING:
            LCD_String("RUNNING");
            break;

        case STATUS_STOPPED:
            LCD_String("STOPPED");
            break;

        case STATUS_OVERSPEED:
            LCD_String("OVERSPEED");
            break;
    }

    /* Control Buzzer */

    if(Status_Get() == STATUS_OVERSPEED)
    {
        Buzzer_On();
    }
    else
    {
        Buzzer_Off();
    }
}
}