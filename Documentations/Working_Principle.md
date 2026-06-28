# Working Principle

The Contactless Digital Tachometer measures the rotational speed (RPM) of a rotating object without physical contact using an infrared (IR) sensing mechanism. A reflective strip is attached to the rotating shaft, and an IR sensor module consisting of an IR LED and an IR receiver is positioned to face the rotating surface.

The IR LED continuously emits infrared light toward the rotating object. Whenever the reflective strip passes in front of the sensor, it reflects the emitted light back to the IR receiver, generating a digital pulse. Each pulse corresponds to one complete revolution of the rotating object.

The pulse signal is provided to the AT89S52 (8051) microcontroller, where the timer/counter peripheral counts the number of pulses detected during a fixed sampling interval. After the sampling period, the microcontroller calculates the rotational speed using the pulse count and converts it into Revolutions Per Minute (RPM).

The calculated RPM value is then displayed on a 16×2 LCD in real time. The counting process repeats continuously, allowing the system to provide updated speed measurements while the object remains in motion.

## RPM Calculation

For a single reflective strip attached to the rotating object:

\[
\text{RPM} = \text{Pulse Count} \times 60
\]

For multiple reflective strips:

\[
\text{RPM} = \frac{\text{Pulse Count} \times 60}{\text{Number of Reflective Strips}}
\]

## Advantages

- Contactless speed measurement
- Simple and low-cost implementation
- Accurate real-time RPM monitoring
- Easy integration with embedded systems
- Suitable for educational and industrial monitoring applications
