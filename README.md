# Smart-Garden-Using-Arduino-IoT-Cloud (SGAIoTC)

Welcome to the Smart Garden project using Arduino IoT Cloud. This project aims to create an automated garden system that uses IoT technology to monitor and water plants based on soil moisture levels. The system can be managed and monitored remotely via the Arduino IoT Cloud platform.

## Table of Contents
- [Introduction](#introduction)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Setup Instructions](#setup-instructions)
- [Arduino Code](#arduino-code)
- [IoT Cloud Configuration](#iot-cloud-configuration)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project utilizes various sensors and modules to monitor soil moisture, control water pumps, and provide real-time updates through the Arduino IoT Cloud. By integrating these components, we create a smart system that ensures your plants are adequately watered based on real-time soil moisture readings.

## Components

The following components are required for this project:

- Male to Female Jumper Wire 40pcs/Row 20cm × 1
- Full Size Solderless Breadboard × 1
- LED – Colored Green 5mm × 5
- 5v Single Channel Relay Module 10A (High Trigger) × 3
- 9v Battery, PowerFul Cell, Extra Heavy Battery
- Female to Female Jumper Wire 40pcs/Row 20 × 1
- NodeMCU Lua Based ESP8266 ESP-12E DEVKIT cp2102 × 1
- DC Water Pump 5V / Tube × 3
- Capacitive Soil Moisture Sensor v1.2 × 2 or Arduino Soil Moisture Sensor × 2
- DHT22 Temperature-Humidity Sensor × 2
- Male to Male Jumper Wire 40pcs/Row 20cm × 1

## Circuit Diagram

![Circuit Diagram](path_to_circuit_diagram_image)

Ensure all connections are secure and according to the circuit diagram provided.

## Setup Instructions

1. **Connect the Hardware:**
   - Follow the circuit diagram to connect all the components to the NodeMCU.
   - Ensure the sensors and relays are connected properly to avoid any damage.

2. **Install Arduino IDE:**
   - Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
   - Install the ESP8266 board package through the Arduino Board Manager.

3. **Arduino Code:**
   - Download or clone this repository.
   - Open the `smart_garden_hardware_code.ino` file in Arduino IDE.
   - Modify the Wi-Fi credentials and other necessary configurations in the code.
   - Upload the code to the NodeMCU.

4. **IoT Cloud Configuration:**
   - Create an account on [Arduino IoT Cloud](https://create.arduino.cc/iot).
   - Create a new Thing and add the necessary devices and variables.
   - Link the variables to your NodeMCU device.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
