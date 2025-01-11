# Liffi_Based_Irrigation
LiFi-based Irrigation System

Project Overview

This project demonstrates a smart irrigation system that uses Light Fidelity (LiFi) technology for communication. The system monitors soil moisture levels using a sensor and activates an irrigation pump when the moisture level is below a predefined threshold. LiFi communication enables wireless transmission of data between the system components, optimizing irrigation processes efficiently.

Team Members:

Ashwin R

Ajay Shrikaanth A S

Madhavan

Objective

The goal of this project is to design an irrigation system that utilizes LiFi technology to control an irrigation pump based on real-time soil moisture levels. By using visible light communication, we ensure a wireless, secure, and efficient way to manage irrigation.

Step-by-Step Description

1.) System Design

The system consists of a moisture sensor, a pump, and a LiFi communication module.
The moisture sensor is connected to the Arduino, which continuously measures the soil’s moisture level.
The LiFi communication module is used to send data between the system components, with commands like "PumpOn" or "PumpOff" transmitted when required.

2.) Hardware Setup

Moisture Sensor: The sensor is connected to an analog pin of the Arduino to measure the moisture level in the soil.
LiFi Module: The transmitter and receiver modules allow communication between the irrigation control system and remote monitoring devices. The transmitter is connected to an output pin, and the receiver is connected to the input pin on the Arduino.
Pump: The pump is controlled through a digital pin, activated when the moisture level drops below the set threshold.

3.) Software Setup

We used the Arduino IDE to write and upload the code to the microcontroller.
The code reads data from the moisture sensor, compares it with the threshold, and sends a signal via the LiFi communication module to control the pump.

4.) Working of the System

The Arduino continuously reads the soil moisture level.
If the moisture level is low, the system sends a signal through the LiFi module to activate the pump.
When the soil moisture reaches a sufficient level, the system sends a signal to turn off the pump.

5.) Code Implementation

The code provided in the repository controls the moisture sensor, reads data, and uses the SoftwareSerial library for LiFi communication.
The moisture sensor’s analog reading determines when the pump should be activated or deactivated.

![WhatsApp Image 2025-01-11 at 17 44 56_6ec79179](https://github.com/user-attachments/assets/3b6b67f2-7ec1-4c02-9f86-9ba004c02cfa)



Conclusion

By integrating LiFi technology into the irrigation system, we have created an innovative and efficient way to automate irrigation based on soil moisture. The system’s use of visible light communication ensures a reliable and secure method of transmitting data, making it ideal for agricultural applications.


Future Improvements

1.)Integration with mobile or web applications for remote monitoring.

2.)Use of more advanced sensors for better environmental control.

3.)Optimizing the system for energy efficiency.
