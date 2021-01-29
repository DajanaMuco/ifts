void setup() 
{
  pinMode(13, OUTPUT); // CONFIGURO IL PIN 13 COME OUTPUT
}

void loop()
{
 digitalWrite(13, HIGH); //  ACCENDO IL PIEDINO 13
 delay(2000); // ASPETTA 2 SECONDI
 digitalWrite(13, LOW); //SPENGO IL PIEDINO 13
 delay(5000); // ASPETTA 5 SECONDI
}
