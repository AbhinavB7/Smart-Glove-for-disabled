//flex sensor value
const int flexPin = A0;

int value;

void setup() {
  
  Serial.begin(9600); 
  
}

void loop() {
  
  value = analogRead(flexPin);
  Serial.println(value);
  value = map(value, 700, 900, 0, 255);
  delay(100);
  
  
}
