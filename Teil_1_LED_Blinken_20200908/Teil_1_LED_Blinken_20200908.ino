/*
      Programm:       XXXXX
      Version :       1.0,  XX.XX.2020
      Programmierer:  CLA

      Hardware:       Arduino, 
*/


#define LED  13


void setup()
{
  pinMode (LED, OUTPUT);


}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
