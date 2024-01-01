#include <DHT.h>;
#include <LiquidCrystal.h>;

DHT dht (13,DHT11); //initialise the DHT module
LiquidCrystal lcd(12,11,5,4,3,2); //initialise the lcd screen using pins lcd(rs, en, d4, d5, d6, d7)


void setup() {
dht.begin();
lcd.begin(16,2); //# columns, # rows
Serial.begin(9600); //begin the Serial monitor
lcd.print("Initialising...");
delay(2000);
lcd.clear();
}

void loop() {

float t = dht.readTemperature(); 
float h = dht.readHumidity();

Serial.print("Temperature ");
Serial.print(t);
Serial.println("C");
lcd.setCursor(0, 0);
lcd.print("Temp: ");
lcd.print(t);
lcd.print("C");

Serial.print("Humidity ");
Serial.print(h);
Serial.println("%");
lcd.setCursor(0, 1);
lcd.print("Humid: ");
lcd.print(h);
lcd.print("%");

delay(2000);
}
