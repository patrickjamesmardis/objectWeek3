# Sketch 3: Three LEDs with increasing duration

**[process.patrickjam.es/](https://process.patrickjam.es/2020/09/15/week-3-digital-output/)**

![sketch3 breadboard](/documentationAssets/sketch3_bb.png)
![sketch3 video](/documentationAssets/sketch3.mp4)

```c++
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
```