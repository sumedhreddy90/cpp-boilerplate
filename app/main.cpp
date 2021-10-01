/**
 *  @copyright (c) 2021 Sumedh Koppula, Pratik Bhujbal
 *  @file    main.cpp
 *  @author  Sumedh Koppula, Pratik Bhujbal
 *
 *  @brief Main method to feed input to PID controller and Compute 
 *         output to the PID controller
 * 
 */

#include <iostream>
#include <PID.hpp>

int main()
{
    PIDController pidObject(7,9,3);
    double output = pidObject.compute(90, 30);
    std::cout<< "Output for the given inputs to the PID controller: " << output << std::endl;
    return 0;
}
