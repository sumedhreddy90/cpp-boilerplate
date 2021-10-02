# C++ Boilerplate
[![Build Status](https://app.travis-ci.com/sumedhreddy90/cpp-boilerplate.svg?branch=Group8-PairA)](https://app.travis-ci.com/sumedhreddy90/cpp-boilerplate.svg?branch=Group8-PairA)
[![Coverage Status](https://coveralls.io/repos/github/sumedhreddy90/cpp-boilerplate/badge.svg?branch=Group8-PairA)](https://coveralls.io/github/sumedhreddy90/cpp-boilerplate?branch=Group8-PairA)
---
## ACME Robotics - PID Controller Design and Implementation for ACME TX9 Mobile Robot

At ACME Robotics mobile robots are available in a wide variety of configurations with greater flexibility and safety than previous generations. We are designing a next generation PID controller for our new TX9 mobile robot.

## Overview
A PID controller is a control loop feedback mechanism that calculates the difference between a desired setpoint and the actual output from a process, and uses the result to apply a correction to the process. PID stands for Proportional, Integral, Derivative.

![image](https://user-images.githubusercontent.com/24978535/135656765-ca36cfe9-07fd-474a-9798-93efe46e4845.png)

## Our Implementation Details
- Input parameter to PIDController( kp, ki, kd, dt, max, min).
- Design Implementaion should be done on PIDController::compute(curentValue, setPoint).
- Given Gains, sampling time, Max, Min, Integral, errorFeedback to PIDController, compute() method should retun a output which of double type.
- Compute method should pass the below test to consider design is correct.
## UML Diagram

![image](https://user-images.githubusercontent.com/24978535/135701907-ead1b202-83d6-4bdb-909f-685462d6491e.png)

## Compiling and Running
``` bash
mkdir -p ~/workspace
cd ~/workspace
git clone -b Group8-PairA https://github.com/sumedhreddy90/cpp-boilerplate.git
cd cpp-boilerplate
mkdir build
cd build
cmake ..
make

To run tests: ./test/cpp-test
To run program: ./app/shell-app
```
## Contributors

Part A:  
Sumedh Reddy Koppula (Driver)   
Github URL: https://github.com/sumedhreddy90

Pratik Bhujbal (Navigator)  
Github URL: https://github.com/Prat33k-dev

