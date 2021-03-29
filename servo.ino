#include <Servo.h> // you must download zip file, and include it on arduino ide

Servo myservo; 
void setup() { 
   Servo1.attach(9); //connect servo to pin 9
}
void loop() { 
   myservo.write(0); // Make servo go to 0 degrees 
   delay(1000); 

   myservo.write(90); // Make servo go to 90 degrees 
   delay(1000); 
 
   myservo.write(180); // Make servo go to 180 degrees 
   delay(1000); 
}
