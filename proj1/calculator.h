// Copyright Ryan Caudill 2024
#ifndef _PROJ1_CALCULATOR_H_
#define _PROJ1_CALCULATOR_H_
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::stod;

// Function that parses through the vector and returns
// the index of the first multiplication or division
// operator. Returns 0 if none are found
int mdOperators(std::vector<string> &args);
// Function that parses through the vector and returns
// the index of the first multiplication or division
// operator. Returns 0 if none are found
int asOperators(std::vector<string> &args);
// Helper function to convert any number into a char*
void convertToCharArr(double number, char* buffer);
// Operates on mult/div operator. Sets the operator to
// the result of the operation between the numbers before
// and after the operator and then removes those two from
// the vector
void mdOperate(std::vector<string> &args, int index);
// Operates on add/sub operator. Sets the operator to
// the result of the operation between the numbers before
// and after the operator and then removes those two from
// the vector
void asOperate(std::vector<string> &args, int index);

#endif  // _PROJ1_CALCULATOR_H_
