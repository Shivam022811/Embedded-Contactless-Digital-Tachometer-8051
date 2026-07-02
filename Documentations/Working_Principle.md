# Working Principle

The Embedded Contactless Digital Tachometer measures the rotational speed (RPM) of a rotating object without physical contact by utilizing an Infrared (IR) sensing mechanism. An IR LED continuously emits infrared light toward the rotating object, while an IR receiver detects the reflected or interrupted light generated during each revolution.

Each detected pulse is captured by the AT89S52 (8051) microcontroller through its timer/counter peripheral. The microcontroller counts the number of pulses received within a predefined sampling interval. Using the measured pulse count and the known number of pulses per revolution (PPR), the firmware computes the rotational speed in revolutions per minute (RPM).

The calculated RPM value is displayed on a 16×2 LCD, providing continuous real-time speed monitoring. The firmware also performs basic system diagnostics, including overspeed detection and sensor fault monitoring, ensuring reliable operation under varying operating conditions.

The complete measurement process operates continuously in a closed loop, enabling stable and accurate RPM measurement suitable for laboratory demonstrations, industrial monitoring, and embedded system applications.