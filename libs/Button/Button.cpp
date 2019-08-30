#include "Button.h"

/**
 * Member functions
 */

/**
 * Constructor for objects of ButtonByAron
 */
Button::Button(int pin) {
  buttonPin = pin;
}

/**
 * Checks if the button is pressed
 *
 * @param pin the pin for the button
 * @return returns true if button is pressed
 */
bool Button::isButtonPressed() {
  bool buttonPressed = false;
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    buttonPressed = true;
  } else {
    buttonPressed = false;
  }
  return buttonPressed;
}

/**
 * Checks if the state of the button has changed
 * (either pressed or released)
 *
 * @param pin the pin for the button
 * @return returns true if the state has changed
 */
bool Button::isButtonReleased() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != previousButtonState) {
    previousButtonState = buttonState;
    return buttonState;
  }
}

/*
Getters
 */

/**
 * Returns the state of the button
 *
 * @return the state of the button
 */
int Button::getButtonState() {
  return buttonState;
}

/**
 * Returns the pin for the button
 *
 * @return the pin for the button
 */
int Button::getButtonPin() {
  return buttonPin;
}