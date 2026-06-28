# Embedded-Contactless-Digital-Tachometer-8051

## Overview

This project presents the design and simulation of a contactless digital tachometer using an 8051 microcontroller. The system measures the rotational speed (RPM) of a rotating object without physical contact by detecting infrared (IR) sensor pulses. The measured RPM is processed by the microcontroller and displayed on a 16×2 LCD.

The project is developed in Embedded C using Keil µVision and validated through Proteus simulation.

---

## Features

- Contactless RPM measurement
- IR sensor-based pulse detection
- Timer/Counter-based pulse counting
- Real-time RPM calculation
- 16×2 LCD display
- Embedded C firmware
- Proteus simulation and verification

---

## Hardware Components

- AT89S52 / AT89C51 (8051 Microcontroller)
- IR LED
- IR Receiver Sensor
- 16×2 LCD Display
- 11.0592 MHz Crystal Oscillator
- Reset Circuit
- 5V Power Supply

---

## Software Tools

- Embedded C
- Keil µVision
- Proteus Design Suite

---

## Working Principle

A reflective marker is placed on the rotating object. The IR sensor detects the marker once per revolution and generates a pulse.

The 8051 microcontroller counts the incoming pulses using its timer/counter peripherals over a fixed time interval. Based on the pulse count, the controller calculates the rotational speed (RPM) and displays the result on the LCD.

---

## System Architecture

```
          Rotating Object
                 │
          Reflective Marker
                 │
           IR Sensor Module
                 │
          Pulse Signal Output
                 │
      8051 Microcontroller
      (Timer / Counter Unit)
                 │
         RPM Calculation
                 │
           16×2 LCD Display
```

---

## Project Structure

```
Contactless-Digital-Tachometer-8051/

│── Code/
│   └── tachometer.c
│
│── Proteus/
│   ├── Tachometer.pdsprj
│   ├── tachometer.hex
│   └── schematic.png
│
│── Images/
│   ├── block_diagram.png
│   ├── circuit_diagram.png
│   ├── simulation_output.png
│   └── lcd_display.png
│
│── Documentation/
│   ├── methodology.md
│   └── project_report.pdf
│
├── README.md
├── LICENSE
└── Results.md
```

---

## Methodology

1. Generate pulse signals using an IR sensor.
2. Count pulses using the 8051 timer/counter.
3. Measure pulses within a fixed sampling interval.
4. Calculate RPM using pulse count.
5. Display RPM on a 16×2 LCD.
6. Verify system functionality through Proteus simulation.

---

## Results

The tachometer successfully measures rotational speed by counting sensor pulses and displays the calculated RPM in real time.

Simulation results demonstrate accurate RPM measurement for different input pulse frequencies under Proteus.

---

## Applications

- Industrial motor speed monitoring
- Automotive RPM measurement
- Rotating machinery diagnostics
- Manufacturing automation
- Laboratory experiments
- Embedded system education

---

## Skills Demonstrated

- Embedded C Programming
- 8051 Microcontroller
- Timer & Counter Programming
- Interrupt Handling
- LCD Interfacing
- Sensor Interfacing
- Proteus Simulation
- Embedded System Design
- Hardware Validation

---

## Future Improvements

- Hall Effect Sensor support
- Rotary Encoder integration
- UART-based serial monitoring
- Bluetooth/Wi-Fi connectivity
- Data logging
- OLED/TFT display support
- Higher RPM measurement range

---

## Author

**Shivam Kumar**

B.Tech, Electronics & Communication Engineering

Indian Institute of Technology (ISM) Dhanbad
