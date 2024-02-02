// Copyright Ryan Caudill 2024
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "calculator.h"

using std::string;
using std::cout;
using std::endl;
using std::stod;

int mult_div_index(std::vector<string> &args) {
  for (int i = 1; i < args.size(); i = i + 2) {
    if (args[i][0] == '/' || args[i][0] == 'x') return i;
  }
  return 0;
}

int add_sub_index(std::vector<string> &args) {
  for (int i = 1; i < args.size(); i = i + 2) {
    if (args[i][0] == '+' || args[i][0] == '-') return i;
  }
  return 0;
}

void mult_div_operate(std::vector<string> &args, int index) {
  double value;
  char op = args[index][0];
  if (op == '/') {
    value = stod(args[index-1]) / stod(args[index+1]);
  } else {
    value = stod(args[index-1]) * stod(args[index+1]);
  }
  std::string temp = std::to_string(value);
  args[index] = temp;
  args.erase(args.begin() + index + 1);
  args.erase(args.begin() + index - 1);
}

void add_sub_operate(std::vector<string> &args, int index) {
  double value;
  char op = args[index][0];
  if (op == '-') {
    value = stod(args[index-1]) - stod(args[index+1]);
  } else {
    value = stod(args[index-1]) + stod(args[index+1]);
  }
  std::string temp = std::to_string(value);
  args[index] = temp;
  args.erase(args.begin() + index + 1);
  args.erase(args.begin() + index - 1);
}
