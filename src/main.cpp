#include <Arduino.h>
#include <LiquidCrystal.h>

// Initialize the LCD library with the numbers of
// the interface pins.
LiquidCrystal lcd(7,8,9,10,11,12);

void setup() {
    lcd.begin(16, 2);   // CxR.
    lcd.print("I LOVE YOU!!!");
}

void loop() {
    // Set the cursor to column/line (0 indexed).
    lcd.setCursor(0, 1);
    lcd.print(millis() / 1000); // Time since reset.
}