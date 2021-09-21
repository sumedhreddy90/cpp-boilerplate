/**
 *  @copyright (c) 2021 Sumedh Reddy
 *  @file    AcceleratedC++4-5.cpp
 *  @author  SumedhReddy
 *
 *  @brief solution
 *
 */

#include "AcceleratedC++4-5.hpp"

/**
 * @brief read method is used to read input string 
 * words, count them and store in a vector
 */

  int Reader::read(std::string s) {
    // using istringstream to stream the string into individual words
    // copy all identified words into a vector named words
    std::istringstream iss(s);
    copy(std::istream_iterator < std::string > (iss),
      std::istream_iterator < std::string > (),
      back_inserter(words));
    return words.size();
  }

/**
 * @brief uniquewordscount method is used to 
 * count unique words and store in a vector
 */

  int uniquewordscount(const std::vector < std::string > & words) {
    // storing vector words into tempWords vector
    std::vector < std::string > tmpWords = words;

    typedef std::vector < std::string > ::size_type vec_sz;
    const vec_sz numElements = tmpWords.size();

    if (numElements == 0) return 0;
    else if (numElements == 1) return 1;
    // sorting temporary words
    sort(tmpWords.begin(), tmpWords.end());
    const vec_sz numLoops = numElements - 1;

    vec_sz A = 0;
    vec_sz B = 1;
    int numUniqueWords = 1;
    for (vec_sz i = 0; i != numLoops; ++i) {
      if (tmpWords[B] != tmpWords[A])
        ++numUniqueWords;
      ++A;
      ++B;
    }

    return numUniqueWords;
  }

int main() {
// Creating an object for the class Reader
  Reader readObj;
  std::string s;
  int output;
  std::cout << "Enter the string:" << std::endl;
  // feeding input string from the user
  getline(std::cin, s);
  // passing input string to read method in the class Reader
  output = readObj.read(s);
  // passing vector words, which contains all the words in the
  // input string to uniquewordscount() method to calculate unique words
  auto count = readObj.uniquewordscount(readObj.words);
  std::cout << "Number of words in the input string: " << output << std::endl;
  std::cout << "Number unique words in the string: " << count << std::endl;
  return 0;
}