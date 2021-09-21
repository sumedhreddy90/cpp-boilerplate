/**
 *  @copyright (c) 2021 Sumedh Reddy
 *  @file    AcceleratedC++3-5.cpp
 *  @author  SumedhReddy
 *
 *  @brief solution
 *
 */

#include "AcceleratedC++3-5.hpp"

/**
 * @brief grader method calculates the grades of the 
 * students entered
 */
void student::grader() {
    std::vector < int > temp;
    int sum = 0;
    for (int q = 0; q < student_data.grade.size(); q++) {
      temp = student_data.grade[q];
      sum = 0;
      for (unsigned int m = 0; m < temp.size(); m++) {
        sum = sum + temp[m];
      }
      student_data.finalGrade.push_back(sum);
    }
  }

/**
 * @brief display method displays the students data  
 * with name and final/overall grade
 */
  void student::display() {
    std::cout << "Displaying Student data:\n";
    grader();
    for (unsigned int i = 0; i < student_data.name.size(); i++) {
      std::cout << "Student Name: " << student_data.name[i] << ", " << "Overall Grade:" << student_data.finalGrade[i] << std::endl;
    }
  }

int main() {
  student obj;   // object for student class
  std::string stuName;   // variable to capture student name
  // variable t is for number of students data to be inserted
  // variable g is for number of grades to each student
  int t, g, m;
  std::vector < int > stuGrade;
  std::cout << "Enter number of Students data to be inserted:";
  std::cin >> t;
  for (int k = 0; k < t; k++) {
    std::cout << "Enter the name of the student:";
    std::cin >> stuName;
    // inserting student name into vector of struct data type student_data
    obj.student_data.name.push_back(stuName);
    std::cout << "Enter the number of grades to enter: ";
    std::cin >> g;
    stuGrade.clear();
    // looping to get grades from user for a partiular student
    for (int i = 0; i < g; i++) {
      std::cout << "Enter the grade:" << i + 1 << " for the student:" << std::endl;
      std::cin >> m;
      stuGrade.push_back(m);
    }
    // pushing grades into vector named grade
    obj.student_data.grade.push_back(stuGrade);
  }

  obj.display();    // display method to display student data with final grades
  return 0;
}