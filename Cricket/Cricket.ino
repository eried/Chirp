#include <Arduboy2.h>
Arduboy2 arduboy;
BeepPin1 beep;

void setup() {
  arduboy.begin();
  arduboy.clear();
  arduboy.display();
  beep.begin(); // Set up the hardware for playing tones
}

void loop() {
  for (int i = 0; i < 10; i++)
  {
    beep.tone(beep.freq(random(7000, 9000)));
    arduboy.delayShort(6);
  }

  beep.tone(beep.freq(random(14000, 16000)));
  arduboy.delayShort(random(20, 100));

  for (int i = 0; i < 10; i++)
  {
    beep.tone(beep.freq(random(4000, 5000)));
    arduboy.delayShort(6);
  }

  beep.noTone();
  delay(random(1 * 60 * 1000, 15 * 60 * 1000));
}
