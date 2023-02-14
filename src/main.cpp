/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Alan                                             */
/*    Created:      Sat Feb 11 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// bR                   motor         1               
// bL                   motor         9               
// fR                   motor         11              
// fL                   motor         15              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <cmath>
#include <iostream>

#define PI 3.141592653589793238462643383279502884197

using namespace vex;

double getTopLeftmulti(double deg) {

  double P1 = -cos(deg*PI/180 + PI/4);
  double P2 = sin(deg*PI/180 + PI/4);
  /*
  this part is to scale to the larger of the two values, which means the motor
  % movement is based on the input there, rather than being choked here 
  */
  double s = fmax(fabs(P1), fabs(P2));
  double mpFL = P2/s;
  double mpFR = P1/s;
  double mpBL = P1/s;
  double mpBR = P2/s;
  return mpBL;
  /*
  these are the scaled power multipliers, which we can just do run_forever until reaching 
  a certain rotation count
  andy has no rizz!!!
  */   
}

double permadeg;

void t1() {
fL.spinFor(directionType::fwd, (permadeg*17.625)/(3.25*360), rotationUnits::rev, 95, velocityUnits::pct, false);
}
void t2() {
fR.spinFor(directionType::fwd, (permadeg*17.625)/(3.25*360), rotationUnits::rev, 95, velocityUnits::pct, false);
}
void t3() {
bL.spinFor(directionType::fwd, (permadeg*17.625)/(3.25*360), rotationUnits::rev, 95, velocityUnits::pct, false);
}
void t4() {
bR.spinFor(directionType::fwd, (permadeg*17.625)/(3.25*360), rotationUnits::rev, 95, velocityUnits::pct, false);
}

void travel(double deg) {

  double P1 = -cos(deg*PI/180 + PI/4);
  double P2 = sin(deg*PI/180 + PI/4);
  /*
  this part is to scale to the larger of the two values, which means the motor
  % movement is based on the input there, rather than being choked here 
  */
  double s = fmax(fabs(P1), fabs(P2));
  double mpFL = P2/s;
  double mpFR = P1/s;
  double mpBL = P1/s;
  double mpBR = P2/s;
  // return mpFL;
  /*
  these are the scaled power multipliers, which we can just do run_forever until reaching 
  a certain rotation count
  andy has no rizz!!!
  */ 
}

void movement(double dist, double deg, double velo) {

  double P1 = -cos(deg*PI/180 + PI/4);
  double P2 = sin(deg*PI/180 + PI/4);
  /*
  this part is to scale to the larger of the two values, which means the motor
  % movement is based on the input there, rather than being choked here 
  */
  double s = fmax(fabs(P1), fabs(P2));
  double mpFL = P2/s;
  double mpFR = P1/s;
  double mpBL = P1/s;
  double mpBR = P2/s;

}

void rot(double deg, double rate) {
  thread t11 = thread(t1());
  thread t12 = thread(t2());
  thread t13 = thread(t3());
  thread t14 = thread(t4());
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
}
