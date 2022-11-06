#include <LiquidCrystal.h>
LiquidCrystal lcd(8,7,6,5,4,3);
int flexPin1 = A0;
int value1;
int flexPin2 = A1;
int value2;
int flexPin3 = A2;
int value3;
int flexPin4 = A3;
int value4;
int flexPin5 = A4;
int value5;

void setup() 
{
  //setup code
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Smart Glove");
  Serial.begin(9600);
  delay(200);
}

void loop() 
{
  //thumb finger
  value1 = analogRead(flexPin1);
  Serial.print(value1);
  value1 = map(value1, 990, 1017, 0, 255);
  
  //index finger
  value2 = analogRead(flexPin2);
  Serial.print(value2);
  value2 = map(value2, 990, 1017, 0, 255);
  
  //middle finger
  value3 = analogRead(flexPin3);
  Serial.print(value3);
  value3 = map(value3, 990, 1017, 0, 255);
  
  //ring finger
  value4 = analogRead(flexPin4);
  Serial.print(value4);
  value4 = map(value4, 990, 1017, 0, 255);
  
  //pinky finger
  value5 = analogRead(flexPin5);
  Serial.print(value5);
  value5 = map(value5, 990, 1017, 0, 255);
  
  //home
  if(value1 < 80 && value2 < 80 && value3 < 80 && value4 < 80 && value5 < 80 )
  {
    Serial.print("home page");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Smart Glove for disabled");
    delay(500);
  }
  
  //1 - I need 
  if(value1 > 80 && value2 < 80 && value3 < 80 && value4 < 80 && value5 < 80 )
  {
    Serial.print("thumb");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("I Need");
    delay(500);
  }

  //2 - water 
  if(value2 > 80 && value1 < 80 && value3 < 80 && value4 < 80 && value5 < 80)
  {
    Serial.print("index");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Water");
    delay(500);
  }

  //3 - food
  if(value3 > 80 && value1 < 80 && value2 < 80 && value4 < 80 && value5 < 80)
  {
    Serial.print("middle");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Food");
    delay(500);
  }
  
  //4 - ok
  if(value4 > 80 && value1 < 80 && value2 < 80 && value3 < 80 && value5 < 80)
  {
    Serial.print("ring");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("ok");
    delay(500);
  }

  //5 - hii
  if(value5 > 80 && value1 < 80 && value2 < 80 && value3 < 80 && value4 < 80)
  {
    Serial.print("pinky");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Hii");
    delay(500);
  }
  
  
  //12 - Nice
  if(value1 > 80 && value2 > 80 && value3 < 80 && value4 < 80 && value5 < 80)
  {
    Serial.print("12");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Nice");
    delay(500);
  }
  
  //13 - Uneasy
  if(value1 > 80 && value3 > 80 && value2 < 80 && value4 < 80 && value5 < 80)
  {
    Serial.print("13");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Uneasy");
    delay(500);
  }
    
  //14 - sad
  if(value1 > 80 && value4 > 80 && value2 < 80 && value3 < 80 && value5 < 80)
  {
    Serial.print("14");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Sad");
    delay(500);
  }
  //15 - Happy
  if(value1 > 80 && value2 < 80 && value3 < 80 && value4 < 80 && value5 > 80)
  {
    Serial.print("15");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Happy");
    delay(500);
  }
  //23 - Angry
  if(value1 < 80 && value2 > 80 && value3 > 80 && value4 < 80 && value5 < 80)
  {
    Serial.print("23");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Angry");
    delay(500);
  }
  //24 - Hungry
  if(value2 > 80 && value4 > 80 && value3 < 80 && value1 < 80 && value5 < 80)
  {
    Serial.print("24");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Hungry");
    delay(500);
  }
  //25 - How Much??
  if(value2 > 80 && value5 > 80 && value1 < 80 && value3 < 80 && value4 < 80)
  {
    Serial.print("25");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("How Much??");
    delay(500);
  }
  //34 - Please
  if(value3 > 80 && value4 > 80 && value1 < 80 && value2 < 80 && value5 < 80)
  {
    Serial.print("34");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Please");
    delay(500);
  }
  //35 - How are you??
  if(value3 > 80 && value5 > 80 && value1 < 80 && value2 < 80 && value4 < 80)
  {
    Serial.print("35");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("How are you??");
    delay(500);
  }
  //45 - Medicine
  if(value4 > 80 && value5 > 80 && value3 < 80 && value2 < 80 && value1 < 80)
  {
    Serial.print("45");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Medicine");
    delay(500);
  }
  //123 - Noo
  if(value1 > 80 && value2 > 80 && value3 > 80 && value4 < 80 && value5 < 80)
  {
    Serial.print("123");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Noo");
    delay(500);
  }
  //124 - fine
  if(value1 > 80 && value2 > 80 && value4 > 80 && value3 < 80 && value5 < 80)
  {
    Serial.print("124");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("fine");
    delay(500);
  }
  //125 - See you later
  if(value1 > 80 && value2 > 80 && value5 > 80 && value3 < 80 && value4 < 80)
  {
    Serial.print("125");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("See you later ");
    delay(500);
  }
  //134 - Good one
  if(value1 > 80 && value3 > 80 && value4 > 80 && value2 < 80 && value5 < 80)
  {
    Serial.print("134");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Good one ");
    delay(500);
  }
  //135 - I appreciate
  if(value1 > 80 && value3 > 80 && value5 > 80 && value2 < 80 && value4 < 80)
  {
    Serial.print("135");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("I appreciate");
    delay(500);
  }
  //145 - Yess 
  if(value1 > 80 && value4 > 80 && value5 > 80 && value2 < 80 && value3 < 80)
  {
    Serial.print("145");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Yess");
    delay(500);
  }
  //234 - OK
  if(value2 > 80 && value3 > 80 && value4 > 80 && value1 < 80 && value5 < 80)
  {
    Serial.print("234");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("OK");
    delay(500);
  }
  //235 - Where??
  if(value2 > 80 && value3 > 80 && value5 > 80 && value1 < 80 && value4 < 80)
  {
    Serial.print("235");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Where??");
    delay(500);
  }
  //245 - When??
  if(value2 > 80 && value4 > 80 && value5 > 80 && value1 < 80 && value3 < 80)
  {
    Serial.print("245");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("When??");
    delay(500);
  }
  //345 - Help
  if(value3 > 80 && value4 > 80 && value5 > 80 && value1 < 80 && value2 < 80)
  {
    Serial.print("345");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Help ");
    delay(500);
  }
  //1234 - washroom
  if(value1 > 80 && value2 > 80 && value3 > 80 && value4 > 80 && value5 < 80)
  {
    Serial.print("1234");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("washroom");
    delay(500);
  }
  //1235 - SOS
  if(value1 > 80 && value2 > 80 && value3 > 80 && value5 > 80 && value4 < 80)
  {
    Serial.print("1235");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("SOS");
    delay(500);
  }
  //1345 - you
  if(value1 > 80 && value3 > 80 && value4 > 80 && value5 > 80 && value2 < 80)
  {
    Serial.print("1345");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("you");
    delay(500);
  }
  //1245 - f off
  if(value5 > 80 && value4 > 80 && value2 > 80 && value1 > 80 && value3 < 80)
  {
    Serial.print("f");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("oh shit!!");
    delay(500);
  }
  
  //2345 - thanks
  if(value5 > 80 && value4 > 80 && value3 > 80 && value2 > 80 && value1 < 80)
  {
    Serial.print("tq");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Thanks");
    delay(500);
  }
    
  //12345 - Bye
  if(value1 > 80 && value2 > 80 && value3 > 80 && value4 > 80 && value5 > 80)
  {
    Serial.print("12345");
    lcd.clear();
    digitalWrite(6, HIGH);
    lcd.print("Bye");
    delay(500);
  }
  
}
