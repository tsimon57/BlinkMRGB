BlinkMRGB
=========

RGB function for writing to BinkM LED's in your own code

Library for writing RGB values to an LED on a BlinkM using software PWM.
Works on any pins. But only work on ATTiny85

This is used when you blow away the firmware on the BlinkM and load your
own code using an ICSP. Heavily lifted from the DigiSpark distribution,
which seems to have come from some AVR docs.

Also cleaned up some hardcoded dependencies on port numbers.
