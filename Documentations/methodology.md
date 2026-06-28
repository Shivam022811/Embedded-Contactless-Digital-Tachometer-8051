# Methodology

## Overview

The Contactless Digital Tachometer is designed to measure the rotational speed (RPM) of a rotating object without physical contact. The system utilizes an infrared (IR) sensor to detect each revolution and an AT89S52 (8051) microcontroller to process the detected pulses. The firmware is developed in Embedded C using Keil µVision, while the complete system is verified through Proteus simulation.

---

## Methodology

### 1. System Initialization

The microcontroller initializes the system peripherals, including the timer/counter module and the 16×2 LCD display. The LCD is prepared to display the calculated RPM values.

---

### 2. Pulse Generation

A reflective strip is attached to the rotating object. As the object rotates, the IR LED continuously emits infrared light toward its surface. Whenever the reflective strip passes in front of the IR sensor, the reflected light is detected by the IR receiver, generating a digital pulse.

For simulation, a pulse generator in Proteus is used to emulate the IR sensor output.

---

### 3. Pulse Counting

The generated pulses are provided to the external counter input of the AT89S52 microcontroller. The timer/counter module counts the number of pulses received during a fixed sampling interval (typically one second).

---

### 4. RPM Calculation

After the sampling interval expires, the microcontroller calculates the rotational speed using the measured pulse count.

For a single reflective strip:

RPM = Pulse Count × 60

For multiple reflective strips:

RPM = (Pulse Count × 60) / Number of Reflective Strips

---

### 5. Display of Results

The calculated RPM value is displayed on the 16×2 LCD. The display is refreshed after every sampling interval, providing continuous real-time speed monitoring.

---

### 6. Continuous Monitoring

After updating the display, the pulse counter is reset, and the measurement cycle repeats continuously to ensure uninterrupted RPM monitoring.

---

## Software Workflow

1. Initialize the microcontroller and LCD.
2. Configure the timer/counter peripheral.
3. Detect incoming pulses from the IR sensor.
4. Count pulses during the sampling interval.
5. Calculate RPM.
6. Display RPM on the LCD.
7. Reset the pulse counter.
8. Repeat the measurement process.

---

## Simulation Environment

- **Microcontroller:** AT89S52 (8051)
- **Programming Language:** Embedded C
- **Compiler:** Keil µVision
- **Simulation Software:** Proteus Design Suite
- **Display:** 16×2 LCD
- **Sensor:** IR LED and IR Receiver (simulated using a pulse generator)

---

## Outcome

The developed system provides an accurate and contactless method for measuring rotational speed. Simulation results verify the functionality of pulse detection, RPM calculation, and real-time LCD display, demonstrating the effectiveness of the embedded system design.
