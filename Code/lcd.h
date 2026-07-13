/******************************************************************************
 * Project  : Embedded Contactless Digital Tachometer
 * File     : lcd.c
 * Author   : Shivam Kumar
 * Target   : AT89S52
 * Compiler : SDCC
 * Version  : 1.0
 * 
 * Description:
 * LCD Driver Header File
 ******************************************************************************/
#ifndef LCD_H
#define LCD_H

#include "config.h"
#include "delay.h"

/* LCD Driver Functions */

void LCD_Init(void);
void LCD_Command(unsigned char command);
void LCD_Data(unsigned char data);
void LCD_String(char *string);
void LCD_Clear(void);
void LCD_SetCursor(unsigned char row, unsigned char column);
void LCD_Integer(unsigned int number);
#endif