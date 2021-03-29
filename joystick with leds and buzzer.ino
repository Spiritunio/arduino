int xpin = 0;
int ypin = 1;
int zpin = 3;
int red = 13;
int green = 11;
int yellow = 9;
int blue = 8;
int buzzer = 5;
void setup() 
{ 
  pinMode(buzzer, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(zpin, INPUT); 
  Serial.begin(9600); // 9600 bps
}
void loop() 
{ 
  int x,y,z;
  x=analogRead(xpin);
  y=analogRead(ypin);
  z=digitalRead(zpin);
  Serial.print(x ,DEC);
  Serial.print(",");
  Serial.print(y ,DEC);
  Serial.print(",");
  Serial.println(z ,DEC);
  if (x == 0){
  digitalWrite(green, HIGH);
  }
  else {
  digitalWrite (green, LOW);
  }
  if (x == 1023) {
    digitalWrite(blue, HIGH);
  }
  else {
    digitalWrite(blue, LOW);
  }
    if (y == 1023) {
    digitalWrite(red, HIGH);
  }
  else {
    digitalWrite(red, LOW);
  }
    if (y == 0) {
    digitalWrite(yellow, HIGH);
  }
  else {
    digitalWrite(yellow, LOW);
  }
  if (z == 1) {
    tone(buzzer, 700);
  }
  else {
    noTone(buzzer);
  }

}