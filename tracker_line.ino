int Sensor = 10; //connect OUT to pin 10
int led = 11; //connect led to pin 11, or any you want

void setup () {
  Serial.begin(9600); //start serial monitor
  pinMode(Sensor, INPUT) ; //pin modes
  pinMode(led, OUTPUT);
}
  
void loop ()
{
  bool val = digitalRead(Sensor) ; //read signal
  
  if (val == HIGH) // if detecting white, then led goes off
  {
    Serial.println("Tracker is not on the line");
    digitalWrite(led, LOW);
  } else //if detecting black, then run led
  {
    Serial.println("Tracker is on the line");
    digitalWrite(led, HIGH);
  }
  Serial.println("------------------------------------");
  delay(500); //delay 500ms
}
