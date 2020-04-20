#include <LiquidCrystal.h>

String value;
int i = 0;

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  Serial.begin(9600);
  Serial.flush();
  lcd.begin(16, 2);
  lcd.setCursor(1,0);
  lcd.write("Welcome to The");
  lcd.setCursor(1,1);
  lcd.write("Email Notifier");
}

void loop() {

  if (Serial.available()) {
    value = Serial.readString();
    Serial.print("recived");
    Serial.println(value);
    int b = value.toInt();

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(b);
      lcd.write(" unread emails");
      delay(1000);


  }
}
