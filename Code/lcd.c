/******************************************************************************
 * Project  : Embedded Contactless Digital Tachometer
 * File     : lcd.c
 * Author   : Shivam Kumar
 * Target   : AT89S52
 * Compiler : SDCC
 * Version  : 1.0
 *
 * Description:
 * LCD driver implementation for 16x2 HD44780 display (4-bit mode).
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
/* RS = 0 : Command Register
 * RS = 1 : Data Register
 */

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

if(string == 0)
{
    return;
}

while(*string)
{
    LCD_Data(*string++);
}

/******************************************************************************
 * Display Integer on LCD
 ******************************************************************************/

void LCD_Integer(unsigned int number)
{
    unsigned char digits[5];    unsigned char digits[5];   /* Maximum 5 digits for unsigned int */
    signed char i = 0;

    if(number == 0)
    {
        LCD_Data('0');
        return;
    }

    while(number > 0)
    {
        digits[i++] = (number % 10) + '0';
        number /= 10;
    }

    while(i > 0)
    {
        LCD_Data(digits[--i]);
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