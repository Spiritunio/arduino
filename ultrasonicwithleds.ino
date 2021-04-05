const int trigPin = 9; //connect TRIG to pin 9
const int echoPin = 10; //connect ECHO to pin 10

int blue = 3; //connect blue led to pin 3 or any you want
int red = 13; //connect red to pin 13, or any you want
int green = 12; //connect green led to pin 12, or any you want

long duration; 
int distanceCm, distanceInch; //define distanceCm and distanceInch

void setup() {
    Serial.begin(9600); //start serial monitor
    pinMode(trigPin, OUTPUT); //pin modes
    pinMode(echoPin, INPUT);
    pinMode(blue, OUTPUT);
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop() {
    digitalWrite(trigPin, LOW); //sensor low
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); //send
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW); //low
    
    duration = pulseIn(echoPin, HIGH); //measuring what is duration between waves
    
    distanceCm= duration*0.034/2; //distanceCm
    distanceInch = duration*0.0133/2; //distanceInch
    if(distanceCm < 10) { //if lower than 10cm, run red led
        digitalWrite(red, HIGH);
    } else{
        digitalWrite(red, LOW);
    }
    
    if(distanceCm > 10 && distanceCm < 40) { //if between 10 and 40, run green led
        digitalWrite(green, HIGH);
    } else {
        digitalWrite(green, LOW);
    }
    
    if(distanceCm > 40) { //if bigger than 40, run blue led
        digitalWrite(blue, HIGH);
    } else {
        digitalWrite(blue, LOW);
    }
    Serial.println(distanceCm); //print distance
}
