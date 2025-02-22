// src/main.cpp
#include "core/OSTIA.hpp"
#include <iostream>
#include <string>


int main() {
  OSTIA ostia;
  std::string input;

  // Test commands
  std::vector<std::string> testCommands = {
      "set state test_key test_value",       "get state test_key",
      "set state another_key another_value", "get state another_key",
      "get state non_existent_key",          "invalid command"};

  for (const auto &command : testCommands) {
    std::cout << "OSTIA> " << command << std::endl;
    try {
      std::string output = ostia.processCommand(command);
      std::cout << "Output: " << output << std::endl;
    } catch (const std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
  }

  // Interactive mode
  while (true) {
    std::cout << "OSTIA> ";
    std::getline(std::cin, input);

    if (input == "exit") {
      break;
    }

    try {
      std::string output = ostia.processCommand(input);
      std::cout << output << std::endl;
    } catch (const std::exception &e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }

  return 0;
}
