
int flexPin = 0;                   
void setup() {
  for (int i=4; i<14; i++){
    pinMode(i, OUTPUT); 
  }
}
void loop(){

 for (int i=4; i<14; i++)
 {
    digitalWrite(i, LOW); 
  }

 int flexReading = map(analogRead(flexPin), 130, 275, 4, 13); 

 int LEDnum = constrain(flexReading, 4, 13); 
 
 blink(LEDnum, 10,1);
}
void blink(int LEDPin, int onTime, int offTime){                                
 digitalWrite(LEDPin, HIGH);  
 delay(onTime);                                        
  digitalWrite(LEDPin, LOW);  
  delay(offTime);
}