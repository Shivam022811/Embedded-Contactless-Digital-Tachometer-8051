/******************************************************************************
 * Project : Embedded Contactless Digital Tachometer
 * File    : status.h
 * Author  : Shivam Kumar
 * Target  : AT89S52
 * Compiler: SDCC
 * Version : 1.0
 * Description : Provides system status definitions and function declarations.
 ******************************************************************************/

#ifndef STATUS_H
#define STATUS_H

#include "rpm.h"

/* System Status */

typedef enum
{
    STATUS_READY = 0,
    STATUS_RUNNING,
    STATUS_STOPPED,
    STATUS_OVERSPEED
} SystemStatus;

/* Status Functions */

void Status_Update(void);
SystemStatus Status_Get(void);

#endif