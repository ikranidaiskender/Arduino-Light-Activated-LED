# Arduino Light Activated LED

This project is a simple automatic lighting system made with an Arduino Uno and an LDR sensor.

The Arduino reads the light level using the LDR and controls an LED according to a defined threshold value. In this circuit, when the measured value is below the threshold, the LED turns on. Otherwise, the LED remains off.

## Components

- Arduino Uno
- LDR (Light Dependent Resistor)
- LED
- Resistors
- Breadboard
- Jumper wires

## How It Works

1. The Arduino reads the LDR value through analog pin A0.
2. The measured value is displayed in the Serial Monitor.
3. The program compares the LDR value with a threshold value of 74.
4. If the value is below 74, the LED turns on.
5. If the value is 74 or higher, the LED turns off.
6. The light level is checked again every 500 milliseconds.

## Concepts Used

- Analog input
- 'analogRead( )'
- LDR light sensing
- Threshold-based control
- 'if-else' statements
- Digital output
- Serial communication
- 'Serial.println()'

## Hardware Setup

The circuit was built using an Arduino Uno, an LDR sensor and an LED on a breadboard.

## Demo

The video below shows the LED responding automatically to changes in the light level.





https://github.com/user-attachments/assets/b8c2b21c-4b78-456a-b3e2-3beea5baa1e2




## What I Learned

Through this project, I practiced reading analog sensor values and using a threshold to control an output. I also learned how to monitor sensor values using the Serial Monitor and use them in an 'if-else' condition.





