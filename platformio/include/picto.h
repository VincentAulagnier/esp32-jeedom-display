#ifndef __PICTO_H__
#define __PICTO_H__

#include "Arduino.h"

class Picto
{
public:
  // Constructeurs
  Picto();

  //Accesseurs et mutateurs


  // Autres méthodes


private:
    int16_t x;
    int16_t y;
    uint8_t* bitmap;
    int16_t width;
    int16_t heigh;
};

#endif
