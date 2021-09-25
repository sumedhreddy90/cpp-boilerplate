/**
 *  @copyright (c) 2021 Sumedh Reddy
 *  @file    softwareEngineering_9_4.cpp
 *  @author  SumedhReddy
 *
 *  @brief solution
 *
 */

#include "softwareEng_9_4.hpp"

/**
 * @brief initial function without extraction
 */
void printer::printPosition() {
int i, j;
char text[1024] = "1234567890";
int text_length = 10;
char array_to_search1[4] = "23";
int array_to_search1_length = 2;
int position1 = -1;
for (i = 0; i < text_length - array_to_search1_length + 1; i++) {
  bool found = true;
  for (j = 0; j < array_to_search1_length; j++)
    if (text[i + j] != array_to_search1[j])
      found = false;
  if (found) {
    position1 = i;
    break;
  }
}
std::cout<<position1;
}

int main() {
    printer printObj;
    printObj.printPosition();
}