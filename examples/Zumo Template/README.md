## Zumo Robot Template

### Funksjoner

```c
QTR_THRESHOLD
```

Definerer hvor sensitiv sensorene skal være til omgivelser. Verdien rangerer mellom 200 og 1500, der 200 oppdager
hvit og 1000 og over oppdager svart.

```c
motors.setSpeed(left_motor_speed, right_motor_speed)
```

Setter hastigheten på venstre og høyre motor. Positive og negative verdier fastlår om roboten kjører framover eller 
bakover. Alle verdier fra -400 opptil 400 er gyldige. Første parameter i funksjonen velger hastigheten for venstre 
motor, og den andre velger hastigheten på høyre motor.

```c
delay(5000)
```

Setter program instruksjonene på pause (i dette tilfelle, 5000 millisekunder). Dersom hastigheten på motorene er satt 
før denne funksjonen er kalt, vil motorene fortsatt kjøre i samme hastighet og retning.
