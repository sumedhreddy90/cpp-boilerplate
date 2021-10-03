/**
 *  @copyright (c) 2021 Sumedh Koppula, Pratik
 *  @file    PID.hpp
 *  @author  Sumedh Koppula, Pratik
 *
 *  @brief Declaration of the PID class and its members 
 * 
 */

#pragma once

#include <iostream>

/**
 * @brief The class PIDController has private members Kp, Ki, Kd, and a public member
 * function to compute the new velocity given the input parameters such as
 * targetSetpoint and actualVelocity
 *
 */
class PIDController {
 private:
  double Kp;
  double Ki;
  double Kd;
  double Dt;
  double Max;
  double Min;
  double Integral;
  double _errorFeedback;

 public:
  PIDController(double kp, double ki, double kd, double dt, double max,
                double min)
      :
      Kp(kp),
      Ki(ki),
      Kd(kd),
      Dt(dt),
      Max(max),
      Min(min),
      Integral(0),
      _errorFeedback(0) {
  }

  /**
   * @brief Computes the output based on the defined gains.
   *
   * @param curentValue A double which holds the current process value
   * @param setPoint A double which holds the setpoint value
   * @return A double which outputs computed using the gains.
   */
  double compute(double currentValue, double setPoint);

  /**
   * @brief update kp,ki,kd values for PIDController class
   * @param kp - proportional gain
   * @param ki - integral gain
   * @param kd - differential gain
   */
  void updateParameters(double kp, double ki, double kd);
  /**
   * @brief get value of ki
   * @return Ki value of PIDController
   */
  double getValueKi();
  /**
   * @brief get value of kp
   * @return kp value of PIDController
   */
  double getValueKp();
  /**
   * @brief get value of kd
   * @return kd value of PIDController
   */
  double getValueKd();
};
