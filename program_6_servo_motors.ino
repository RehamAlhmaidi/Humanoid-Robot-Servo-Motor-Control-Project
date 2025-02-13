// Reham Alhmaidi

#include <Servo.h>

// Create servo objects for 6 servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() {
  // Attach servo motors to digital pins
  servo1.attach(3);  // Attach Servo 1 to pin 3
  servo2.attach(5);  // Attach Servo 2 to pin 5
  servo3.attach(6);  // Attach Servo 3 to pin 6
  servo4.attach(9);  // Attach Servo 4 to pin 9
  servo5.attach(10); // Attach Servo 5 to pin 10
  servo6.attach(11); // Attach Servo 6 to pin 11
}

void loop() {
  // Sweep all servos from 0 to 180 degrees and back for 2 seconds
  unsigned long startTime = millis(); // Record the current time
  while (millis() - startTime < 2000) { // Loop for 2 seconds
    // Sweep servos from 0 to 180 degrees
    for (int pos = 0; pos <= 180; pos += 1) { 
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(10); // Small delay for smooth motion
    }

    // Sweep servos back from 180 to 0 degrees
    for (int pos = 180; pos >= 0; pos -= 1) { 
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(10); // Small delay for smooth motion
    }
  }

  // Hold all servos at the 90-degree position
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);

  // Prevent further movement (infinite loop)
  while (true) {
    // Servos remain at 90 degrees indefinitely
  }
}
