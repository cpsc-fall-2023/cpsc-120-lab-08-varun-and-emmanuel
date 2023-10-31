// Emmanuel Aguilar
// emmagu637@csu.fullerton.edu
// @eman-701
// Partners: @varun-yedavilli

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }
  // XTODO: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
  // XTODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::cout << "Your order:\n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment;
  // XTODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.

  return 0;
}