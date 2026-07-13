/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : status.c
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 ******************************************************************************/

#include "status.h"

/* Private Status Variable */

static SystemStatus CurrentStatus = STATUS_READY;

/******************************************************************************
 * Update System Status
 ******************************************************************************/

 #define MAX_RPM 5000

void Status_Update(void)
{
    unsigned int rpm;

    rpm = RPM_GetValue();

    if(rpm == 0)
    {
        CurrentStatus = STATUS_STOPPED;
    }
    else if(rpm > 5000)
    {
        CurrentStatus = STATUS_OVERSPEED;
    }
    else
    {
        CurrentStatus = STATUS_RUNNING;
    }
}

/******************************************************************************
 * Return Current System Status
 ******************************************************************************/

SystemStatus Status_Get(void)
{
    return CurrentStatus;
}