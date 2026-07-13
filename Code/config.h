/******************************************************************************
 * Project  : Embedded Contactless Digital Tachometer
 * File     : config.h
 * Author   : Shivam Kumar
 * Target   : AT89S52
 * Compiler : SDCC
 * Version  : 1.0
 *
 * Description:
 * Hardware pin configuration for LCD, IR Sensor and Buzzer.
 ******************************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

#include <at89x52.h>

/*======================================================================
 * LCD Pin Configuration
 *====================================================================*/

/* LCD Control Pins */

__sbit __at (0xA0) LCD_RS;      // P2.0
__sbit __at (0xA1) LCD_EN;      // P2.1

/* LCD Data Pins */

__sbit __at (0xA4) LCD_D4;      // P2.4
__sbit __at (0xA5) LCD_D5;      // P2.5
__sbit __at (0xA6) LCD_D6;      // P2.6
__sbit __at (0xA7) LCD_D7;      // P2.7

/*======================================================================
 * IR Sensor
 *====================================================================*/

__sbit __at (0xB2) SENSOR;      // P3.2 (INT0)

/*======================================================================
 * Buzzer
 *====================================================================*/

__sbit __at (0xB7) BUZZER;      // P3.7

#endif