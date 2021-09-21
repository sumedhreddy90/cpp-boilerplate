/**
 *  @copyright (c) 2021 Sumedh Reddy Koppula
 *  @file    AcceleratedC++4-5.hpp
 *  @author  SumedhReddy 
 *
 *  @brief Header
 *
 */

#pragma once

#include <iostream>

#include <string>

#include <sstream>

#include <algorithm>

#include <iterator>

#include <vector>

/**
 * @brief Reader class has Read and uniquewordscount methods, to read
 * input string, count words and unique words stored
 * in a vector of string type.
 */
class Reader {
 public:
    std::vector < std::string > readString;
    std::vector < std::string > words;
    Reader();
    int read(std::string s);
    int uniquewordscount(const std::vector < std::string > & words);
};

Reader::~Reader(void){

}