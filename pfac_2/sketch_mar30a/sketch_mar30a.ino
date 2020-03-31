#include<EEPROM.h>
const int addr = 0;

void setup() {
  // put your setup code here, to run once:
  EEPROM.write(4*addr,0L);
}

void loop() {
  // put your main code here, to run repeatedly:

}
