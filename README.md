# Embedded Contactless Digital Tachometer Using AT89S52 (8051)

An embedded system designed to perform **contactless rotational speed (RPM) measurement** using an **Infrared (IR) sensor** and the **AT89S52 (8051) microcontroller**. The firmware processes pulse signals in real time using the microcontroller's timer/counter peripherals and displays the measured RPM and system status on a **16×2 LCD**.

This project demonstrates practical implementation of **Embedded C programming, digital electronics, sensor interfacing, timer/counter programming, modular firmware development, and embedded system design**.

---

## Project Highlights

* Contactless RPM measurement using an IR sensor
* AT89S52 (8051) microcontroller-based implementation
* Real-time RPM calculation and monitoring
* 16×2 LCD interface for speed and status display
* Timer/Counter-based pulse measurement
* Overspeed detection with visual indication
* Sensor fault detection and error handling
* Modular Embedded C firmware architecture
* Simulation-based functional verification
* Comprehensive technical documentation

---

## Hardware Components

* AT89S52 (8051) Microcontroller
* Infrared LED
* Infrared Receiver Sensor
* 16×2 LCD Display
* Crystal Oscillator
* Capacitors
* Reset Circuit
* Status LEDs
* Power Supply

---

## Software & Development Tools

* Embedded C
* SDCC Compiler
* Visual Studio Code
* SimulIDE
* diagrams.net
* Git
* GitHub

---

## Working Principle

The IR transmitter continuously emits infrared light toward the rotating object. As the object rotates, the reflected or interrupted infrared beam generates digital pulses at the receiver. The AT89S52 microcontroller counts these pulses over a fixed sampling interval using its internal timer/counter module. The measured pulse count is converted into rotational speed (RPM), processed by the firmware, and displayed on the LCD. The firmware continuously monitors system operation, detects overspeed conditions, and identifies sensor faults to ensure reliable performance.

---

## System Features

* Real-time RPM monitoring
* Contactless speed measurement
* Timer/Counter-based pulse acquisition
* LCD-based user interface
* Overspeed protection
* Sensor diagnostics
* Startup initialization sequence
* Continuous monitoring loop
* Structured firmware modules
* Easy-to-maintain source code

---

## Repository Structure

```text
Embedded-Contactless-Digital-Tachometer-8051
│
├── Code
│   ├── main.c
│   ├── lcd.c
│   ├── lcd.h
│   ├── sensor.c
│   ├── sensor.h
│   ├── timer.c
│   ├── timer.h
│   ├── rpm.c
│   ├── rpm.h
│   ├── status.c
│   └── status.h
│
├── Documentation
│   ├── Working_Principle.md
│   ├── Methodology.md
│   ├── Hardware_Design.md
│   └── Software_Design.md
│
├── Images
│   ├── Block_Diagram.png
│   ├── Software_Flowchart.png
│   ├── Circuit_Diagram.png
│   └── Simulation_Results.png
│
├── Simulations
│
├── Results
│
├── LICENSE
│
└── README.md
```

---

## Engineering Concepts

* Embedded System Design
* Embedded C Programming
* 8051 Microcontroller Architecture
* Timer & Counter Programming
* Digital Electronics
* Sensor Interfacing
* LCD Interfacing
* Pulse Signal Processing
* Real-Time Embedded Systems
* Firmware Development
* Hardware Simulation
* Technical Documentation

---

## Applications

* Industrial Motor Speed Monitoring
* Conveyor Belt Monitoring
* Laboratory Speed Measurement
* Manufacturing Automation
* Robotics
* Industrial Equipment Diagnostics
* Educational Embedded Systems

---

## Future Enhancements

* UART-based serial monitoring
* EEPROM data logging
* Wireless RPM monitoring
* OLED/TFT display interface
* Bluetooth connectivity
* IoT-based remote monitoring

---

## Author

**Shivam Kumar**

B.Tech in Electronics and Communication Engineering

Indian Institute of Technology (ISM) Dhanbad

GitHub: https://github.com/Shivam022811
