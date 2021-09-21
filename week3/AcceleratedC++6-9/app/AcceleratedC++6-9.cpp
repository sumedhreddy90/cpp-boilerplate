/**
 *  @copyright (c) 2021 SumedhReddy
 *  @file    AcceleratedC++6-9.cpp
 *  @author  SumedhReddy
 *  @brief solution
 *
 */

#include "AcceleratedC++6-9.hpp"

/**
 * @brief Method to concatenate vector data into single string
 */

  std::string concatenator::concat_v(const std::vector < std::string > & stringVector) {
  std::string s;   // accumates all elements of vector into single stream
  s = accumulate(stringVector.begin(), stringVector.end(), std::string());
  return s;
}

int main() {
  concatenator obj;
  std::string input, con;
  std::vector < std::string > stringData;
  std::cout << "Enter 10 random string data into vector:" << std::endl;
  // loop to add 10 random strings into vector
  for (int i = 0; i < 10; i++) {
    std::cin >> input;
    stringData.push_back(input);
  }

  con = obj.concat_v(stringData);
  std::cout << "Concatenation:" << con << std::endl;

  return 0;
}