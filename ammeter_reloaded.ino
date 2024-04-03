
 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);

void setup() {
lcd.init();
lcd.init();
lcd.backlight();
// put your setup code here, to run once:

Serial.begin(9600);

lcd.begin(16,2);

lcd.clear();

}

 

void loop() {

// put your main code here, to run repeatedly:

int voltage_value0 = analogRead(A0);

int voltage_value1 = analogRead(A1);

 

 int subraction_value =(voltage_value0 - voltage_value1) ;

 float temp_val = (subraction_value*0.00488);

 

 float current_value = (temp_val/20);

 Serial.print(current_value);

 lcd.setCursor(0,0);

 lcd.print("current value=");

 lcd.setCursor(0,1);

 lcd.print (current_value);

 lcd.print("A");

 delay(1000);

}
