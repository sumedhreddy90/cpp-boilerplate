/**
 *  @copyright (c) 2021 Sumedh Reddy Koppula
 *  @file    AcceleratedC++4-7.hpp
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
 * @brief data class has 2 methods, to grade and
 * display students data. Here I stored input data into an 
 * object using data struct. data is structure comprising students data
 */
struct data {
      std::vector < std::string > name;
      std::vector < std::vector < int > > grade;
      std::vector < int > finalGrade;
    };
class student {
 public:
    data student_data;
    void grader();
    void display();
    student();
}; 

student::student(void) {
  
}
