#include <Servo.h>


const int potX = A3;
const int potY = A4;
Servo servoX;
Servo servoY;

int positionX; // this is gonna be the measured resistance of the potentiometer
int positionY;
int mapX;      // I am now realizing that these are completely useless.
int mapY;

void setup() {
  pinMode(potX, INPUT);
  pinMode(potY, INPUT);
  servoX.attach(A5);
  servoY.attach(A2);
  servoX.write(0);
  servoY.write(0);
}

void loop() {
 positionX = analogRead(potX);
 positionY = analogRead(potY);
 mapX = map(positionX, 0, 1023, 0, 160);
 mapY = map(positionX, 0, 1023, 0, 160);
 servoX.write(positionX);
 servoY.write(positionY);
  

}
