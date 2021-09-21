/**
 *  @copyright (c) 2021 SumedhReddy
 *  @file    AcceleratedC++4-7.cpp
 *  @author  SumedhReddy
 *
 *  @brief solution
 *
 */

#include "AcceleratedC++4-7.hpp"

/**
 * @brief calculateAverage method is used to calculate average 
 * of vectors elements stored
 */

void vectorAverage::calculateAverage(){
  double input, sum, avg;
  int len;   // user input for length of the vector
  std::vector < double > average;
  std::cout << "Enter length of the vector:" << std::endl;
  std::cin >> len;
  std::cout << "Enter the numbers to store inside vector:" << std::endl;
  for (int i = 0; i < len; i++) {
    std::cin >> input;
    average.push_back(input);
  }
  // looping to calculate the sum of elements present inside the vector
  for (int j = 0; j < average.size(); j++) {
    sum += average[j];
  }
  // calculating average of vector elements
  avg = sum / average.size();
  std::cout << "Average of vector elements: " << avg << std::endl;
}

int main() {
  vectorAverage obj;
  obj.calculateAverage();
  return 0;
}