#ifndef _ZumoBot_h
#define _ZumoBot_h

#include <Wire.h>
#include <ZumoShield.h>

/**
 * Represents a Zumo Robot
 * 
 * Created by Aron Mar Nicholasson
 * Version: WIP
 * Updated: 24.09.2019
 */
class ZumoBot {

  private:
    // Zumo robot buzzer
    ZumoBuzzer buzzer;
    // ReflectanceSensor
    ZumoReflectanceSensorArray reflectanceSensors;
    // Zumo robot motors
    ZumoMotors motors;
    // Zumo robot push button
    Pushbutton button(ZUMO_BUTTON);
    // Last error (how far we were from the center of the line)
    int lastError = 0;
    // thickness of the line
    float lineThickness;
    // Max speed (todo: maybe use multiple speed for different angles)
    int MAX_SPEED; 
    // LED 13
    int LED_13 = 13;

  public:
    // Constructor for ZumoBot
    ZumoBot(float lineThickness);
    // Do calibration
    void init();
    // Set motor speed
    void setMotorSpeed();
};
#endif
