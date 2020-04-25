#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);
void setup()
{
  lcd.init();
  lcd.backlight();
}
void loop()
{
  lcd.clear();
  lcd.setCursor(0,0); // (Column,Row)
  lcd.print("WELCOME TO");
  lcd.setCursor(0,1);
  lcd.print("SISTec, Bhopal");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0); // (Column,Row)
  lcd.print("16x2 LCD");
  lcd.setCursor(0,1);
  lcd.print("with NodeMCU");
  delay(2000);
}
