const int vibrationPin = 2; 
const int buzzerPin = 8;      
const int ledPin = 9;          
 
void setup() { 
  pinMode(vibrationPin, INPUT);  
  pinMode(buzzerPin, OUTPUT); 
  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);                
} 
void loop() { 
  int sensorValue = digitalRead(vibrationPin); 
 
  if (sensorValue == LOW) {                      
    digitalWrite(buzzerPin, HIGH);               
    digitalWrite(ledPin, HIGH);                  
    Serial.println("Vibration detected! Possible Earthquake!"); 
    delay(1000);                                
    digitalWrite(buzzerPin, LOW);            
    digitalWrite(ledPin, LOW); 
  } else { 
    digitalWrite(buzzerPin, LOW);              
    digitalWrite(ledPin, LOW);                  
  } 
  delay(200); 
}