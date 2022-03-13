void setup()
{
  Serial.begin(9600);     //Computer Serial
  Serial1.begin(115200);  //Microcontroller Serial

  Serial.println("Initializing...");
  delay(1000);
}

void loop()
{
  updateSerial();
}

void updateSerial()
{
  delay(500);
  while (Serial.available())
  {
    Serial1.write(Serial.read());
  }
  while (Serial1.available())
  {
    Serial.write(Serial1.read());
  }
}
