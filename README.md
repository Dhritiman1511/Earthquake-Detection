# Earthquake Detection System - Arduino-Based Vibration Sensor Project

## Project Overview

This project demonstrates a low-cost earthquake detection system using an Arduino Nano and SW-420 vibration sensor. The system detects ground vibrations and triggers audible (buzzer) and visual (LED) alarms to provide immediate warnings of potential seismic activity.

## Key Features

- **Real-time vibration detection** using SW-420 sensor module
- **Immediate alert system** with buzzer (85dB) and LED indicators
- **Simple Arduino-based implementation** suitable for beginners
- **Cost-effective solution** for educational and small-scale applications
- **Serial monitor output** for debugging and monitoring

## Components Used

- Arduino Nano (ATmega328P microcontroller)
- SW-420 Vibration Sensor Module
- 5mm Red LED with 220Ω resistor
- 3-12V Buzzer
- Breadboard and jumper wires

## How It Works

1. The SW-420 sensor continuously monitors for vibrations
2. When vibration is detected (sensor output goes LOW):
   - Buzzer activates with loud alarm
   - LED turns on for visual warning
   - Serial monitor displays alert message
3. System resets automatically after 1 second

## Applications

- Early warning system for homes/schools
- Educational demonstration of seismic detection
- Building safety monitoring
- Disaster preparedness training
- Low-cost seismic activity logger

## Project Structure

```
earthquake-detection/
├── ArduinoCode/               # Contains the project source code
│   └── earthquake_detector.ino
├── CircuitDiagram/            # Wiring diagrams and schematics
│   ├── actual_circuit.jpg
│   └── breadboard_layout.jpg
├── Documentation/             # Project report and references
│   └── Earthquake_Detection.pdf
└── README.md                  # This file
```

## Getting Started

1. Connect components as per circuit diagram
2. Upload the provided Arduino code to your Nano
3. Power the system via USB or external 5V supply
4. Test by gently tapping the vibration sensor

## Future Improvements

- Add IoT connectivity (Wi-Fi/GSM) for remote alerts
- Implement data logging to SD card
- Include LCD display for real-time status
- Add battery backup for power outages
- Develop mobile app integration

## Contributors

- Sourav Das
- Shreya Chowdhury
- Mahfil Debbarma
- Deeptanu Bhatta
- Vartika Sharma
- Ripan Paul
- Suraj Debbarma
- Isha Debbarma
- Dhritiman Roy
- Siuli Debbarma

## License

This project is open-source and available under the MIT License.

## Acknowledgments

Special thanks to Dr. Diptanu Dey and Mr. Rajesh Kumar from National Institute of Technology, Agartala for their guidance and support.