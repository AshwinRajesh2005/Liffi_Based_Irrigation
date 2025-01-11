// LiFi-based Irrigation System

// Include necessary libraries
#include <SoftwareSerial.h>

// Define LiFi parameters
const int LiFiTxPin = 2;  // Transmit Pin
const int LiFiRxPin = 3;  // Receive Pin

// Define irrigation parameters
const int MoistureSensorPin = A0;  // Moisture sensor analog pin
const int PumpControlPin = 4;      // Pin to control the irrigation pump

// Define threshold for moisture level
const int MoistureThreshold = 500;  // Adjust this value based on your sensor readings

// Create a SoftwareSerial object for LiFi communication
SoftwareSerial LiFiSerial(LiFiRxPin, LiFiTxPin);

void setup() {
  // Start serial communication for debugging
  Serial.begin(9600);

  // Set up LiFi communication
  LiFiSerial.begin(9600);

  // Set up pins
  pinMode(MoistureSensorPin, INPUT);
  pinMode(PumpControlPin, OUTPUT);
}

void loop() {
  // Read moisture level from the sensor
  int moistureLevel = analogRead(MoistureSensorPin);

  // Print moisture level for debugging
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);

  // Check if moisture level is below the threshold
  if (moistureLevel < MoistureThreshold) {
    // Send LiFi signal to turn on the pump
    LiFiSerial.println("PumpOn");

    // Turn on the irrigation pump
    digitalWrite(PumpControlPin, HIGH);
  } else {
    // Send LiFi signal to turn off the pump
    LiFiSerial.println("PumpOff");

    // Turn off the irrigation pump
    digitalWrite(PumpControlPin, LOW);
  }

  // Add a delay to prevent rapid changes
  delay(1000);
}
