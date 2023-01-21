void setup()
{
pinMode(D5,OUTPUT);
}
void loop()
{
tone(D5,1000);
delay(500);
noTone(D5);
delay(500);
}
