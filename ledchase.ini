int BASE = 1; // pin of first led
int NUM = 6;   // number of leds

void setup() {
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT); //pin mode
   }
}

void loop() {
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW); // set leds as “low”, turn off leds one by one.
     delay(200);    
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH); // set leds pins as “high”, turn on leds one by one
     delay(100); 
   }  
}
