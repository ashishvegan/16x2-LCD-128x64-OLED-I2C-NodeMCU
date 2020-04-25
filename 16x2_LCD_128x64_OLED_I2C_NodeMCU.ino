#include<LiquidCrystal_I2C.h>
#include<Adafruit_SSD1306.h>
#define RESET LED_BUILTIN
LiquidCrystal_I2C lcd(0x27, 20, 4);
Adafruit_SSD1306 oled(RESET);
int count = 0;
void setup()
{
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.display();
  delay(1000);
  oled.clearDisplay();
  lcd.init();
  lcd.backlight();
  oled.setTextColor(WHITE);
}
void loop()
{
  // LCD Code
  lcd.clear();
  lcd.setCursor(0,0); // (Column,Row)
  lcd.print("WELCOME TO");
  lcd.setCursor(0,1);
  lcd.print("SISTec, Bhopal");

  //OLED Code
  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setCursor(0,0);
  oled.print("WELCOME");
  oled.println();
  oled.print("TO");
  oled.println();
  oled.print("SISTec");
  oled.display();
  delay(1000);


    // LCD Code
  lcd.clear();
  lcd.setCursor(0,0); // (Column,Row)
  lcd.print("COUNTER");
  lcd.setCursor(0,1);
  lcd.print(count);

  //OLED Code
  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setCursor(0,0);
  oled.print("COUNTER");
  oled.println();
  oled.print("-------");
  oled.println();
  oled.print(count);
  oled.display();
  delay(1000);
  count++;
}
