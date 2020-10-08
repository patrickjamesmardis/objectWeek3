# Week 3 | Digital Output

**[process.patrickjam.es/](https://process.patrickjam.es/2020/09/15/week-3-digital-output/)**

## [Sketch 1](/sketch1): Two LEDs
![sketch1 breadboard](/documentationAssets/sketch1_bb.png)

The first sketch of this week creates alternating LEDs. The cathodes of the LEDs are placed in the same row and connected to the GND pin. One anode is connected to pin 13 and the other to pin 12. The LED connected to pin 13 lights for 1 second then turns off while the LED connected to pin 12 lights for 1 second.

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

## [Sketch 2](/sketch2): Three LEDs
![sketch2 breadboard](/documentationAssets/sketch2_bb.png)

The second sketch of the week is similar to the first, with a third pin added. The pins are placed beside each other with anodes in odd rows and cathodes in even rows. Row 1 is connected to pin 13, row 3 is connected to pin 12, and row 5 is connected to pin 8. Rows 2, 4, and 6 are connected to the bus strip’s negative (-) column. This column is connected to the GND pin. The LED in rows 1 and 2 turns on for 500 milliseconds. Then, the LED in rows 3 and 4 turns on for 500 milliseconds. Next, the LED in rows 5 and 6 turns on for 500 milliseconds. Finally, the LED in rows 3 and 4 turns on again for 500 milliseconds. The loop then begins again with the first LED.

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

## [Sketch 3](/sketch3): Three LEDs with increasing duration

![Sketch3 breadboard](/documentationAssets/sketch3_bb.png)

The third sketch for this week is identical to the second; however, instead of each LED staying on for 500 milliseconds, they each begin at 0 milliseconds and increase by 100 milliseconds on every iteration of the loop. So, after the first loop, each LED will remain on for 100 milliseconds, then 200 milliseconds on the next loop. After the LEDs reach a duration of 2000 milliseconds, the duration resets to 0 and continues to increase in increments of 100 milliseconds.

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

## [Sketch 4](/sketch4): Two LEDs

![Sketch4 Breadboard](/documentationAssets/sketch4_bb.png)

The final sketch for this week uses two LEDs placed in rows one and two. They are placed in opposite orientations of each other, so the first LED’s anode is in row 1 while the second LED’s anode is in row 2. Likewise, the first LED’s cathode is in row 2, while the second LED’s cathode is in row 1. Row 1 is then connected to pin 13, and row 3 is connected to pin 12. The first LED (anode in row 1) lights for 1 second then turns off while the second LED lights for 1 second.

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