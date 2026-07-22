/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : status.c
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 * Description : Determines the operating status of the tachometer based on RPM.
 ******************************************************************************/

#include "status.h"

/* Status Limits */

#define MAX_RPM 5000U

/* Private Status Variable */

static SystemStatus CurrentStatus = STATUS_READY;

/******************************************************************************
 * Update System Status
 ******************************************************************************/

void Status_Update(void)
{
    unsigned int rpm;

/* Read latest calculated RPM */

    rpm = RPM_GetValue();

    if(rpm == 0)
    {
        CurrentStatus = STATUS_STOPPED;
    }
    else if(rpm > MAX_RPM)
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