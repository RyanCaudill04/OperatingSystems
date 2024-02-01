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
    string temp;
    for (int i = 1; i < argc; ++i) {
      arguments.push_back(temp.assign(argv[i]));
    }
    // Iterate through vector until all multiplication
    // and division is done
    while (int i = mdOperators(arguments)) {
      mdOperate(arguments, i);
    }
    // Iterate through vector until all addition
    // and subtraction is done
    while (int i = asOperators(arguments)) {
      asOperate(arguments, i);
    }
    // Print out the answer
    for (int i = 0; i < arguments.size(); ++i) {
      cout << arguments[i] << endl;
    }
    return 0;
}
