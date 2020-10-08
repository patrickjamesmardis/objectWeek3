void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}
int d = 0;
void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  delay(d);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  delay(d);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  delay(d);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  delay(d);
  d += 100;
  if (d >= 2000) {
    d = 0;  
  }
}
