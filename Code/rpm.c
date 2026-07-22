/******************************************************************************
 * Project     : Embedded Contactless Digital Tachometer
 * File        : rpm.c
 * Author      : Shivam Kumar
 * Target      : AT89S52
 * Compiler    : SDCC
 * Version     : 1.0
 * Description : Calculates rotational speed (RPM) from sensor pulse count.
 ******************************************************************************/

#include "rpm.h"

/* RPM Calculation Parameters */

#define RPM_SAMPLE_TIME_SEC    1U
#define MAX_MEASURABLE_RPM     9999U

/* Global RPM Variable */

static unsigned int RPM_Value = 0;

/******************************************************************************
 * Calculate RPM
 ******************************************************************************/

void RPM_Update(void)
{
    RPM_Value = (Sensor_GetCount() * 60U) / RPM_SAMPLE_TIME_SEC;

    if(RPM_Value > MAX_MEASURABLE_RPM)
    {
        RPM_Value = MAX_MEASURABLE_RPM;
    }

    Sensor_ResetCount();
}

/******************************************************************************
 * Return Current RPM
 ******************************************************************************/

unsigned int RPM_GetValue(void)
{
    return RPM_Value;
}