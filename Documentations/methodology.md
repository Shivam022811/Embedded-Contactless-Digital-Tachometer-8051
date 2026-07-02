# Methodology

The development of the Embedded Contactless Digital Tachometer followed a structured embedded system design approach consisting of hardware design, firmware development, simulation, verification, and documentation.

## 1. System Requirement Analysis

The functional requirements were identified to achieve contactless rotational speed measurement using an IR sensor and an AT89S52 (8051) microcontroller with real-time LCD display.

## 2. System Architecture Design

A complete system architecture was developed consisting of the IR sensing module, AT89S52 microcontroller, timer/counter subsystem, RPM calculation module, system monitoring module, and LCD interface.

## 3. Hardware Design

The hardware configuration was designed by interfacing the IR sensor module and LCD display with the AT89S52 microcontroller while incorporating the required clock oscillator, reset circuitry, and power supply connections.

## 4. Firmware Development

The firmware was developed in Embedded C using a modular programming approach. Individual modules were designed for timer configuration, pulse acquisition, RPM computation, LCD interfacing, and system monitoring.

## 5. System Simulation

The complete embedded system was functionally verified using SimulIDE to validate pulse detection, timer operation, RPM calculation, and LCD output under different operating conditions.

## 6. Performance Verification

Simulation results were analyzed to verify correct pulse counting, stable RPM calculation, LCD display accuracy, and overall firmware functionality.

## 7. Documentation

Technical documentation including block diagrams, software flowcharts, circuit diagrams, methodology, working principle, and source code documentation was prepared to ensure project reproducibility and maintainability.