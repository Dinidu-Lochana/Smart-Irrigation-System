// include the library code: 
#include <LiquidCrystal.h> //library for LCD 

// initialize the library with the numbers of the interface pins 
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); 

// defines pins numbers
const int SensorPin = A0;

void setup() 
{  
  lcd.begin(20, 4); // set up the LCD's number of columns and rows:
  lcd.setCursor(0,0); // set the cursor position:
  lcd.print("  THE BRIGHT LIGHT    ");
  lcd.setCursor(0,1);
  lcd.print("SOIL MOISTURE SENSOR");
}
void loop() 
{
  int Val = analogRead(SensorPin);
    // Prints Message on the LCD
  int Moisture = map(Val,0,1023,0,100);
  lcd.setCursor(0,3); 
  lcd.print("Soil Moisture: "); 
  lcd.print(Moisture);
  lcd.print("%   "); 
}


