#include <ZumoShield.h>    // hoved bibliotek for Zumo roboten

#define FORWARD_SPEED     200     // hvor fort motorene skal kjøre fram/tilbake

#define TURN_SPEED        200     // hvor fort roboten skal snu
#define TURN_DURATION     200     // hvor lenge den skal snu

#define REVERSE_SPEED     -200    // hvor fort roboten rygger bakover
#define REVERSE_DURATION  200     // hvor lenge roboten skal kjøre bakover

#define QTR_THRESHOLD     1500     // hvor sensitiv sensoren skal være til omgivelser
#define NUM_SENSORS       6       // antall gjenkjennings-sensorer

ZumoMotors motors;                                                  // Zumo motorene
Pushbutton start_button(ZUMO_BUTTON);                               // knappen på Zumoen ved ON/OFF spaken

ZumoReflectanceSensorArray reflectanceSensors(QTR_NO_EMITTER_PIN);  // Zumo sensorer på baksiden av metallplaten

int sensor_values[NUM_SENSORS];                                     // en plassholder for alle 6 sensor verdiene
int c[NUM_SENSORS];    

// Funksjoen kjører på starten og bare èn gang
void setup() {
  // Zumo roboten er stillestående helt til knappen blir trukket på og sluppet
  start_button.waitForButton();
  start_button.waitForRelease();

  // Vent 5 sekunder før roboten beveger seg
  delay(5000);

}

// Funksjonen kjøres om og om igjen etter den er ferdig med sine instrukser
void loop() {
  // dumper sensor-verdiene til vår plassholder
  reflectanceSensors.read(sensor_values);

  // tar ut verdiene fra de 2 sensorene vi er interessert i
  int outer_left_sensor = sensor_values[0];
  int outer_right_sensor = sensor_values[5];

  if (outer_left_sensor < QTR_THRESHOLD) {
    // dersom den ytterste sensoren til venstre oppdager linjen, kjør bakover og snu til høyre

    // kjør bakover i en hastighet på "REVERSE_SPEED" i "REVERSE_DURATION" millisekunder
    motors.setSpeeds(REVERSE_SPEED, REVERSE_SPEED);
    delay(REVERSE_DURATION);

    // venstre hjul kjører framover, mens høyre hjør bakover i "TURN_DURATION" millisekunder
    motors.setSpeeds(TURN_SPEED, -TURN_SPEED);
    delay(TURN_DURATION);

    motors.setSpeeds(FORWARD_SPEED, FORWARD_SPEED);
  } else if (outer_right_sensor < QTR_THRESHOLD) {
    // dersom den ytterste sensoren til høyre oppdager linjen, kjør bakover og snu til venstre
    motors.setSpeeds(-REVERSE_SPEED, -REVERSE_SPEED);
    delay(REVERSE_DURATION);
    
    motors.setSpeeds(-TURN_SPEED, TURN_SPEED);
    delay(TURN_DURATION);
    
    motors.setSpeeds(FORWARD_SPEED, FORWARD_SPEED);
  } else {
    // dersom sensorene ikke har oppdaget linjen, kjør framover
    motors.setSpeeds(FORWARD_SPEED, FORWARD_SPEED);
  }
}
