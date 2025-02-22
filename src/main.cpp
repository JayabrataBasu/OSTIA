#include "utils/Logger.hpp"
#include <iostream>

using namespace OSTIA::Utils;

int main() {
  Logger::info("Starting OSTIA...");

  try {
    Logger::debug("Initializing systems...");
    // Future initialization code will go here

    Logger::info("OSTIA is ready.");

    // Basic command loop
    std::string input;
    while (true) {
      std::cout << "\nOSTIA> ";
      std::getline(std::cin, input);

      if (input == "exit" || input == "quit") {
        Logger::info("Shutting down OSTIA...");
        break;
      }

      // Future command processing will go here
      Logger::debug("Received command: " + input);
    }

  } catch (const std::exception &e) {
    Logger::error("An error occurred: " + std::string(e.what()));
    return 1;
  }

  return 0;
}
