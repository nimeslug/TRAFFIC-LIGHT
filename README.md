# TRAFFIC LIGHT
 This project allows you to set up a simple traffic light system using an Arduino. The traffic light cycles through red, yellow, and green lights in sequence. The project controls LEDs using the digital pins of the Arduino.

Requirements

1x Arduino (Uno, Mega, etc.)

1x Red LED

1x Yellow LED

1x Green LED

3x 220-ohm resistors

Jumper wires

Circuit Diagram:

The red LED should be connected to pin 2 of the Arduino.

The yellow LED should be connected to pin 3 of the Arduino.

The green LED should be connected to pin 4 of the Arduino.

The cathodes of each LED should be connected to the Arduino's GND pin.

Code Explanation

Pins used in the code:

Red LED is connected to pin 2

Yellow LED is connected to pin 3

Green LED is connected to pin 4

In the setup() function, the pins for each LED are set to OUTPUT.

The loop() function simulates the traffic light sequence:

Red light turns on for 5 seconds.

Red and yellow lights turn on together for 1.5 seconds.

Green light turns on for 4 seconds.

Yellow light blinks with a short interval (total time of blinking).
