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

int main(int argc, char* argv[]) {
    // Make sure input is even amount of arguments
    // And the minimum amount needed to calculate something
    if (argc < 4 || argc % 2 != 0) {
      std::cerr << "Improper input" << std::endl;
      return 1;
    }
    // Create vector and assign all arguments other than
    // executable to the vector
    std::vector<string> arguments;
    for (int i = 1; i < argc; ++i) {
      arguments.emplace_back(argv[i]);
    }
    // Iterate through vector until all multiplication
    // and division is done
    while (int i = mult_div_index(arguments)) {
      mult_div_operate(arguments, i);
    }
    // Iterate through vector until all addition
    // and subtraction is done
    while (int i = add_sub_index(arguments)) {
      add_sub_operate(arguments, i);
    }
    // Make sure correct syntax was used at command line
    if (arguments.size() != 1) {
      cout << "Improper input" << endl;
      return 1;
    }
    // Print out the answer
    cout << arguments[0] << endl;
    return 0;
}
