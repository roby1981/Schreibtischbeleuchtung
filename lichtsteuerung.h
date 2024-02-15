#ifndef lichtsteuerung_h
  #define lichtsteuerung_h

  #include <FastLED.h>
  
  #define NUM_LEDS 297
  #define DATA_PIN 14
  #define CLOCK_PIN 13

  CRGB leds[NUM_LEDS];

  class LedStreifen
  {
    private:
      int gruen;
      int rot;
      int blau;

    public:
      LedStreifen(int gruen, int rot, int blau);
      ~LedStreifen();
  };

#endif