/**
 *  @copyright (c) 2021 Sumedh Reddy Koppula
 *  @file    SoftwareEngineering9-4.hpp
 *  @author  SumedhReddy 
 *
 *  @brief Header
 *
 */

#pragma once

#include <iostream>

#include <string>

#include <vector>

#include <numeric>

/**
 * @brief 
 * printer is a class to extract a new method from printposition, 
 * The motivation behind solving this problem
 * is to implement method extraction for code refractory using 
 * input method
 */
class printer {
 public:
    int input();
    void printPosition(int t_length, int a_length_search, char* text,
    char* array_to_search1, int position);
    printer();
};

 printer::printer(void){
}
