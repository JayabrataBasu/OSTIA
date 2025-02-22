// src/core/CommandProcessor.cpp
#include "CommandProcessor.hpp"
#include <sstream>

namespace OSTIA {

CommandProcessor::CommandResult
CommandProcessor::parse(const std::string &input) {
  CommandResult result;
  std::istringstream iss(input);
  iss >> result.command;
  std::getline(iss, result.arguments);
  return result;
}

} // namespace OSTIA
// src/core/OSTIA.cpp