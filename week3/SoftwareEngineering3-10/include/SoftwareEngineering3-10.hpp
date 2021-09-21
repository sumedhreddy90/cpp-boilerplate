/**
 *  @copyright (c) 2021 Sumedh Reddy Koppula
 *  @file    SoftwareEngineering3-10.hpp
 *  @author  SumedhReddy 
 *
 *  @brief Header
 *
 */

#pragma once

#include <iostream>

#include <string>

 struct studentInfo {
      int id;
      int grade;
    };
/**
 * @brief courseGrader class has a struct of array type
 * to store student data and data, udpdateGrade, GPA 
 * methods to evaluate student data
 */
class courseGrader {
  public:
  studentInfo studentArray[100];
  courseGrader();
  void data(int t);
  void updateGrade();
  void GPA(int t);
  
};

courseGrader::courseGrader(void) {

}