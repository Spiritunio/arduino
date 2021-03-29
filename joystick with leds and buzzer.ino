int xpin = 0; // connect x to A0
int ypin = 1; // connect y to A1
int zpin = 3; // connect z to pin 3
int red = 13; // connect red led to pin 13
int green = 11; // connect green led to pin 11
int yellow = 9; // connect yellow led to pin 9
int blue = 8; // connect blue led to pin 8
int buzzer = 5; // connect buzzer to pin 5
void setup() 
{ 
  pinMode(buzzer, OUTPUT); // pin modes
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(zpin, INPUT); 
  Serial.begin(9600); // start serial monitor
}
void loop() 
{ 
  int x,y,z;
  x=analogRead(xpin); // read x position
  y=analogRead(ypin); // read y position
  z=digitalRead(zpin); // read z position
  Serial.print(x ,DEC); //send positions to serial monitor
  Serial.print(",");
  Serial.print(y ,DEC);
  Serial.print(",");
  Serial.println(z ,DEC);
  if (x == 0){
  digitalWrite(green, HIGH); // if joystick go to right, run green led
  }
  else {
  digitalWrite (green, LOW);
  }
  if (x == 1023) {
    digitalWrite(blue, HIGH); // if left, then run blue led
  }
  else {
    digitalWrite(blue, LOW);
  }
    if (y == 1023) {
    digitalWrite(red, HIGH); // if up, then run red led
  }
  else {
    digitalWrite(red, LOW);
  }
    if (y == 0) {
    digitalWrite(yellow, HIGH); // if down, then run yellow led
  }
  else {
    digitalWrite(yellow, LOW);
  }
  if (z == 1) {
    tone(buzzer, 700); // if pressed, run buzzer
  }
  else {
    noTone(buzzer);
  }

}
