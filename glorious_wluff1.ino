// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(200); // ligado por 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(100); // Apagado 1000 millisecond(s)
  
 digitalWrite(7, HIGH);
  delay(200); // ligado por 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(300); // Apagado 1000 millisecond(s)
  
  digitalWrite(10, HIGH);
  delay(400); // ligado por 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(500); // Apagado 1000 millisecond(s)
  
  digitalWrite(13, HIGH);
  delay(600); // ligado por 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(700); // Apagado 1000 millisecond(s)
  
}