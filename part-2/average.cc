// Emmanuel Aguilar
// emmagu637@csu.fullerton.edu
// @eman-701
// Partners: @varun-yedavilli

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  // XTODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  float sum{0};
  int counter{0};
  for (std::string& arg_temp : arguments) {
    if (counter < 1) {
      counter++;
      continue;
    }
    float temp{std::stof(arg_temp)};
    sum += temp;
  }
  // XTODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  float average{sum / static_cast<float>(arguments.size() - 1)};
  // XTODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  std::cout << "average = " << average;
  // XTODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
