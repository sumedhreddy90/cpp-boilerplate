/**
 *  @copyright (c) 2021 Sumedh Koppula, Pratik Bhujbal
 *  @file    PID.cpp
 *  @author  Sumedh Koppula, Pratik Bhujbal
 *
 *  @brief Class members source file 
 * 
 */

#include <PID.hpp>
double PIDController::compute(double currentValue, double setPoint) {
  double error = setPoint - currentValue;
  double output = (Kp * error) + (Ki * error * Dt) + (Kd * error / Dt);
  
  if (output > Max) {
    output = Max;
  }
  if (output < Min) {
    output = Min;
  }
  
  return output;
}
/**
 * Updates new values to member variables of the class
 */
void PIDController::updateParameters(double kp, double ki, double kd) {
  this->Kp = kp;
  this->Ki = ki;
  this->Kd = kd;
}
/// Return value of Kp member variable
double PIDController::getValueKp() {
  return Kp;
}
/// Return value of Ki member variable
double PIDController::getValueKi() {
  return Ki;
}
/// Return value of Kd member variable
double PIDController::getValueKd() {
  return Kd;
}
double PIDController::getValueDt() {
  return Dt;
}
