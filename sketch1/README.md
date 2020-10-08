# Sketch 1: Two LEDs

**[process.patrickjam.es/](https://process.patrickjam.es/2020/09/15/week-3-digital-output/)**

![sketch1 breadboard](/documentationAssets/sketch1_bb.png)
![sketch1 video](/documentationAssets/sketch1.gif)

```c++
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
```