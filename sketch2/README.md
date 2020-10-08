# Sketch 2: Three LEDs

**[process.patrickjam.es/](https://process.patrickjam.es/2020/09/15/week-3-digital-output/)**

![sketch2 breadboard](/documentationAssets/sketch2_bb.png)
![sketch2 video](/documentationAssets/sketch2.gif)

```c++
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  delay(500);
}

```