# Sketch 4: Two LEDs

**[process.patrickjam.es/](https://process.patrickjam.es/2020/09/15/week-3-digital-output/)**

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

![sketch4 breadboard](/documentationAssets/sketch4_bb.png)
![sketch4 video](/documentationAssets/sketch4.gif)