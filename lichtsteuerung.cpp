#include <FastLED.h>
#include "lichtsteuerung.h"


LedStreifen::LedStreifen(int rot, int gruen, int blau) {
  this->rot=rot;
  this->gruen=gruen;
  this->blau=blau;
}