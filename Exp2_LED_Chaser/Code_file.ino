int i;
void setup()
{

  for(i=10;i<=13;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
for(i=10;i<=13;i++)
{
  digitalWrite(i,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  delay(500);
}
}
