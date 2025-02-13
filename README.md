
# Humanoid Robot Servo Motor Control Project

This project demonstrates how to control 6 servo motors for a humanoid robot, simulating basic walking motions and a sweeping movement. The robot's servos are programmed to perform a sweeping motion for 2 seconds and then hold the servos at 90 degrees. The project includes the full implementation of the motor control logic and an algorithm for the walking motion.

## Table of Contents
- [Overview](#overview)
- [Components](#components)
- [Setup](#setup)
- [Code](#code)
  - [Servo Control](#servo-control)
  - [Walking Motion Algorithm](#walking-motion-algorithm)
- [How to Run](#how-to-run)
- [Troubleshooting](#troubleshooting)
- [License](#license)

## Overview
This project is designed to demonstrate the control of 6 servo motors in a humanoid robot. The robot is programmed to:
1. Perform a sweeping motion using all 6 servos for 2 seconds.
2. Hold all servos at a 90-degree position after the sweeping motion.
3. Follow an algorithm that simulates walking by alternating movements of the right and left legs.

The walking motion algorithm provides the logic needed for the robot to step forward in a sequence, with the servos controlling the hip, knee, and ankle joints of the robot's legs.

## Components
To build this humanoid robot with servo control, you'll need the following components:
- 6 Servo motors
- Arduino board (e.g., Arduino Uno)
- Jumper wires
- Power supply for the servos (if necessary)

## Setup
1. **Wiring the Servos:**
   - Connect the 6 servo motors to the digital pins on the Arduino board as follows:
     - Servo 1: Pin 3
     - Servo 2: Pin 5
     - Servo 3: Pin 6
     - Servo 4: Pin 9
     - Servo 5: Pin 10
     - Servo 6: Pin 11
2. **Power Supply:**
   - Ensure that the servo motors are powered properly (either via the Arduino or an external power supply).

## Code

### Servo Control

The code includes the setup for controlling the 6 servos. It uses the `Servo` library to attach each servo to the specified digital pin on the Arduino board.
[📜 View the Arduino] (odeprogram_6_servo_motors.ino)

```

### Walking Motion Algorithm

The walking motion is divided into multiple steps, alternating between the right and left legs. The algorithm controls the hip, knee, and ankle servos to lift the legs, move them forward, and place the feet on the ground.

**Algorithm Steps:**
1. Lift the right leg (hip forward, bend knee, rotate ankle).
2. Move the right leg forward (straighten knee, rotate ankle).
3. Place the right foot on the ground (ankle flat, lock knee and ankle).
4. Lift the left leg (hip forward, bend knee, rotate ankle).
5. Move the left leg forward (straighten knee, rotate ankle).
6. Place the left foot on the ground (ankle flat, lock knee and ankle).
7. Repeat the steps for continuous walking.

The algorithm creates an alternating leg movement for simulating walking.

## How to Run
1. **Upload the Code:**
   - Open the Arduino IDE and paste the provided code.
   - Select the correct board (Arduino Uno or another model).
   - Upload the code to the Arduino.

2. **Run the Program:**
   - Once uploaded, the servos will perform the sweeping motion for 2 seconds and then hold the position at 90 degrees.
   - The walking motion will be executed in the subsequent steps based on the algorithm.

## Troubleshooting
- **Servos Not Moving:**
  - Check the power supply for the servos.
  - Ensure that the servos are connected to the correct pins.
  - Verify that the `Servo` library is installed in the Arduino IDE.

- **Unexpected Movement:**
  - Check for wiring issues, such as loose connections.
  - Adjust the servo angles in the code if the movement is not as expected.
