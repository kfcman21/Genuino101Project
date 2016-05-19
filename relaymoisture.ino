
#include <LiquidCrystal.h>


LiquidCrystal lcd(12,11,5,4,3,2);

int soil =A0;
void setup()
{
 
 lcd.begin(16, 2);
 lcd.clear();
 lcd.print("Soil Moisture ");
 pinMode (7, OUTPUT); 
}

void loop()
{
  int value = analogRead(soil);
  int hum = map(value,300,1023,100,0);
  lcd.setCursor(0,1);
  lcd.print(hum);
  delay(1000);
  if(hum <40 ) {
    digitalWrite(7, HIGH);
    delay(10000);
     } else {
    digitalWrite(7, LOW);
    delay(500);  
    }
  }
  


