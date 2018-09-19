#include <LiquidCrystal.h> // including LiquidCrystal library

LiquidCrystal lcd (A0, A1, A2, A3, A4, A5); //Defines the pins of the lcd

void setup(){ //this is the setup, only runs when arduino starts
  lcd.clear(); //Removes anything on the lcd
  lcd.begin(16, 2); //Defines LCD size
}

void loop(){ //This is where your main code goes
  lcd.setCursor(0, 0); //Sets cursor to beginning
  lcd.print("   Hi Youtube   "); //This is where you put your text
  //(Remove this part to add a second line)lcd.setCursor(0, 0);
  //(And this)lcd.print("   Hi Youtube   ");
}
