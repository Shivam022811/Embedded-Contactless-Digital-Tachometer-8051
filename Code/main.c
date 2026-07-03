/******************************************************************************
 * Project     : Embedded Contactless Digital Tachometer
 * File Name   : main.c
 * Author      : Shivam Kumar
 * Description : Main Application Entry Point
 ******************************************************************************/

#include "config.h"
#include "delay.h"
#include "lcd.h"

void System_Init(void);

void main(void)
{
    System_Init();

    while(1)
    {

    }
}

void System_Init(void)
{
    LCD_Init();
}