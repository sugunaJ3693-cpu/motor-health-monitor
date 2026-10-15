# Smart Motor Health Monitoring System Using C

## Project Overview
The Smart Motor Health Monitoring System is a C-based software simulation that evaluates motor operating conditions using temperature, vibration, and current readings.

It classifies the motor status as NORMAL, WARNING, CRITICAL, or INVALID SENSOR INPUT based on configurable thresholds.

## Features
- Temperature monitoring
- Vibration monitoring
- Current monitoring
- Configurable warning and critical thresholds
- Input validation
- Modular C functions
- Clear status messages and recommended actions

## Technologies Used
- C Programming
- GCC Compiler
- Ubuntu Linux
- Git and GitHub

## Project Structure
```text
motor-health-monitor/
├── firmware/
│   └── src/
│       └── main.c
└── README.md
```

## How to Compile
```bash
gcc -Wall -Wextra -std=c11 firmware/src/main.c -o firmware/src/motor_monitor
```

## How to Run
```bash
./firmware/src/motor_monitor
```

## Example Test Cases

| Temperature | Vibration | Current | Expected Status |
|---:|---:|---:|---|
| 65 | 30 | 2.1 | NORMAL |
| 75 | 30 | 2.1 | WARNING |
| 85 | 30 | 2.1 | CRITICAL |
| -5 | 20 | 2.0 | INVALID SENSOR INPUT |

## Current Limitations
- Sensor readings are entered manually.
- No physical motor or sensors are connected.
- Thresholds are demonstration values and must be validated for a real motor.

## Future Improvements
- Integrate sensors with a microcontroller such as STM32.
- Add real-time sensor readings.
- Add data logging and fault history.
- Develop hardware-based testing.

## Author
Suguna Jeyakumar

**Note:** This project is a software simulation for learning and demonstration purposes. It is not a certified motor safety system.
