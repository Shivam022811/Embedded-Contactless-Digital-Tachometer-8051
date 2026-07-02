# Hardware Design

## Hardware Components

- AT89S52 (8051) Microcontroller
- IR LED
- IR Receiver
- 16×2 LCD Display
- Crystal Oscillator
- Reset Circuit
- Power Supply
- Current Limiting Resistors

## Hardware Description

The AT89S52 microcontroller acts as the central processing unit of the embedded system. The IR sensor module generates digital pulses corresponding to the rotational motion of the target object.

The timer/counter peripheral counts the incoming pulses during a fixed sampling interval. The firmware processes the collected data to calculate RPM and displays the result on the LCD.

The hardware architecture is designed to provide stable pulse acquisition, accurate speed calculation, and reliable system operation.