const int trigPin = 9;
const int echoPin = 10;
int blue = 3;
int red = 13;
int green = 12;

long duration;
int distanceCm, distanceInch;
void setup() {
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(blue, OUTPUT);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
distanceInch = duration*0.0133/2;
if(distanceCm < 10) {
    digitalWrite(red, HIGH);
} else{
    digitalWrite(red, LOW);
}
if(distanceCm > 10 && distanceCm < 40) {
    digitalWrite(green, HIGH);
} else {
    digitalWrite(green, LOW);
}
if(distanceCm > 40) {
    digitalWrite(blue, HIGH);
} else {
    digitalWrite(blue, LOW);
}
Serial.println(distanceCm);
}