/* @author: Tomas de Camino Beck
 * April 2016 
 * www.funcostarica.org

Made for teaching poruposes www.funcostarica.org
Released under MIT License
Copyright (c) 2016 Tomas de-Camino-Beck
 */

//use remote library
#include "IRremote.h"


//Motor pin aassignments for S4A EDU controller
// http://www.crcibernetica.com/s4a-edu-robotic-controller/
#define LEFTDIR 10
#define RIGHTDIR 11
#define LEFTSPEED 5
#define RIGHTSPEED 6


//Run this function on the setup to assign pins
void setMotors() {
  pinMode(LEFTDIR, OUTPUT);
  pinMode(LEFTSPEED, OUTPUT);
  pinMode(RIGHTDIR, OUTPUT);
  pinMode(RIGHTSPEED, OUTPUT);
  digitalWrite(LEFTDIR, LOW);
  digitalWrite(RIGHTDIR, LOW);
}


//*******Movement functions ********/
//two options with or without delay time
void forward(int mSpeed) {
  digitalWrite(LEFTDIR, LOW);
  digitalWrite(RIGHTDIR, LOW);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);

}

void forward(int mSpeed, int t) {
  digitalWrite(LEFTDIR, LOW);
  digitalWrite(RIGHTDIR, LOW);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);
  delay(t);
}

void forward(int lSpeed, int rSpeed, int t) {
  digitalWrite(LEFTDIR, LOW);
  digitalWrite(RIGHTDIR, LOW);
  analogWrite(LEFTSPEED, lSpeed);
  analogWrite(RIGHTSPEED, rSpeed);
  delay(t);
}

void backward(int mSpeed) {
  digitalWrite(LEFTDIR, HIGH);
  digitalWrite(RIGHTDIR, HIGH);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);

}
  
void backward(int mSpeed, int t) {
  digitalWrite(LEFTDIR, HIGH);
  digitalWrite(RIGHTDIR, HIGH);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);
  delay(t);
}

void backward(int lSpeed, int rSpeed, int t) {
  digitalWrite(LEFTDIR, HIGH);
  digitalWrite(RIGHTDIR, HIGH);
  analogWrite(LEFTSPEED, lSpeed);
  analogWrite(RIGHTSPEED, rSpeed);
  delay(t);
}

void pivotLeft(int mSpeed) {
  digitalWrite(LEFTDIR, HIGH);
  digitalWrite(RIGHTDIR, LOW);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);
}

void pivotLeft(int mSpeed, int t) {
  digitalWrite(LEFTDIR, HIGH);
  digitalWrite(RIGHTDIR, LOW);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);
  delay(t);
}

void pivotRight(int mSpeed) {
  digitalWrite(LEFTDIR, LOW);
  digitalWrite(RIGHTDIR, HIGH);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);
}

void pivotRight(int mSpeed, int t) {
  digitalWrite(LEFTDIR, LOW);
  digitalWrite(RIGHTDIR, HIGH);
  analogWrite(LEFTSPEED, mSpeed);
  analogWrite(RIGHTSPEED, mSpeed);
  delay(t);
}

void stopMotors() {
  digitalWrite(LEFTDIR, LOW);
  digitalWrite(RIGHTDIR, LOW);
  analogWrite(LEFTSPEED, 0);
  analogWrite(RIGHTSPEED, 0);
}

//moves randomly forward 
void randomForward(int t){
  int l = random(0,100);
  int r = random(0,100);
  forward(l,r,t);
}

//pivot randomly left or right
void randomPivot(int p, int t){
  int r = random(50);
  int rT= random(0,t);
  (r>25)?pivotLeft(p):pivotRight(p);
  delay(rT);
}

//***** sensor functions ********

void setSensor(int sensorPin){
 pinMode(sensorPin,INPUT);
}

//for analog pins
int readSensor(int sensorPin){
  return analogRead(sensorPin);
}

//a simple algorithm so the robot turns to the highest light source
void pointLight(int sensorPin){
  pivotLeft(100,50);
  int left = analogRead(A0);
  pivotRight(100,100);
  int right = analogRead(A0);
  if(right>left) pivotLeft(100,120);
}

