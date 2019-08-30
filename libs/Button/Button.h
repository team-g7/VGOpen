#ifndef _Button_h
#define _Button_h

#include <Arduino.h>

/**
 * Represents a button
 *
 * Created by Aron Mar Nicholasson
 * Version: WIP
 * Updated: 02.07.2018
 */
class Button {
  private:
    // digitalPin for the button
    int buttonPin;
    // State of the button
    int buttonState;
    // Previous Button State
    int previousButtonState;
    // the debounce time (increase if the output flickers)
    int debounceDelay = 50;

  public:
    // Constructor for buttonByAron
    Button(int pin);
    // Checks if the button is pressed
    bool isButtonPressed();
    // Checks if the button has changed state (either pressed or released)
    bool isButtonReleased();
    // Returns the button state
    int getButtonState();
    // Returns the button pin
    int getButtonPin();
};
#endif