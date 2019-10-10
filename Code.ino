
//Project CT World
//Like and Subscribe
//Project By CT World
//Like and Subscribe

#include<LiquidCrystal_I2C.h>
#include<Wire.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.init(); // Initialises the LCD Display
  lcd.backlight(); // Turns on the backlight of the display
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("By CT World"); //Prints whatever we want on the screen
  lcd.setCursor(0, 1);  //Sets the cursor point to the First Charecter of the second line
  lcd.print("Like and Sub");
  delay(2000);
  lcd.clear();
  lcd.print("Hello World");
  delay(2000);
  lcd.clear();  //Clears the screen
}
