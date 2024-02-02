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
int mult_div_index(std::vector<string> args);
// Function that parses through the vector and returns
// the index of the first multiplication or division
// operator. Returns 0 if none are found
int add_sub_index(std::vector<string> args);
// Operates on mult/div operator. Sets the operator to
// the result of the operation between the numbers before
// and after the operator and then removes those two from
// the vector
void mult_div_operate(std::vector<string> &args, int index);
// Operates on add/sub operator. Sets the operator to
// the result of the operation between the numbers before
// and after the operator and then removes those two from
// the vector
void add_sub_operate(std::vector<string> &args, int index);

#endif  // _PROJ1_CALCULATOR_H_
