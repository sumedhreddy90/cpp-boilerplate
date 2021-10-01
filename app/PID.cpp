/**
 *  @copyright (c) 2021 Sumedh Koppula, Pratik Bhujbal
 *  @file    main.cpp
 *  @author  Sumedh Koppula, Pratik Bhujbal
 *
 *  @brief Class members source file 
 * 
 */

#include <PID.hpp>

double PIDController::compute(double targetSetpoint, double actualVelocity)
{
    // write your compute code here
    return 0;
}
/**
 * Updates new values to member variables of the class
 */
void PIDController::updateParameters(double kp, double ki, double kd)
{
    this->Kp = kp;
    this->Ki = ki;
    this->Kd = kd;
}
/// Return value of Kp member variable
double PIDController::getValueKp()
{
    return this->Kp;
}
/// Return value of Ki member variable
double PIDController::getValueKi()
{
    return this->Ki;
}
/// Return value of Kd member variable
double PIDController::getValueKd()
{
    return this->Kd;
}