#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  Wire.begin(21, 22);
  lcd.init();
  
  // Blink the backlight 3 times to test communication
  for(int i = 0; i < 3; i++) {
    lcd.backlight();
    delay(500);
    lcd.noBacklight();
    delay(500);
  }
  lcd.backlight(); // Leave it on
  lcd.print("ADEOYE");
}

void loop() {}
