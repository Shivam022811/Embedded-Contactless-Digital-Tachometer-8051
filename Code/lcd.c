/******************************************************************************
 * Project     : Embedded Contactless Digital Tachometer
 * File Name   : lcd.c
 * Author      : Shivam Kumar
 * Description : LCD Driver Source File
 ******************************************************************************/

#include "lcd.h"

/* Internal Functions */

static void LCD_EnablePulse(void);
static void LCD_SendNibble(unsigned char nibble);

/******************************************************************************
 * Generate Enable Pulse
 ******************************************************************************/

static void LCD_EnablePulse(void)
{
    LCD_EN = 1;
    Delay_us(5);

    LCD_EN = 0;
    Delay_us(5);
}

/******************************************************************************
 * Send 4-bit Data to LCD
 ******************************************************************************/

static void LCD_SendNibble(unsigned char nibble)
{
    LCD_D4 = (nibble >> 0) & 0x01;
    LCD_D5 = (nibble >> 1) & 0x01;
    LCD_D6 = (nibble >> 2) & 0x01;
    LCD_D7 = (nibble >> 3) & 0x01;

    LCD_EnablePulse();
}
/******************************************************************************
 * Send Command to LCD
 ******************************************************************************/

void LCD_Command(unsigned char command)
{
    LCD_RS = 0;

    /* Send Higher Nibble */
    LCD_SendNibble(command >> 4);

    /* Send Lower Nibble */
    LCD_SendNibble(command);

    Delay_ms(2);
}
/******************************************************************************
 * Send Data to LCD
 ******************************************************************************/

void LCD_Data(unsigned char data)
{
    LCD_RS = 1;

    /* Send Higher Nibble */
    LCD_SendNibble(data >> 4);

    /* Send Lower Nibble */
    LCD_SendNibble(data);

    Delay_ms(2);
}
/*rs=1 (character data),rs=0 (commamd)*/

/******************************************************************************
 * Initialize LCD
 ******************************************************************************/

void LCD_Init(void)
{
    LCD_RS = 0;
    LCD_EN = 0;

    Delay_ms(20);

    /* LCD Initialization Sequence */

    LCD_SendNibble(0x03);
    Delay_ms(5);

    LCD_SendNibble(0x03);
    Delay_ms(5);

    LCD_SendNibble(0x03);
    Delay_ms(5);

    LCD_SendNibble(0x02);
    Delay_ms(5);

    /* Configure LCD */

    LCD_Command(0x28);     // 4-bit mode, 2-line, 5x8 font
    LCD_Command(0x0C);     // Display ON, Cursor OFF
    LCD_Command(0x06);     // Entry mode
    LCD_Command(0x01);     // Clear display

    Delay_ms(2);
}
/******************************************************************************
 * Clear LCD Display
 ******************************************************************************/

void LCD_Clear(void)
{
    LCD_Command(0x01);
    Delay_ms(2);
}
/******************************************************************************
 * Display String
 ******************************************************************************/

void LCD_String(char *string)
{
    while(*string)
    {
        LCD_Data(*string++);
    }
}
/******************************************************************************
 * Set LCD Cursor Position
 ******************************************************************************/

void LCD_SetCursor(unsigned char row, unsigned char column)
{
    unsigned char address;

    if(row == 0)
    {
        address = 0x80 + column;
    }
    else
    {
        address = 0xC0 + column;
    }

    LCD_Command(address);
}