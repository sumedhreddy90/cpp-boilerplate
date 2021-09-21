/**
 *  @copyright (c) 2021 SumedhReddy
 *  @file    SoftwareEngineering3-10.cpp
 *  @author  SumedhReddy
 *  @brief solution
 * 
 */

#include "SoftwareEngineering3-10.hpp"

/**
 * @brief data method stores student 
 * data entered by the user
 */

void courseGrader::data(int t) {
    int i;
    for (i = 0; i < t; i++) {
      std::cout << "Enter Student ID:";
      std::cin >> studentArray[i].id;
      std::cout << "Enter Grade:";
      std::cin >> studentArray[i].grade;
    }
  }
/**
 * @brief updateGrade method updates the grades of the 
 * students entered by the user
 */
  void courseGrader::updateGrade() {
    int iupdate, j, igrade;
    std::cout << "Grade Updation-> Enter Student ID:";
    std::cin >> iupdate;
    std::cout << "Grade Updation-> Enter new grade:";
    std::cin >> igrade;
    for (j = 0; j != studentArray[j].id; j++) {
      if (studentArray[j].id == iupdate) {
        studentArray[j].grade = igrade;
        std::cout << "New grade for the student with ID: " << studentArray[j].id << " is " << studentArray[j].grade << "\n";
        break;
      }
    }
  }
/**
 * @brief GPA method calculates the overall class grades of the 
 * students entered by the user
 */
  void courseGrader::GPA(int t) {
    int sum = 0, ij, gpa;
    for (ij = 0; ij < t; ij++) {
      sum += studentArray[ij].grade;
    }
    gpa = sum / t;
    std::cout << "GPA of the Class:" << gpa;
  }


int main() {

  int isoption, t; //inputs from user
  courseGrader studentObj; //object for the class courseGrader
  std::cout << "Please select below options:" <<
    "\n" <<
    "1. Insert Student data" <<
    "\n" <<
    "2. Update student grade" <<
    "\n" <<
    "3. class GPA \n";
  std::cin >> isoption;
  //switch statement to select user options
  switch (isoption) {
  case 1:

    std::cout << "Enter number of student to be inserted: ";
    std::cin >> t;
    std::cout << "Inserting Student data \n";
    studentObj.data(t);

  case 2:
    std::cout << "Updating grade of the Student \n";
    studentObj.updateGrade();

  case 3:
    std::cout << "Calculating grade point average of the class \n";
    studentObj.GPA(t);

  default:
    break;
  }

  return 0;
}