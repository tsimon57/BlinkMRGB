/*
  BlinkMRGB.h
  was - DigisparkPWM.h - Library for pwm on PB2 on ATTINY85.
  Created by Digistump
  Mod by tsimon for BlinkM
  Released into the public domain.
*/
#ifndef BlinkMRGB_h
#define BlinkMRGB_h


void BlinkMRGBBegin();
void DigisparkRGBDelay(int ms);
void BlinkMRGB(int r_val, int g_val, int b_val);

#endif