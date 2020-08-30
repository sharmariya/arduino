#include<Servo.h>
Servo servo1;  // create servo object to control a servo


int p = 0;    // variable to store the servo position

void setup() {
  servo1.attach(13);  // attaches the servo on pin 13 to the servo object
}

void loop() {
  for (p = 0; p <= 180; p += 1)
  { // goes from 0 degrees to 180 degrees
    servo1.write(p);              // tell servo to go to position in variable 'p'
    delay(20);                       // waits 20ms for the servo to reach the position
  }
  for (p = 180; p >= 0; p -= 1)
  { // goes from 180 degrees to 0 degrees
    servo1.write(p);              
    delay(20);                        
  }
}

