void setup(){
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}
void loop(){
  delay(50);
  digitalWrite(D0, 1);
  delay(1000);
  digitalWrite(D0, 0);
  delay(1000);
  digitalWrite(D1, 1);
  delay(1000);
  digitalWrite(D1, 0);
  delay(1000);
  digitalWrite(D2, 1);
  delay(1000);
  digitalWrite(D2, 0);
  delay(1000);
}
