# Firmware Architecture

The firmware follows a modular architecture to improve readability, maintainability, and future scalability.

## Source Files

```
main.c
lcd.c
sensor.c
timer.c
rpm.c
status.c
```

## Responsibilities

| Module | Description |
|---------|-------------|
| main.c | System initialization and main loop |
| lcd.c | LCD driver functions |
| sensor.c | IR sensor interface |
| timer.c | Timer and counter configuration |
| rpm.c | RPM calculation algorithms |
| status.c | System status monitoring |